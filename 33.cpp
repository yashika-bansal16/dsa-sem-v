//reverse k-chunk
int main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    string result;
    for (int i = 0; i < n; i += k) {
        string segment = s.substr(i, k);
        if ((i / k) % 2 == 1) {
            reverse(segment.begin(), segment.end());
        }
        result += segment;
    }

    cout << result << endl;
    return 0;
}