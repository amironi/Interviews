

person findFamous(Array<person> people)
{
  int currect = 0;
  int next = 1;

  while (currect <= N-1) 
  {
    while(next < N-1)
    {
      if( know(people[(current + next) % N], people[current]) )
      {
        next++;      
      }
      else
      {
        currect += next;

        break;
      }
    }
  }

   for(int i = 0; i<n -1; i++)
     if( know(people[current], people[(current+i)%N]))
       return person();

  return people[current];
}

person maybeFamous(person i, person j) { 
  return know(i,j) ? j : i; 
}

person findFamous(List<person> people)
{

	if(people.size() == 0) 
		return person();

    person famous = people.front();
    
    for(auto& i : people)
      famous = maybeFamous(i, famous );

    for(auto& i : people){
      if( 
        maybeFamous(i, famous) != famous || 
        maybeFamous(famous, i) != famous )
          return person(); 
    }

    return famous;
}

person findFamous(List<person> people, person f){

  if(people.size() == 0)
    return f;
    
    person p1 = people.front();
    people.pop_first();
    
    if( know(p1, f)) 
      return findFamous(people,f);
     
    return findFamous(people,p1);
}

person findFamous(List<person> people){
    person p1 = people.front();
    
    people.pop_first();
    
    person candidate = findFamous(people,p1);
    
    int c = 0;
    
    for(auto i : people)
      if( know(i, candidate)) 
        c++;
      else
        return person();
        
    return c == people.size() ? candidate : person();
}
   

[p0, p1, p2, ...., pN]

bool know(i, j) returns true if I knows J, false otherwise (this is not symetrical) O(1)

person findFamous(List<person> people): 

famous is: 
  1) Everyone else knows the famous person AND
  2) The famous person doesn't know anyone else

Expected solution is O(n)

know(i, j) -> true -> i knows j -> i cannot be famous, j can be famous  
              false -> i does not know j -> i can be famous, j cannot be famous

candidate = person();

if(know(candidate,i) && (!know(i,candidate)
  candidate = i;