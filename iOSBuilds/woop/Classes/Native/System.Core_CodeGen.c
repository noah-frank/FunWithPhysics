#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000009 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000A TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x0000000D System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000F System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000010 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000012 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000013 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000014 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000015 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000016 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000017 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000018 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000019 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001B System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001C System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001D System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000001E System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000020 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000021 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000022 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000023 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000026 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000027 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000028 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000002B System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000002C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000002F System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000030 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000031 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000034 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000035 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000036 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000038 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000039 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003A System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000003B System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003E System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000003F System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000040 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000041 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000042 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000043 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000044 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000045 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000046 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000047 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000048 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000049 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000004A System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000004B System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000004C System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000004D System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000004E System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000004F System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000050 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000051 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000052 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000053 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000054 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000055 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000056 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000057 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000058 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000059 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000005A System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000005B System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000005C System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000005D System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x0000005E System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x0000005F T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000060 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000061 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[97] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[97] = 
{
	3291,
	3444,
	3444,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[34] = 
{
	{ 0x02000004, { 61, 4 } },
	{ 0x02000005, { 65, 9 } },
	{ 0x02000006, { 76, 7 } },
	{ 0x02000007, { 85, 10 } },
	{ 0x02000008, { 97, 11 } },
	{ 0x02000009, { 111, 9 } },
	{ 0x0200000A, { 123, 12 } },
	{ 0x0200000B, { 138, 1 } },
	{ 0x0200000C, { 139, 2 } },
	{ 0x0200000D, { 141, 2 } },
	{ 0x0200000E, { 143, 4 } },
	{ 0x0200000F, { 147, 21 } },
	{ 0x02000011, { 168, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 3 } },
	{ 0x06000009, { 33, 4 } },
	{ 0x0600000A, { 37, 4 } },
	{ 0x0600000B, { 41, 3 } },
	{ 0x0600000C, { 44, 1 } },
	{ 0x0600000D, { 45, 1 } },
	{ 0x0600000E, { 46, 3 } },
	{ 0x0600000F, { 49, 3 } },
	{ 0x06000010, { 52, 2 } },
	{ 0x06000011, { 54, 2 } },
	{ 0x06000012, { 56, 5 } },
	{ 0x06000022, { 74, 2 } },
	{ 0x06000027, { 83, 2 } },
	{ 0x0600002C, { 95, 2 } },
	{ 0x06000032, { 108, 3 } },
	{ 0x06000037, { 120, 3 } },
	{ 0x0600003C, { 135, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[170] = 
{
	{ (Il2CppRGCTXDataType)2, 1799 },
	{ (Il2CppRGCTXDataType)3, 6315 },
	{ (Il2CppRGCTXDataType)2, 2800 },
	{ (Il2CppRGCTXDataType)2, 2352 },
	{ (Il2CppRGCTXDataType)3, 10698 },
	{ (Il2CppRGCTXDataType)2, 1872 },
	{ (Il2CppRGCTXDataType)2, 2359 },
	{ (Il2CppRGCTXDataType)3, 10733 },
	{ (Il2CppRGCTXDataType)2, 2354 },
	{ (Il2CppRGCTXDataType)3, 10710 },
	{ (Il2CppRGCTXDataType)2, 1800 },
	{ (Il2CppRGCTXDataType)3, 6316 },
	{ (Il2CppRGCTXDataType)2, 2821 },
	{ (Il2CppRGCTXDataType)2, 2364 },
	{ (Il2CppRGCTXDataType)3, 10748 },
	{ (Il2CppRGCTXDataType)2, 1885 },
	{ (Il2CppRGCTXDataType)2, 2372 },
	{ (Il2CppRGCTXDataType)3, 10912 },
	{ (Il2CppRGCTXDataType)2, 2368 },
	{ (Il2CppRGCTXDataType)3, 10823 },
	{ (Il2CppRGCTXDataType)2, 637 },
	{ (Il2CppRGCTXDataType)3, 31 },
	{ (Il2CppRGCTXDataType)3, 32 },
	{ (Il2CppRGCTXDataType)2, 1064 },
	{ (Il2CppRGCTXDataType)3, 4182 },
	{ (Il2CppRGCTXDataType)2, 639 },
	{ (Il2CppRGCTXDataType)3, 43 },
	{ (Il2CppRGCTXDataType)3, 44 },
	{ (Il2CppRGCTXDataType)2, 1074 },
	{ (Il2CppRGCTXDataType)3, 4187 },
	{ (Il2CppRGCTXDataType)2, 753 },
	{ (Il2CppRGCTXDataType)3, 765 },
	{ (Il2CppRGCTXDataType)3, 766 },
	{ (Il2CppRGCTXDataType)2, 1586 },
	{ (Il2CppRGCTXDataType)2, 1196 },
	{ (Il2CppRGCTXDataType)2, 1289 },
	{ (Il2CppRGCTXDataType)2, 1385 },
	{ (Il2CppRGCTXDataType)2, 1587 },
	{ (Il2CppRGCTXDataType)2, 1197 },
	{ (Il2CppRGCTXDataType)2, 1290 },
	{ (Il2CppRGCTXDataType)2, 1386 },
	{ (Il2CppRGCTXDataType)2, 1291 },
	{ (Il2CppRGCTXDataType)2, 1387 },
	{ (Il2CppRGCTXDataType)3, 4183 },
	{ (Il2CppRGCTXDataType)2, 934 },
	{ (Il2CppRGCTXDataType)2, 1282 },
	{ (Il2CppRGCTXDataType)2, 1283 },
	{ (Il2CppRGCTXDataType)2, 1383 },
	{ (Il2CppRGCTXDataType)3, 4181 },
	{ (Il2CppRGCTXDataType)2, 1281 },
	{ (Il2CppRGCTXDataType)2, 1382 },
	{ (Il2CppRGCTXDataType)3, 4180 },
	{ (Il2CppRGCTXDataType)2, 1195 },
	{ (Il2CppRGCTXDataType)2, 1288 },
	{ (Il2CppRGCTXDataType)2, 1194 },
	{ (Il2CppRGCTXDataType)3, 13035 },
	{ (Il2CppRGCTXDataType)3, 3683 },
	{ (Il2CppRGCTXDataType)2, 982 },
	{ (Il2CppRGCTXDataType)2, 1285 },
	{ (Il2CppRGCTXDataType)2, 1384 },
	{ (Il2CppRGCTXDataType)2, 1470 },
	{ (Il2CppRGCTXDataType)3, 6317 },
	{ (Il2CppRGCTXDataType)3, 6319 },
	{ (Il2CppRGCTXDataType)2, 468 },
	{ (Il2CppRGCTXDataType)3, 6318 },
	{ (Il2CppRGCTXDataType)3, 6327 },
	{ (Il2CppRGCTXDataType)2, 1803 },
	{ (Il2CppRGCTXDataType)2, 2355 },
	{ (Il2CppRGCTXDataType)3, 10711 },
	{ (Il2CppRGCTXDataType)3, 6328 },
	{ (Il2CppRGCTXDataType)2, 1327 },
	{ (Il2CppRGCTXDataType)2, 1412 },
	{ (Il2CppRGCTXDataType)3, 4193 },
	{ (Il2CppRGCTXDataType)3, 13001 },
	{ (Il2CppRGCTXDataType)2, 2369 },
	{ (Il2CppRGCTXDataType)3, 10824 },
	{ (Il2CppRGCTXDataType)3, 6320 },
	{ (Il2CppRGCTXDataType)2, 1802 },
	{ (Il2CppRGCTXDataType)2, 2353 },
	{ (Il2CppRGCTXDataType)3, 10699 },
	{ (Il2CppRGCTXDataType)3, 4192 },
	{ (Il2CppRGCTXDataType)3, 6321 },
	{ (Il2CppRGCTXDataType)3, 13000 },
	{ (Il2CppRGCTXDataType)2, 2365 },
	{ (Il2CppRGCTXDataType)3, 10749 },
	{ (Il2CppRGCTXDataType)3, 6334 },
	{ (Il2CppRGCTXDataType)2, 1804 },
	{ (Il2CppRGCTXDataType)2, 2360 },
	{ (Il2CppRGCTXDataType)3, 10734 },
	{ (Il2CppRGCTXDataType)3, 6823 },
	{ (Il2CppRGCTXDataType)3, 2882 },
	{ (Il2CppRGCTXDataType)3, 4194 },
	{ (Il2CppRGCTXDataType)3, 2881 },
	{ (Il2CppRGCTXDataType)3, 6335 },
	{ (Il2CppRGCTXDataType)3, 13002 },
	{ (Il2CppRGCTXDataType)2, 2373 },
	{ (Il2CppRGCTXDataType)3, 10913 },
	{ (Il2CppRGCTXDataType)3, 6348 },
	{ (Il2CppRGCTXDataType)2, 1806 },
	{ (Il2CppRGCTXDataType)2, 2371 },
	{ (Il2CppRGCTXDataType)3, 10826 },
	{ (Il2CppRGCTXDataType)3, 6349 },
	{ (Il2CppRGCTXDataType)2, 1330 },
	{ (Il2CppRGCTXDataType)2, 1415 },
	{ (Il2CppRGCTXDataType)3, 4198 },
	{ (Il2CppRGCTXDataType)3, 4197 },
	{ (Il2CppRGCTXDataType)2, 2357 },
	{ (Il2CppRGCTXDataType)3, 10713 },
	{ (Il2CppRGCTXDataType)3, 13007 },
	{ (Il2CppRGCTXDataType)2, 2370 },
	{ (Il2CppRGCTXDataType)3, 10825 },
	{ (Il2CppRGCTXDataType)3, 6341 },
	{ (Il2CppRGCTXDataType)2, 1805 },
	{ (Il2CppRGCTXDataType)2, 2367 },
	{ (Il2CppRGCTXDataType)3, 10751 },
	{ (Il2CppRGCTXDataType)3, 4196 },
	{ (Il2CppRGCTXDataType)3, 4195 },
	{ (Il2CppRGCTXDataType)3, 6342 },
	{ (Il2CppRGCTXDataType)2, 2356 },
	{ (Il2CppRGCTXDataType)3, 10712 },
	{ (Il2CppRGCTXDataType)3, 13006 },
	{ (Il2CppRGCTXDataType)2, 2366 },
	{ (Il2CppRGCTXDataType)3, 10750 },
	{ (Il2CppRGCTXDataType)3, 6355 },
	{ (Il2CppRGCTXDataType)2, 1807 },
	{ (Il2CppRGCTXDataType)2, 2375 },
	{ (Il2CppRGCTXDataType)3, 10915 },
	{ (Il2CppRGCTXDataType)3, 6824 },
	{ (Il2CppRGCTXDataType)3, 2884 },
	{ (Il2CppRGCTXDataType)3, 4200 },
	{ (Il2CppRGCTXDataType)3, 4199 },
	{ (Il2CppRGCTXDataType)3, 2883 },
	{ (Il2CppRGCTXDataType)3, 6356 },
	{ (Il2CppRGCTXDataType)2, 2358 },
	{ (Il2CppRGCTXDataType)3, 10714 },
	{ (Il2CppRGCTXDataType)3, 13008 },
	{ (Il2CppRGCTXDataType)2, 2374 },
	{ (Il2CppRGCTXDataType)3, 10914 },
	{ (Il2CppRGCTXDataType)3, 4190 },
	{ (Il2CppRGCTXDataType)3, 4191 },
	{ (Il2CppRGCTXDataType)3, 4204 },
	{ (Il2CppRGCTXDataType)2, 2828 },
	{ (Il2CppRGCTXDataType)2, 935 },
	{ (Il2CppRGCTXDataType)2, 1199 },
	{ (Il2CppRGCTXDataType)2, 2824 },
	{ (Il2CppRGCTXDataType)2, 1306 },
	{ (Il2CppRGCTXDataType)2, 1392 },
	{ (Il2CppRGCTXDataType)3, 3701 },
	{ (Il2CppRGCTXDataType)2, 991 },
	{ (Il2CppRGCTXDataType)3, 4564 },
	{ (Il2CppRGCTXDataType)3, 4565 },
	{ (Il2CppRGCTXDataType)3, 4570 },
	{ (Il2CppRGCTXDataType)2, 1478 },
	{ (Il2CppRGCTXDataType)3, 4567 },
	{ (Il2CppRGCTXDataType)3, 13554 },
	{ (Il2CppRGCTXDataType)2, 954 },
	{ (Il2CppRGCTXDataType)3, 2873 },
	{ (Il2CppRGCTXDataType)1, 1263 },
	{ (Il2CppRGCTXDataType)2, 2832 },
	{ (Il2CppRGCTXDataType)3, 4566 },
	{ (Il2CppRGCTXDataType)1, 2832 },
	{ (Il2CppRGCTXDataType)1, 1478 },
	{ (Il2CppRGCTXDataType)2, 2881 },
	{ (Il2CppRGCTXDataType)2, 2832 },
	{ (Il2CppRGCTXDataType)3, 4571 },
	{ (Il2CppRGCTXDataType)3, 4569 },
	{ (Il2CppRGCTXDataType)3, 4568 },
	{ (Il2CppRGCTXDataType)2, 363 },
	{ (Il2CppRGCTXDataType)3, 2885 },
	{ (Il2CppRGCTXDataType)2, 477 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	97,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	34,
	s_rgctxIndices,
	170,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
