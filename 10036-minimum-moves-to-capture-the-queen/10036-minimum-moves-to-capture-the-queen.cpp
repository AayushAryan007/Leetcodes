// class Solution {
// public:
// //     bool isObstructed(int x1, int y1, int x2, int y2, int qx, int qy) {
// //         int dx = (x2 > x1) ? 1 : ((x2 < x1) ? -1 : 0);
// //         int dy = (y2 > y1) ? 1 : ((y2 < y1) ? -1 : 0);

// //         while (x1 != x2 || y1 != y2) {
// //             x1 += dx;
// //             y1 += dy;
// //             if (x1 == qx && y1 == qy) {
// //                 return true; // Piece obstructed by queen
// //             }
// //         }
// //         return false; // No obstruction found
// //     }

//     int minMovesToCaptureTheQueen(int a,int b,int c,int d, int e,int f) {
//         if ((a == e && c != e) || (b == f && d != f)) {
           
//                 return 1;
            
//         } else if (abs(c - e) == abs(f - d)) {
//              if(c>e and d>f and ){
                 
//              }
            
           
//                 return 1;
            
//         }
//         return 2;
// //            int rookDist = std::max(std::abs(rookX - queenX), std::abs(rookY - queenY)); 
// //     int bishopDist = (std::abs(bishopX - queenX) == std::abs(bishopY - queenY)) ? std::abs(bishopX - queenX) : std::numeric_limits<int>::max(); 

// //     if (rookDist == 0 || bishopDist == 0 || rookDist == 1 || bishopDist == 1) { 
// //         return 1; 
// //     } 

// //     if ((rookX + rookY) % 2 == (queenX + queenY) % 2) { 
// //         return std::min(rookDist, bishopDist); 
// //     } 

// //     return 2;
//     }
// };
class Solution {
public:
    int minMovesToCaptureTheQueen(int a, int b, int c, int d, int e, int f) {
        if (a == e) {   // queen lies on the path of rook
            if (c == a) {   // check if path is hindered by bishop
                if (b < f && b < d && d < f) return 2;
                if (b > f && b > d && d > f) return 2;
            }
            return 1;
        }
        if (b == f) {
            if (d == f) {
                if (a > e && a > c && c > e) return 2;
                if (a < e && a < c && c < e) return 2;
            }
            return 1;
        }
        if ((e-f) == (c-d)) {   // queen lies on the path of bishop
            if ((e-f) == (a-b)) { // check if path is hindered by rook
                if (c < e && c < a && a < e) return 2;
                if (c > e && c > a && a > e) return 2;
            }
            return 1;
        }
        if ((e+f) == (c+d)) {
            if ((a+b) == (e+f)) {
                if (c < e && c < a && a < e) return 2;
                if (c > e && c > a && a > e) return 2;
            }
            return 1;
        }
        return 2;
    }
};