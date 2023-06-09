class Solution {
  public:
    vector < int > decode(vector < int > & arr, int first) {
      vector < int > v;
      v.push_back(first);
      for (int i = 0; i < arr.size(); i++) {

        v.push_back(arr[i] ^ v[i]);

      }
      return v;
    }
};
