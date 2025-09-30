bool isAnagram(char* s, char* t) {
    int len1 = strlen(s);
    int len2 = strlen(t);
    if (len1 != len2) {
        return false;
    }
    int count[256] = {0};  // ASCII characters frequency
    for (int i=0; i<len1; i++) {
        count[s[i]]++;
        count[t[i]]--;
    }
    for (int i=0; i<256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    return true;
}

