bool isAnagram(string s, string t) {
	if (s.size() != t.size())
		return false;
	unordered_map<char, int> m;
	for (int i = 0; i < s.size(); i++)
	{
		m[s[i]]++;
		m[t[i]]--;
	}
	unordered_map<char, int>::iterator it=m.begin();
	while (it != m.end())
	{
		if (it->second != 0)
			return false;
		it++;
	}
	return true;
}
//map存字母次数
