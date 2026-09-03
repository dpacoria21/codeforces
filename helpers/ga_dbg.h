#pragma once

//* __int128_t printer
std::ostream& operator<<( std::ostream& dest, __int128_t value ) {
    std::ostream::sentry s(dest);
    if (s) {
        __uint128_t tmp = value < 0 ? -value : value;
        char buffer[128];
        char* d = std::end(buffer);

        do {
            -- d;
            *d = "0123456789"[tmp % 10];
            tmp /= 10;
        } while (tmp != 0);

        if(value < 0) {
            -- d;
            *d = '-';
        }

        int len = int(std::end(buffer) - d);
        if(dest.rdbuf()->sputn(d, len) != len) {
            dest.setstate(std::ios_base::badbit);
        }
    }
    return dest;
}

const string PAIR_LEFT = "(";
const string PAIR_RIGHT = ")";
const string IT_LEFT = "[";
const string IT_RIGHT = "]";
const string PAIR_SEP = ", ";
const string IT_SEP = ", ";

// benq - print any container + pair
template <typename T, typename = void>
struct is_iterable: false_type {};

template <typename T>
struct is_iterable<T,
    void_t<decltype(begin(declval<T const &>())),
    decltype(end(declval<T const &>()))>
>: true_type {};

template <typename T>
typename enable_if<
    is_iterable<T>::value &&
    !is_convertible<typename decay<T>::type, string>::value, ostream&
>::type operator<<(ostream &cout, T const &v);

template <typename A, typename B>
ostream &operator<<(ostream &cout, pair<A, B> const &p) {
    return cout << PAIR_LEFT << p.f << PAIR_SEP << p.s << PAIR_RIGHT;
}

template <typename T>
typename enable_if<
    is_iterable<T>::value &&
    !is_convertible<typename decay<T>::type, string>::value, ostream&
>::type operator<<(ostream &cout, T const &v) {
    cout << IT_LEFT;
    auto it = begin(v);
    const auto last = end(v);
    while (it != last) {
        cout << *it;
        if(++it != last) {
            cout << IT_SEP;
        }
    }
    return cout << IT_RIGHT;
}

template <typename T>
void debug(string s, T const &x) {
    cerr << "\033[1;34m" << s << "\033[0;32m = \033[35m" << x << "\033[0m\n";
}

template <typename T, typename... Args>
void debug(string s, T const &x, Args const &...args) {
    for (int i = 0, b = 0; i < (int)s.size(); i++)
        if (s[i] == '(' || s[i] == '{') {
            b++;
        } else if (s[i] == ')' || s[i] == '}') {
            b--;
        } else if (s[i] == ',' && b == 0) {
            cerr << "\033[1;34m" << s.substr(0, i) << "\033[0;32m = \033[35m" << x << "\033[31m | ";
            debug(s.substr(s.find_first_not_of(' ', i + 1)), args...);
            break;
        }
}

const bool isDebugging = true;

#define MACRO(code) do {code} while (false)
#define dbg(...) MACRO(cerr << "Line(" << __LINE__ << "): "; debug(#__VA_ARGS__, __VA_ARGS__);)
#define chk(...) if (!(__VA_ARGS__)) cerr << "\033[41m" << "Line(" << __LINE__ << ") -> function(" \
 << __FUNCTION__  << ") -> CHK FAILED: (" << #__VA_ARGS__ << ")" << "\033[0m" << "\n", exit(0);
#define RAYA MACRO(cerr << "\033[101m" << "================================" << "\033[0m" << endl;)

const auto beg_time = std::chrono::high_resolution_clock::now();
double time_elapsed() {
    return chrono::duration<double>(std::chrono::high_resolution_clock::now() - beg_time).count();
}
