/*
1647. Minimum Deletions to Make Character Frequencies Unique
https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/
*/
class Solution {
    public int minDeletions(String s) {
        
        List<Integer> arr = new ArrayList<>();
        int i;
        for(i=0; i<26; i++)
        {
            arr.add(i,0);
        }
        for(i=0; i<s.length(); i++)
        {
            char ch = s.charAt(i);
            int id = ch-'a';
         
           arr.add(id, arr.get(id)+1);
        }
        Collections.sort(arr, Collections.reverseOrder());
        int f= arr.get(0);
        int ans=0;
        for(Integer a: arr)
        {
            if(a>f)
            {
                if(f>0)
                ans+=(a-f);
            else
                ans+=a;
            }
        f=Math.min(f-1, a-1);
        }
        return ans;
    }
}
