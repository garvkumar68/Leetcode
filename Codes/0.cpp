// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

// static const bool Booster = [](){
//     std::ios_base::sync_with_stdio(false);
//     std::cin.tie(nullptr);
//     std::cout.tie(nullptr);
//     return true;
// }();

// inline bool is_digit(char c) {
//     return c >= '0' && c <= '9';
// }

// std::array<int, 100000> nums;
// void parse_input_and_solve(std::ofstream& out, const std::string& s) {
//     const int N = s.size();
//     int left = 0;
//     int idx = 0;
//     while (left < N) {
//         if (!is_digit(s[left])) {
//             ++left;
//             continue;
//         }
//         int right = left;
//         int value = 0;
//         while (right < N && is_digit(s[right])) {
//             value = value * 10 + (s[right] - '0');
//             ++right;
//         }
//         left = right;
//         nums[idx] = value;
//         ++idx;
//     }
//     out << "[";
//     const int M = idx;
//     for (int i = 0; i < M; ++i) {
//         if (i != M / 2) {
//             out << nums[i];
//             if (i < M - 1 && M > 2) {
//                 out << ",";
//             }
//         }
//     }
//     out << "]\n";
// }

// bool Solve = [](){
//     std::ofstream out("user.out");
//     for (std::string s; std::getline(std::cin, s);) {
//         parse_input_and_solve(out, s);
//     }
//     out.flush();
//     exit(0);
//     return true;
// }();


// #pragma GCC optimize ("Ofast")
// #pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")
// #pragma GCC optimize ("-ffloat-store")
// #pragma GCC optimize ("O3", "unroll-loops")
// static auto _ = [] () {ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();


// static auto _ = []() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     return true;
// }();

// #pragma -O3

static auto _ = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return true;
}();
#pragma optimize("O3")
