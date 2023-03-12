// Checking Palindrome 

void execute(){
	string s;
	cin >> s;

	bool ans = 1;

	int i = 0;
	int j = s.size()-1;
	while(i <= j){
		if(s[i] != s[j]){
			ans = 0;
			break;
		}

		i++;
		j--;
	}

	cout << ans << endl;
}