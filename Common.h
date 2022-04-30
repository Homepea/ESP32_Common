#ifndef __COMMON_H__
#define __COMMON_H__

#include "stdint.h"

typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef int64_t s64;

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

u8 AbsS8(s8 x);
u16 AbsS16(s16 x);
u32 AbsS32(s32 x);
u64 AbsS64(s64 x);
u16 AbsDiffU8(u8 x, u8 y);
u16 AbsDiffS8(s8 x, s8 y);
u32 AbsDiffU16(u16 x, u16 y);
u32 AbsDiffS16(s16 x, s16 y);
u64 AbsDiffU32(u32 x, u32 y);
u64 AbsDiffS32(s32 x, s32 y);
void MemCpyU8 (void *pDes, void *pSrc,  u16 uwLen);
void MemSetU8 (void *pDes, u8    ubVal, u16 uwLen);
void MemSetU16(void *pDes, u16   ubVal, u16 uwLen);

#define SetBit(x, y) ((x) |=  (1 << (y)))       // 指定的某一位数置1
#define ClrBit(x, y) ((x) &= ~(1 << (y)))       // 指定的某一位数置0
#define RevBit(x, y) ((x) ^=  (1 << (y)))       // 指定的某一位数取反
#define GetBit(x, y) ((x) >>  (y) &    1)       // 获取的某一位的值

#define U8  u8
#define U16 u16
#define U32 u32
#define U64 u64

#define S8  s8
#define S16 s16
#define S32 s32
#define S64 s64

#define S8_MIN -128
#define S8_MAX 127
#define U8_MAX 255

#define S16_MIN -32768
#define S16_MAX 32767
#define U16_MAX 65535

#define S32_MIN (-2147483647 - 1)
#define S32_MAX 2147483647
#define U32_MAX 4294967295U

#define S64_MIN (-9223372036854775807LL - 1LL)
#define S64_MAX 9223372036854775807LL
#define U64_MAX 18446744073709551615ULL

