class ValidPalindrome {
    public:
        static bool isPalindrome(string s) {
            if (s == "")
                return true;
            string filtered = "";
            for (int i = 0; i < s.length(); i++) {
                if (isalnum(s[i])) {
                    filtered += tolower(s[i]);
                }
            }
            for (int i = 0; i < filtered.length() / 2; i++) {
                if (filtered[i] != filtered[filtered.length() - i - 1])
                    return false;
            }
            return true;
        }
};