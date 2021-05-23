const GridPattern = (m,n,memo={}) =>{
  
  const key = m + ','+n;
  if(key in memo)
    return memo[key];
  if(m==0 || n==0)
    return 0;
  if(m==1 && n==1)
    return 1;
    memo[n] = GridPattern(m-1,n,memo) + GridPattern(m, n-1, memo);
    
    return memo[n];
}
console.log(GridPattern(2,2));
console.log(GridPattern(3,2));

console.log(GridPattern(3,3));

console.log(GridPattern(2,3));
