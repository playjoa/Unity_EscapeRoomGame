#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000E TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType(System.Collections.IEnumerable)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfTypeIterator(System.Collections.IEnumerable)
// 0x00000012 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000014 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000015 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000016 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000018 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001A System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x0000001B System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000001C System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000001D TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000001E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000001F System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000020 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000021 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000022 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000023 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000025 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000026 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000027 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000029 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000002A System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000002B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002D System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000002F System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000033 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000034 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000035 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000036 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000037 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000038 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000039 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000003F System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000042 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000043 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000044 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000046 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000047 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000048 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000049 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000004A TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000004B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000004C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000004D System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000004E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000004F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000050 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000051 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000052 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000053 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000054 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000055 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000056 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000057 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000058 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000059 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000005A System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x0000005B System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x0000005C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000005D System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005E System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::.ctor(System.Int32)
// 0x0000005F System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.IDisposable.Dispose()
// 0x00000060 System.Boolean System.Linq.Enumerable/<OfTypeIterator>d__97`1::MoveNext()
// 0x00000061 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>m__Finally1()
// 0x00000062 TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000063 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.Reset()
// 0x00000064 System.Object System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.get_Current()
// 0x00000065 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000066 System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000067 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000068 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000069 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x0000006A System.Void System.Linq.Set`1::Resize()
// 0x0000006B System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x0000006C System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000006D System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000006E System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006F System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000070 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000071 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000072 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000073 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000074 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000075 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000076 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000077 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000078 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000079 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x0000007A System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x0000007B System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x0000007C System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000007D System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000007E System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x0000007F System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000080 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000081 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000082 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000083 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000084 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000085 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000086 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000087 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000088 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000089 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000008A System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000008B System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000008C System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000008D System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000008E System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008F System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000090 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000091 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000092 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000093 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000094 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000095 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000096 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000097 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000098 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000099 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000009A System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x0000009B System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x0000009C T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x0000009D System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x0000009E System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[158] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
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
static const int32_t s_InvokerIndices[158] = 
{
	3560,
	3560,
	3689,
	3689,
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
static const Il2CppTokenRangePair s_rgctxIndices[50] = 
{
	{ 0x02000004, { 75, 4 } },
	{ 0x02000005, { 79, 9 } },
	{ 0x02000006, { 90, 7 } },
	{ 0x02000007, { 99, 10 } },
	{ 0x02000008, { 111, 11 } },
	{ 0x02000009, { 125, 9 } },
	{ 0x0200000A, { 137, 12 } },
	{ 0x0200000B, { 152, 1 } },
	{ 0x0200000C, { 153, 2 } },
	{ 0x0200000D, { 155, 12 } },
	{ 0x0200000E, { 167, 11 } },
	{ 0x0200000F, { 178, 6 } },
	{ 0x02000011, { 184, 8 } },
	{ 0x02000013, { 192, 3 } },
	{ 0x02000014, { 195, 5 } },
	{ 0x02000015, { 200, 7 } },
	{ 0x02000016, { 207, 3 } },
	{ 0x02000017, { 210, 7 } },
	{ 0x02000018, { 217, 4 } },
	{ 0x02000019, { 221, 21 } },
	{ 0x0200001B, { 242, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 2 } },
	{ 0x0600000C, { 35, 1 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 3 } },
	{ 0x0600000F, { 41, 2 } },
	{ 0x06000010, { 43, 1 } },
	{ 0x06000011, { 44, 2 } },
	{ 0x06000012, { 46, 4 } },
	{ 0x06000013, { 50, 3 } },
	{ 0x06000014, { 53, 3 } },
	{ 0x06000015, { 56, 3 } },
	{ 0x06000016, { 59, 1 } },
	{ 0x06000017, { 60, 3 } },
	{ 0x06000018, { 63, 2 } },
	{ 0x06000019, { 65, 3 } },
	{ 0x0600001A, { 68, 2 } },
	{ 0x0600001B, { 70, 5 } },
	{ 0x0600002B, { 88, 2 } },
	{ 0x06000030, { 97, 2 } },
	{ 0x06000035, { 109, 2 } },
	{ 0x0600003B, { 122, 3 } },
	{ 0x06000040, { 134, 3 } },
	{ 0x06000045, { 149, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[244] = 
{
	{ (Il2CppRGCTXDataType)2, 1801 },
	{ (Il2CppRGCTXDataType)3, 7782 },
	{ (Il2CppRGCTXDataType)2, 3105 },
	{ (Il2CppRGCTXDataType)2, 2610 },
	{ (Il2CppRGCTXDataType)3, 14844 },
	{ (Il2CppRGCTXDataType)2, 1908 },
	{ (Il2CppRGCTXDataType)2, 2617 },
	{ (Il2CppRGCTXDataType)3, 14883 },
	{ (Il2CppRGCTXDataType)2, 2612 },
	{ (Il2CppRGCTXDataType)3, 14851 },
	{ (Il2CppRGCTXDataType)2, 1802 },
	{ (Il2CppRGCTXDataType)3, 7783 },
	{ (Il2CppRGCTXDataType)2, 3122 },
	{ (Il2CppRGCTXDataType)2, 2619 },
	{ (Il2CppRGCTXDataType)3, 14890 },
	{ (Il2CppRGCTXDataType)2, 1925 },
	{ (Il2CppRGCTXDataType)2, 2627 },
	{ (Il2CppRGCTXDataType)3, 14947 },
	{ (Il2CppRGCTXDataType)2, 2623 },
	{ (Il2CppRGCTXDataType)3, 14916 },
	{ (Il2CppRGCTXDataType)2, 645 },
	{ (Il2CppRGCTXDataType)3, 51 },
	{ (Il2CppRGCTXDataType)3, 52 },
	{ (Il2CppRGCTXDataType)2, 1175 },
	{ (Il2CppRGCTXDataType)3, 6024 },
	{ (Il2CppRGCTXDataType)2, 646 },
	{ (Il2CppRGCTXDataType)3, 63 },
	{ (Il2CppRGCTXDataType)3, 64 },
	{ (Il2CppRGCTXDataType)2, 1184 },
	{ (Il2CppRGCTXDataType)3, 6028 },
	{ (Il2CppRGCTXDataType)3, 16861 },
	{ (Il2CppRGCTXDataType)2, 655 },
	{ (Il2CppRGCTXDataType)3, 128 },
	{ (Il2CppRGCTXDataType)2, 2278 },
	{ (Il2CppRGCTXDataType)3, 11620 },
	{ (Il2CppRGCTXDataType)3, 16835 },
	{ (Il2CppRGCTXDataType)2, 649 },
	{ (Il2CppRGCTXDataType)3, 74 },
	{ (Il2CppRGCTXDataType)2, 783 },
	{ (Il2CppRGCTXDataType)3, 988 },
	{ (Il2CppRGCTXDataType)3, 989 },
	{ (Il2CppRGCTXDataType)2, 1909 },
	{ (Il2CppRGCTXDataType)3, 8333 },
	{ (Il2CppRGCTXDataType)3, 16846 },
	{ (Il2CppRGCTXDataType)2, 653 },
	{ (Il2CppRGCTXDataType)3, 114 },
	{ (Il2CppRGCTXDataType)2, 1733 },
	{ (Il2CppRGCTXDataType)2, 1299 },
	{ (Il2CppRGCTXDataType)2, 1406 },
	{ (Il2CppRGCTXDataType)2, 1498 },
	{ (Il2CppRGCTXDataType)2, 1407 },
	{ (Il2CppRGCTXDataType)2, 1499 },
	{ (Il2CppRGCTXDataType)3, 6026 },
	{ (Il2CppRGCTXDataType)2, 1408 },
	{ (Il2CppRGCTXDataType)2, 1500 },
	{ (Il2CppRGCTXDataType)3, 6027 },
	{ (Il2CppRGCTXDataType)2, 1732 },
	{ (Il2CppRGCTXDataType)2, 1405 },
	{ (Il2CppRGCTXDataType)2, 1497 },
	{ (Il2CppRGCTXDataType)2, 1393 },
	{ (Il2CppRGCTXDataType)2, 1394 },
	{ (Il2CppRGCTXDataType)2, 1494 },
	{ (Il2CppRGCTXDataType)3, 6023 },
	{ (Il2CppRGCTXDataType)2, 1298 },
	{ (Il2CppRGCTXDataType)2, 1403 },
	{ (Il2CppRGCTXDataType)2, 1404 },
	{ (Il2CppRGCTXDataType)2, 1496 },
	{ (Il2CppRGCTXDataType)3, 6025 },
	{ (Il2CppRGCTXDataType)2, 1297 },
	{ (Il2CppRGCTXDataType)3, 16821 },
	{ (Il2CppRGCTXDataType)3, 5426 },
	{ (Il2CppRGCTXDataType)2, 1060 },
	{ (Il2CppRGCTXDataType)2, 1396 },
	{ (Il2CppRGCTXDataType)2, 1495 },
	{ (Il2CppRGCTXDataType)2, 1572 },
	{ (Il2CppRGCTXDataType)3, 7784 },
	{ (Il2CppRGCTXDataType)3, 7786 },
	{ (Il2CppRGCTXDataType)2, 450 },
	{ (Il2CppRGCTXDataType)3, 7785 },
	{ (Il2CppRGCTXDataType)3, 7794 },
	{ (Il2CppRGCTXDataType)2, 1805 },
	{ (Il2CppRGCTXDataType)2, 2613 },
	{ (Il2CppRGCTXDataType)3, 14852 },
	{ (Il2CppRGCTXDataType)3, 7795 },
	{ (Il2CppRGCTXDataType)2, 1451 },
	{ (Il2CppRGCTXDataType)2, 1525 },
	{ (Il2CppRGCTXDataType)3, 6035 },
	{ (Il2CppRGCTXDataType)3, 16807 },
	{ (Il2CppRGCTXDataType)2, 2624 },
	{ (Il2CppRGCTXDataType)3, 14917 },
	{ (Il2CppRGCTXDataType)3, 7787 },
	{ (Il2CppRGCTXDataType)2, 1804 },
	{ (Il2CppRGCTXDataType)2, 2611 },
	{ (Il2CppRGCTXDataType)3, 14845 },
	{ (Il2CppRGCTXDataType)3, 6034 },
	{ (Il2CppRGCTXDataType)3, 7788 },
	{ (Il2CppRGCTXDataType)3, 16806 },
	{ (Il2CppRGCTXDataType)2, 2620 },
	{ (Il2CppRGCTXDataType)3, 14891 },
	{ (Il2CppRGCTXDataType)3, 7801 },
	{ (Il2CppRGCTXDataType)2, 1806 },
	{ (Il2CppRGCTXDataType)2, 2618 },
	{ (Il2CppRGCTXDataType)3, 14884 },
	{ (Il2CppRGCTXDataType)3, 8379 },
	{ (Il2CppRGCTXDataType)3, 4626 },
	{ (Il2CppRGCTXDataType)3, 6036 },
	{ (Il2CppRGCTXDataType)3, 4625 },
	{ (Il2CppRGCTXDataType)3, 7802 },
	{ (Il2CppRGCTXDataType)3, 16808 },
	{ (Il2CppRGCTXDataType)2, 2628 },
	{ (Il2CppRGCTXDataType)3, 14948 },
	{ (Il2CppRGCTXDataType)3, 7815 },
	{ (Il2CppRGCTXDataType)2, 1808 },
	{ (Il2CppRGCTXDataType)2, 2626 },
	{ (Il2CppRGCTXDataType)3, 14919 },
	{ (Il2CppRGCTXDataType)3, 7816 },
	{ (Il2CppRGCTXDataType)2, 1454 },
	{ (Il2CppRGCTXDataType)2, 1528 },
	{ (Il2CppRGCTXDataType)3, 6040 },
	{ (Il2CppRGCTXDataType)3, 6039 },
	{ (Il2CppRGCTXDataType)2, 2615 },
	{ (Il2CppRGCTXDataType)3, 14854 },
	{ (Il2CppRGCTXDataType)3, 16815 },
	{ (Il2CppRGCTXDataType)2, 2625 },
	{ (Il2CppRGCTXDataType)3, 14918 },
	{ (Il2CppRGCTXDataType)3, 7808 },
	{ (Il2CppRGCTXDataType)2, 1807 },
	{ (Il2CppRGCTXDataType)2, 2622 },
	{ (Il2CppRGCTXDataType)3, 14893 },
	{ (Il2CppRGCTXDataType)3, 6038 },
	{ (Il2CppRGCTXDataType)3, 6037 },
	{ (Il2CppRGCTXDataType)3, 7809 },
	{ (Il2CppRGCTXDataType)2, 2614 },
	{ (Il2CppRGCTXDataType)3, 14853 },
	{ (Il2CppRGCTXDataType)3, 16814 },
	{ (Il2CppRGCTXDataType)2, 2621 },
	{ (Il2CppRGCTXDataType)3, 14892 },
	{ (Il2CppRGCTXDataType)3, 7822 },
	{ (Il2CppRGCTXDataType)2, 1809 },
	{ (Il2CppRGCTXDataType)2, 2630 },
	{ (Il2CppRGCTXDataType)3, 14950 },
	{ (Il2CppRGCTXDataType)3, 8380 },
	{ (Il2CppRGCTXDataType)3, 4628 },
	{ (Il2CppRGCTXDataType)3, 6042 },
	{ (Il2CppRGCTXDataType)3, 6041 },
	{ (Il2CppRGCTXDataType)3, 4627 },
	{ (Il2CppRGCTXDataType)3, 7823 },
	{ (Il2CppRGCTXDataType)2, 2616 },
	{ (Il2CppRGCTXDataType)3, 14855 },
	{ (Il2CppRGCTXDataType)3, 16816 },
	{ (Il2CppRGCTXDataType)2, 2629 },
	{ (Il2CppRGCTXDataType)3, 14949 },
	{ (Il2CppRGCTXDataType)3, 6031 },
	{ (Il2CppRGCTXDataType)3, 6032 },
	{ (Il2CppRGCTXDataType)3, 6043 },
	{ (Il2CppRGCTXDataType)3, 131 },
	{ (Il2CppRGCTXDataType)3, 130 },
	{ (Il2CppRGCTXDataType)2, 1446 },
	{ (Il2CppRGCTXDataType)2, 1521 },
	{ (Il2CppRGCTXDataType)3, 6033 },
	{ (Il2CppRGCTXDataType)2, 1461 },
	{ (Il2CppRGCTXDataType)2, 1540 },
	{ (Il2CppRGCTXDataType)3, 133 },
	{ (Il2CppRGCTXDataType)2, 582 },
	{ (Il2CppRGCTXDataType)2, 656 },
	{ (Il2CppRGCTXDataType)3, 129 },
	{ (Il2CppRGCTXDataType)3, 132 },
	{ (Il2CppRGCTXDataType)3, 76 },
	{ (Il2CppRGCTXDataType)2, 2375 },
	{ (Il2CppRGCTXDataType)3, 12961 },
	{ (Il2CppRGCTXDataType)2, 1442 },
	{ (Il2CppRGCTXDataType)2, 1518 },
	{ (Il2CppRGCTXDataType)3, 12962 },
	{ (Il2CppRGCTXDataType)3, 78 },
	{ (Il2CppRGCTXDataType)2, 445 },
	{ (Il2CppRGCTXDataType)2, 650 },
	{ (Il2CppRGCTXDataType)3, 75 },
	{ (Il2CppRGCTXDataType)3, 77 },
	{ (Il2CppRGCTXDataType)3, 116 },
	{ (Il2CppRGCTXDataType)2, 447 },
	{ (Il2CppRGCTXDataType)3, 118 },
	{ (Il2CppRGCTXDataType)2, 654 },
	{ (Il2CppRGCTXDataType)3, 115 },
	{ (Il2CppRGCTXDataType)3, 117 },
	{ (Il2CppRGCTXDataType)3, 5462 },
	{ (Il2CppRGCTXDataType)2, 1075 },
	{ (Il2CppRGCTXDataType)2, 3213 },
	{ (Il2CppRGCTXDataType)3, 12958 },
	{ (Il2CppRGCTXDataType)3, 12959 },
	{ (Il2CppRGCTXDataType)2, 1586 },
	{ (Il2CppRGCTXDataType)3, 12960 },
	{ (Il2CppRGCTXDataType)2, 381 },
	{ (Il2CppRGCTXDataType)2, 651 },
	{ (Il2CppRGCTXDataType)3, 88 },
	{ (Il2CppRGCTXDataType)3, 11610 },
	{ (Il2CppRGCTXDataType)2, 784 },
	{ (Il2CppRGCTXDataType)3, 990 },
	{ (Il2CppRGCTXDataType)3, 11615 },
	{ (Il2CppRGCTXDataType)3, 4602 },
	{ (Il2CppRGCTXDataType)2, 480 },
	{ (Il2CppRGCTXDataType)3, 11611 },
	{ (Il2CppRGCTXDataType)2, 2275 },
	{ (Il2CppRGCTXDataType)3, 1402 },
	{ (Il2CppRGCTXDataType)2, 803 },
	{ (Il2CppRGCTXDataType)2, 1035 },
	{ (Il2CppRGCTXDataType)3, 4608 },
	{ (Il2CppRGCTXDataType)3, 11612 },
	{ (Il2CppRGCTXDataType)3, 4597 },
	{ (Il2CppRGCTXDataType)3, 4598 },
	{ (Il2CppRGCTXDataType)3, 4596 },
	{ (Il2CppRGCTXDataType)3, 4599 },
	{ (Il2CppRGCTXDataType)2, 1031 },
	{ (Il2CppRGCTXDataType)2, 3171 },
	{ (Il2CppRGCTXDataType)3, 6030 },
	{ (Il2CppRGCTXDataType)3, 4601 },
	{ (Il2CppRGCTXDataType)2, 1375 },
	{ (Il2CppRGCTXDataType)3, 4600 },
	{ (Il2CppRGCTXDataType)2, 1300 },
	{ (Il2CppRGCTXDataType)2, 3126 },
	{ (Il2CppRGCTXDataType)2, 1421 },
	{ (Il2CppRGCTXDataType)2, 1501 },
	{ (Il2CppRGCTXDataType)3, 5445 },
	{ (Il2CppRGCTXDataType)2, 1069 },
	{ (Il2CppRGCTXDataType)3, 6626 },
	{ (Il2CppRGCTXDataType)3, 6627 },
	{ (Il2CppRGCTXDataType)3, 6632 },
	{ (Il2CppRGCTXDataType)2, 1581 },
	{ (Il2CppRGCTXDataType)3, 6629 },
	{ (Il2CppRGCTXDataType)3, 17172 },
	{ (Il2CppRGCTXDataType)2, 1037 },
	{ (Il2CppRGCTXDataType)3, 4619 },
	{ (Il2CppRGCTXDataType)1, 1372 },
	{ (Il2CppRGCTXDataType)2, 3136 },
	{ (Il2CppRGCTXDataType)3, 6628 },
	{ (Il2CppRGCTXDataType)1, 3136 },
	{ (Il2CppRGCTXDataType)1, 1581 },
	{ (Il2CppRGCTXDataType)2, 3211 },
	{ (Il2CppRGCTXDataType)2, 3136 },
	{ (Il2CppRGCTXDataType)3, 6633 },
	{ (Il2CppRGCTXDataType)3, 6631 },
	{ (Il2CppRGCTXDataType)3, 6630 },
	{ (Il2CppRGCTXDataType)2, 315 },
	{ (Il2CppRGCTXDataType)3, 4629 },
	{ (Il2CppRGCTXDataType)2, 460 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	158,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	50,
	s_rgctxIndices,
	244,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
