#pragma once
template<typename T>
T max(T first, T last) {
	if (first < last) {
		return last;
	}
	return first;
}
template<typename T>
T min(T first, T last) {
	if (first > last) {
		return last;
	}
	return first;
}