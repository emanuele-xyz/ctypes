#pragma once

// Fixed size signed integers

typedef char      i8;
typedef short     i16;
typedef long      i32;
typedef long long i64;

// Fixed size booleans

typedef i8  b8;
typedef i16 b16;
typedef i32 b32;
typedef i64 b64;

// Fixed size unsigned integers

typedef unsigned char      u8;
typedef unsigned short     u16;
typedef unsigned long      u32;
typedef unsigned long long u64;

// Fixed size floating points

typedef float  f32;
typedef double f64;

// NOTE: Check whether size is correct

static_assert(sizeof(i8)  == 1, "sizeof(i8)  == 1");
static_assert(sizeof(i16) == 2, "sizeof(i16) == 2");
static_assert(sizeof(i32) == 4, "sizeof(i32) == 4");
static_assert(sizeof(i64) == 8, "sizeof(i64) == 8");

static_assert(sizeof(b8)  == 1, "sizeof(b8)  == 1");
static_assert(sizeof(b16) == 2, "sizeof(b16) == 2");
static_assert(sizeof(b32) == 4, "sizeof(b32) == 4");
static_assert(sizeof(b64) == 8, "sizeof(b64) == 8");

static_assert(sizeof(u8)  == 1, "sizeof(u8)  == 1");
static_assert(sizeof(u16) == 2, "sizeof(u16) == 2");
static_assert(sizeof(u32) == 4, "sizeof(u32) == 4");
static_assert(sizeof(u64) == 8, "sizeof(u64) == 8");

static_assert(sizeof(f32) == 4, "sizeof(f32) == 4");
static_assert(sizeof(f64) == 8, "sizeof(f64) == 8");
