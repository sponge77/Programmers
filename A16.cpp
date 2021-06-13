import java.util.*;
class Solution {
    public int min(int a,int b){
        return a>b? b:a;
}
    public int solution(String str1, String str2) {
        int answer = 0;
        int count=0;
        //리스트 클래스 교집합 구하기
        List<String> arrayList1 = new ArrayList<String>();
        List<String> arrayList2 = new ArrayList<String>();
        List<String> arrayList3 = new ArrayList<String>();
        //다중집합 multiset 만들기
        //교집합(count)
        //합집합(count)
        int cntcnt1=0, cntcnt2=0;
        int k=0,k2=0,k3=0;
        
        String[] arr1 = new String[str1.length()-1];
        for(int i=0;i<str1.length()-1;i++){
            boolean check1=false, check2=false;
            int index1 = str1.charAt(i);
            int index2 = str1.charAt(i+1);
            if((index1>=65 && index1<=90) || (index1>=97 && index1<=122)) check1=true;
            if((index2>=65 && index2<=90 )|| (index2>=97 && index2<=122)) check2=true;
            //if(str1.charAt(i)<'a' || str1.charAt(i)>'z' ||
              //str1.charAt(i+1)<'a' || str1.charAt(i+1) > 'z') continue;
            if(check1==true && check2==true)
            arr1[i] = (Character.toString(str1.charAt(i)) + 
                        Character.toString(str1.charAt(i+1)));
            else {
                cntcnt1++;
                continue;
            }
        }  
        String[] arr2 = new String[str2.length()-1];
        for(int i=0;i<str2.length()-1;i++){
            boolean check1=false,check2=false;
            int index1 = str2.charAt(i);
            int index2 = str2.charAt(i+1);
            if((index1>=65 && index1<=90) || (index1>=97 && index1<=122)) check1=true;
            if((index2>=65 && index2<=90) ||(index2>=97 && index2<=122)) check2=true;
            if(check1==true && check2==true)
            arr2[i] = (Character.toString(str2.charAt(i))+
                      Character.toString(str2.charAt(i+1))); //문자통일
            else{
                cntcnt2++;
                continue;
            } 
        }
        //System.out.println(cntcnt1+" "+cntcnt2);
        //교집합 구하기
        for(int i=0;i<arr1.length;i++)
        System.out.println(arr1[i]);
        System.out.println(" ");
        for(int i=0;i<arr2.length;i++)
        System.out.println(arr2[i]);
        for(int i=0;i<arr1.length;i++){
            if(arr1[i]!=null)
            arrayList1.add(arr1[i].toUpperCase());
        }
        for(int j=0;j<arr2.length ;j++){
            if(arr2[j] != null)
            arrayList2.add(arr2[j].toUpperCase());
        }
        System.out.println(arrayList1);
        System.out.println(arrayList2);
        //교집합
        arrayList3 = arrayList1;
        
        arrayList1.retainAll(arrayList2);
        //arrayList2.retainAll(arrayList1);
        arrayList2.retainAll(arrayList3);
        
        k = arrayList1.size();
        k2 = arrayList2.size();
        k3 = min(k,k2);
        System.out.println(arrayList1.toString());
        
        int cnt1 = arr1.length-cntcnt1-k3;
        int cnt2 = arr2.length-cntcnt2-k3;
        
        double sum = cnt1+cnt2+k3;
        if(k3==0 && sum==0) return 65536;
       System.out.println("k3="+k3+"sum"+sum);
        sum = (double)k3/sum;
        //sum = (double)count/sum;
        sum*=65536;
        //int result=0;
        //result = (int)sum;
        //System.out.println(arr1[1]);
        return (int)sum;
    }
}
