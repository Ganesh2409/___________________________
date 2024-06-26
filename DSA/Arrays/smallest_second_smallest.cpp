//  vector<int> v(n);
//  for(int i=0;i<n;i++){
//      v[i] = a[i];
//  }
//  sort(v.begin(),v.end());
 
//  int smallest  = v[0];
//  int ssmallest = -1;
//  for(int i=1;i<n;i++){
//      if(smallest  < v[i]){
//          ssmallest = v[i];  // --> O(N log N + N)
//          break;
//      }
     
//  }
//  if(ssmallest == -1)
//     return {-1};
// else{
//     return {smallest,ssmallest};
// }


// Apporach -2 