// 指定的常量
#define CONST_0 0
#define CONST_1 1
#define CONST_2 2
#define CONST_3 3
#define CONST_4 4
#define CONST_5 5
#define CONST_6 6
#define CONST_7 7
#define CONST_8 8
#define CONST_9 9
#define CONST_10 10
#define CONST_11 11
#define CONST_12 12
#define CONST_13 13
#define CONST_14 14
#define CONST_15 15
#define CONST_16 16
#define CONST_17 17
#define CONST_18 18
#define CONST_19 19
#define CONST_20 20
#define CONST_21 21
#define CONST_22 22
#define CONST_23 23
#define CONST_24 24
#define CONST_25 25
#define CONST_26 26
#define CONST_27 27
#define CONST_28 28
#define CONST_29 29
#define CONST_30 30
#define CONST_31 31
#define CONST_32 32
#define CONST_33 33
#define CONST_34 34
#define CONST_35 35
#define CONST_36 36
#define CONST_37 37
#define CONST_38 38
#define CONST_39 39
#define CONST_40 40
#define CONST_41 41
#define CONST_42 42
#define CONST_43 43
#define CONST_44 44
#define CONST_45 45
#define CONST_46 46
#define CONST_47 47
#define CONST_48 48
#define CONST_49 49
#define CONST_50 50
#define CONST_51 51
#define CONST_52 52
#define CONST_53 53
#define CONST_54 54
#define CONST_55 55
#define CONST_56 56
#define CONST_57 57
#define CONST_58 58
#define CONST_59 59
#define CONST_60 60
#define CONST_61 61
#define CONST_62 62
#define CONST_63 63
#define CONST_64 64
#define CONST_65 65
#define CONST_66 66
#define CONST_67 67
#define CONST_68 68
#define CONST_69 69
#define CONST_70 70
#define CONST_71 71
#define CONST_72 72
#define CONST_73 73
#define CONST_74 74
#define CONST_75 75
#define CONST_76 76
#define CONST_77 77
#define CONST_78 78
#define CONST_79 79
#define CONST_80 80
#define CONST_81 81
#define CONST_82 82
#define CONST_83 83
#define CONST_84 84
#define CONST_85 85
#define CONST_86 86
#define CONST_87 87
#define CONST_88 88
#define CONST_89 89
#define CONST_90 90
#define CONST_91 91
#define CONST_92 92
#define CONST_93 93
#define CONST_94 94
#define CONST_95 95
#define CONST_96 96
#define CONST_97 97
#define CONST_98 98
#define CONST_99 99
#define CONST_100 100
#define CONST_101 101
#define CONST_102 102
#define CONST_103 103
#define CONST_104 104
#define CONST_105 105
#define CONST_106 106
#define CONST_107 107
#define CONST_108 108
#define CONST_109 109
#define CONST_110 110
#define CONST_111 111
#define CONST_112 112
#define CONST_113 113
#define CONST_114 114
#define CONST_115 115
#define CONST_116 116
#define CONST_117 117
#define CONST_118 118
#define CONST_119 119
#define CONST_120 120
#define CONST_121 121
#define CONST_122 122
#define CONST_123 123
#define CONST_124 124
#define CONST_125 125
#define CONST_126 126
#define CONST_127 127
#define CONST_128 128
#define CONST_129 129
#define CONST_130 130
#define CONST_131 131
#define CONST_132 132
#define CONST_133 133
#define CONST_134 134
#define CONST_135 135
#define CONST_136 136
#define CONST_137 137
#define CONST_138 138
#define CONST_139 139
#define CONST_140 140
#define CONST_141 141
#define CONST_142 142
#define CONST_143 143
#define CONST_144 144
#define CONST_145 145
#define CONST_146 146
#define CONST_147 147
#define CONST_148 148
#define CONST_149 149
#define CONST_150 150
#define CONST_151 151
#define CONST_152 152
#define CONST_153 153
#define CONST_154 154
#define CONST_155 155
#define CONST_156 156
#define CONST_157 157
#define CONST_158 158
#define CONST_159 159
#define CONST_160 160
#define CONST_161 161
#define CONST_162 162
#define CONST_163 163
#define CONST_164 164
#define CONST_165 165
#define CONST_166 166
#define CONST_167 167
#define CONST_168 168
#define CONST_169 169
#define CONST_170 170
#define CONST_171 171
#define CONST_172 172
#define CONST_173 173
#define CONST_174 174
#define CONST_175 175
#define CONST_176 176
#define CONST_177 177
#define CONST_178 178
#define CONST_179 179
#define CONST_180 180
#define CONST_181 181
#define CONST_182 182
#define CONST_183 183
#define CONST_184 184
#define CONST_185 185
#define CONST_186 186
#define CONST_187 187
#define CONST_188 188
#define CONST_189 189
#define CONST_190 190
#define CONST_191 191
#define CONST_192 192
#define CONST_193 193
#define CONST_194 194
#define CONST_195 195
#define CONST_196 196
#define CONST_197 197
#define CONST_198 198
#define CONST_199 199
#define CONST_200 200
#define CONST_201 201
#define CONST_202 202
#define CONST_203 203
#define CONST_204 204
#define CONST_205 205
#define CONST_206 206
#define CONST_207 207
#define CONST_208 208
#define CONST_209 209
#define CONST_210 210
#define CONST_211 211
#define CONST_212 212
#define CONST_213 213
#define CONST_214 214
#define CONST_215 215
#define CONST_216 216
#define CONST_217 217
#define CONST_218 218
#define CONST_219 219
#define CONST_220 220
#define CONST_221 221
#define CONST_222 222
#define CONST_223 223
#define CONST_224 224
#define CONST_225 225
#define CONST_226 226
#define CONST_227 227
#define CONST_228 228
#define CONST_229 229
#define CONST_230 230
#define CONST_231 231
#define CONST_232 232
#define CONST_233 233
#define CONST_234 234
#define CONST_235 235
#define CONST_236 236
#define CONST_237 237
#define CONST_238 238
#define CONST_239 239
#define CONST_240 240
#define CONST_241 241
#define CONST_242 242
#define CONST_243 243
#define CONST_244 244
#define CONST_245 245
#define CONST_246 246
#define CONST_247 247
#define CONST_248 248
#define CONST_249 249
#define CONST_250 250
#define CONST_251 251
#define CONST_252 252
#define CONST_253 253
#define CONST_254 254
#define CONST_255 255

#define SQUARE_3  1.7321
#define SQUARE_5  2.2361
#define SQUARE_6  2.4495
#define SQUARE_7  2.6458
#define SQUARE_8  2.8284

#endif
