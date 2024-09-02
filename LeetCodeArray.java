import java.util.*;

public class LeetCodeArray {
    // 1) buy and sell stock
    public static int maxProfit(int[] prices) {
        int mnp = Integer.MAX_VALUE;
        int mxp = 0;

        for (int price : prices) {
            mnp = Math.min(mnp, price); // price ochi revi jove
            mxp = Math.max(mxp, price - mnp);
        }
        return mxp;
    }

    // 2) transposes the matrix
    public static int[][] transpose(int[][] matrix) {
        int m = matrix.length;
        int n = matrix[0].length;
        int[][] transposedMatrix = new int[n][m];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                transposedMatrix[j][i] = matrix[i][j];
            }
        }
        return transposedMatrix;
    }

    // 3) 2 sum
    public static int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> Mp = new HashMap<>();
        int n = nums.length;
        for (int i = 0; i < n; i++) {
            Mp.put(nums[i], i);
        }

        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (Mp.containsKey(complement) && Mp.get(complement) != i) {
                return new int[] { i, Mp.get(complement) };
            }
        }
        return new int[] {};
    }

    // 4) Merge and remove duplicates
    public static int[] mergeAndRemoveDuplicates(int[] arr1, int[] arr2) {
        Set<Integer> set = new TreeSet<>();

        for (int num : arr1) {
            set.add(num);
        }
        for (int num : arr2) {
            set.add(num);
        }

        int[] result = new int[set.size()];
        int i = 0;
        for (int num : set) {
            result[i++] = num;
        }
        return result;
    }

    // temp 4
    public static int[] temp4(int[] a) {
        Set<Integer> set = new TreeSet<>();

        for (int i : a) {
            set.add(i);
        }

        int[] result = new int[a.length];
        int i = 0;
        for (int j : set) {
            result[i++] = j;
        }

        return result;
    }

    // 5) Remove Duplicates sorted arr Simple
    public static int removeDuplicates(int[] nums) {
        if (nums.length == 0) {
            return 0;
        }

        int i = 0; // 0 1 2 3
        for (int j = 1; j < nums.length; j++) {
            if (nums[i] != nums[j]) {
                nums[++i] = nums[j];
            }
        }

        return i + 1;
    }

    // 6) Remove duplicate from sorted array using List
    public static List<Integer> removeDuplicatesList(int[] nums) {
        // in main if int[] -> int[] result = new int[i+1];
        List<Integer> result = new ArrayList<>();
        if (nums.length == 0) {
            return result;
        }

        result.add(nums[0]);
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] != nums[i - 1]) {
                result.add(nums[i]);
            }
        }
        return result;
    }

    // 7) 2 sorted array no median find krvno
    public static double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int[] mergedArray = mergeAndRemoveDuplicates(nums1, nums2);
        int n = mergedArray.length;

        if (n % 2 == 1) {
            return mergedArray[n / 2]; // Odd Length
        } else {
            return (mergedArray[(n - 1) / 2] + mergedArray[n / 2]) / 2.0;
            // Even Length
        }
    }

    // 8) sum of all elements in an array except current one
    public static int[] sumofallindicesexcept(int[] nums) {
        int n = nums.length;
        int[] result = new int[n];

        int totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }

        // For each element, subtract the current element from the total sum
        for (int i = 0; i < n; i++) {
            result[i] = totalSum - nums[i];
        }
        return result;
    }

    // 9) Array ma 0 1 2 - color sort vado
    public static int[] colorsort(int[] ar) {
        int n = ar.length;
        int c0 = 0, c1 = 0, c2 = 0;
        int[] result = new int[n];

        for (int i = 0; i < n; i++) {
            if (ar[i] == 0) {
                c0++;
            }
            if (ar[i] == 1) {
                c1++;
            }
            if (ar[i] == 2) {
                c2++;
            }
        }
        System.out.println(c0);
        System.out.println(c1);
        System.out.println(c2);

        for (int i = 0; i < c0; i++) {
            result[i] = 0;
        }
        for (int i = c0; i < c0 + c1; i++) {
            result[i] = 1;
        }
        for (int i = c0 + c1; i < n; i++) {
            result[i] = 2;
        }
        return result;
    }

    // 10) max consecutive ones
    public static int countConsecutiveOnes(int[] arr) {
        if (arr == null || arr.length == 0) {
            return 0;
        }

        int maxCount = 0;
        int currentCount = 0;
        for (int num : arr) {
            if (num == 1) {
                currentCount++;
                maxCount = Math.max(maxCount, currentCount);
            } else {
                currentCount = 0;
            }
        }
        return maxCount;
    }

    // 11) most occuring element n/3
    public static List<Integer> majorityElement(int[] nums) {
        int n = nums.length;
        HashMap<Integer, Integer> countMap = new HashMap<>();

        // Count occurrences of each element
        for (int num : nums) {
            countMap.put(num, countMap.getOrDefault(num, 0) + 1);
        }

        // Find elements with count greater than n/3
        List<Integer> result = new ArrayList<>();
        int threshold = n / 3;
        for (int num : countMap.keySet()) {
            if (countMap.get(num) > threshold) {
                result.add(num);
            }
        }

        return result;
    }

    // 12) most frequent element
    public static int mostFrequentElement(int[] nums) {
        HashMap<Integer, Integer> countMap = new HashMap<>();

        for (int num : nums) {
            countMap.put(num, countMap.getOrDefault(num, 0) + 1);
        }

        // Find the num with maxi count
        int maxCount = 0;
        int majorityElement = 0;
        for (int num : countMap.keySet()) { // keyset gives all the num means key (1,2,3)
            if (countMap.get(num) > maxCount) {
                maxCount = countMap.get(num);
                majorityElement = num;
            }
        }
        return majorityElement;
    }

    // 13) duplicate remove list
    public static List<Integer> duplicateremovelist(List<Integer> nums) {
        HashSet<Integer> unk = new HashSet<>();
        List<Integer> result = new ArrayList<>();

        for (int num : nums) {
            if (unk.add(num)) {
                result.add(num);
            }
        }
        return result;
    }

    // 14) Switch Case
    public static String determineSwitch(int n) {
        if (n % 2 == 0 && n % 3 != 0) {
            return "Switch 1 is on";
        } else if (n % 3 == 0 && n % 2 != 0) {
            return "Switch 2 is on";
        } else if (n % 2 == 0 && n % 3 == 0) {
            return "Switch 1 and Switch 2 are on";
        } else {
            return "Switch 3 is on";
        }
    }

    // 15) Reverse Array
    public static void reverseArray(int[] a, int s, int e) {
        int i = s, j = e, t = 0;
        while (i < j) {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
            i++;
            j--;
        }
    }

    // 16) Left Rotate By k Number
    public static void LeftRotateByK(int[] a, int k) {
        int n = a.length;
        k = k % n;

        reverseArray(a, 0, k - 1);
        reverseArray(a, k, n - 1);
        reverseArray(a, 0, n - 1);
        for (int arr : a) {
            System.out.print(arr + " ");
        }
    }

    // 17) Right Rotate By k Number
    public static void RightRotateByK(int[] a, int k) {
        int n = a.length;
        k = k % n;
        reverseArray(a, 0, n - 1);
        reverseArray(a, 0, k - 1);
        reverseArray(a, k, n - 1);
        for (int arr : a) {
            System.out.print(arr + " ");
        }
    }

    // 18) SubArray - { -1, 4, 7, 2 }
    public static void SubArray1(int[] nums) {
        System.out.println("Length : " + nums.length);
        for (int i = 0; i < nums.length; i++) {
            for (int j = i; j < nums.length; j++) {
                for (int k = i; k <= j; k++) {
                    System.out.print(nums[k] + " ");
                }
                System.out.println();
            }
            System.out.println();
        }
    }

    // 17) Max Sum Of SubArray
    public static void SumOfSubArray(int[] a) {
        int maxSum = 0;
        System.out.println("Length : " + a.length);
        for (int i = 0; i < a.length; i++) {
            for (int j = i; j < a.length; j++) {
                int sum = 0;
                for (int k = i; k <= j; k++) {
                    sum += a[k];
                }
                maxSum = Math.max(maxSum, sum);
            }
        }
        System.out.println("Max Sum is : " + maxSum);
    }

    // 18) finding all unique triplets in the array that sum up to zero
    public static List<List<Integer>> findTriplets(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        int n = nums.length;

        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        List<Integer> triplet = Arrays.asList(nums[i], nums[j], nums[k]);
                        // Sort the triplet to avoid Duplicates
                        Collections.sort(triplet);
                        if (!result.contains(triplet)) {
                            result.add(triplet);
                        }
                    }
                }
            }
        }
        return result;
    }

    // 19) Number ne divide krvnu without operater (use bitwise Operater)
    public static int divide(int d, int dr) {
        if (d == dr) { // like 3/3 = 1
            return 1;
        }

        boolean sign = true; // for positive

        if (d <= 0 && dr > 0)
            sign = false; // for negative -22
        else if (d > 0 && dr < 0)
            sign = false; // for negative -3

        long n = Math.abs(d);  // 22
        long a = Math.abs(dr); // 3 absolute value

        long ans = 0;

        while (n >= a) {
            int c = 0;

            // 3 * 2^3 avse 24 thy so 22 karta nanu thy jay
            // 3 * 2^2 ave je 12 thse so ans ma 2^2 nakhsu
            while (n >= (a << c + 1)) {
                c += 1;
            }
            ans += (1 << c); // so (1) 2^0 = 1 (2) 2^1 = 2 (3) 2^2 = 4 -> Total Ans = 7
            n -= (a << c); // 12 6 3 24 isn't valid
        }

        if (ans == (1 << 31) && sign) {
            return Integer.MAX_VALUE;
        }
        if (ans == (1 << 31) && !sign) {
            return Integer.MIN_VALUE;
        }
        // Apply the correct sign to the quotient
        return sign ? (int) ans : -(int) ans;
    }

    // 20) Moves Zero to End
    public static void moveZeroes(int[] nums) {
        int n = nums.length;
        int c = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[c] = nums[i];
                c++;
            }
        }
        for (int i = c; i < n; i++) {
            nums[i] = 0;
        }
    }

    // 21) without 0 product of all element except the current one
    public static int[] productExceptSelf1(int[] nums) {
        int n = nums.length;
        int[] result = new int[n];

        int totalSum = 1;
        for (int num : nums) {
            totalSum *= num;
        }

        for (int i = 0; i < n; i++) {
            result[i] = totalSum / nums[i];
        }
        return result;

    }

    // 21) product of all element except the current one
    public static int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] output = new int[n];
        if (n < 1)
            return output;

        int product = 1;
        for (int i = 0; i < n; ++i) {
            product *= nums[i]; // Left Value
            output[i] = product; // 1 2 6 24
        }

        // Traverse from right and update output array
        product = 1; // Right Value
        for (int i = n - 1; i > 0; --i) {
            output[i] = output[i - 1] * product; // n[i-1] * 1
            product *= nums[i];
        }
        output[0] = product;
        return output;
    }

    public static void main(String[] args) {
        int[] input = { 1, 2, 3, 4 };
        int[] output = productExceptSelf(input);
        for (int i = 0; i < output.length; i++) {
            System.out.print(output[i] + " ");
        }

        // int arr[] = { 2, 0, 4, 6, 0, 8, 10 }; // count=4,i=6 [2,4,6,8,10]
        // int n = arr.length;
        // moveZeroes(arr);
        // for (int i = 0; i < n; i++) {
        // System.out.print(arr[i] + " ");
        // }

        // System.out.println(divide(11, 4));

        // int[] nums1 = { 1, 3 };
        // int[] nums2 = { 2, 5, 4 };
        // System.out.println("Median is: " + findMedianSortedArrays(nums1, nums2));

        // int[] ar11 = { 0, 1, 2, 0, 1, 2, 1, 0, 2, 1 };
        // System.out.print(Arrays.toString(colorsort(ar11)));

        // int[] prices1 = {7, 1, 5, 3, 6, 4};
        // System.out.println("Max Profit: " + maxProfit(prices1)); // Output: 5

        // // Example 1
        // int[][] matrix1 = {
        // { 1, 2, 3 },
        // { 4, 5, 6 },
        // { 7, 8, 9 }
        // };
        // int[][] result1 = transpose(matrix1);

        // for (int[] row : result1) {
        // for (int val : row) {
        // System.out.print(val + " ");
        // }
        // System.out.println();
        // }

        // int[] nums = { 2, 7, 10, -1 };
        // int target = 9;

        // // 2 Sum
        // int[] result = twoSum(nums, target);

        // if (result.length > 0) {
        // System.out.println("Indices: " + result[0] + ", " + result[1]);
        // } else {
        // System.out.println("No solution found");
        // }

        // // Merge And Remove Duplicates Method
        // int[] arr1 = { 1, 2, 4, 5, 6 };
        // int[] arr2 = { 3, 6, 7, 8, 9 };

        // // Call the merge method and print the result
        // int[] result1 = mergeAndRemoveDuplicates(arr1, arr2);
        // System.out.print(Arrays.toString(result1));

        // // sum of all indices except the current
        // int[] input = {2, 4, 6};
        // int[] output = sumofallindicesexcept(input);
        // for (int i = 0; i < output.length; i++) {
        // System.out.println(output[i]);
        // }
        // System.out.println(Arrays.toString(output));

        // List<Integer> numbers = List.of(0, 1, 3, 3, 1, 5);
        // List<Integer> result = duplicateremovelist(numbers);
        // System.out.println("Original List: " + numbers);
        // System.out.println("New List: " + result);

        // int[] n3 = { -1, 0, 1, 2, -1, -4 };
        // List<List<Integer>> triplets = findTriplets(n3);
        // System.out.println(triplets);

        // int[] n4 = { 1, 2, 3, 4, 5, 6, 7 };
        // int[] n5 = { -1, 4, 7, 2 };
        // reverseArray(n4, 0, 3);
        // LeftRotateByK(n4, 3);
        // RightRotateByK(n4, 3);

        // SubArray1(n23);
        // SumOfSubArray(n5);

        // int[] nums = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };

        // int newLength = removeDuplicates(nums);
        // System.out.println("Array with unique elements:");
        // for (int i = 0; i < newLength; i++) {
        // System.out.print(nums[i] + " ");
        // }

        // List<Integer> uniqueNums = removeDuplicatesList(nums);
        // System.out.println("List of unique elements:");
        // for (int num : uniqueNums) {
        // System.out.print(num + " ");
        // }

        // System.out.println(divide(10, 3)); // Output: 3

    }
}