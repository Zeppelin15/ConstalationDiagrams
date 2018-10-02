    //for reference do not include
    
    static const std::array<cmplx,8> PSK_8_B = 
    {{
        {0.92388,+0.38268},
        {0.38268,+0.92388},
        {-0.38268,+0.92388},
        {-0.92388,+0.38268},
        {-0.92388,-0.38268},
        {-0.38268,-0.92388},
        {0.38268,-0.92388},
        {0.92388,-0.38268}
    }};
    static const std::array<cmplx,8> PSK_8_G = 
    {{
        {0.92388,+0.38268},
        {0.38268,+0.92388},
        {-0.38268,+0.92388},
        {-0.92388,+0.38268},
        {-0.92388,-0.38268},
        {-0.38268,-0.92388},
        {0.38268,-0.92388},
        {0.92388,-0.38268}     
    }};

    static const std::array<cmplx,8> QAM_8_B_AVG = 
    {{
        {-1.2247+0.40825},
        {-1.2247-0.40825},
        {-0.40825+0.40825},
        {-0.40825-0.40825},
        {0.40825+0.40825},
        {0.40825-0.40825},
        {1.2247+0.40825},
        {1.2247-0.40825}
    }};
    static const std::array<cmplx,8> QAM_8_B_P = 
    {{
        {-0.94868,+0.31623},
        {-0.94868,-0.31623},
        {-0.31623,+0.31623},
        {-0.31623,-0.31623},
        {0.31623,+0.31623},
        {0.31623,-0.31623},
        {0.94868,+0.31623},
        {0.94868,-0.31623}
    }};
    static const std::array<cmplx,8> QAM_8_G_AVG = 
    {{
        {-1.2247,+0.40825},
        {-1.2247,-0.40825},
        {-0.40825,+0.40825},
        {-0.40825,-0.40825},
        {0.40825,+0.40825},
        {0.40825,-0.40825},
        {1.2247,+0.40825},
        {1.2247,-0.40825}
    }};
    static const std::array<cmplx,8> QAM_8_G_P = 
    {{
        {-0.94868,+0.31623},
        {-0.94868,-0.31623},
        {-0.31623,+0.31623},
        {-0.31623,-0.31623},
        {0.31623,+0.31623},
        {0.31623,-0.31623},
        {0.94868,+0.31623},
        {0.94868,-0.31623}
    }};
    static const std::array<cmplx,16> QAM_16_B_AVG = 
    {{
        {-0.94868,+0.94868},
        {-0.94868,+0.31623},
        {-0.94868,-0.31623},
        {-0.94868,-0.94868},
        {-0.31623,+0.94868},
        {-0.31623,+0.31623},
        {-0.31623,-0.31623},
        {-0.31623,-0.94868},
        {0.31623,+0.94868},
        {0.31623,+0.31623},
        {0.31623,-0.31623},
        {0.31623,-0.94868},
        {0.94868,+0.94868},
        {0.94868,+0.31623},
        {0.94868,-0.31623},
        {0.94868,-0.94868}
    }};
    static const std::array<cmplx,16> QAM_16_B_P = 
    {{
        {-0.70711,+0.70711},
        {-0.70711,+0.2357},
        {-0.70711,-0.2357},
        {-0.70711,-0.70711},
        {-0.2357,+0.70711},
        {-0.2357,+0.2357},
        {-0.2357,-0.2357},
        {-0.2357,-0.70711},
        {0.2357,+0.70711},
        {0.2357,+0.2357},
        {0.2357,-0.2357},
        {0.2357,-0.70711},
        {0.70711,+0.70711},
        {0.70711,+0.2357},
        {0.70711,-0.2357},
        {0.70711,-0.70711}
    }};
    static const std::array<cmplx,16> QAM_16_G_AVG = 
    {{
        {-0.94868,+0.94868},
        {-0.94868,+0.31623},
        {-0.94868,-0.31623},
        {-0.94868,-0.94868},
        {-0.31623,+0.94868},
        {-0.31623,+0.31623},
        {-0.31623,-0.31623},
        {-0.31623,-0.94868},
        {0.31623,+0.94868},
        {0.31623,+0.31623},
        {0.31623,-0.31623},
        {0.31623,-0.94868},
        {0.94868,+0.94868},
        {0.94868,+0.31623},
        {0.94868,-0.31623},
        {0.94868,-0.94868}
    }};
    static const std::array<cmplx,16> QAM_16_G_P = 
    {{
        {-0.70711,+0.70711},
        {-0.70711,+0.2357},
        {-0.70711,-0.2357},
        {-0.70711,-0.70711},
        {-0.2357,+0.70711},
        {-0.2357,+0.2357},
        {-0.2357,-0.2357},
        {-0.2357,-0.70711},
        {0.2357,+0.70711},
        {0.2357,+0.2357},
        {0.2357,-0.2357},
        {0.2357,-0.70711},
        {0.70711,+0.70711},
        {0.70711,+0.2357},
        {0.70711,-0.2357},
        {0.70711,-0.70711}
    }};
    static const std::array<cmplx,32> QAM_32_B_AVG = 
    {{
        {-0.67082,1.118},
        {-0.22361,1.118},
        {-0.22361,1.118},
        {-0.67082,1.118},
        {-1.118,0.67082},
        {-1.118,0.22361},
        {-1.118,0.22361},
        {-1.118,0.67082},
        {-0.67082,0.67082},
        {-0.67082,0.22361},
        {-0.67082,0.22361},
        {-0.67082,0.67082},
        {-0.22361,0.67082},
        {-0.22361,0.22361},
        {-0.22361,0.22361},
        {-0.22361,0.67082},
        {0.22361,0.67082},
        {0.22361,0.22361},
        {0.22361,0.22361},
        {0.22361,0.67082},
        {0.67082,0.67082},
        {0.67082,0.22361},
        {0.67082,0.22361},
        {0.67082,0.67082},
        {1.118,0.67082},
        {1.118,0.22361},
        {1.118,0.22361},
        {1.118,0.67082},
        {0.67082,1.118},
        {0.22361,1.118},
        {0.22361,1.118},
        {0.67082,1.118}
    }};
    static const std::array<cmplx,32> QAM_32_B_P = 
    {{
		{-0.5145,+0.85749},
		{-0.1715,+0.85749},
		{-0.1715,-0.85749},
		{-0.5145,-0.85749},
		{-0.85749,+0.5145},
		{-0.85749,+0.1715},
		{-0.85749,-0.1715},
		{-0.85749,-0.5145},
		{-0.5145,+0.5145},
		{-0.5145,+0.1715},
		{-0.5145,-0.1715},
		{-0.5145,-0.5145},
		{-0.1715,+0.5145},
		{-0.1715,+0.1715},
		{-0.1715,-0.1715},
		{-0.1715,-0.5145},
		{0.1715,+0.5145},
		{0.1715,+0.1715},
		{0.1715,-0.1715},
		{0.1715,-0.5145},
		{0.5145,+0.5145},
		{0.5145,+0.1715},
		{0.5145,-0.1715},
		{0.5145,-0.5145},
		{0.85749,+0.5145},
		{0.85749,+0.1715},
		{0.85749,-0.1715},
		{0.85749,-0.5145},
		{0.5145,+0.85749},
		{0.1715,+0.85749},
		{0.1715,-0.85749}
    }};
    static const std::array<cmplx,32> QAM_32_G_AVG = 
    {{
		{-0.67082,+1.118},
		{-0.22361,+1.118},
		{-0.22361,-1.118},
		{-0.67082,-1.118},
		{-1.118,+0.67082},
		{-1.118,+0.22361},
		{-1.118,-0.22361},
		{-1.118,-0.67082},
		{-0.67082,+0.67082},
		{-0.67082,+0.22361},
		{-0.67082,-0.22361},
		{-0.67082,-0.67082},
		{-0.22361,+0.67082},
		{-0.22361,+0.22361},
		{-0.22361,-0.22361},
		{-0.22361,-0.67082},
		{0.22361,+0.67082},
		{0.22361,+0.22361},
		{0.22361,-0.22361},
		{0.22361,-0.67082},
		{0.67082,+0.67082},
		{0.67082,+0.22361},
		{0.67082,-0.22361},
		{0.67082,-0.67082},
		{1.118,+0.67082},
		{1.118,+0.22361},
		{1.118,-0.22361},
		{1.118,-0.67082},
		{0.67082,+1.118},
		{0.22361,+1.118},
		{0.22361,-1.118},
		{0.67082,-1.118}
    }};
    static const std::array<cmplx,32> QAM_32_G_P = 
    {{
		{-0.5145,+0.85749},
		{-0.1715,+0.85749},
		{-0.1715,-0.85749},
		{-0.5145,-0.85749},
		{-0.85749,+0.5145},
		{-0.85749,+0.1715},
		{-0.85749,-0.1715},
		{-0.85749,-0.5145},
		{-0.5145,+0.5145},
		{-0.5145,+0.1715},
		{-0.5145,-0.1715},
		{-0.5145,-0.5145},
		{-0.1715,+0.5145},
		{-0.1715,+0.1715},
		{-0.1715,-0.1715},
		{-0.1715,-0.5145},
		{0.1715,+0.5145},
		{0.1715,+0.1715},
		{0.1715,-0.1715},
		{0.1715,-0.5145},
		{0.5145,+0.5145},
		{0.5145,+0.1715},
		{0.5145,-0.1715},
		{0.5145,-0.5145},
		{0.85749,+0.5145},
		{0.85749,+0.1715},
		{0.85749,-0.1715},
		{0.85749,-0.5145},
		{0.5145,+0.85749},
		{0.1715,+0.85749},
		{0.1715,-0.85749},
		{0.5145,-0.85749}
    }};
    static const std::array<cmplx,64> QAM_64_B_AVG = 
    {{
		{-1.0801,+1.0801},
		{-1.0801,+0.77152},
		{-1.0801,+0.46291},
		{-1.0801,+0.1543},
		{-1.0801,-0.1543},
		{-1.0801,-0.46291},
		{-1.0801,-0.77152},
		{-1.0801,-1.0801},
		{-0.77152,+1.0801},
		{-0.77152,+0.77152},
		{-0.77152,+0.46291},
		{-0.77152,+0.1543},
		{-0.77152,-0.1543},
		{-0.77152,-0.46291},
		{-0.77152,-0.77152},
		{-0.77152,-1.0801},
		{-0.46291,+1.0801},
		{-0.46291,+0.77152},
		{-0.46291,+0.46291},
		{-0.46291,+0.1543},
		{-0.46291,-0.1543},
		{-0.46291,-0.46291},
		{-0.46291,-0.77152},
		{-0.46291,-1.0801},
		{-0.1543,+1.0801},
		{-0.1543,+0.77152},
		{-0.1543,+0.46291},
		{-0.1543,+0.1543},
		{-0.1543,-0.1543},
		{-0.1543,-0.46291},
		{-0.1543,-0.77152},
		{-0.1543,-1.0801},
		{0.1543,+1.0801},
		{0.1543,+0.77152},
		{0.1543,+0.46291},
		{0.1543,+0.1543},
		{0.1543,-0.1543},
		{0.1543,-0.46291},
		{0.1543,-0.77152},
		{0.1543,-1.0801},
		{0.46291,+1.0801},
		{0.46291,+0.77152},
		{0.46291,+0.46291},
		{0.46291,+0.1543},
		{0.46291,-0.1543},
		{0.46291,-0.46291},
		{0.46291,-0.77152},
		{0.46291,-1.0801},
		{0.77152,+1.0801},
		{0.77152,+0.77152},
		{0.77152,+0.46291},
		{0.77152,+0.1543},
		{0.77152,-0.1543},
		{0.77152,-0.46291},
		{0.77152,-0.77152},
		{0.77152,-1.0801},
		{1.0801,+1.0801},
		{1.0801,+0.77152},
		{1.0801,+0.46291},
		{1.0801,+0.1543},
		{1.0801,-0.1543},
		{1.0801,-0.46291},
		{1.0801,-0.77152},
		{1.0801,-1.0801}
    }};

    static const std::array<cmplx,64> QAM_64_B_P = 
    {{
		{-0.70711,+0.70711},
		{-0.70711,+0.50508},
		{-0.70711,+0.30305},
		{-0.70711,+0.10102},
		{-0.70711,-0.10102},
		{-0.70711,-0.30305},
		{-0.70711,-0.50508},
		{-0.70711,-0.70711},
		{-0.50508,+0.70711},
		{-0.50508,+0.50508},
		{-0.50508,+0.30305},
		{-0.50508,+0.10102},
		{-0.50508,-0.10102},
		{-0.50508,-0.30305},
		{-0.50508,-0.50508},
		{-0.50508,-0.70711},
		{-0.30305,+0.70711},
		{-0.30305,+0.50508},
		{-0.30305,+0.30305},
		{-0.30305,+0.10102},
		{-0.30305,-0.10102},
		{-0.30305,-0.30305},
		{-0.30305,-0.50508},
		{-0.30305,-0.70711},
		{-0.10102,+0.70711},
		{-0.10102,+0.50508},
		{-0.10102,+0.30305},
		{-0.10102,+0.10102},
		{-0.10102,-0.10102},
		{-0.10102,-0.30305},
		{-0.10102,-0.50508},
		{-0.10102,-0.70711},
		{0.10102,+0.70711},
		{0.10102,+0.50508},
		{0.10102,+0.30305},
		{0.10102,+0.10102},
		{0.10102,-0.10102},
		{0.10102,-0.30305},
		{0.10102,-0.50508},
		{0.10102,-0.70711},
		{0.30305,+0.70711},
		{0.30305,+0.50508},
		{0.30305,+0.30305},
		{0.30305,+0.10102},
		{0.30305,-0.10102},
		{0.30305,-0.30305},
		{0.30305,-0.50508},
		{0.30305,-0.70711},
		{0.50508,+0.70711},
		{0.50508,+0.50508},
		{0.50508,+0.30305},
		{0.50508,+0.10102},
		{0.50508,-0.10102},
		{0.50508,-0.30305},
		{0.50508,-0.50508},
		{0.50508,-0.70711},
		{0.70711,+0.70711},
		{0.70711,+0.50508},
		{0.70711,+0.30305},
		{0.70711,+0.10102},
		{0.70711,-0.10102},
		{0.70711,-0.30305},
		{0.70711,-0.50508},
		{0.70711,-0.70711}
    }};
    static const std::array<cmplx,64> QAM_64_G_AVG = 
    {{
		{-1.0801,+1.0801},
		{-1.0801,+0.77152},
		{-1.0801,+0.46291},
		{-1.0801,+0.1543},
		{-1.0801,-0.1543},
		{-1.0801,-0.46291},
		{-1.0801,-0.77152},
		{-1.0801,-1.0801},
		{-0.77152,+1.0801},
		{-0.77152,+0.77152},
		{-0.77152,+0.46291},
		{-0.77152,+0.1543},
		{-0.77152,-0.1543},
		{-0.77152,-0.46291},
		{-0.77152,-0.77152},
		{-0.77152,-1.0801},
		{-0.46291,+1.0801},
		{-0.46291,+0.77152},
		{-0.46291,+0.46291},
		{-0.46291,+0.1543},
		{-0.46291,-0.1543},
		{-0.46291,-0.46291},
		{-0.46291,-0.77152},
		{-0.46291,-1.0801},
		{-0.1543,+1.0801},
		{-0.1543,+0.77152},
		{-0.1543,+0.46291},
		{-0.1543,+0.1543},
		{-0.1543,-0.1543},
		{-0.1543,-0.46291},
		{-0.1543,-0.77152},
		{-0.1543,-1.0801},
		{0.1543,+1.0801},
		{0.1543,+0.77152},
		{0.1543,+0.46291},
		{0.1543,+0.1543},
		{0.1543,-0.1543},
		{0.1543,-0.46291},
		{0.1543,-0.77152},
		{0.1543,-1.0801},
		{0.46291,+1.0801},
		{0.46291,+0.77152},
		{0.46291,+0.46291},
		{0.46291,+0.1543},
		{0.46291,-0.1543},
		{0.46291,-0.46291},
		{0.46291,-0.77152},
		{0.46291,-1.0801},
		{0.77152,+1.0801},
		{0.77152,+0.77152},
		{0.77152,+0.46291},
		{0.77152,+0.1543},
		{0.77152,-0.1543},
		{0.77152,-0.46291},
		{0.77152,-0.77152},
		{0.77152,-1.0801},
		{1.0801,+1.0801},
		{1.0801,+0.77152},
		{1.0801,+0.46291},
		{1.0801,+0.1543},
		{1.0801,-0.1543},
		{1.0801,-0.46291},
		{1.0801,-0.77152},
		{1.0801,-1.0801}
    }};
    static const std::array<cmplx,64> QAM_64_G_P = 
    {{
		{-0.70711,+0.70711},
		{-0.70711,+0.50508},
		{-0.70711,+0.30305},
		{-0.70711,+0.10102},
		{-0.70711,-0.10102},
		{-0.70711,-0.30305},
		{-0.70711,-0.50508},
		{-0.70711,-0.70711},
		{-0.50508,+0.70711},
		{-0.50508,+0.50508},
		{-0.50508,+0.30305},
		{-0.50508,+0.10102},
		{-0.50508,-0.10102},
		{-0.50508,-0.30305},
		{-0.50508,-0.50508},
		{-0.50508,-0.70711},
		{-0.30305,+0.70711},
		{-0.30305,+0.50508},
		{-0.30305,+0.30305},
		{-0.30305,+0.10102},
		{-0.30305,-0.10102},
		{-0.30305,-0.30305},
		{-0.30305,-0.50508},
		{-0.30305,-0.70711},
		{-0.10102,+0.70711},
		{-0.10102,+0.50508},
		{-0.10102,+0.30305},
		{-0.10102,+0.10102},
		{-0.10102,-0.10102},
		{-0.10102,-0.30305},
		{-0.10102,-0.50508},
		{-0.10102,-0.70711},
		{0.10102,+0.70711},
		{0.10102,+0.50508},
		{0.10102,+0.30305},
		{0.10102,+0.10102},
		{0.10102,-0.10102},
		{0.10102,-0.30305},
		{0.10102,-0.50508},
		{0.10102,-0.70711},
		{0.30305,+0.70711},
		{0.30305,+0.50508},
		{0.30305,+0.30305},
		{0.30305,+0.10102},
		{0.30305,-0.10102},
		{0.30305,-0.30305},
		{0.30305,-0.50508},
		{0.30305,-0.70711},
		{0.50508,+0.70711},
		{0.50508,+0.50508},
		{0.50508,+0.30305},
		{0.50508,+0.10102},
		{0.50508,-0.10102},
		{0.50508,-0.30305},
		{0.50508,-0.50508},
		{0.50508,-0.70711},
		{0.70711,+0.70711},
		{0.70711,+0.50508},
		{0.70711,+0.30305},
		{0.70711,+0.10102},
		{0.70711,-0.10102},
		{0.70711,-0.30305},
		{0.70711,-0.50508},
		{0.70711,-0.70711}
    }};
    static const std::array<cmplx,128> QAM_128_B_AVG = 
    {{
		{-0.77302,+0.99388},
		{-0.77302,+1.2147},
		{-0.11043,+1.2147},
		{-0.11043,+0.99388},
		{-0.11043,-0.99388},
		{-0.11043,-1.2147},
		{-0.77302,-1.2147},
		{-0.77302,-0.99388},
		{-0.55216,+0.99388},
		{-0.55216,+1.2147},
		{-0.33129,+1.2147},
		{-0.33129,+0.99388},
		{-0.33129,-0.99388},
		{-0.33129,-1.2147},
		{-0.55216,-1.2147},
		{-0.55216,-0.99388},
		{-1.2147,+0.77302},
		{-1.2147,+0.55216},
		{-1.2147,+0.33129},
		{-1.2147,+0.11043},
		{-1.2147,-0.11043},
		{-1.2147,-0.33129},
		{-1.2147,-0.55216},
		{-1.2147,-0.77302},
		{-0.99388,+0.77302},
		{-0.99388,+0.55216},
		{-0.99388,+0.33129},
		{-0.99388,+0.11043},
		{-0.99388,-0.11043},
		{-0.99388,-0.33129},
		{-0.99388,-0.55216},
		{-0.99388,-0.77302},
		{-0.77302,+0.77302},
		{-0.77302,+0.55216},
		{-0.77302,+0.33129},
		{-0.77302,+0.11043},
		{-0.77302,-0.11043},
		{-0.77302,-0.33129},
		{-0.77302,-0.55216},
		{-0.77302,-0.77302},
		{-0.55216,+0.77302},
		{-0.55216,+0.55216},
		{-0.55216,+0.33129},
		{-0.55216,+0.11043},
		{-0.55216,-0.11043},
		{-0.55216,-0.33129},
		{-0.55216,-0.55216},
		{-0.55216,-0.77302},
		{-0.33129,+0.77302},
		{-0.33129,+0.55216},
		{-0.33129,+0.33129},
		{-0.33129,+0.11043},
		{-0.33129,-0.11043},
		{-0.33129,-0.33129},
		{-0.33129,-0.55216},
		{-0.33129,-0.77302},
		{-0.11043,+0.77302},
		{-0.11043,+0.55216},
		{-0.11043,+0.33129},
		{-0.11043,+0.11043},
		{-0.11043,-0.11043},
		{-0.11043,-0.33129},
		{-0.11043,-0.55216},
		{-0.11043,-0.77302},
		{0.11043,+0.77302},
		{0.11043,+0.55216},
		{0.11043,+0.33129},
		{0.11043,+0.11043},
		{0.11043,-0.11043},
		{0.11043,-0.33129},
		{0.11043,-0.55216},
		{0.11043,-0.77302},
		{0.33129,+0.77302},
		{0.33129,+0.55216},
		{0.33129,+0.33129},
		{0.33129,+0.11043},
		{0.33129,-0.11043},
		{0.33129,-0.33129},
		{0.33129,-0.55216},
		{0.33129,-0.77302},
		{0.55216,+0.77302},
		{0.55216,+0.55216},
		{0.55216,+0.33129},
		{0.55216,+0.11043},
		{0.55216,-0.11043},
		{0.55216,-0.33129},
		{0.55216,-0.55216},
		{0.55216,-0.77302},
		{0.77302,+0.77302},
		{0.77302,+0.55216},
		{0.77302,+0.33129},
		{0.77302,+0.11043},
		{0.77302,-0.11043},
		{0.77302,-0.33129},
		{0.77302,-0.55216},
		{0.77302,-0.77302},
		{0.99388,+0.77302},
		{0.99388,+0.55216},
		{0.99388,+0.33129},
		{0.99388,+0.11043},
		{0.99388,-0.11043},
		{0.99388,-0.33129},
		{0.99388,-0.55216},
		{0.99388,-0.77302},
		{1.2147,+0.77302},
		{1.2147,+0.55216},
		{1.2147,+0.33129},
		{1.2147,+0.11043},
		{1.2147,-0.11043},
		{1.2147,-0.33129},
		{1.2147,-0.55216},
		{1.2147,-0.77302},
		{0.55216,+0.99388},
		{0.55216,+1.2147},
		{0.33129,+1.2147},
		{0.33129,+0.99388},
		{0.33129,-0.99388},
		{0.33129,-1.2147},
		{0.55216,-1.2147},
		{0.55216,-0.99388},
		{0.77302,+0.99388},
		{0.77302,+1.2147},
		{0.11043,+1.2147},
		{0.11043,+0.99388},
		{0.11043,-0.99388},
		{0.11043,-1.2147},
		{0.77302,-1.2147},
		{0.77302,-0.99388}
    }};
    static const std::array<cmplx,128> QAM_128_B_P = 
    {{
		{-0.53688,+0.69027},
		{-0.53688,+0.84366},
		{-0.076696,+0.84366},
		{-0.076696,+0.69027},
		{-0.076696,-0.69027},
		{-0.076696,-0.84366},
		{-0.53688,-0.84366},
		{-0.53688,-0.69027},
		{-0.38348,+0.69027},
		{-0.38348,+0.84366},
		{-0.23009,+0.84366},
		{-0.23009,+0.69027},
		{-0.23009,-0.69027},
		{-0.23009,-0.84366},
		{-0.38348,-0.84366},
		{-0.38348,-0.69027},
		{-0.84366,+0.53688},
		{-0.84366,+0.38348},
		{-0.84366,+0.23009},
		{-0.84366,+0.076696},
		{-0.84366,-0.076696},
		{-0.84366,-0.23009},
		{-0.84366,-0.38348},
		{-0.84366,-0.53688},
		{-0.69027,+0.53688},
		{-0.69027,+0.38348},
		{-0.69027,+0.23009},
		{-0.69027,+0.076696},
		{-0.69027,-0.076696},
		{-0.69027,-0.23009},
		{-0.69027,-0.38348},
		{-0.69027,-0.53688},
		{-0.53688,+0.53688},
		{-0.53688,+0.38348},
		{-0.53688,+0.23009},
		{-0.53688,+0.076696},
		{-0.53688,-0.076696},
		{-0.53688,-0.23009},
		{-0.53688,-0.38348},
		{-0.53688,-0.53688},
		{-0.38348,+0.53688},
		{-0.38348,+0.38348},
		{-0.38348,+0.23009},
		{-0.38348,+0.076696},
		{-0.38348,-0.076696},
		{-0.38348,-0.23009},
		{-0.38348,-0.38348},
		{-0.38348,-0.53688},
		{-0.23009,+0.53688},
		{-0.23009,+0.38348},
		{-0.23009,+0.23009},
		{-0.23009,+0.076696},
		{-0.23009,-0.076696},
		{-0.23009,-0.23009},
		{-0.23009,-0.38348},
		{-0.23009,-0.53688},
		{-0.076696,+0.53688},
		{-0.076696,+0.38348},
		{-0.076696,+0.23009},
		{-0.076696,+0.076696},
		{-0.076696,-0.076696},
		{-0.076696,-0.23009},
		{-0.076696,-0.38348},
		{-0.076696,-0.53688},
		{0.076696,+0.53688},
		{0.076696,+0.38348},
		{0.076696,+0.23009},
		{0.076696,+0.076696},
		{0.076696,-0.076696},
		{0.076696,-0.23009},
		{0.076696,-0.38348},
		{0.076696,-0.53688},
		{0.23009,+0.53688},
		{0.23009,+0.38348},
		{0.23009,+0.23009},
		{0.23009,+0.076696},
		{0.23009,-0.076696},
		{0.23009,-0.23009},
		{0.23009,-0.38348},
		{0.23009,-0.53688},
		{0.38348,+0.53688},
		{0.38348,+0.38348},
		{0.38348,+0.23009},
		{0.38348,+0.076696},
		{0.38348,-0.076696},
		{0.38348,-0.23009},
		{0.38348,-0.38348},
		{0.38348,-0.53688},
		{0.53688,+0.53688},
		{0.53688,+0.38348},
		{0.53688,+0.23009},
		{0.53688,+0.076696},
		{0.53688,-0.076696},
		{0.53688,-0.23009},
		{0.53688,-0.38348},
		{0.53688,-0.53688},
		{0.69027,+0.53688},
		{0.69027,+0.38348},
		{0.69027,+0.23009},
		{0.69027,+0.076696},
		{0.69027,-0.076696},
		{0.69027,-0.23009},
		{0.69027,-0.38348},
		{0.69027,-0.53688},
		{0.84366,+0.53688},
		{0.84366,+0.38348},
		{0.84366,+0.23009},
		{0.84366,+0.076696},
		{0.84366,-0.076696},
		{0.84366,-0.23009},
		{0.84366,-0.38348},
		{0.84366,-0.53688},
		{0.38348,+0.69027},
		{0.38348,+0.84366},
		{0.23009,+0.84366},
		{0.23009,+0.69027},
		{0.23009,-0.69027},
		{0.23009,-0.84366},
		{0.38348,-0.84366},
		{0.38348,-0.69027},
		{0.53688,+0.69027},
		{0.53688,+0.84366},
		{0.076696,+0.84366},
		{0.076696,+0.69027},
		{0.076696,-0.69027},
		{0.076696,-0.84366},
		{0.53688,-0.84366},
		{0.53688,-0.69027}
    }}; 
    static const std::array<cmplx,128> QAM_128_G_P = 
    {{
		{-0.53688,+0.69027},
		{-0.53688,+0.84366},
		{-0.076696,+0.84366},
		{-0.076696,+0.69027},
		{-0.076696,-0.69027},
		{-0.076696,-0.84366},
		{-0.53688,-0.84366},
		{-0.53688,-0.69027},
		{-0.38348,+0.69027},
		{-0.38348,+0.84366},
		{-0.23009,+0.84366},
		{-0.23009,+0.69027},
		{-0.23009,-0.69027},
		{-0.23009,-0.84366},
		{-0.38348,-0.84366},
		{-0.38348,-0.69027},
		{-0.84366,+0.53688},
		{-0.84366,+0.38348},
		{-0.84366,+0.23009},
		{-0.84366,+0.076696},
		{-0.84366,-0.076696},
		{-0.84366,-0.23009},
		{-0.84366,-0.38348},
		{-0.84366,-0.53688},
		{-0.69027,+0.53688},
		{-0.69027,+0.38348},
		{-0.69027,+0.23009},
		{-0.69027,+0.076696},
		{-0.69027,-0.076696},
		{-0.69027,-0.23009},
		{-0.69027,-0.38348},
		{-0.69027,-0.53688},
		{-0.53688,+0.53688},
		{-0.53688,+0.38348},
		{-0.53688,+0.23009},
		{-0.53688,+0.076696},
		{-0.53688,-0.076696},
		{-0.53688,-0.23009},
		{-0.53688,-0.38348},
		{-0.53688,-0.53688},
		{-0.38348,+0.53688},
		{-0.38348,+0.38348},
		{-0.38348,+0.23009},
		{-0.38348,+0.076696},
		{-0.38348,-0.076696},
		{-0.38348,-0.23009},
		{-0.38348,-0.38348},
		{-0.38348,-0.53688},
		{-0.23009,+0.53688},
		{-0.23009,+0.38348},
		{-0.23009,+0.23009},
		{-0.23009,+0.076696},
		{-0.23009,-0.076696},
		{-0.23009,-0.23009},
		{-0.23009,-0.38348},
		{-0.23009,-0.53688},
		{-0.076696,+0.53688},
		{-0.076696,+0.38348},
		{-0.076696,+0.23009},
		{-0.076696,+0.076696},
		{-0.076696,-0.076696},
		{-0.076696,-0.23009},
		{-0.076696,-0.38348},
		{-0.076696,-0.53688},
		{0.076696,+0.53688},
		{0.076696,+0.38348},
		{0.076696,+0.23009},
		{0.076696,+0.076696},
		{0.076696,-0.076696},
		{0.076696,-0.23009},
		{0.076696,-0.38348},
		{0.076696,-0.53688},
		{0.23009,+0.53688},
		{0.23009,+0.38348},
		{0.23009,+0.23009},
		{0.23009,+0.076696},
		{0.23009,-0.076696},
		{0.23009,-0.23009},
		{0.23009,-0.38348},
		{0.23009,-0.53688},
		{0.38348,+0.53688},
		{0.38348,+0.38348},
		{0.38348,+0.23009},
		{0.38348,+0.076696},
		{0.38348,-0.076696},
		{0.38348,-0.23009},
		{0.38348,-0.38348},
		{0.38348,-0.53688},
		{0.53688,+0.53688},
		{0.53688,+0.38348},
		{0.53688,+0.23009},
		{0.53688,+0.076696},
		{0.53688,-0.076696},
		{0.53688,-0.23009},
		{0.53688,-0.38348},
		{0.53688,-0.53688},
		{0.69027,+0.53688},
		{0.69027,+0.38348},
		{0.69027,+0.23009},
		{0.69027,+0.076696},
		{0.69027,-0.076696},
		{0.69027,-0.23009},
		{0.69027,-0.38348},
		{0.69027,-0.53688},
		{0.84366,+0.53688},
		{0.84366,+0.38348},
		{0.84366,+0.23009},
		{0.84366,+0.076696},
		{0.84366,-0.076696},
		{0.84366,-0.23009},
		{0.84366,-0.38348},
		{0.84366,-0.53688},
		{0.38348,+0.69027},
		{0.38348,+0.84366},
		{0.23009,+0.84366},
		{0.23009,+0.69027},
		{0.23009,-0.69027},
		{0.23009,-0.84366},
		{0.38348,-0.84366},
		{0.38348,-0.69027},
		{0.53688,+0.69027},
		{0.53688,+0.84366},
		{0.076696,+0.84366},
		{0.076696,+0.69027},
		{0.076696,-0.69027},
		{0.076696,-0.84366},
		{0.53688,-0.84366},
		{0.53688,-0.69027}
    }}; 
    static const std::array<cmplx,4> QPSK_4_B = 
    {{
		{0.70711,+0.70711},
		{-0.70711,+0.70711},
		{-0.70711,-0.70711},
		{0.70711,-0.70711}

    }} ;
    static const std::array<cmplx,4> QPSK_4_G = 
    {{
		{0.70711,+0.70711},
		{-0.70711,+0.70711},
		{-0.70711,-0.70711},
		{0.70711,-0.70711}

    }} ;
    static const std::array<cmplx,2> BPSK = 
    {{
		{1,0},
		{-1,0}
    }};