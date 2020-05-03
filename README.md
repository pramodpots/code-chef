# code-chef

I have decided that I will start competative programing and I have choosen codechef for it. 
What ever questions I can solve I will push them here.

(I take care that i only push my solutions once the contest is over)

## Practice
[code-chef-easy-practice-sorted-by-successful-submission](https://www.codechef.com/problems/easy/?sort_by=SuccessfulSubmission&sorting_order=desc)


## Awesome C++ / STL talks (I have watched)
[Algorithm Intuition 2019 (Conor Hoekstra)](https://www.youtube.com/watch?v=M1lNNFwxUVI)

[Better Algorithm Intuition - Conor Hoekstra @code_report - Meeting C++ 2019](https://www.youtube.com/watch?v=M1lNNFwxUVI)

[GoingNative 2013 C++ Seasoning (Sean Parent)](https://youtu.be/TSZzvo4htTQ) (Watched only STL part)

### STL algorithms
1. sort [O(n log(n))]
2. stable_sort [O(n log(n))] // keeps the relative order
3. binary_search [O(log(n))] //returns true/false
4. lower_bound [O(log(n))] // first item equal or greater than
5. upper_bound [O(log(n))] // first item greater than 
6. reverse [O(n)]
7. reverse_copy [O(n)]
8. rotate [O(n)] // rotate(first, middle, last) -> middle will become first 
9. rotate_copy [O(n)] // take extra iterator to where to copy (same in reverse_copy)
10. next_permutation [O(n/2)] // permutes the container and returns true, if no permutation available returns false
11. prev_permutation [O(n/2)] // same as next
12. all_of [O(n)]
13. any_of [O(n)]
14. none_of [O(n)] // 12, 13, 14 work same, take range and return true or false depending on predicated passed.
15. partial_sum [O(n)] // default plus<>()
16. iota [O(n)] // fill ups the container with increasing values
17. set_union [O(n)]
18. set_intersection [O(n)] 
19. set_difference [O(n)]
20. set_symmetric_difference [O(n)] // nice // back_inserter for 17, 18, 19, 20
21. adjacent_find [O(n)] // usefull default impl but very useful by overloading the predicate with lambdas or other stl predicate (greater, less)
22. count [O(n)]
23. count_if [O(n)] // takes pred/lambda to overload detault eg. count odd/even nums etc
24. partition [O(n)] // takes pred if pred return true moves those elements to front. 
25. stable_partition [O(n)] // same as 24 only keeps relative positions of elements intact
26. remove_if [O(n)] // use with erase, can have undefined behaviour otherwise
27. generate [O(n)] // prefer this over _n
28. generate_n [O(n)]
29. min // val
30. max // val
31. minmax // pair of vals
32. min_element // iterator to val
33. max_element // same as 32
34. minmax_element [O(n)] - for 29-34 // pair of iterator // also use c++17 binding for simplicity
35. unique [O(n)]
36. unique_copy [O(n)]
37. accumulate [O(n)]
38. reduce [O(n)]


### Extra Stuff
[Algorithm Intution Table](CheatSheet/The STL Algorithm Cheat Sheet v0.0.pdf)
