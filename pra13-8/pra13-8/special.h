#pragma once
#define IS_LOWER_CASE(a) (((a) >= 'a' && (a) <= 'z') ? 1 : 0)
#define IS_UPPER_CASE(a) (((a) >= 'A' && (a) <= 'Z') ? 1 : 0)
#define IS_ALPHABETIC(a) (IS_LOWER_CASE(a) || IS_UPPER_CASE(a))
#define IS_DIGIT(a) (((a) >= '0' && (a) <= '9') ? 1 : 0)
#define IS_SECIAL(a) (IS_ALPHABETIC(a) || IS_DIGIT(a))