void execute(){
	vector<int> nums = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};

	map<char, int> mp;
	for (int i = 0; i < nums.size(); i++){
    	mp['a' + i] = nums[i];
    }
    mp.insert(make_pair(' ', 0));

	string s;
	getline(cin, s);

	debug(s)

	for(int i=0; i<s.size(); i++){
		cout << mp[s[i]] << " ";
	}
	cout << endl;
}