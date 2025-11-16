#pragma once

#include <iostream>
#include <cstdint>
#include <numeric>
#include <type_traits>
#include <stdexcept>
namespace JMath_Primitive_Numerals {


#pragma region JaRatio

	//Replace integral_Type with datatype specified at compile time
	template<typename intType>
	struct JaRatio {
		static_assert(std::is_integral_v<integral_type>, "invalid type for JaRatio; requires integral value");

	private: 

		integral_Type numerator;

		integral_Type denominator;

		
	
	public:
		using integral_Type = intType;

		constexpr JaRatio{ integral_Type numerator = 0,integral_Type denominator = 1 };

		jaRatio(integral_Type numer, integral_Type denom) {
			: numerator(numer), denominator(denom);

			if (denominator == 0) {throw std::invalid_argument("ERROR: Division By Zero");}
		}

		void normalize() {
			
		}


	};



#pragma endregion

#pragma region JaExpInt
	//Lightweight implimentation of an integer and its integer exponent, int64, int8_t
	struct JaMultiInt {
		//Implementation
		//Initializers
		//overload the operators
		//IO functions
		//Numeric Fucntions
	};
#pragma endregion

#pragma region JaFactInt64
	//Factored form of and integer as a vector of int64s
	struct JaFactInt64 {
		//Implementation
		//Initializers
		//overload the operators
		//IO functions
		//Numeric Fucntions
	};
#pragma endregion

#pragma region JaBigInt
	//Vector of int64s to treat as continued digits for boundless integers 
	struct JaBigInt {
		//Implementation
		//Initializers
		//overload the operators
		//IO functions
		//Numeric Fucntions
	};
#pragma endregion

#pragma region JaBigFloat
	//Has a mantissa, decimal(binary) point index, and exponent
	struct JaBigFloat {
		//Implementation
		//Initializers
		//overload the operators
		//IO functions
		//Numeric Fucntions
	};
#pragma endregion

}