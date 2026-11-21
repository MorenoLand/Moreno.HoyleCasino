//======================================================================
// sub_5E1070
// entry 005e1070  size 96  status ok
//======================================================================

int __thiscall sub_5E1070(_DWORD *this)
{
  int result; // eax

  if ( ++*(this + 38) == 1001 )
    *(this + 38) = 1;
  sub_5E0DF0((int)this);
  result = sub_5E1100(this);
  if ( dword_793584 )
    return sub_5891B0(dword_793584);
  return result;
}


//======================================================================
// sub_5E10D0
// entry 005e10d0  size 42  status ok
//======================================================================

int __thiscall sub_5E10D0(_DWORD *this)
{
  if ( *(this + 38) == 1 )
    return 1000;
  else
    return *(this + 38) - 1;
}


//======================================================================
// sub_5E1100
// entry 005e1100  size 305  status ok
//======================================================================

int __cdecl sub_5E1100()
{
  int v0; // eax
  LONG *p_top; // [esp+8h] [ebp-528h]
  char Buffer[16]; // [esp+Ch] [ebp-524h] BYREF
  FILE *Stream; // [esp+1Ch] [ebp-514h]
  int i; // [esp+20h] [ebp-510h]
  void (__thiscall ***v6[319])(_DWORD, int); // [esp+24h] [ebp-50Ch] BYREF
  int v7; // [esp+52Ch] [ebp-4h]

  sub_5D4CF0((char *)v6);
  v7 = 0;
  for ( i = 0; i < 100; ++i )
  {
    sprintf(Buffer, "user%d.log", i);
    Stream = (FILE *)sub_5EA9C0(Buffer, "rb");
    if ( Stream )
    {
      fclose(Stream);
      sub_63AB10(Buffer);
      p_top = &CImageDisplay::GetDisplayFormat((CImageDisplay *)v6)->rcSource.top;
      v0 = sub_5D52E0((CImageDisplay *)v6);
      sub_5E1240(p_top, v0 + 96);
    }
  }
  v7 = -1;
  return sub_5D4F50(v6);
}


//======================================================================
// sub_5E1240
// entry 005e1240  size 459  status ok
//======================================================================

int __thiscall sub_5E1240(_DWORD *this, char *a2, int a3)
{
  int result; // eax
  int v4; // [esp+8h] [ebp-Ch]
  int v5; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  result = sub_5E10D0(this);
  v4 = result;
  for ( i = 0; i < 100 && *(_DWORD *)(a3 + 36 * i + 28); ++i )
  {
    if ( !*(_BYTE *)(a3 + 36 * i + 4)
      && (v4 >= *(_DWORD *)(a3 + 36 * i + 28) && v4 <= *(_DWORD *)(a3 + 36 * i + 28) + *(char *)(a3 + 36 * i + 2) - 1
       || v4 + 1000 >= *(_DWORD *)(a3 + 36 * i + 28)
       && v4 + 1000 <= *(_DWORD *)(a3 + 36 * i + 28) + *(char *)(a3 + 36 * i + 2) - 1) )
    {
      if ( *(_BYTE *)(a3 + 36 * i + 4) )
        sub_5E9F20((char)"tickets[i].oldTicket == 0", "..\\Casino\\casinoshell.cpp", 2380);
      v5 = sub_5E2860(a3 + 36 * i);
      *(_DWORD *)(a3 + 36 * i + 32) += v5;
      if ( v4 == *(_DWORD *)(a3 + 36 * i + 28) + *(char *)(a3 + 36 * i + 2) - 1
        || v4 + 1000 == *(_DWORD *)(a3 + 36 * i + 28) + *(char *)(a3 + 36 * i + 2) - 1 )
      {
        *(_BYTE *)(a3 + 36 * i + 4) = 1;
      }
      sub_5E2C40(a2, a3 + 36 * i, i, v5);
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5E1410
// entry 005e1410  size 406  status ok
//======================================================================

const struct tagVIDEOINFO *__stdcall sub_5E1410(int a1)
{
  CImageDisplay *v1; // eax
  const struct tagVIDEOINFO *result; // eax
  int *v3; // eax
  int v4; // ecx
  int v5; // edx
  _DWORD *v6; // eax
  int v7; // eax
  CImageDisplay *v8; // eax
  CImageDisplay *v9; // eax
  CImageDisplay *v10; // eax
  bool v11; // [esp+0h] [ebp-34h]
  char *Source; // [esp+8h] [ebp-2Ch]
  CImageDisplay *v13; // [esp+Ch] [ebp-28h]
  CImageDisplay *v14; // [esp+10h] [ebp-24h]
  _BYTE v15[8]; // [esp+1Ch] [ebp-18h] BYREF
  __int64 v16; // [esp+24h] [ebp-10h]
  _DWORD *v17; // [esp+2Ch] [ebp-8h]
  _DWORD *v18; // [esp+30h] [ebp-4h]

  v1 = (CImageDisplay *)sub_5DCB00(a1);
  v17 = (_DWORD *)sub_5D52E0(v1);
  v14 = (CImageDisplay *)sub_5DCB00(a1);
  result = CImageDisplay::GetDisplayFormat(v14);
  v11 = 1;
  if ( result->rcSource.left != 2 )
  {
    result = (const struct tagVIDEOINFO *)CImageDisplay::GetDisplayFormat(v14)->rcSource.left;
    if ( result != (const struct tagVIDEOINFO *)3 )
      v11 = 0;
  }
  if ( v11 && v17[11] )
  {
    sub_5DCB00(a1);
    v18 = (_DWORD *)sub_63AAE0(8);
    v16 = sub_64C8A0(v17[11], 0);
    v3 = (int *)sub_64C5C0(v15, v16, HIDWORD(v16));
    v4 = *v3;
    v5 = v3[1];
    v6 = v18;
    *v18 = v4;
    v6[1] = v5;
    *v17 += v17[11];
    v17[11] = 0;
    v7 = sub_5DCB00(a1);
    sub_63B0A0(v7);
    v8 = (CImageDisplay *)sub_5DCB00(a1);
    if ( sub_5D6EE0(v8, 0) )
    {
      v13 = (CImageDisplay *)sub_5DCB00(a1);
      Source = (char *)&CImageDisplay::GetDisplayFormat(v13)->rcSource.top;
      sub_5DC520(Source);
    }
    v9 = (CImageDisplay *)sub_5DCB00(a1);
    if ( sub_5D6F90(v9) )
    {
      v10 = (CImageDisplay *)sub_5DCB00(a1);
      sub_5DC3E0(v10);
    }
    if ( dword_793584 )
      sub_589290(dword_793584);
    return (const struct tagVIDEOINFO *)sub_5D8F90(dword_7947E4);
  }
  return result;
}


//======================================================================
// sub_5E15B0
// entry 005e15b0  size 4688  status ok
//======================================================================

int __stdcall sub_5E15B0(int a1, int a2, int a3, char a4, int a5)
{
  int v6; // [esp+8h] [ebp-70Ch]
  _DWORD v7[38]; // [esp+Ch] [ebp-708h]
  _DWORD v8[28]; // [esp+A4h] [ebp-670h] BYREF
  int v9; // [esp+114h] [ebp-600h]
  _DWORD v10[7]; // [esp+118h] [ebp-5FCh] BYREF
  _DWORD v11[332]; // [esp+134h] [ebp-5E0h] BYREF
  _DWORD v12[43]; // [esp+664h] [ebp-B0h] BYREF
  int v13; // [esp+710h] [ebp-4h]

  v11[0] = 3;
  v11[1] = 15;
  v11[2] = 30;
  v11[3] = 60;
  v11[4] = 12;
  v11[5] = 60;
  v11[6] = 120;
  v11[7] = 240;
  v11[8] = 42;
  v11[9] = 210;
  v11[10] = 420;
  v11[11] = 840;
  v11[12] = 1;
  v11[13] = 5;
  v11[14] = 10;
  v11[15] = 20;
  v11[16] = 120;
  v11[17] = 600;
  v11[18] = 1200;
  v11[19] = 2400;
  v11[20] = 3;
  v11[21] = 15;
  v11[22] = 30;
  v11[23] = 60;
  v11[24] = 1;
  v11[25] = 5;
  v11[26] = 10;
  v11[27] = 20;
  v11[28] = 1360;
  v11[29] = 2720;
  v11[30] = 5440;
  v11[31] = 13600;
  v11[32] = 20;
  v11[33] = 40;
  v11[34] = 80;
  v11[35] = 200;
  v11[36] = 800;
  v11[37] = 4000;
  v11[38] = 8000;
  v11[39] = 16000;
  v11[40] = 9;
  v11[41] = 45;
  v11[42] = 90;
  v11[43] = 180;
  v11[44] = 1;
  v11[45] = 5;
  v11[46] = 10;
  v11[47] = 20;
  v11[48] = 7000;
  v11[49] = 14000;
  v11[50] = 28000;
  v11[51] = 70000;
  v11[52] = 40;
  v11[53] = 80;
  v11[54] = 160;
  v11[55] = 400;
  v11[56] = 1500;
  v11[57] = 7500;
  v11[58] = 15000;
  v11[59] = 30000;
  v11[60] = 88;
  v11[61] = 440;
  v11[62] = 880;
  v11[63] = 1760;
  v11[64] = 4;
  v11[65] = 20;
  v11[66] = 40;
  v11[67] = 80;
  v11[68] = 1;
  v11[69] = 5;
  v11[70] = 10;
  v11[71] = 20;
  v11[72] = 20000;
  v11[73] = 40000;
  v11[74] = 80000;
  v11[75] = 100000;
  v11[76] = 420;
  v11[77] = 840;
  v11[78] = 1680;
  v11[79] = 4200;
  v11[80] = 40;
  v11[81] = 80;
  v11[82] = 160;
  v11[83] = 400;
  v11[84] = 7000;
  v11[85] = 35000;
  v11[86] = 70000;
  v11[87] = 100000;
  v11[88] = 350;
  v11[89] = 1750;
  v11[90] = 3500;
  v11[91] = 7000;
  v11[92] = 20;
  v11[93] = 100;
  v11[94] = 200;
  v11[95] = 400;
  v11[96] = 2;
  v11[97] = 10;
  v11[98] = 20;
  v11[99] = 40;
  v11[100] = 20000;
  v11[101] = 100000;
  v11[102] = 100000;
  v11[103] = 100000;
  v11[104] = 1500;
  v11[105] = 7500;
  v11[106] = 15000;
  v11[107] = 30000;
  v11[108] = 90;
  v11[109] = 450;
  v11[110] = 900;
  v11[111] = 1800;
  v11[112] = 9;
  v11[113] = 45;
  v11[114] = 90;
  v11[115] = 180;
  v11[116] = 25000;
  v11[117] = 100000;
  v11[118] = 100000;
  v11[119] = 100000;
  v11[120] = 4000;
  v11[121] = 20000;
  v11[122] = 40000;
  v11[123] = 80000;
  v11[124] = 300;
  v11[125] = 1500;
  v11[126] = 3000;
  v11[127] = 6000;
  v11[128] = 43;
  v11[129] = 215;
  v11[130] = 430;
  v11[131] = 860;
  v11[132] = 4;
  v11[133] = 20;
  v11[134] = 40;
  v11[135] = 80;
  v11[136] = 50000;
  v11[137] = 100000;
  v11[138] = 100000;
  v11[139] = 100000;
  v11[140] = 8000;
  v11[141] = 20000;
  v11[142] = 40000;
  v11[143] = 80000;
  v11[144] = 2000;
  v11[145] = 5000;
  v11[146] = 10000;
  v11[147] = 20000;
  v11[148] = 260;
  v11[149] = 650;
  v11[150] = 1300;
  v11[151] = 2600;
  v11[152] = 40;
  v11[153] = 100;
  v11[154] = 200;
  v11[155] = 400;
  v11[156] = 4;
  v11[157] = 10;
  v11[158] = 20;
  v11[159] = 40;
  v11[160] = 50000;
  v11[161] = 100000;
  v11[162] = 100000;
  v11[163] = 100000;
  v11[164] = 25000;
  v11[165] = 62500;
  v11[166] = 100000;
  v11[167] = 100000;
  v11[168] = 4500;
  v11[169] = 11250;
  v11[170] = 22500;
  v11[171] = 45000;
  v11[172] = 800;
  v11[173] = 2000;
  v11[174] = 4000;
  v11[175] = 8000;
  v11[176] = 150;
  v11[177] = 375;
  v11[178] = 750;
  v11[179] = 1500;
  v11[180] = 18;
  v11[181] = 45;
  v11[182] = 90;
  v11[183] = 180;
  v11[184] = 50000;
  v11[185] = 100000;
  v11[186] = 100000;
  v11[187] = 100000;
  v11[188] = 25000;
  v11[189] = 62500;
  v11[190] = 100000;
  v11[191] = 100000;
  v11[192] = 5000;
  v11[193] = 12500;
  v11[194] = 25000;
  v11[195] = 50000;
  v11[196] = 1200;
  v11[197] = 3000;
  v11[198] = 6000;
  v11[199] = 12000;
  v11[200] = 500;
  v11[201] = 1250;
  v11[202] = 2500;
  v11[203] = 5000;
  v11[204] = 60;
  v11[205] = 150;
  v11[206] = 300;
  v11[207] = 600;
  v11[208] = 10;
  v11[209] = 25;
  v11[210] = 50;
  v11[211] = 100;
  v11[212] = 100000;
  v11[213] = 100000;
  v11[214] = 100000;
  v11[215] = 100000;
  v11[216] = 50000;
  v11[217] = 100000;
  v11[218] = 100000;
  v11[219] = 100000;
  v11[220] = 18000;
  v11[221] = 45000;
  v11[222] = 90000;
  v11[223] = 100000;
  v11[224] = 8000;
  v11[225] = 20000;
  v11[226] = 40000;
  v11[227] = 80000;
  v11[228] = 1500;
  v11[229] = 3750;
  v11[230] = 7500;
  v11[231] = 15000;
  v11[232] = 160;
  v11[233] = 400;
  v11[234] = 800;
  v11[235] = 1600;
  v11[236] = 30;
  v11[237] = 75;
  v11[238] = 150;
  v11[239] = 300;
  v11[240] = 2;
  v11[241] = 5;
  v11[242] = 10;
  v11[243] = 20;
  v11[244] = 100000;
  v11[245] = 100000;
  v11[246] = 100000;
  v11[247] = 100000;
  v11[248] = 70000;
  v11[249] = 100000;
  v11[250] = 100000;
  v11[251] = 100000;
  v11[252] = 25000;
  v11[253] = 62500;
  v11[254] = 100000;
  v11[255] = 100000;
  v11[256] = 15000;
  v11[257] = 37500;
  v11[258] = 75000;
  v11[259] = 100000;
  v11[260] = 1500;
  v11[261] = 3750;
  v11[262] = 7500;
  v11[263] = 15000;
  v11[264] = 600;
  v11[265] = 1500;
  v11[266] = 3000;
  v11[267] = 6000;
  v11[268] = 85;
  v11[269] = 212;
  v11[270] = 425;
  v11[271] = 850;
  v11[272] = 20;
  v11[273] = 50;
  v11[274] = 100;
  v11[275] = 200;
  v11[276] = 2;
  v11[277] = 5;
  v11[278] = 10;
  v11[279] = 20;
  v11[280] = 100000;
  v11[281] = 100000;
  v11[282] = 100000;
  v11[283] = 100000;
  v11[284] = 100000;
  v11[285] = 100000;
  v11[286] = 100000;
  v11[287] = 100000;
  v11[288] = 70000;
  v11[289] = 100000;
  v11[290] = 100000;
  v11[291] = 100000;
  v11[292] = 25000;
  v11[293] = 62500;
  v11[294] = 100000;
  v11[295] = 100000;
  v11[296] = 5600;
  v11[297] = 14000;
  v11[298] = 28000;
  v11[299] = 56000;
  v11[300] = 600;
  v11[301] = 1500;
  v11[302] = 3000;
  v11[303] = 6000;
  v11[304] = 200;
  v11[305] = 500;
  v11[306] = 1000;
  v11[307] = 2000;
  v11[308] = 50;
  v11[309] = 125;
  v11[310] = 250;
  v11[311] = 500;
  v11[312] = 20;
  v11[313] = 50;
  v11[314] = 100;
  v11[315] = 200;
  v12[0] = 100000;
  v12[1] = 100000;
  v12[2] = 100000;
  v12[3] = 100000;
  v12[4] = 100000;
  v12[5] = 100000;
  v12[6] = 100000;
  v12[7] = 100000;
  v12[8] = 50000;
  v12[9] = 100000;
  v12[10] = 25000;
  v12[11] = 50000;
  v12[12] = 12500;
  v12[13] = 25000;
  v12[14] = 5000;
  v12[15] = 10000;
  v12[16] = 1000;
  v12[17] = 2000;
  v12[18] = 200;
  v12[19] = 400;
  v12[20] = 50;
  v12[21] = 100;
  v12[22] = 25;
  v12[23] = 50;
  v12[24] = 10;
  v12[25] = 20;
  v12[26] = 5;
  v12[27] = 10;
  memset(&v12[28], 0, 24);
  v12[34] = 5;
  v12[35] = 10;
  v12[36] = 5;
  v12[37] = 10;
  v12[38] = 10;
  v12[39] = 20;
  v12[40] = 500;
  v12[41] = 1000;
  v7[0] = 250000;
  v7[1] = 50000;
  v7[2] = 3000;
  v7[3] = 1000;
  v7[4] = 200;
  v7[5] = 40;
  v7[6] = 10;
  v7[7] = 3;
  v7[8] = 1;
  v7[9] = 1;
  v7[10] = 1;
  v7[11] = 1;
  v7[12] = 1;
  v7[13] = 3;
  v7[14] = 10;
  v7[15] = 40;
  v7[16] = 200;
  v7[17] = 1000;
  v7[18] = 3000;
  v7[19] = 50000;
  v7[20] = 250000;
  v8[0] = 25000;
  v8[1] = 1500;
  v8[2] = 300;
  v8[3] = 30;
  v8[4] = 10;
  v8[5] = 3;
  v8[6] = 1;
  v8[7] = 1;
  v8[8] = 1;
  v8[9] = 1;
  v8[10] = 1;
  v8[11] = 3;
  v8[12] = 10;
  v8[13] = 50;
  v8[14] = 200;
  v8[15] = 1000;
  v8[16] = 5000;
  v8[17] = 25000;
  v8[18] = 60000;
  v8[19] = 100000;
  v8[20] = 250000;
  v11[317] = 1;
  v11[318] = 2;
  v11[319] = 2;
  v11[320] = 2;
  v11[321] = 3;
  v11[322] = 3;
  v11[323] = 4;
  v11[324] = 5;
  v11[325] = 5;
  v11[326] = 5;
  v11[327] = 6;
  v11[328] = 6;
  v11[329] = 6;
  v11[330] = 6;
  v11[331] = 7;
  memset(&v10[1], 0, 12);
  v10[4] = 3;
  v10[5] = 4;
  v10[6] = 4;
  v7[23] = 0;
  v7[24] = 1;
  v7[25] = 2;
  v7[26] = 4;
  v7[27] = 9;
  v7[28] = 14;
  v7[29] = 21;
  v7[30] = 25;
  v7[31] = 29;
  v7[32] = 34;
  v7[33] = 40;
  v7[34] = 46;
  v7[35] = 53;
  v7[36] = 61;
  v7[37] = 70;
  memset(&v8[22], 0, 12);
  v8[25] = 7;
  v8[26] = 12;
  v8[27] = 18;
  switch ( a5 )
  {
    case 5:
    case 14:
      v13 = 1;
      break;
    case 10:
    case 28:
      v13 = 2;
      break;
    case 20:
    case 70:
      v13 = 3;
      break;
    default:
      v13 = 0;
      break;
  }
  if ( a4 )
    v9 = v8[a2 + 21];
  else
    v9 = v7[a2 + 22];
  if ( a2 == 20 )
  {
    v13 = a5 != 5;
    v9 = 20 - a3;
  }
  if ( a1 >= 4 )
  {
    if ( a1 == 4 )
      return v8[a3];
    if ( a1 == 5 || a1 == 6 )
      return v7[a3];
  }
  else
  {
    if ( a2 >= 20 )
      return v12[2 * v9 + v13];
    if ( a4 )
      v6 = v10[a2];
    else
      v6 = v11[a2 + 316];
    if ( a3 >= v6 )
    {
      v10[0] = a2 - a3;
      return v11[4 * (a2 - a3) + 4 * v9 + v13];
    }
  }
  return 0;
}


//======================================================================
// sub_5E2860
// entry 005e2860  size 816  status ok
//======================================================================

int __thiscall sub_5E2860(_DWORD *this, char *a2)
{
  char v3; // [esp+0h] [ebp-24h]
  int k; // [esp+8h] [ebp-1Ch]
  int v6; // [esp+Ch] [ebp-18h]
  int v7; // [esp+10h] [ebp-14h]
  int v8; // [esp+14h] [ebp-10h]
  int i; // [esp+18h] [ebp-Ch]
  int j; // [esp+18h] [ebp-Ch]
  int m; // [esp+18h] [ebp-Ch]
  int n; // [esp+18h] [ebp-Ch]
  int ii; // [esp+18h] [ebp-Ch]
  int v14; // [esp+1Ch] [ebp-8h]
  int v15; // [esp+20h] [ebp-4h]

  v6 = sub_5E10D0(this);
  v15 = 0;
  v7 = 0;
  v8 = 0;
  if ( *a2 <= 3 )
  {
    for ( i = 0; i < 20 && a2[i + 5]; ++i )
      ++v15;
    for ( j = 0; j < 20; ++j )
    {
      for ( k = 0; k < v15; ++k )
      {
        if ( a2[k + 5] == *((char *)this + 20 * v6 + j + 156) )
          ++v7;
      }
    }
LABEL_14:
    sub_5E7E00(0, 9, v7);
    return sub_5E15B0(*a2, v15, v7, a2[3] != 0, a2[1]);
  }
  v3 = *a2;
  if ( *a2 == 4 )
  {
    for ( m = 0; m < 20; ++m )
    {
      if ( *((char *)this + 20 * v6 + m + 156) > 1 && *((char *)this + 20 * v6 + m + 156) < 10
        || (unsigned int)(*((char *)this + 20 * v6 + m + 156) % 10) < 2
        || *((char *)this + 20 * v6 + m + 156) > 71 && *((char *)this + 20 * v6 + m + 156) < 80 )
      {
        ++v7;
      }
    }
    goto LABEL_14;
  }
  if ( v3 == 5 )
  {
    for ( n = 0; n < 20; ++n )
    {
      if ( *((char *)this + 20 * v6 + n + 156) >= 41 )
        ++v8;
      else
        ++v7;
    }
  }
  else
  {
    if ( v3 != 6 )
      return sub_5E15B0(*a2, v15, v7, a2[3] != 0, a2[1]);
    for ( ii = 0; ii < 20; ++ii )
    {
      if ( *((char *)this + 20 * v6 + ii + 156) % 10 <= 0 || *((char *)this + 20 * v6 + ii + 156) % 10 >= 6 )
        ++v8;
      else
        ++v7;
    }
  }
  v14 = abs(v7 - v8);
  sub_5E7E00(0, 9, v14);
  return sub_5E15B0(*a2, v15, v7, a2[3] != 0, a2[1]);
}


//======================================================================
// sub_5E2B90
// entry 005e2b90  size 165  status ok
//======================================================================

int __stdcall sub_5E2B90(char *Str2, char *a2, int a3)
{
  int v3; // eax
  CImageDisplay *v4; // eax
  int result; // eax
  int v6; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  v3 = sub_6369B0(Str2);
  v4 = (CImageDisplay *)sub_5DCB00(v3);
  result = sub_5D52E0(v4);
  v6 = result;
  if ( !result )
    result = sub_5E9F20((char)"cSettings", "..\\Casino\\casinoshell.cpp", 2625);
  if ( a3 == -1 )
  {
    for ( i = 0; i < 100; ++i )
    {
      result = 36 * i;
      qmemcpy(&a2[36 * i], (const void *)(v6 + 36 * i + 96), 0x24u);
    }
  }
  else
  {
    qmemcpy(a2, (const void *)(v6 + 36 * a3 + 96), 0x24u);
    return v6;
  }
  return result;
}


//======================================================================
// sub_5E2C40
// entry 005e2c40  size 502  status ok
//======================================================================

int __stdcall sub_5E2C40(char *Str2, const void *a2, int a3, int a4)
{
  int v4; // eax
  CImageDisplay *v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // [esp+Ch] [ebp-52Ch]
  int v10; // [esp+10h] [ebp-528h]
  char Buffer[16]; // [esp+18h] [ebp-520h] BYREF
  int v12; // [esp+28h] [ebp-510h]
  void (__thiscall ***v13[319])(_DWORD, int); // [esp+2Ch] [ebp-50Ch] BYREF
  int v14; // [esp+534h] [ebp-4h]

  sub_5D4CF0((char *)v13);
  v14 = 0;
  if ( (unsigned __int8)sub_6368B0(Str2) )
  {
    v4 = sub_6369B0(Str2);
    v5 = (CImageDisplay *)sub_5DCB00(v4);
    v12 = sub_5D52E0(v5);
    qmemcpy((void *)(v12 + 36 * a3 + 96), a2, 0x24u);
    *(_DWORD *)(v12 + 44) += a4;
    if ( *(int *)(v12 + 44) >= 1000000000 )
      v10 = 1000000000;
    else
      v10 = *(_DWORD *)(v12 + 44);
    *(_DWORD *)(v12 + 44) = v10;
    v6 = sub_6369B0(Str2);
    v7 = sub_5DCB00(v6);
    sub_63B0A0(v7);
  }
  else if ( (unsigned __int8)sub_635F30(Str2, Buffer) )
  {
    sub_63AB10(Buffer);
    v12 = sub_5D52E0((CImageDisplay *)v13);
    qmemcpy((void *)(v12 + 36 * a3 + 96), a2, 0x24u);
    *(_DWORD *)(v12 + 44) += a4;
    if ( *(int *)(v12 + 44) >= 1000000000 )
      v9 = 1000000000;
    else
      v9 = *(_DWORD *)(v12 + 44);
    *(_DWORD *)(v12 + 44) = v9;
    sub_63B0A0(v13);
  }
  v14 = -1;
  return sub_5D4F50(v13);
}


//======================================================================
// sub_5E2E40
// entry 005e2e40  size 283  status ok
//======================================================================

int __stdcall sub_5E2E40(char *Str2, int a2)
{
  int v2; // eax
  CImageDisplay *v3; // eax
  int v4; // eax
  int v5; // eax
  int v7; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  v2 = sub_6369B0(Str2);
  v3 = (CImageDisplay *)sub_5DCB00(v2);
  v7 = sub_5D52E0(v3);
  if ( !v7 )
    sub_5E9F20((char)"cSettings", "..\\Casino\\casinoshell.cpp", 2668);
  while ( a2 < 99 )
  {
    qmemcpy((void *)(v7 + 36 * a2 + 96), (const void *)(v7 + 36 * (a2 + 1) + 96), 0x24u);
    ++a2;
  }
  *(_BYTE *)(v7 + 3660) = -1;
  *(_BYTE *)(v7 + 3661) = 1;
  *(_BYTE *)(v7 + 3662) = 1;
  *(_BYTE *)(v7 + 3663) = 0;
  *(_BYTE *)(v7 + 3664) = 0;
  *(_DWORD *)(v7 + 3688) = 0;
  *(_DWORD *)(v7 + 3692) = -1000;
  for ( i = 0; i < 20; ++i )
    *(_BYTE *)(i + v7 + 3665) = 0;
  v4 = sub_6369B0(Str2);
  v5 = sub_5DCB00(v4);
  return sub_63B0A0(v5);
}


//======================================================================
// sub_5E2F60
// entry 005e2f60  size 37  status ok
//======================================================================

char __thiscall sub_5E2F60(void *this)
{
  CImageDisplay *v1; // eax

  v1 = (CImageDisplay *)sub_5DE600(this);
  return *(_BYTE *)(sub_5D52E0(v1) + 94);
}


//======================================================================
// sub_5E2F90
// entry 005e2f90  size 407  status ok
//======================================================================

int __thiscall sub_5E2F90(int this)
{
  *(_BYTE *)(this + 20280) = *(_BYTE *)(this + 20200);
  *(_BYTE *)(this + 20281) = *(_BYTE *)(this + 20201);
  *(_BYTE *)(this + 20282) = *(_BYTE *)(this + 20202);
  *(_DWORD *)(this + 20284) = *(_DWORD *)(this + 20204);
  *(_DWORD *)(this + 20288) = *(_DWORD *)(this + 20208);
  *(_DWORD *)(this + 20292) = *(_DWORD *)(this + 20212);
  *(_DWORD *)(this + 20296) = *(_DWORD *)(this + 20216);
  *(_DWORD *)(this + 20300) = *(_DWORD *)(this + 20220);
  *(_DWORD *)(this + 20304) = *(_DWORD *)(this + 20224);
  *(_BYTE *)(this + 20308) = *(_BYTE *)(this + 20228);
  *(_BYTE *)(this + 20309) = *(_BYTE *)(this + 20229);
  *(_DWORD *)(this + 20312) = *(_DWORD *)(this + 20232);
  *(_DWORD *)(this + 20316) = *(_DWORD *)(this + 20236);
  *(_DWORD *)(this + 20320) = *(_DWORD *)(this + 20240);
  *(_DWORD *)(this + 20324) = *(_DWORD *)(this + 20244);
  *(_DWORD *)(this + 20328) = *(_DWORD *)(this + 20248);
  *(_DWORD *)(this + 20332) = *(_DWORD *)(this + 20252);
  *(_DWORD *)(this + 20336) = *(_DWORD *)(this + 20256);
  *(_DWORD *)(this + 20340) = *(_DWORD *)(this + 20260);
  *(_DWORD *)(this + 20344) = *(_DWORD *)(this + 20264);
  *(_DWORD *)(this + 20348) = *(_DWORD *)(this + 20268);
  *(_DWORD *)(this + 20352) = *(_DWORD *)(this + 20272);
  return this;
}


//======================================================================
// sub_5E3130
// entry 005e3130  size 407  status ok
//======================================================================

int __thiscall sub_5E3130(int this)
{
  *(_BYTE *)(this + 20200) = *(_BYTE *)(this + 20280);
  *(_BYTE *)(this + 20201) = *(_BYTE *)(this + 20281);
  *(_BYTE *)(this + 20202) = *(_BYTE *)(this + 20282);
  *(_DWORD *)(this + 20204) = *(_DWORD *)(this + 20284);
  *(_DWORD *)(this + 20208) = *(_DWORD *)(this + 20288);
  *(_DWORD *)(this + 20212) = *(_DWORD *)(this + 20292);
  *(_DWORD *)(this + 20216) = *(_DWORD *)(this + 20296);
  *(_DWORD *)(this + 20220) = *(_DWORD *)(this + 20300);
  *(_DWORD *)(this + 20224) = *(_DWORD *)(this + 20304);
  *(_BYTE *)(this + 20228) = *(_BYTE *)(this + 20308);
  *(_BYTE *)(this + 20229) = *(_BYTE *)(this + 20309);
  *(_DWORD *)(this + 20232) = *(_DWORD *)(this + 20312);
  *(_DWORD *)(this + 20236) = *(_DWORD *)(this + 20316);
  *(_DWORD *)(this + 20240) = *(_DWORD *)(this + 20320);
  *(_DWORD *)(this + 20244) = *(_DWORD *)(this + 20324);
  *(_DWORD *)(this + 20248) = *(_DWORD *)(this + 20328);
  *(_DWORD *)(this + 20252) = *(_DWORD *)(this + 20332);
  *(_DWORD *)(this + 20256) = *(_DWORD *)(this + 20336);
  *(_DWORD *)(this + 20260) = *(_DWORD *)(this + 20340);
  *(_DWORD *)(this + 20264) = *(_DWORD *)(this + 20344);
  *(_DWORD *)(this + 20268) = *(_DWORD *)(this + 20348);
  *(_DWORD *)(this + 20272) = *(_DWORD *)(this + 20352);
  return this;
}


//======================================================================
// sub_5E3310
// entry 005e3310  size 655  status ok
//======================================================================

char __thiscall sub_5E3310(_DWORD *this, int a2)
{
  int v2; // eax
  int *v3; // eax
  const char *v4; // eax
  int v6; // [esp-4h] [ebp-98h]
  int v7; // [esp-4h] [ebp-98h]
  int v8; // [esp+0h] [ebp-94h]
  CImageDisplay *v11; // [esp+10h] [ebp-84h]
  int v12; // [esp+1Ch] [ebp-78h] BYREF
  CImageDisplay *v13; // [esp+24h] [ebp-70h]
  char Source[52]; // [esp+28h] [ebp-6Ch] BYREF
  char Destination[52]; // [esp+5Ch] [ebp-38h] BYREF

  v13 = *(CImageDisplay **)(*(this + 111) + 4 * a2);
  v11 = *(CImageDisplay **)(*(this + 111) + 4 * a2);
  if ( CImageDisplay::GetDisplayFormat(v11)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v11)->rcSource.left == 3 )
  {
    if ( !sub_5FB2B0(a2 + 10) )
    {
      v6 = sub_5F9CE0(
             0,
             a2 + 10,
             1053,
             *(_DWORD *)(*(this + 112) + 8 * a2) + 107,
             *(_DWORD *)(*(this + 112) + 8 * a2 + 4) + 72,
             1,
             0,
             255,
             0);
      sub_5FB480(4, 0);
      sub_5FF5A0(v6);
      v8 = sub_5FB2B0(a2 + 10);
      v2 = sub_5D52E0(v13);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 176))(v8, *(char *)(v2 + 42));
    }
    if ( !sub_5FB550(a2 + 10) )
    {
      v7 = sub_5FA5B0(
             0,
             a2 + 10,
             &::Source,
             31,
             200,
             15,
             *(_DWORD *)(*(this + 112) + 8 * a2),
             *(_DWORD *)(*(this + 112) + 8 * a2 + 4) + 110,
             1,
             5,
             -1);
      sub_5FB480(4, 0);
      sub_5FF5A0(v7);
    }
    v3 = sub_5D5A90(*(CImageDisplay **)(*(this + 111) + 4 * a2), &v12);
    sub_64C8D0(*v3, v3[1], Source, 1, 1, 1);
    v4 = (const char *)sub_630F40("SID_SHELL_BANK_COLON");
    strcpy(Destination, v4);
    strcat(Destination, Source);
    sub_5FB5A0(a2 + 10, Destination);
  }
  else
  {
    sub_5FBC80(0, a2 + 10);
    sub_5FBD40(0, a2 + 10);
  }
  return 1;
}


//======================================================================
// sub_5E35A0
// entry 005e35a0  size 49  status ok
//======================================================================

char __stdcall sub_5E35A0(int a1)
{
  sub_5FBC80(0, a1 + 10);
  sub_5FBD40(0, a1 + 10);
  return 1;
}


//======================================================================
// sub_5E35E0
// entry 005e35e0  size 203  status ok
//======================================================================

char __thiscall sub_5E35E0(_DWORD *this, int a2)
{
  int v2; // eax
  int *v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  __int64 v9; // [esp-8h] [ebp-30h]
  __int64 v11; // [esp+8h] [ebp-20h]
  _BYTE v12[8]; // [esp+10h] [ebp-18h] BYREF
  __int64 v13; // [esp+18h] [ebp-10h]
  int v14; // [esp+20h] [ebp-8h] BYREF

  if ( sub_5DA830() )
  {
    v2 = sub_5DA880();
    v13 = sub_64C8A0(v2, 0);
    v9 = v13;
    sub_5D5A90(*(CImageDisplay **)(*(this + 111) + 4 * a2), &v14);
    v3 = (int *)sub_64C630(v12, v9, HIDWORD(v9));
    v4 = *v3;
    v5 = v3[1];
    v6 = *(_DWORD *)(*(this + 111) + 4 * a2);
    *(_DWORD *)(v6 + 1204) = v4;
    *(_DWORD *)(v6 + 1208) = v5;
    v7 = sub_5DA880();
    v11 = sub_64C8A0(v7, 0);
    *(_QWORD *)sub_5D52E0(*(CImageDisplay **)(*(this + 111) + 4 * a2)) = v11;
  }
  return 1;
}


//======================================================================
// sub_5E36B0
// entry 005e36b0  size 53  status ok
//======================================================================

_DWORD *__thiscall sub_5E36B0(_DWORD *this, char a2, char a3, int a4, int a5, char a6)
{
  sub_65DBD0(a2, a3, a4, a5, a6);
  *this = off_6D50F4;
  return this;
}


//======================================================================
// sub_5E3710
// entry 005e3710  size 16  status ok
//======================================================================

int sub_5E3710()
{
  return 3200223;
}


//======================================================================
// sub_5E3720
// entry 005e3720  size 16  status ok
//======================================================================

int sub_5E3720()
{
  return 375;
}


//======================================================================
// sub_5E3730
// entry 005e3730  size 16  status ok
//======================================================================

int sub_5E3730()
{
  return 235;
}


//======================================================================
// sub_5E3740
// entry 005e3740  size 16  status ok
//======================================================================

int sub_5E3740()
{
  return 46;
}


//======================================================================
// sub_5E3850
// entry 005e3850  size 72  status ok
//======================================================================

char __stdcall sub_5E3850(int a1, const char *a2)
{
  char Buffer[16]; // [esp+4h] [ebp-14h] BYREF

  sprintf(Buffer, "%s.pok", a2);
  remove(Buffer);
  return 1;
}


//======================================================================
// sub_5E38A0
// entry 005e38a0  size 904  status ok
//======================================================================

char sub_5E38A0()
{
  int v0; // eax
  int *v1; // eax
  int v2; // edx
  _DWORD *v3; // eax
  int *v4; // eax
  const char *v5; // eax
  int v6; // eax
  const struct tagVIDEOINFO *DisplayFormat; // eax
  int v9; // [esp+0h] [ebp-B4h]
  int v10; // [esp+8h] [ebp-ACh]
  int v11; // [esp+Ch] [ebp-A8h]
  char v12; // [esp+17h] [ebp-9Dh]
  int v13; // [esp+24h] [ebp-90h] BYREF
  int v14; // [esp+2Ch] [ebp-88h] BYREF
  CImageDisplay *v15; // [esp+34h] [ebp-80h]
  CImageDisplay *v16; // [esp+38h] [ebp-7Ch]
  char Source[52]; // [esp+3Ch] [ebp-78h] BYREF
  int v18; // [esp+70h] [ebp-44h]
  char Destination[52]; // [esp+74h] [ebp-40h] BYREF
  int v20; // [esp+ACh] [ebp-8h]
  int v21; // [esp+B0h] [ebp-4h]

  v18 = 0;
  v16 = 0;
  if ( !sub_5FB2B0(2) )
    sub_5F9CE0(0, 2, 1089, 20, 214, 1, 0, 255, 0);
  if ( !sub_5FB550(3) )
    sub_5FA5B0(0, 3, &::Source, 31, 240, 20, 0, 234, 1, 48, -1);
  if ( !sub_5FB550(4) )
    sub_5FA5B0(0, 4, &::Source, 40, 200, 15, 43, 306, 2, 5, -1);
  if ( !sub_5FB550(5) )
    sub_5FA5B0(0, 5, &::Source, 40, 110, 15, 43, 329, 3, 5, -1);
  if ( sub_5FB720(0) && (v11 = sub_5FB720(0), (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 184))(v11)) )
  {
    v0 = sub_5FB720(0);
    v18 = sub_5E4390(v0);
    if ( v18 )
    {
      v15 = (CImageDisplay *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 796))(dword_7947E0);
      sub_63AB10((char *)(v18 + 20));
      v16 = v15;
      v1 = sub_5D5970(v15, &v14);
      v2 = v1[1];
      v20 = *v1;
      v21 = v2;
      if ( v20 )
      {
        v3 = (_DWORD *)sub_5D52E0(v16);
        *v3 = v20;
        v3[1] = v21;
        v20 = 0;
        v21 = 0;
        sub_5D59E0(v16, 0, 0);
        sub_63B0A0(v15);
      }
      v10 = sub_5FB2B0(2);
      v12 = *(_BYTE *)(sub_5D52E0(v15) + 42);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 176))(v10, v12);
      v4 = sub_5D5A90(v15, &v13);
      sub_64C8D0(*v4, v4[1], Source, 1, 1, 1);
      v5 = (const char *)sub_630F40("SID_SHELL_BANK_COLON");
      strcpy(Destination, v5);
      strcat(Destination, Source);
      sub_5FB5A0(3, Destination);
      v6 = sub_5D52E0(v15);
      sub_5FB5A0(4, v6 + 16);
      DisplayFormat = CImageDisplay::GetDisplayFormat(v15);
      sub_5FB5A0(5, &DisplayFormat->rcSource.top);
      if ( v15 )
        (**(void (__thiscall ***)(CImageDisplay *, int))v15)(v15, 1);
    }
  }
  else
  {
    v9 = sub_5FB2B0(2);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 176))(v9, 0);
    sub_5FB5A0(3, &::Source);
    sub_5FB5A0(4, &::Source);
    sub_5FB5A0(5, &::Source);
  }
  return 1;
}


//======================================================================
// sub_5E3C30
// entry 005e3c30  size 81  status ok
//======================================================================

char __thiscall sub_5E3C30(void *this)
{
  const CHAR *v1; // eax
  const CHAR *v3; // [esp-8h] [ebp-Ch]

  if ( !sub_5DA830() )
    return 1;
  v3 = (const CHAR *)sub_630F40("SID_SHELL_TOURNAMENT");
  v1 = (const CHAR *)sub_630F40("SID_SHELL_NOMOREHUMANS");
  sub_62FF10(v1, v3, 0);
  sub_65FAE0(this);
  return 0;
}


//======================================================================
// sub_5E3CD0
// entry 005e3cd0  size 19  status ok
//======================================================================

int __thiscall sub_5E3CD0(void *this)
{
  return sub_654A50(this, this);
}


//======================================================================
// sub_5E3CF0
// entry 005e3cf0  size 199  status ok
//======================================================================

int __thiscall sub_5E3CF0(void *this)
{
  int v1; // eax
  int v2; // eax
  char *v3; // eax

  v1 = sub_630F40("SID_CASINO_SHOWBETAMOUNTS");
  sub_5F9EF0(0, 3200000, 3200201, 14, 195, 1, v1, 31, 69, 66, -1, 20, 0);
  v2 = sub_630F40("SID_CASINO_PLAYALONE");
  sub_5F9EF0(0, 3200001, 3200201, 14, 220, 1, v2, 31, 69, 66, -1, 20, 0);
  v3 = (char *)sub_630F40("SID_SHELL_GAMEPLAY");
  sub_5FA790(0, -1, v3, 72, 243, 92, 9, 178, 1, 120, 124, 161, 255, 255, 255, 0);
  return sub_654A60(this);
}


//======================================================================
// sub_5E3DC0
// entry 005e3dc0  size 193  status ok
//======================================================================

int __thiscall sub_5E3DC0(void *this)
{
  int result; // eax
  int v2; // eax
  int v3; // [esp+4h] [ebp-14h]
  int v4; // [esp+8h] [ebp-10h]
  CImageDisplay *v6; // [esp+14h] [ebp-4h]

  if ( sub_5DE860(dword_162EE84) )
  {
    v4 = sub_5FB350(3200000);
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 244))(v4);
  }
  v6 = (CImageDisplay *)sub_6375B0(dword_162EE84);
  if ( !*(_BYTE *)(sub_5D52E0(v6) + 93) )
  {
    v3 = sub_5FB350(3200001);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 244))(v3);
  }
  result = sub_655360(this);
  if ( byte_795F94 )
  {
    result = sub_5FB350(12);
    if ( result )
    {
      v2 = sub_5FB350(12);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 204))(v2, v2);
    }
  }
  return result;
}


//======================================================================
// sub_5E3E90
// entry 005e3e90  size 488  status ok
//======================================================================

int __thiscall sub_5E3E90(void *this)
{
  int v1; // eax
  int v2; // eax
  const CHAR *v3; // eax
  int v4; // eax
  CImageDisplay *v5; // eax
  int v6; // eax
  int result; // eax
  const CHAR *v8; // [esp-8h] [ebp-34h]
  char v9; // [esp-4h] [ebp-30h]
  void *v10; // [esp+0h] [ebp-2Ch]
  bool v11; // [esp+7h] [ebp-25h]
  CImageDisplay *v12; // [esp+8h] [ebp-24h]
  CImageDisplay *v13; // [esp+14h] [ebp-18h]
  BYTE v14; // [esp+1Bh] [ebp-11h]
  CImageDisplay *v15; // [esp+1Ch] [ebp-10h]
  char v16; // [esp+21h] [ebp-Bh]
  char v17; // [esp+22h] [ebp-Ah]
  char v18; // [esp+23h] [ebp-9h]
  int i; // [esp+24h] [ebp-8h]
  CImageDisplay *v20; // [esp+28h] [ebp-4h]

  v10 = this;
  v1 = sub_5FB350(12);
  v14 = sub_600230(v1);
  v15 = (CImageDisplay *)sub_6375B0(dword_162EE84);
  CImageDisplay::GetDisplayFormat(v15)->bmiColors[129].rgbGreen = v14;
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 828))(
         dword_162EE84,
         -1) )
  {
    v13 = (CImageDisplay *)sub_5DE600(dword_162EE84);
    v17 = *(_BYTE *)(sub_5D52E0(v13) + 93) == 0;
    v2 = sub_5FB350(3200001);
    v18 = sub_600230(v2);
    if ( v17 != v18 )
    {
      v16 = 0;
      for ( i = 0;
            i < (*(int (__thiscall **)(Concurrency::details::ContextBase *, void *))(*(_DWORD *)dword_162EE84 + 268))(
                  dword_162EE84,
                  v10);
            ++i )
      {
        v20 = (CImageDisplay *)sub_5DCB00(i);
        if ( v20
          && CImageDisplay::GetDisplayFormat(v20)->rcSource.left == 1
          && *((_DWORD *)v20 + 8)
          && !(unsigned __int8)sub_646CB0(*((_DWORD *)v20 + 8)) )
        {
          v16 = 1;
          break;
        }
      }
      if ( v16 && v18 || !v16 && !v18 )
      {
        v8 = (const CHAR *)sub_630F40("SID_GENERIC_WARNING");
        v3 = (const CHAR *)sub_630F40("SID_CASINO_RESTART_GAME_FOR_CHANGES");
        sub_62FF10(v3, v8, 0);
      }
    }
  }
  v4 = sub_5FB350(3200000);
  v9 = sub_600230(v4);
  v5 = (CImageDisplay *)sub_5DE600(dword_162EE84);
  sub_5D5480(v5, v9);
  v6 = sub_5FB350(3200001);
  v11 = (unsigned __int8)sub_600230(v6) == 0;
  v12 = (CImageDisplay *)sub_5DE600(dword_162EE84);
  result = sub_5D52E0(v12);
  *(_BYTE *)(result + 93) = v11;
  return result;
}


//======================================================================
// sub_5E4080
// entry 005e4080  size 211  status ok
//======================================================================

char __thiscall sub_5E4080(_DWORD *this, int a2)
{
  int v2; // eax
  int v4; // eax
  int v6; // [esp+4h] [ebp-10h]
  int v7; // [esp+Ch] [ebp-8h]

  v2 = sub_5FB350(3200000);
  if ( (unsigned __int8)sub_656230(a2, v2) )
  {
    v7 = sub_630F40("SID_SHELL_ENVIRONMENT_ROLLOVER_BET_AMOUNTS");
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 111) + 108) + 180))(
      *(_DWORD *)(*(this + 111) + 108),
      v7);
    return 1;
  }
  else
  {
    v4 = sub_5FB350(3200001);
    if ( (unsigned __int8)sub_656230(a2, v4) )
    {
      v6 = sub_630F40("SID_SHELL_ENVIRONMENT_ROLLOVER_PLAY_ALONE");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 111) + 108) + 180))(
        *(_DWORD *)(*(this + 111) + 108),
        v6);
      return 1;
    }
    else
    {
      return sub_655D10(a2);
    }
  }
}


//======================================================================
// sub_5E4160
// entry 005e4160  size 36  status ok
//======================================================================

int __thiscall sub_5E4160(Concurrency::details::ContextBase *this)
{
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax

  ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(this);
  return (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)this + 224))(
           this,
           ExecutingCollection);
}


//======================================================================
// sub_5E41F0
// entry 005e41f0  size 16  status ok
//======================================================================

const char *sub_5E41F0()
{
  return "l8n-";
}


//======================================================================
// sub_5E4200
// entry 005e4200  size 16  status ok
//======================================================================

int sub_5E4200()
{
  return 3200232;
}


//======================================================================
// sub_5E4210
// entry 005e4210  size 46  status ok
//======================================================================

_DWORD *__stdcall sub_5E4210(_DWORD *a1, int a2)
{
  *a1 = 0;
  a1[1] = 0;
  return a1;
}


//======================================================================
// sub_5E4240
// entry 005e4240  size 16  status ok
//======================================================================

int sub_5E4240()
{
  return 300;
}


//======================================================================
// sub_5E4250
// entry 005e4250  size 46  status ok
//======================================================================

_DWORD *__stdcall sub_5E4250(_DWORD *a1)
{
  *a1 = 0;
  a1[1] = 0;
  return a1;
}


//======================================================================
// sub_5E4280
// entry 005e4280  size 36  status ok
//======================================================================

int __thiscall sub_5E4280(void *this, int a2)
{
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 740))(this, a2);
  return a2;
}


//======================================================================
// sub_5E42B0
// entry 005e42b0  size 16  status ok
//======================================================================

int sub_5E42B0()
{
  return 3200249;
}


//======================================================================
// sub_5E42C0
// entry 005e42c0  size 16  status ok
//======================================================================

int sub_5E42C0()
{
  return 316;
}


//======================================================================
// sub_5E42D0
// entry 005e42d0  size 19  status ok
//======================================================================

int __stdcall sub_5E42D0(int a1, int a2, int a3)
{
  return a2 + a1;
}


//======================================================================
// sub_5E42F0
// entry 005e42f0  size 15  status ok
//======================================================================

char __stdcall sub_5E42F0(int a1)
{
  return 0;
}


//======================================================================
// sub_5E4390
// entry 005e4390  size 67  status ok
//======================================================================

int __thiscall sub_5E4390(Concurrency::details::UMSFreeVirtualProcessorRoot *this)
{
  struct Concurrency::details::UMSThreadProxy *ExecutingProxy; // [esp+8h] [ebp-4h]

  if ( Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(this) == (struct Concurrency::details::UMSThreadProxy *)-1 )
    return 0;
  ExecutingProxy = Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(this);
  return sub_60CA40(ExecutingProxy);
}


//======================================================================
// sub_5E4410
// entry 005e4410  size 100  status ok
//======================================================================

_DWORD *__thiscall sub_5E4410(_DWORD *this)
{
  sub_5D7B60(this);
  *this = &CasinoDemoNavigationRoom::`vftable';
  sub_5F1AD0(3218000);
  return this;
}


//======================================================================
// sub_5E44A0
// entry 005e44a0  size 1117  status ok
//======================================================================

int __thiscall sub_5E44A0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v4; // [esp+4h] [ebp-74h]
  int v5; // [esp+8h] [ebp-70h]
  int v6; // [esp+Ch] [ebp-6Ch]
  int v7; // [esp+10h] [ebp-68h]
  int v8; // [esp+14h] [ebp-64h]
  int v9; // [esp+18h] [ebp-60h]
  int v10; // [esp+1Ch] [ebp-5Ch]
  int v11; // [esp+20h] [ebp-58h]
  void *v12; // [esp+28h] [ebp-50h]
  void *v13; // [esp+30h] [ebp-48h]
  int v14; // [esp+68h] [ebp-10h]
  int v15; // [esp+68h] [ebp-10h]

  sub_5D8230(this);
  if ( operator new(0x1E8u) )
    v11 = sub_603120(3218000, 3218001, 3218001);
  else
    v11 = 0;
  sub_5F9DE0(v11, 3218001, 3218001, 0, 0, 1, &Source, -1, -1, -1, -1, 0);
  if ( operator new(0x1E8u) )
    v10 = sub_603120(3218000, 3218002, 3218002);
  else
    v10 = 0;
  sub_5F9DE0(v10, 3218002, 3218002, 0, 0, 1, &Source, -1, -1, -1, -1, 0);
  if ( operator new(0x1E8u) )
    v9 = sub_603120(3218000, 3218003, 3218003);
  else
    v9 = 0;
  sub_5F9DE0(v9, 3218003, 3218003, 0, 0, 1, &Source, -1, -1, -1, -1, 0);
  if ( operator new(0x1E8u) )
    v8 = sub_603120(3218000, 3218004, 3218004);
  else
    v8 = 0;
  sub_5F9DE0(v8, 3218004, 3218004, 0, 0, 1, &Source, -1, -1, -1, -1, 0);
  if ( operator new(0x1E8u) )
    v7 = sub_603120(3218000, 3218004, 3218004);
  else
    v7 = 0;
  sub_5F9DE0(v7, 3218005, 3218005, 0, 0, 1, &Source, -1, -1, -1, -1, 0);
  v14 = sub_5F9CE0(0, 3218008, 3218007, 0, 0, 3, 0, 255, 0);
  v1 = sub_5EB240(v14);
  v2 = sub_62FC30(0, v1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 176))(v14, v2);
  v15 = sub_5F9CE0(0, 3218009, 3218007, 0, 0, 2, 0, 255, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 112))(v15);
  if ( operator new(0x1E8u) )
    v6 = sub_603120(3218000, 3218004, 3218004);
  else
    v6 = 0;
  sub_5F9DE0(v6, 3218006, 3218006, 0, 0, 1, &Source, -1, -1, -1, -1, 0);
  if ( byte_794908 )
  {
    v12 = operator new(0x20u);
    if ( v12 )
      v4 = sub_5E5840(v12);
    else
      v4 = 0;
    return sub_5F1B70(v4);
  }
  else
  {
    byte_794908 = 1;
    v13 = operator new(0x20u);
    if ( v13 )
      v5 = sub_5E4A00(v13);
    else
      v5 = 0;
    return sub_5F1B70(v5);
  }
}


//======================================================================
// sub_5E4900
// entry 005e4900  size 116  status ok
//======================================================================

char __stdcall sub_5E4900(int a1, int a2)
{
  if ( a2 == 100000 )
  {
    sub_5FE640(100006, 0);
    sub_5FE640(100004, 0);
    sub_5FE640(-2, 0);
  }
  else if ( a2 == 100056 )
  {
    sub_5FE640(100061, 0);
  }
  return sub_5D8670(a1, a2);
}


//======================================================================
// sub_5E4980
// entry 005e4980  size 110  status ok
//======================================================================

int __thiscall sub_5E4980(int this, int a2)
{
  int result; // eax

  if ( (unsigned __int8)sub_631420() )
    sub_5D7F40((_DWORD *)this, a2);
  if ( !byte_794909 )
    return sub_5D7F40((_DWORD *)this, a2);
  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 1 || *(_DWORD *)(a2 + 24) == 4 )
    result = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 4) + 8))(*(_DWORD *)(this + 4), 11, 0);
  *(_BYTE *)(a2 + 4) = 1;
  return result;
}


//======================================================================
// sub_5E4A00
// entry 005e4a00  size 33  status ok
//======================================================================

_DWORD *__thiscall sub_5E4A00(_DWORD *this)
{
  sub_5FC0D0(0);
  *this = &CasinoDemoMovieScript::`vftable';
  return this;
}


//======================================================================
// sub_5E4A50
// entry 005e4a50  size 3168  status ok
//======================================================================

int __thiscall sub_5E4A50(void *this)
{
  int v1; // kr00_4
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int result; // eax
  int v12; // eax
  int v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // [esp-10h] [ebp-8Ch]
  int v25; // [esp-10h] [ebp-8Ch]
  int v26; // [esp-10h] [ebp-8Ch]
  int v27; // [esp-8h] [ebp-84h]
  int v28; // [esp+10h] [ebp-6Ch]
  char v29; // [esp+14h] [ebp-68h]
  int v30; // [esp+20h] [ebp-5Ch]
  int v31; // [esp+24h] [ebp-58h]
  int v32; // [esp+28h] [ebp-54h]
  int v33; // [esp+2Ch] [ebp-50h]
  int v34; // [esp+30h] [ebp-4Ch]
  void *v36; // [esp+3Ch] [ebp-40h]
  int v37; // [esp+64h] [ebp-18h]
  _DWORD *v38; // [esp+68h] [ebp-14h]
  _DWORD *v39; // [esp+68h] [ebp-14h]
  _DWORD *v40; // [esp+68h] [ebp-14h]
  _DWORD *v41; // [esp+68h] [ebp-14h]
  int v42; // [esp+68h] [ebp-14h]
  int v43; // [esp+68h] [ebp-14h]
  int v44; // [esp+68h] [ebp-14h]
  int v45; // [esp+68h] [ebp-14h]
  int v46; // [esp+68h] [ebp-14h]
  int v47; // [esp+68h] [ebp-14h]
  int v48; // [esp+68h] [ebp-14h]
  int v49; // [esp+6Ch] [ebp-10h]
  int v50; // [esp+6Ch] [ebp-10h]

  v1 = unknown_libname_843(this);
  switch ( v1 )
  {
    case 0:
      byte_794909 = 1;
      v24 = sub_5F8570(*((_DWORD *)dword_162EE84 + 5)) / 2;
      v2 = sub_5F8550(*((_DWORD *)dword_162EE84 + 5));
      sub_5FA880(0, 3218106, v2, v24, 0, 0, 63000, 0, 0, 0, 1, 1, 1);
      v27 = sub_5F8570(*((_DWORD *)dword_162EE84 + 5)) / 2;
      v25 = sub_5F8570(*((_DWORD *)dword_162EE84 + 5)) / 2;
      v3 = sub_5F8550(*((_DWORD *)dword_162EE84 + 5));
      sub_5FA880(0, 3218107, v3, v25, 0, v27, 63000, 0, 0, 0, 1, 1, 1);
      sub_5F9B40(0, 3218100, 3218100, 160, 80, 64000, 0, 0, 0, 0, 255, 0);
      sub_5F9B40(0, 3218111, 3218101, 160, 250, 64000, 0, 0, 0, 0, 255, 0);
      sub_5F9B40(0, 3218112, 3218101, 270, 250, 64000, 0, 0, 0, 0, 255, 0);
      sub_5F9B40(0, 3218113, 3218101, 380, 250, 64000, 0, 0, 0, 0, 255, 0);
      v38 = (_DWORD *)sub_5F9B40(0, 3218108, 3218102, 160, 250, 64001, 0, 0, 0, 0, 255, 0);
      v4 = sub_5EB240(v38);
      v5 = sub_62FC30(0, v4);
      (*(void (__thiscall **)(_DWORD *, int))(*v38 + 176))(v38, v5);
      if ( operator new(0x1Cu) )
        v34 = sub_600A70(0);
      else
        v34 = 0;
      sub_5F5D50(v34);
      v38[94] = 5;
      v39 = (_DWORD *)sub_5F9B40(0, 3218109, 3218102, 270, 250, 64001, 0, 0, 0, 0, 255, 0);
      v6 = sub_5EB240(v39);
      v7 = sub_62FC30(0, v6);
      (*(void (__thiscall **)(_DWORD *, int))(*v39 + 176))(v39, v7);
      if ( operator new(0x1Cu) )
        v33 = sub_600A70(0);
      else
        v33 = 0;
      sub_5F5D50(v33);
      v39[94] = 5;
      v40 = (_DWORD *)sub_5F9B40(0, 3218110, 3218102, 380, 250, 64001, 0, 0, 0, 0, 255, 0);
      v8 = sub_5EB240(v40);
      v9 = sub_62FC30(0, v8);
      (*(void (__thiscall **)(_DWORD *, int))(*v40 + 176))(v40, v9);
      if ( operator new(0x1Cu) )
        v32 = sub_600A70(0);
      else
        v32 = 0;
      sub_5F5D50(v32);
      v40[94] = 5;
      dword_794918 = 0;
      v26 = sub_5F8570(*((_DWORD *)dword_162EE84 + 5));
      v10 = sub_5F8550(*((_DWORD *)dword_162EE84 + 5));
      sub_5FA880(0, 3218114, v10, v26, 0, 0, 65000, 0, 0, 0, 1, 1, 1);
      sub_6044B0(542523735, 3218100, 0);
      sub_6044B0(542523735, 3218101, 0);
      sub_6044B0(542655828, 3218103, 0);
      sub_6044B0(542655828, 3218104, 0);
      sub_6044B0(542655828, 3218105, 0);
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        3218100,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 1, 0);
      break;
    case 1:
      dword_794914 = 255;
      dword_794910 = 0;
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, 2, 5);
      break;
    case 2:
      dword_794914 -= 14;
      if ( dword_794914 >= 0 )
      {
        v29 = dword_794914;
        sub_5FB630(3218114);
        sub_5F62F0(v29);
        result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, 2, 5);
      }
      else
      {
        result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 3, 0);
      }
      break;
    case 3:
      sub_5FBD70(0, 3218114);
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, 4, 60);
      break;
    case 4:
      if ( dword_794918 >= 3 )
        goto LABEL_18;
      v41 = (_DWORD *)sub_5FB210(dword_794918 + 3218108);
      sub_5F5D50(0);
      sub_5EAF00(dword_794918 + 3218103);
      v12 = (*(int (__thiscall **)(_DWORD *))(*v41 + 84))(v41);
      (*(void (__thiscall **)(_DWORD *, int))(*v41 + 80))(v41, v12 + 30);
      v41[98] = 7;
      v41[97] = 1;
      if ( operator new(0x2Cu) )
      {
        v28 = (*(int (__thiscall **)(_DWORD *))(*v41 + 84))(v41) - 30;
        v13 = (*(int (__thiscall **)(_DWORD *))(*v41 + 76))(v41);
        v31 = sub_606E60(this, v13, v28, 0);
      }
      else
      {
        v31 = 0;
      }
      sub_5F6050(v31);
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        3218101,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, 5);
      break;
    case 5:
      if ( ++dword_794918 >= 3 )
LABEL_18:
        result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 6, 0);
      else
        result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, 4, 46);
      break;
    case 6:
      sub_5E56E0(3218100, 1);
      sub_5E56E0(3218111, 0);
      sub_5E56E0(3218112, 0);
      sub_5E56E0(3218113, 0);
      sub_5E56E0(3218108, 0);
      sub_5E56E0(3218109, 0);
      sub_5E56E0(3218110, 0);
      dword_79490C = 0;
      result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, 7);
      break;
    case 7:
      if ( dword_79490C <= 10 )
      {
        ++dword_79490C;
        result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, 7);
      }
      else
      {
        result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, 8, 10);
      }
      break;
    case 8:
      sub_5E57F0(3218100);
      sub_5E57F0(3218111);
      sub_5E57F0(3218112);
      sub_5E57F0(3218113);
      sub_5E57F0(3218108);
      sub_5E57F0(3218109);
      sub_5E57F0(3218110);
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, 9, 60);
      break;
    case 9:
      v37 = sub_5F8550(*((_DWORD *)dword_162EE84 + 5)) / 30;
      v49 = sub_5FB630(3218107);
      v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v49 + 76))(v49);
      if ( v14 <= sub_5F8550(*((_DWORD *)dword_162EE84 + 5)) )
      {
        v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v49 + 76))(v49);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v49 + 72))(v49, v37 + v15);
        v42 = sub_5FB210(3218111);
        v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v42 + 76))(v42);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v42 + 72))(v42, v37 + v16);
        v43 = sub_5FB210(3218112);
        v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v43 + 76))(v43);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v43 + 72))(v43, v37 + v17);
        v44 = sub_5FB210(3218113);
        v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v44 + 76))(v44);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v44 + 72))(v44, v37 + v18);
        v45 = sub_5FB210(3218108);
        v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v45 + 76))(v45);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v45 + 72))(v45, v37 + v19);
        v46 = sub_5FB210(3218109);
        v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v46 + 76))(v46);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v46 + 72))(v46, v37 + v20);
        v47 = sub_5FB210(3218110);
        v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v47 + 76))(v47);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v47 + 72))(v47, v37 + v21);
        v50 = sub_5FB630(3218106);
        v22 = (*(int (__thiscall **)(int))(*(_DWORD *)v50 + 76))(v50);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v50 + 72))(v50, v22 - v37);
        v48 = sub_5FB210(3218100);
        v23 = (*(int (__thiscall **)(int))(*(_DWORD *)v48 + 76))(v48);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v48 + 72))(v48, v23 - v37);
        result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, 9, 3);
      }
      else
      {
        result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 10, 0);
      }
      break;
    case 10:
      sub_5FBD70(0, 3218106);
      sub_5FBD70(0, 3218107);
      sub_5FBC80(0, 3218100);
      sub_5FBC80(0, 3218111);
      sub_5FBC80(0, 3218112);
      sub_5FBC80(0, 3218113);
      sub_5FBC80(0, 3218108);
      sub_5FBC80(0, 3218109);
      sub_5FBC80(0, 3218110);
      byte_794909 = 0;
      v36 = operator new(0x20u);
      if ( v36 )
        v30 = sub_5E5840(v36);
      else
        v30 = 0;
      sub_5F1B70(v30);
      result = (unsigned __int8)sub_636760(dword_162EE84);
      if ( (_BYTE)result && !dword_16306B0 )
        result = (*(int (__thiscall **)(int, int, _DWORD, int, int, _DWORD))(*(_DWORD *)dword_162EE80 + 364))(
                   dword_162EE80,
                   1,
                   0,
                   -1,
                   -1,
                   0);
      break;
    case 11:
      sub_5FBD70(0, 3218114);
      sub_5F44E0(3218100, 1);
      result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 10, 0);
      break;
    default:
      result = v1;
      break;
  }
  return result;
}


//======================================================================
// sub_5E56E0
// entry 005e56e0  size 264  status ok
//======================================================================

char __thiscall sub_5E56E0(void *this, int a2, char a3)
{
  int v4; // [esp+4h] [ebp-2Ch]
  int v5; // [esp+8h] [ebp-28h]
  int v7; // [esp+20h] [ebp-10h]

  v7 = sub_5FB210(a2);
  if ( !v7 )
    return 0;
  if ( a3 )
  {
    if ( operator new(0x1Cu) )
      v5 = sub_600B60(this);
    else
      v5 = 0;
    sub_5F5D50(v5);
  }
  else
  {
    if ( operator new(0x1Cu) )
      v4 = sub_600A70(0);
    else
      v4 = 0;
    sub_5F5D50(v4);
  }
  *(_DWORD *)(v7 + 376) = 10;
  return 1;
}


//======================================================================
// sub_5E57F0
// entry 005e57f0  size 76  status ok
//======================================================================

char __stdcall sub_5E57F0(int a1)
{
  int v2; // [esp+4h] [ebp-4h]

  v2 = sub_5FB210(a1);
  if ( !v2 )
    return 0;
  sub_5F5D50(0);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 176))(v2, 1);
  return 1;
}


//======================================================================
// sub_5E5840
// entry 005e5840  size 33  status ok
//======================================================================

_DWORD *__thiscall sub_5E5840(_DWORD *this)
{
  sub_5FC0D0(0);
  *this = &CasinoDemoNavFMScript::`vftable';
  return this;
}


//======================================================================
// sub_5E5890
// entry 005e5890  size 451  status ok
//======================================================================

int __thiscall sub_5E5890(void *this)
{
  int result; // eax
  unsigned int Flags; // eax
  CMFCToolBarsCustomizeDialog *v4; // [esp+8h] [ebp-Ch]
  signed int v5; // [esp+Ch] [ebp-8h]
  CMFCToolBarsCustomizeDialog *v6; // [esp+10h] [ebp-4h]

  v4 = (CMFCToolBarsCustomizeDialog *)sub_5FB2B0(3218008);
  v6 = (CMFCToolBarsCustomizeDialog *)sub_5FB2B0(3218009);
  result = unknown_libname_843(this);
  switch ( result )
  {
    case 0:
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, 1, 240);
      break;
    case 1:
      v5 = CMFCToolBarsCustomizeDialog::GetFlags(v4) + 1;
      if ( v5 > sub_5EB240(v4) )
        v5 = 0;
      (*(void (__thiscall **)(CMFCToolBarsCustomizeDialog *, signed int))(*(_DWORD *)v6 + 176))(v6, v5);
      (*(void (__thiscall **)(CMFCToolBarsCustomizeDialog *))(*(_DWORD *)v6 + 116))(v6);
      dword_794920 = 255;
      dword_79491C = 0;
      sub_5EB5D0(255);
      sub_5EB5D0(dword_79491C);
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, 2, 2);
      break;
    case 2:
      dword_794920 -= 8;
      dword_79491C += 8;
      if ( dword_794920 >= 0 )
      {
        sub_5EB5D0(dword_794920);
        sub_5EB5D0(dword_79491C);
        result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, 2, 2);
      }
      else
      {
        result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 3, 0);
      }
      break;
    case 3:
      Flags = CMFCToolBarsCustomizeDialog::GetFlags(v6);
      (*(void (__thiscall **)(CMFCToolBarsCustomizeDialog *, unsigned int))(*(_DWORD *)v4 + 176))(v4, Flags);
      sub_5EB5D0(255);
      (*(void (__thiscall **)(CMFCToolBarsCustomizeDialog *))(*(_DWORD *)v4 + 116))(v4);
      (*(void (__thiscall **)(CMFCToolBarsCustomizeDialog *))(*(_DWORD *)v6 + 112))(v6);
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, 1, 240);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_5E5A70
// entry 005e5a70  size 118  status ok
//======================================================================

_DWORD *__thiscall sub_5E5A70(_DWORD *this)
{
  sub_5F71F0(1, 0);
  *this = &CasinoDemoChooseVP::`vftable';
  sub_5F83D0(1090, 0);
  sub_5F7340(0, 0);
  return this;
}


//======================================================================
// sub_5E5B10
// entry 005e5b10  size 440  status ok
//======================================================================

int sub_5E5B10()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax

  v0 = sub_630F40("SID_VIDEOPOKER");
  sub_5FA5B0(0, -1, v0, 73, 195, 24, 3, 3, 1, 18, -1);
  v1 = sub_630F40("SID_GENERIC_OK");
  sub_5F9DE0(0, 3218300, 3200229, 8, 178, 1, v1, 72, 75, 74, -1, 13);
  v2 = sub_630F40("SID_GENERIC_CANCEL");
  sub_5F9DE0(0, 3218301, 3200222, 116, 178, 1, v2, 72, 75, 74, -1, 13);
  sub_5FB300(3218300);
  sub_6026F0(13);
  sub_5FB300(3218301);
  sub_6026F0(27);
  v3 = sub_630F40("SID_VP_JACKBACK");
  sub_5F9FF0(0, 0, 3218306, 3218302, 3200202, 15, 50, 1, v3, 31, 69, 66, -1, 20, 0);
  v4 = sub_630F40("SID_VP_WILDCOUNTRY");
  sub_5F9FF0(0, 0, 3218307, 3218302, 3200202, 15, 75, 1, v4, 31, 69, 66, -1, 20, 0);
  sub_5FB3A0(3218302);
  sub_6065D0(3218306);
  sub_5FA790(0, -1, 0, -1, 200, 60, 4, 114, 1, 120, 124, 161, 255, 255, 255, 0);
  return sub_5FA5B0(
           0,
           -1,
           "Hoyle Casino features 9 exciting Video Poker machines, in denominations from $1 to $100!",
           35,
           192,
           50,
           8,
           119,
           1,
           48,
           -1);
}


//======================================================================
// sub_5E5CD0
// entry 005e5cd0  size 219  status ok
//======================================================================

int __thiscall sub_5E5CD0(void *this, int a2)
{
  int v2; // eax
  int v4; // [esp+0h] [ebp-10h]

  if ( a2 == 3218300 )
  {
    v2 = sub_5FB3A0(3218302);
    v4 = sub_606570(v2);
    if ( v4 == 3218306 )
    {
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_162EE80 + 76))(dword_162EE80, 3208025, dword_75E914);
    }
    else if ( v4 == 3218307 )
    {
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_162EE80 + 76))(dword_162EE80, 3208025, dword_75E918);
    }
    else
    {
      sub_5E9F20((char)"0", "..\\Casino\\DemoNavigation.cpp", 672);
    }
  }
  else if ( a2 != 3218301 )
  {
    return sub_5FB000(a2);
  }
  sub_5F87D0(this);
  return sub_5F8990(this);
}


//======================================================================
// sub_5E5DB0
// entry 005e5db0  size 118  status ok
//======================================================================

_DWORD *__thiscall sub_5E5DB0(_DWORD *this)
{
  sub_5F71F0(1, 0);
  *this = &CasinoDemoChooseSlot::`vftable';
  sub_5F83D0(1090, 0);
  sub_5F7340(0, 0);
  return this;
}


//======================================================================
// sub_5E5E50
// entry 005e5e50  size 499  status ok
//======================================================================

int sub_5E5E50()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax

  v0 = sub_630F40("SID_SLOTMACHINES");
  sub_5FA5B0(0, -1, v0, 73, 195, 24, 3, 3, 1, 18, -1);
  v1 = sub_630F40("SID_GENERIC_OK");
  sub_5F9DE0(0, 3218300, 3200229, 8, 178, 1, v1, 72, 75, 74, -1, 13);
  v2 = sub_630F40("SID_GENERIC_CANCEL");
  sub_5F9DE0(0, 3218301, 3200222, 116, 178, 1, v2, 72, 75, 74, -1, 13);
  sub_5FB300(3218300);
  sub_6026F0(13);
  sub_5FB300(3218301);
  sub_6026F0(27);
  v3 = sub_630F40("SID_SLOTS_PINATA");
  sub_5F9FF0(0, 0, 3218303, 3218302, 3200202, 15, 35, 1, v3, 31, 69, 66, -1, 20, 0);
  v4 = sub_630F40("SID_SLOTS_SHOOTINGSTARS");
  sub_5F9FF0(0, 0, 3218304, 3218302, 3200202, 15, 60, 1, v4, 31, 69, 66, -1, 20, 0);
  v5 = sub_630F40("SID_SLOTS_SUGARDADDY");
  sub_5F9FF0(0, 0, 3218305, 3218302, 3200202, 15, 85, 1, v5, 31, 69, 66, -1, 20, 0);
  sub_5FB3A0(3218302);
  sub_6065D0(3218303);
  sub_5FA790(0, -1, 0, -1, 200, 60, 4, 114, 1, 120, 124, 161, 255, 255, 255, 0);
  return sub_5FA5B0(0, -1, &unk_6D5760, 35, 192, 50, 8, 119, 1, 48, -1);
}


//======================================================================
// sub_5E6050
// entry 005e6050  size 260  status ok
//======================================================================

int __thiscall sub_5E6050(void *this, int a2)
{
  int v2; // eax
  int v4; // [esp+0h] [ebp-10h]

  if ( a2 == 3218300 )
  {
    v2 = sub_5FB3A0(3218302);
    v4 = sub_606570(v2);
    switch ( v4 )
    {
      case 3218303:
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_162EE80 + 76))(dword_162EE80, 3207042, dword_75E940);
        break;
      case 3218304:
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_162EE80 + 76))(dword_162EE80, 3207042, dword_75E944);
        break;
      case 3218305:
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_162EE80 + 76))(dword_162EE80, 3207042, dword_75E948);
        break;
      default:
        sub_5E9F20((char)"0", "..\\Casino\\DemoNavigation.cpp", 755);
        break;
    }
  }
  else if ( a2 != 3218301 )
  {
    return sub_5FB000(a2);
  }
  sub_5F87D0(this);
  return sub_5F8990(this);
}


//======================================================================
// sub_5E6160
// entry 005e6160  size 100  status ok
//======================================================================

_DWORD *__thiscall sub_5E6160(_DWORD *this)
{
  sub_5D7B60(this);
  *this = &off_6D57D4;
  sub_5F1AD0(3218000);
  return this;
}


//======================================================================
// sub_5E61F0
// entry 005e61f0  size 311  status ok
//======================================================================

int __thiscall sub_5E61F0(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-1Ch]
  void *v3; // [esp+Ch] [ebp-14h]

  sub_5D8230(this);
  sub_5F9CE0(0, 3218200, 3218200, 0, 0, 1, 0, 255, 0);
  sub_5F9CE0(0, 3218201, 3218201, 0, 0, 1000, 0, 255, 0);
  sub_5F9DE0(0, 3218202, 3218202, 0, 0, 1, &Source, -1, -1, -1, -1, 0);
  sub_5F9DE0(0, 3218203, 3218203, 0, 0, 1, &Source, -1, -1, -1, -1, 0);
  v3 = operator new(0x24u);
  if ( v3 )
    v2 = sub_5E6420(v3);
  else
    v2 = 0;
  return sub_5F1B70(v2);
}


//======================================================================
// sub_5E6330
// entry 005e6330  size 116  status ok
//======================================================================

char __stdcall sub_5E6330(int a1, int a2)
{
  if ( a2 == 100000 )
  {
    sub_5FE640(100006, 0);
    sub_5FE640(100004, 0);
    sub_5FE640(-2, 0);
  }
  else if ( a2 == 100056 )
  {
    sub_5FE640(100061, 0);
  }
  return sub_5D8670(a1, a2);
}


//======================================================================
// sub_5E63B0
// entry 005e63b0  size 95  status ok
//======================================================================

int __thiscall sub_5E63B0(int this, int a2)
{
  int result; // eax

  result = sub_5D7F40((_DWORD *)this, a2);
  if ( *(_DWORD *)(this + 4) )
  {
    if ( (result = *(unsigned __int8 *)(a2 + 4), !*(_BYTE *)(a2 + 4)) && *(_DWORD *)(a2 + 24) == 1
      || *(_DWORD *)(a2 + 24) == 4 )
    {
      result = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 4) + 8))(*(_DWORD *)(this + 4), 4, 0);
      *(_BYTE *)(a2 + 4) = 1;
    }
  }
  return result;
}


//======================================================================
// sub_5E6420
// entry 005e6420  size 43  status ok
//======================================================================

_DWORD *__thiscall sub_5E6420(_DWORD *this)
{
  sub_5FC0D0(0);
  *this = &CasinoDemoAboutRoomScript::`vftable';
  *(this + 8) = 0;
  return this;
}


//======================================================================
// sub_5E6470
// entry 005e6470  size 59  status ok
//======================================================================

int __thiscall sub_5E6470(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-4h]

  v2 = *(this + 8);
  *(this + 8) = v2 + 1;
  *(this + 8) %= dword_75E87C;
  return v2;
}


//======================================================================
// sub_5E64B0
// entry 005e64b0  size 617  status ok
//======================================================================

int __thiscall sub_5E64B0(_DWORD *this)
{
  int result; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v7; // [esp+8h] [ebp-8h]
  int v8; // [esp+8h] [ebp-8h]
  CDrawImage *v9; // [esp+Ch] [ebp-4h]
  int v10; // [esp+Ch] [ebp-4h]

  v7 = sub_5FB2B0(3218275);
  v9 = (CDrawImage *)sub_5FB2B0(3218276);
  result = unknown_libname_843(this);
  switch ( result )
  {
    case 0:
      v8 = sub_5F9CE0(0, 3218275, 0, 0, 0, 101, 0, 255, 0);
      v10 = sub_5F9CE0(0, 3218276, 0, 0, 0, 100, 0, 255, 0);
      v2 = sub_5E6470(this);
      sub_5EAF00(dword_75E840[v2]);
      (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 116))(v8);
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 112))(v10);
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 1, 300);
      break;
    case 1:
      v3 = sub_5E6470(this);
      sub_5EAF00(dword_75E840[v3]);
      (*(void (__thiscall **)(CDrawImage *))(*(_DWORD *)v9 + 116))(v9);
      dword_794928 = 255;
      dword_794924 = 0;
      sub_5EB5D0(255);
      sub_5EB5D0(dword_794924);
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 2, 2);
      break;
    case 2:
      dword_794928 -= 8;
      dword_794924 += 8;
      if ( dword_794928 < 0 )
        goto LABEL_9;
      sub_5EB5D0(dword_794928);
      sub_5EB5D0(dword_794924);
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 2, 2);
      break;
    case 3:
      v4 = CDrawImage::UsingImageAllocator(v9);
      sub_5EAF00(v4);
      sub_5EB5D0(255);
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 116))(v7);
      (*(void (__thiscall **)(CDrawImage *))(*(_DWORD *)v9 + 112))(v9);
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 1, 300);
      break;
    case 4:
      if ( CMFCScanliner::channels(v9) )
      {
        v5 = sub_5E6470(this);
        sub_5EAF00(dword_75E840[v5]);
        result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 1, 300);
      }
      else
      {
LABEL_9:
        result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 3, 0);
      }
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_5E6820
// entry 005e6820  size 16  status ok
//======================================================================

int sub_5E6820()
{
  return 3218005;
}


//======================================================================
// sub_5E6890
// entry 005e6890  size 311  status ok
//======================================================================

_BYTE *__thiscall sub_5E6890(_BYTE *this)
{
  int i; // [esp+Ch] [ebp-10h]
  int j; // [esp+Ch] [ebp-10h]

  sub_5F71F0(1, 0);
  *(_DWORD *)this = &CasinoHallOfFameDialog::`vftable';
  *(this + 444) = 0;
  for ( i = 0; i < 10; ++i )
  {
    *((_DWORD *)this + i + 112) = 0;
    *((_DWORD *)this + i + 122) = 0;
    *((_DWORD *)this + i + 132) = 0;
  }
  *((_DWORD *)this + 142) = operator new(0x28u);
  for ( j = 0; j < 10; ++j )
  {
    *(_DWORD *)(*((_DWORD *)this + 142) + 4 * j) = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 796))(dword_162EE84);
    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 142) + 4 * j) + 32) = 0;
    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 142) + 4 * j) + 12) = -1;
  }
  return this;
}


//======================================================================
// sub_5E69D0
// entry 005e69d0  size 337  status ok
//======================================================================

int __thiscall sub_5E69D0(void *this)
{
  void (__thiscall ***v3)(_DWORD, int); // [esp+18h] [ebp-1Ch]
  void (__thiscall ***v4)(_DWORD, int); // [esp+20h] [ebp-14h]
  int i; // [esp+24h] [ebp-10h]
  int j; // [esp+24h] [ebp-10h]

  *(_DWORD *)this = &CasinoHallOfFameDialog::`vftable';
  for ( i = 0; i < 10; ++i )
  {
    if ( *((_DWORD *)this + i + 112) )
    {
      v4 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + i + 112);
      if ( v4 )
        (**v4)(v4, 1);
      *((_DWORD *)this + i + 112) = 0;
    }
  }
  for ( j = 0; j < 10; ++j )
  {
    sub_63A2A0(*(_DWORD *)(*((_DWORD *)this + 142) + 4 * j));
    v3 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 142) + 4 * j);
    if ( v3 )
      (**v3)(v3, 1);
  }
  if ( *((_DWORD *)this + 142) )
    operator delete(*((void **)this + 142));
  return sub_5F7260();
}


//======================================================================
// sub_5E6B30
// entry 005e6b30  size 144  status ok
//======================================================================

int sub_5E6B30()
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  sub_5E7AC0(dword_79506C);
  sub_5F83D0(3207406, 0);
  sub_5F9CE0(0, 1, 3207408, 0, 0, 1, 0, 255, 0);
  result = sub_5F9CE0(0, 2, 3207407, 0, 0, 200, 0, 255, 0);
  for ( i = 0; i < 10; ++i )
  {
    sub_5E6BC0(i);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5E6BC0
// entry 005e6bc0  size 1613  status ok
//======================================================================

int __thiscall sub_5E6BC0(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  int v5; // [esp+4h] [ebp-1C4h]
  int v6; // [esp+8h] [ebp-1C0h]
  int v8; // [esp+10h] [ebp-1B8h]
  void *v9; // [esp+24h] [ebp-1A4h]
  void *v10; // [esp+2Ch] [ebp-19Ch]
  int v11; // [esp+38h] [ebp-190h]
  char Destination[104]; // [esp+3Ch] [ebp-18Ch] BYREF
  char Buffer[260]; // [esp+A4h] [ebp-124h] BYREF
  int v14; // [esp+1ACh] [ebp-1Ch]
  int v15; // [esp+1B0h] [ebp-18h]
  int v16; // [esp+1B4h] [ebp-14h]
  int v17; // [esp+1B8h] [ebp-10h]
  int v18; // [esp+1C4h] [ebp-4h]

  v2 = (a2 + 1) % 2;
  v14 = v2 != 0 ? 122 : 443;
  v15 = dword_75EBF0[a2];
  v16 = 0;
  v17 = 10 * a2 + 100;
  sub_5F9CE0(0, a2 + 2, 3207409, v2 != 0 ? 103 : 424, v15 - 16, 1, 0, 255, 0);
  v11 = sub_5E75F0(a2);
  v3 = sub_5E7610(a2);
  sub_5FA5B0(0, v17, v3, 31, 180, 15, v14, v15 + 5, 2, 48, -1);
  v16 = *(_BYTE *)(v11 + 84) != 0 ? 21 : 27;
  sub_5FA5B0(0, 10 * a2 + 101, v11 + 4, 31, 180, 15, v14, v16 + v15, 2, 48, -1);
  v16 = *(_BYTE *)(v11 + 84) != 0 ? 35 : 41;
  if ( sub_5E7630(a2) )
    sprintf(Buffer, "%d", *(_DWORD *)(v11 + 80));
  else
    sub_64C8D0(*(_DWORD *)(v11 + 72), *(_DWORD *)(v11 + 76), Buffer, 1, 1, 1);
  sub_5FA5B0(0, v17 + 2, Buffer, 31, 180, 15, v14, v16 + v15, 2, 48, -1);
  if ( *(_BYTE *)(v11 + 84) )
  {
    sub_5E7650(a2, Destination);
    sub_5FA5B0(0, v17 + 3, Destination, 68, 180, 15, v14, v15 + 50, 2, 48, -1);
  }
  sub_5FA5B0(0, v17 + 4, v11 + 56, 47, 180, 15, v14, v15 + 65, 2, 48, -1);
  if ( *(_BYTE *)(v11 + 172) )
  {
    if ( *(int *)(v11 + 68) < 0 )
    {
      result = a2;
      if ( !*(this + a2 + 112) )
      {
        v10 = operator new(0xC8u);
        v18 = 0;
        if ( v10 )
          v6 = sub_6640C0(v10);
        else
          v6 = 0;
        v18 = -1;
        *(this + a2 + 112) = v6;
        sub_664200(this, 0);
        sub_6643F0(dword_75EBA0[a2], dword_75EBC8[a2]);
        return sub_664480(2);
      }
    }
    else
    {
      *(this + a2 + 122) = sub_5F9CE0(
                             0,
                             v17 + 3,
                             *(_DWORD *)(v11 + 68),
                             dword_75EBA0[a2],
                             dword_75EBC8[a2],
                             20,
                             0,
                             255,
                             0);
      result = sub_5F9CE0(0, v17 + 4, *(_DWORD *)(v11 + 68), dword_75EBA0[a2], dword_75EBC8[a2], 40, 0, 255, 0);
      *(this + a2 + 132) = result;
    }
  }
  else
  {
    CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 142) + 4 * a2))->rcSource.left = 1;
    sub_63B490(*(_DWORD *)(v11 + 180));
    *(_DWORD *)(*(_DWORD *)(*(this + 142) + 4 * a2) + 12) = *(_DWORD *)(v11 + 176);
    strcpy((char *)(*(_DWORD *)(*(this + 142) + 4 * a2) + 16), &Source);
    v9 = operator new(0x60u);
    v18 = 1;
    if ( v9 )
      v5 = sub_6454F0();
    else
      v5 = 0;
    v18 = -1;
    *(_DWORD *)(*(_DWORD *)(*(this + 142) + 4 * a2) + 32) = v5;
    sub_645820(*(_DWORD *)(*(this + 142) + 4 * a2), this, 0, 0, 0);
    sub_646150(dword_75EBA0[a2], dword_75EBC8[a2]);
    sub_646380(5);
    v8 = *(_DWORD *)(*(_DWORD *)(*(this + 142) + 4 * a2) + 32);
    sub_6464D0(1, 0);
    *(_BYTE *)(v8 + 40) = 0;
    *(_BYTE *)(v8 + 41) = 0;
    return sub_6464D0(0, 0);
  }
  return result;
}


//======================================================================
// sub_5E7230
// entry 005e7230  size 349  status ok
//======================================================================

void __thiscall sub_5E7230(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 10; ++i )
  {
    v2 = sub_5E75F0(i);
    if ( *(_BYTE *)(v2 + 172) )
    {
      if ( *(int *)(v2 + 68) < 0 )
      {
        memcpy((void *)(*(this + i + 112) + 16), (const void *)(v2 + 96), 0x4Cu);
        sub_664630(*(this + i + 112));
      }
      else if ( *(this + i + 122) )
      {
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 122) + 176))(*(this + i + 122), 3);
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 122) + 116))(*(this + i + 122));
        if ( *(this + i + 132) )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + i + 132) + 176))(*(this + i + 132), 0);
          (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 132) + 116))(*(this + i + 132));
        }
      }
    }
  }
}


//======================================================================
// sub_5E7390
// entry 005e7390  size 188  status ok
//======================================================================

int __thiscall sub_5E7390(int this, int a2)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  result = a2;
  if ( !*(_BYTE *)(a2 + 4) )
  {
    result = sub_5F88F0(this);
    if ( !(_BYTE)result )
    {
      if ( *(_DWORD *)(a2 + 24) == 4 && *(_BYTE *)(a2 + 20) == 27 )
        *(_BYTE *)(this + 444) = 1;
      if ( *(_DWORD *)(a2 + 24) == 1 )
        *(_BYTE *)(this + 444) = 1;
      result = this;
      if ( *(_BYTE *)(this + 444) )
      {
        for ( i = 0; i < 10; ++i )
        {
          if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 568) + 4 * i) + 32) )
            sub_63B2D0(*(_DWORD *)(*(_DWORD *)(this + 568) + 4 * i));
        }
        return sub_5E75C0(dword_79506C);
      }
    }
  }
  return result;
}


//======================================================================
// sub_5E7470
// entry 005e7470  size 19  status ok
//======================================================================

int __thiscall sub_5E7470(void *this)
{
  return sub_5E79E0(this, this);
}


//======================================================================
// sub_5E7490
// entry 005e7490  size 34  status ok
//======================================================================

int __thiscall sub_5E7490(void *this)
{
  int result; // eax

  result = (unsigned __int8)sub_5E78F0(this);
  if ( !(_BYTE)result )
    return sub_5E78A0(this);
  return result;
}


//======================================================================
// sub_5E74C0
// entry 005e74c0  size 49  status ok
//======================================================================

int sub_5E74C0()
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 10; ++i )
  {
    byte_794930[i] = 1;
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5E7500
// entry 005e7500  size 187  status ok
//======================================================================

void __thiscall sub_5E7500(ATL::CAtlWinModule **this)
{
  ATL::CAtlWinModule *v1; // [esp+4h] [ebp-1Ch]
  _BYTE *v3; // [esp+Ch] [ebp-14h]

  if ( !byte_795F95 )
  {
    if ( !*this )
    {
      v3 = operator new(0x23Cu);
      if ( v3 )
        v1 = (ATL::CAtlWinModule *)sub_5E6890(v3);
      else
        v1 = 0;
      *this = v1;
      (*(void (__thiscall **)(ATL::CAtlWinModule *))(*(_DWORD *)*this + 60))(*this);
      sub_5F7340(0, 0);
    }
    ATL::CAtlWinModule::~CAtlWinModule(*this);
  }
}


//======================================================================
// sub_5E75C0
// entry 005e75c0  size 38  status ok
//======================================================================

int __thiscall sub_5E75C0(_DWORD *this)
{
  int result; // eax

  result = (int)this;
  if ( *this )
  {
    result = sub_5F8990(*this);
    *this = 0;
  }
  return result;
}


//======================================================================
// sub_5E75F0
// entry 005e75f0  size 27  status ok
//======================================================================

int *__stdcall sub_5E75F0(int a1)
{
  return &dword_79493C[46 * a1];
}


//======================================================================
// sub_5E7610
// entry 005e7610  size 25  status ok
//======================================================================

char *__stdcall sub_5E7610(int a1)
{
  return (&off_75E998)[12 * a1];
}


//======================================================================
// sub_5E7630
// entry 005e7630  size 25  status ok
//======================================================================

int __stdcall sub_5E7630(int a1)
{
  return dword_75E99C[12 * a1];
}


//======================================================================
// sub_5E7650
// entry 005e7650  size 460  status ok
//======================================================================

char *__stdcall sub_5E7650(int a1, char *Destination)
{
  char *Source; // [esp+4h] [ebp-18h]
  int v4; // [esp+Ch] [ebp-10h]
  int v5; // [esp+10h] [ebp-Ch]
  int v6; // [esp+14h] [ebp-8h]

  v5 = 0;
  v6 = dword_794994[46 * a1];
  if ( v6 < 0 )
    return strcpy(Destination, "---");
  if ( v6 == 14 )
  {
    if ( a1 == 4 )
    {
      switch ( unk_794C78 )
      {
        case 0:
          v5 = 1;
          break;
        case 1:
          v5 = 2;
          break;
        case 2:
          v5 = 3;
          break;
        case 3:
          v5 = 4;
          break;
        case 4:
          v5 = 5;
          break;
        case 5:
          v5 = 6;
          break;
        case 6:
          v5 = 7;
          break;
        case 7:
          v5 = 8;
          break;
        case 8:
          v5 = 9;
          break;
        case 9:
          v5 = 10;
          break;
        case 0xA:
          v5 = 11;
          break;
        case 0xB:
          v5 = 12;
          break;
        case 0xC:
          v5 = 13;
          break;
        case 0xD:
          v5 = 14;
          break;
        case 0xE:
          v5 = 15;
          break;
        case 0xF:
          v5 = 16;
          break;
        case 0x10:
          v5 = 17;
          break;
        case 0x11:
          v5 = 18;
          break;
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
          v5 = 19;
          break;
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
          v5 = 20;
          break;
        case 0x1A:
        case 0x1B:
        case 0x1C:
        case 0x1D:
          v5 = 21;
          break;
        default:
          return (char *)sprintf(Destination, "Slots: %s", off_75EC18[v5]);
      }
      return (char *)sprintf(Destination, "Slots: %s", off_75EC18[v5]);
    }
    else
    {
      return strcpy(Destination, "Slots");
    }
  }
  else
  {
    v4 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 224))(
           dword_162EE84,
           v6);
    if ( v4 )
    {
      Source = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
      return strcpy(Destination, Source);
    }
    else
    {
      return strcpy(Destination, "---");
    }
  }
}


//======================================================================
// sub_5E78A0
// entry 005e78a0  size 79  status ok
//======================================================================

int __thiscall sub_5E78A0(void *this)
{
  int i; // [esp+4h] [ebp-4h]

  memset(byte_794930, 0, 0x73Cu);
  for ( i = 0; i < 10; ++i )
    sub_5E7C20(i);
  return sub_5E79E0(this, this);
}


//======================================================================
// sub_5E78F0
// entry 005e78f0  size 228  status ok
//======================================================================

char __thiscall sub_5E78F0(void *this)
{
  FILE *Stream; // [esp+104h] [ebp-410h]
  size_t v4; // [esp+108h] [ebp-40Ch]
  char Destination[1028]; // [esp+10Ch] [ebp-408h] BYREF

  memset(&Destination[1], 0, 0x3FFu);
  strcpy(Destination, ".\\hof9.dat");
  sub_5EA5B0(Destination);
  Stream = (FILE *)sub_5EA9C0(Destination, "rb");
  if ( !Stream )
    return 0;
  v4 = fread(byte_794930, 0x73Cu, 1u, Stream);
  fclose(Stream);
  if ( v4 != 1 )
    return 0;
  sub_5E7AC0(this);
  return 1;
}


//======================================================================
// sub_5E79E0
// entry 005e79e0  size 212  status ok
//======================================================================

int __thiscall sub_5E79E0(void *this)
{
  int result; // eax
  FILE *Stream; // [esp+108h] [ebp-40Ch]
  char Destination[1028]; // [esp+10Ch] [ebp-408h] BYREF

  memset(&Destination[1], 0, 0x3FFu);
  strcpy(Destination, ".\\hof9.dat");
  sub_5E7AC0(this);
  result = sub_5EA9C0(Destination, "wb");
  Stream = (FILE *)result;
  if ( !result )
    result = sub_5E9F20((char)"hFile", "..\\Casino\\hof.cpp", 477);
  if ( Stream )
  {
    fwrite(byte_794930, 0x73Cu, 1u, Stream);
    return fclose(Stream);
  }
  return result;
}


//======================================================================
// sub_5E7AC0
// entry 005e7ac0  size 343  status ok
//======================================================================

int sub_5E7AC0()
{
  int result; // eax
  bool v1; // [esp+0h] [ebp-10h]
  int i; // [esp+8h] [ebp-8h]

  for ( i = 0; i < 10; ++i )
  {
    v1 = !byte_7949E8[184 * i] && dword_7949F0[46 * i] == -1 && dword_794980[46 * i] == -1 && dword_7949EC[46 * i] == -1
      || !byte_7949E8[184 * i] && !dword_7949F0[46 * i] && !dword_794980[46 * i] && !dword_7949EC[46 * i]
      || !byte_7949E8[184 * i] && dword_7949F0[46 * i] <= 0 && dword_794980[46 * i] == -1 && dword_7949EC[46 * i] == -1;
    if ( dword_79493C[46 * i] != i + 1000 || v1 )
      sub_5E7C20(i);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5E7C20
// entry 005e7c20  size 466  status ok
//======================================================================

char *__stdcall sub_5E7C20(int a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  int v3; // ecx
  int v5; // [esp+Ch] [ebp-8h]

  byte_794930[a1] = 1;
  dword_79493C[46 * a1] = a1 + 1000;
  v1 = sub_64C8A0(0, 0);
  v5 = v1;
  LODWORD(v1) = 184 * a1;
  *(int *)((char *)dword_794984 + v1) = v5;
  *(int *)((char *)dword_794988 + v1) = HIDWORD(v1);
  dword_79498C[46 * a1] = 0;
  dword_794980[46 * a1] = 0;
  strcpy((char *)&unk_794940 + 184 * a1, (&off_75E9B4)[12 * a1]);
  byte_7949E8[184 * a1] = byte_75E9BC[48 * a1];
  dword_794980[46 * a1] = dword_75E9B8[12 * a1];
  v2 = sub_64C8A0(dword_75E9A0[12 * a1], 0);
  v3 = 46 * a1;
  dword_794984[v3] = v2;
  dword_794988[v3] = HIDWORD(v2);
  dword_79498C[46 * a1] = dword_75E9A4[12 * a1];
  byte_794990[184 * a1] = byte_75E9A8[48 * a1];
  dword_794994[46 * a1] = dword_75E9AC[12 * a1];
  dword_794998[46 * a1] = dword_75E9B0[12 * a1];
  dword_7949EC[46 * a1] = dword_75E9C0[12 * a1];
  dword_7949F0[46 * a1] = dword_75E9C4[12 * a1];
  return strdate((char *)&unk_794974 + 184 * a1);
}


//======================================================================
// sub_5E7E00
// entry 005e7e00  size 58  status ok
//======================================================================

int __stdcall sub_5E7E00(int a1, int a2, int a3)
{
  int result; // eax

  result = sub_5E7F90(a2, a3);
  if ( (_BYTE)result )
    return sub_5E8020(a1, a2, a3);
  return result;
}


//======================================================================
// sub_5E7E40
// entry 005e7e40  size 66  status ok
//======================================================================

int __stdcall sub_5E7E40(int a1, int a2, int a3, int a4)
{
  int result; // eax

  result = (unsigned __int8)sub_5E7FC0(a2, a3, a4);
  if ( (_BYTE)result )
    return sub_5E8120(a1, a2, a3, a4);
  return result;
}


//======================================================================
// sub_5E7E90
// entry 005e7e90  size 248  status ok
//======================================================================

_DWORD *__stdcall sub_5E7E90(int a1, int a2, _DWORD *a3, int a4, _DWORD *a5, int a6, int a7)
{
  _DWORD *result; // eax
  int v8; // [esp+0h] [ebp-24h]
  __int64 v9; // [esp+18h] [ebp-Ch]

  if ( a2 != 2 )
    sub_5E9F20((char)"rec == HOF_RECORD_BIGGEST_COMEBACK", "..\\Casino\\hof.cpp", 555);
  if ( (int)a3 >= *a5 )
  {
    result = a3;
    if ( (int)a3 >= a6 )
    {
      sub_64C8A0(0, 0);
      if ( (int)a3 >= *a5 )
        v8 = (int)a3 - *a5;
      else
        v8 = *a5 - (_DWORD)a3;
      v9 = sub_64C8A0(v8, 0);
      result = (_DWORD *)sub_5E7FC0(a2, v9, HIDWORD(v9));
      if ( (_BYTE)result )
        return (_DWORD *)sub_5E8120(a1, a2, v9, HIDWORD(v9));
    }
  }
  else
  {
    *a5 = a3;
    a5[1] = a4;
    return a5;
  }
  return result;
}


//======================================================================
// sub_5E7F90
// entry 005e7f90  size 38  status ok
//======================================================================

bool __stdcall sub_5E7F90(int a1, int a2)
{
  return a2 > dword_79498C[46 * a1];
}


//======================================================================
// sub_5E7FC0
// entry 005e7fc0  size 83  status ok
//======================================================================

int __stdcall sub_5E7FC0(int a1, char a2, int a3)
{
  if ( a1 )
    return sub_64C6E0(dword_794984[46 * a1], dword_794988[46 * a1]);
  else
    return sub_64C7A0(dword_794984[0], dword_794988[0]);
}


//======================================================================
// sub_5E8020
// entry 005e8020  size 254  status ok
//======================================================================

int __thiscall sub_5E8020(void *this, int a2, unsigned int a3, int a4)
{
  const struct tagVIDEOINFO *DisplayFormat; // eax

  if ( a3 >= 0xA )
    sub_5E9F20((char)"(0<=rec) && (rec < HOF_NUM_RECORDS)", "..\\Casino\\hof.cpp", 603);
  if ( !sub_5E7F90(a3, a4) )
    sub_5E9F20((char)"IsRecordBroken( rec, v )", "..\\Casino\\hof.cpp", 604);
  sub_5E8590(a3);
  sub_5E8550(0, a3);
  dword_79498C[46 * a3] = a4;
  strdate((char *)&unk_794974 + 184 * a3);
  DisplayFormat = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * a2));
  strcpy((char *)&unk_794940 + 184 * a3, (const char *)&DisplayFormat->rcSource.top);
  sub_5E8230(a2, a3);
  sub_5E8470(a3);
  return sub_5E79E0(this);
}


//======================================================================
// sub_5E8120
// entry 005e8120  size 267  status ok
//======================================================================

int __thiscall sub_5E8120(void *this, int a2, unsigned int a3, int a4, int a5)
{
  int v5; // edx
  const struct tagVIDEOINFO *DisplayFormat; // eax

  if ( a3 >= 0xA )
    sub_5E9F20((char)"(0<=rec) && (rec < HOF_NUM_RECORDS)", "..\\Casino\\hof.cpp", 623);
  if ( !(unsigned __int8)sub_5E7FC0(a3, a4, a5) )
    sub_5E9F20((char)"IsRecordBroken( rec, m )", "..\\Casino\\hof.cpp", 624);
  sub_5E8590(a3);
  sub_5E8550(0, a3);
  v5 = 46 * a3;
  dword_794984[v5] = a4;
  dword_794988[v5] = a5;
  strdate((char *)&unk_794974 + 184 * a3);
  DisplayFormat = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * a2));
  strcpy((char *)&unk_794940 + 184 * a3, (const char *)&DisplayFormat->rcSource.top);
  sub_5E8230(a2, a3);
  sub_5E8470(a3);
  return sub_5E79E0(this);
}


//======================================================================
// sub_5E8230
// entry 005e8230  size 568  status ok
//======================================================================

void *__stdcall sub_5E8230(int a1, int a2)
{
  void *result; // eax
  DWORD v3; // eax
  LONG *v4; // eax
  int (__thiscall ***v5)(_DWORD, int); // [esp+8h] [ebp-44h]
  void *v6; // [esp+34h] [ebp-18h]

  if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(_DWORD *)(dword_7947E0 + 88) + 4 * a1))->rcSource.left == 1 )
  {
    byte_7949E8[184 * a2] = 0;
    dword_794980[46 * a2] = -1;
    dword_7949EC[46 * a2] = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_7947E0 + 88) + 4 * a1) + 12);
    result = *(void **)(*(_DWORD *)(*(_DWORD *)(dword_7947E0 + 88) + 4 * a1) + 8);
    dword_7949F0[46 * a2] = (int)result;
  }
  else
  {
    byte_7949E8[184 * a2] = 1;
    if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(_DWORD *)(dword_7947E0 + 88) + 4 * a1))->rcSource.left == 2 )
    {
      v3 = sub_4842B0(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * a1));
      result = (void *)sub_6394C0(v3, 1);
      dword_794980[46 * a2] = (int)result;
    }
    else
    {
      dword_794980[46 * a2] = -1;
      v6 = operator new(0xC8u);
      if ( v6 )
        v5 = (int (__thiscall ***)(_DWORD, int))sub_6640C0(v6);
      else
        v5 = 0;
      v4 = sub_57A470(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * a1));
      if ( (unsigned __int8)sub_664300(v4) )
        result = memcpy((char *)&unk_79499C + 184 * a2, v5 + 4, 0x4Cu);
      else
        result = (void *)sub_5E9F20((char)"false", "..\\Casino\\hof.cpp", 671);
      if ( v5 )
        return (void *)(**v5)(v5, 1);
    }
  }
  return result;
}


//======================================================================
// sub_5E8470
// entry 005e8470  size 210  status ok
//======================================================================

int __stdcall sub_5E8470(int a1)
{
  unsigned int ExecutingCollection; // [esp+8h] [ebp-8h]
  int v3; // [esp+Ch] [ebp-4h]

  ExecutingCollection = (unsigned int)Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  if ( ExecutingCollection >= 0x30D400 )
    ExecutingCollection = CPaneContainer::GetRefCount(dword_162EE84);
  if ( ExecutingCollection >= 0x16 )
    sub_5E9F20((char)"(0<=gameRoom) && (gameRoom<NUM_GAMES_COUNTER)", "..\\Casino\\hof.cpp", 690);
  v3 = 0;
  if ( !byte_794990[184 * a1] )
  {
    ExecutingCollection = -1;
    v3 = -1;
  }
  if ( ExecutingCollection == 14 && dword_79338C )
    v3 = *(_DWORD *)(dword_7947E0 + 20244);
  dword_794994[46 * a1] = ExecutingCollection;
  dword_794998[46 * a1] = v3;
  return v3;
}


//======================================================================
// sub_5E8550
// entry 005e8550  size 25  status ok
//======================================================================

int __stdcall sub_5E8550(char a1, int a2)
{
  byte_794930[a2] = a1;
  return a2;
}


//======================================================================
// sub_5E8570
// entry 005e8570  size 26  status ok
//======================================================================

bool __stdcall sub_5E8570(int a1)
{
  return byte_794930[a1] != 0;
}


//======================================================================
// sub_5E8590
// entry 005e8590  size 58  status ok
//======================================================================

char __stdcall sub_5E8590(int a1)
{
  char result; // al

  result = byte_795F95;
  if ( !byte_795F95 )
  {
    result = sub_5E8570(a1);
    if ( result )
      return sub_5DC8E0((_DWORD *)dword_7947E4);
  }
  return result;
}


//======================================================================
// sub_5E85D0
// entry 005e85d0  size 213  status ok
//======================================================================

int __thiscall sub_5E85D0(_BYTE *this)
{
  _DWORD *v2; // [esp+4h] [ebp-1Ch]
  _DWORD *v4; // [esp+Ch] [ebp-14h]

  *(this + 400) = 1;
  sub_5F5CC0(this);
  sub_5EAE80(3207405, 0, 0, 2000, -1);
  (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 176))(this, 0);
  *((_DWORD *)this + 94) = 3;
  v4 = operator new(0x20u);
  if ( v4 )
  {
    sub_5FC0D0(0);
    *v4 = &HofAnimationScript::`vftable';
    v2 = v4;
  }
  else
  {
    v2 = 0;
  }
  return sub_5F5DF0(v2);
}


//======================================================================
// sub_5E86B0
// entry 005e86b0  size 54  status ok
//======================================================================

int __thiscall sub_5E86B0(_BYTE *this)
{
  int result; // eax

  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 112))(this);
  sub_5F5D50(0);
  result = sub_5F5DF0(0);
  *(this + 400) = 0;
  return result;
}


//======================================================================
// sub_5E86F0
// entry 005e86f0  size 218  status ok
//======================================================================

int __thiscall sub_5E86F0(_DWORD **this, int a2)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-20h]

  result = a2;
  if ( a2 )
  {
    if ( a2 == 1 )
      return sub_5DC9D0((_DWORD *)dword_7947E4);
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(**(this + 95) + 4))(*(this + 95), 1);
    ((void (__thiscall *)(_DWORD **))(*this)[29])(this);
    if ( operator new(0x20u) )
      v3 = sub_6010A0(*(this + 95));
    else
      v3 = 0;
    return sub_5F5D50(v3);
  }
  return result;
}


//======================================================================
// sub_5E87D0
// entry 005e87d0  size 42  status ok
//======================================================================

int __thiscall sub_5E87D0(int *this)
{
  int result; // eax

  result = dword_7947E4;
  if ( *(_DWORD *)(dword_7947E4 + 92) )
    return sub_5E86F0(*(_DWORD ***)(dword_7947E4 + 92), *(this + 5));
  return result;
}


//======================================================================
// sub_5E8830
// entry 005e8830  size 119  status ok
//======================================================================

_DWORD *__thiscall sub_5E8830(_DWORD *this)
{
  sub_5D7B60(this);
  *this = &SlotsNavigationRoom::`vftable';
  dword_795070 = (int)this;
  *(this + 32) = -1;
  sub_5E88E0(0);
  return this;
}


//======================================================================
// sub_5E88B0
// entry 005e88b0  size 38  status ok
//======================================================================

int __thiscall sub_5E88B0(_DWORD *this)
{
  *this = &SlotsNavigationRoom::`vftable';
  dword_795070 = 0;
  return sub_5D7BD0(this);
}


//======================================================================
// sub_5E88E0
// entry 005e88e0  size 76  status ok
//======================================================================

int __thiscall sub_5E88E0(_DWORD *this, int a2)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 32) != a2 )
  {
    sub_5F1AD0(dword_75ECB8[a2]);
    sub_5E8AF0(this);
    *(this + 32) = a2;
    return sub_5E8AA0(this);
  }
  return result;
}


//======================================================================
// sub_5E8930
// entry 005e8930  size 192  status ok
//======================================================================

int __thiscall sub_5E8930(_DWORD *this)
{
  _DWORD *v2; // [esp+4h] [ebp-1Ch]
  _DWORD *v4; // [esp+Ch] [ebp-14h]

  sub_5D8230(this);
  if ( (unsigned __int8)sub_636760(dword_162EE84) )
    (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, _DWORD))(*this + 364))(this, 1, 0, -1, -1, 0);
  v4 = operator new(0x20u);
  if ( v4 )
  {
    sub_5FC0D0(0);
    *v4 = &SlotsNavigationRoomScript::`vftable';
    v2 = v4;
  }
  else
  {
    v2 = 0;
  }
  return sub_5F1B70(v2);
}


//======================================================================
// sub_5E89F0
// entry 005e89f0  size 52  status ok
//======================================================================

int __thiscall sub_5E89F0(_DWORD *this, int a2)
{
  int result; // eax

  if ( a2 == 201 )
    return sub_5E88E0(this, 0);
  if ( a2 >= 100 )
    return sub_5E8A40(a2);
  return result;
}


//======================================================================
// sub_5E8A40
// entry 005e8a40  size 87  status ok
//======================================================================

_DWORD *__thiscall sub_5E8A40(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  int v3; // [esp+0h] [ebp-8h]

  result = this;
  v3 = *(this + 32);
  switch ( v3 )
  {
    case 0:
      return (_DWORD *)sub_5E9C00(a2);
    case 1:
      return (_DWORD *)sub_5E9160(a2);
    case 2:
      return (_DWORD *)sub_5E97A0(a2);
  }
  return result;
}


//======================================================================
// sub_5E8AA0
// entry 005e8aa0  size 73  status ok
//======================================================================

int __thiscall sub_5E8AA0(_DWORD *this)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-8h]

  result = (int)this;
  v2 = *(this + 32);
  switch ( v2 )
  {
    case 0:
      return sub_5E9AA0(0, this);
    case 1:
      return sub_5E8B40(this);
    case 2:
      return sub_5E93F0(this);
  }
  return result;
}


//======================================================================
// sub_5E8AF0
// entry 005e8af0  size 73  status ok
//======================================================================

int __thiscall sub_5E8AF0(_DWORD *this)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-8h]

  result = (int)this;
  v2 = *(this + 32);
  switch ( v2 )
  {
    case 0:
      return sub_5E9BC0(this);
    case 1:
      return sub_5E8D00(this);
    case 2:
      return sub_5E94B0(this);
  }
  return result;
}


//======================================================================
// sub_5E8B40
// entry 005e8b40  size 192  status ok
//======================================================================

int __thiscall sub_5E8B40(void *this)
{
  sub_5E97F0(0, 100, &unk_75ECEC, 4);
  sub_5FB3A0(0);
  sub_6064E0(0);
  sub_5E9860(83, 340);
  sub_5E9910(83, 395);
  sub_5E8C00(this);
  sub_5E8C40(this);
  sub_5E8C80(this);
  sub_5E8CC0(this);
  sub_5E9A30(5, 87, 261);
  sub_5E9160(100);
  sub_5F9CE0(0, 0, 3200552, 0, 0, 2000, 0, 255, 0);
  return sub_5E9250(this);
}


//======================================================================
// sub_5E8C00
// entry 005e8c00  size 54  status ok
//======================================================================

int sub_5E8C00()
{
  sub_5E97F0(1, 100, &unk_75ECFC, 10);
  sub_5FB3A0(1);
  return sub_6064E0(0);
}


//======================================================================
// sub_5E8C40
// entry 005e8c40  size 54  status ok
//======================================================================

int sub_5E8C40()
{
  sub_5E97F0(2, 100, &unk_75ED24, 6);
  sub_5FB3A0(2);
  return sub_6064E0(0);
}


//======================================================================
// sub_5E8C80
// entry 005e8c80  size 54  status ok
//======================================================================

int sub_5E8C80()
{
  sub_5E97F0(3, 100, &unk_75ED3C, 4);
  sub_5FB3A0(3);
  return sub_6064E0(0);
}


//======================================================================
// sub_5E8CC0
// entry 005e8cc0  size 54  status ok
//======================================================================

int sub_5E8CC0()
{
  sub_5E97F0(4, 100, &unk_75ED4C, 10);
  sub_5FB3A0(4);
  return sub_6064E0(0);
}


//======================================================================
// sub_5E8D00
// entry 005e8d00  size 209  status ok
//======================================================================

int sub_5E8D00()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 6; ++i )
  {
    v0 = sub_5FB3A0(i);
    sub_5FBD10(v0, -1);
  }
  v1 = sub_5FB300(200);
  sub_5FBCB0(v1, -1);
  v2 = sub_5FB300(201);
  sub_5FBCB0(v2, -1);
  v3 = sub_5FB2B0(0);
  sub_5FBC80(v3, -1);
  v4 = sub_5FB2B0(1);
  return sub_5FBC80(v4, -1);
}


//======================================================================
// sub_5E8DE0
// entry 005e8de0  size 557  status ok
//======================================================================

int sub_5E8DE0()
{
  int v0; // eax
  int v1; // eax
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // [esp+14h] [ebp-8h]

  v0 = sub_5FB3A0(0);
  v6 = sub_606490(v0);
  if ( v6 )
  {
    switch ( v6 )
    {
      case 1:
        v3 = sub_5FB3A0(2);
        switch ( sub_606490(v3) )
        {
          case 0:
            result = 3207026;
            break;
          case 1:
            result = 3207029;
            break;
          case 2:
            result = 3207032;
            break;
          case 3:
            result = 3207027;
            break;
          case 4:
            result = 3207030;
            break;
          case 5:
            result = 3207033;
            break;
          default:
            return -1;
        }
        break;
      case 2:
        v4 = sub_5FB3A0(3);
        switch ( sub_606490(v4) )
        {
          case 0:
            result = 3207035;
            break;
          case 1:
            result = 3207028;
            break;
          case 2:
            result = 3207031;
            break;
          case 3:
            result = 3207034;
            break;
          default:
            return -1;
        }
        break;
      case 3:
        v5 = sub_5FB3A0(4);
        switch ( sub_606490(v5) )
        {
          case 0:
            result = 3207007;
            break;
          case 1:
            result = 3207008;
            break;
          case 2:
            result = 3207009;
            break;
          case 3:
            result = 3207010;
            break;
          case 4:
            result = 3207011;
            break;
          case 5:
            result = 3207013;
            break;
          case 6:
            result = 3207014;
            break;
          case 7:
            result = 3207015;
            break;
          case 8:
            result = 3211000;
            break;
          case 9:
            result = 3210000;
            break;
          default:
            return -1;
        }
        break;
      default:
        return -1;
    }
  }
  else
  {
    v1 = sub_5FB3A0(1);
    switch ( sub_606490(v1) )
    {
      case 0:
        result = 3207018;
        break;
      case 1:
        result = 3207023;
        break;
      case 2:
        result = 3207025;
        break;
      case 3:
        result = 3207021;
        break;
      case 4:
        result = 3207024;
        break;
      case 5:
        result = 3207016;
        break;
      case 6:
        result = 3207019;
        break;
      case 7:
        result = 3207017;
        break;
      case 8:
        result = 3207022;
        break;
      case 9:
        result = 3207020;
        break;
      default:
        return -1;
    }
  }
  return result;
}


//======================================================================
// sub_5E9090
// entry 005e9090  size 156  status ok
//======================================================================

int sub_5E9090()
{
  int v0; // eax
  int result; // eax

  v0 = sub_5FB3A0(5);
  switch ( sub_606490(v0) )
  {
    case 0:
      result = 3207036;
      break;
    case 1:
      result = 3207037;
      break;
    case 2:
      result = 3207038;
      break;
    case 3:
      result = 3207039;
      break;
    case 4:
      result = 3207040;
      break;
    case 5:
      result = 3207041;
      break;
    case 6:
      result = 3207042;
      break;
    case 7:
      result = 3207043;
      break;
    case 8:
      result = 3207044;
      break;
    case 9:
      result = 3207045;
      break;
    case 10:
      result = 3207046;
      break;
    case 11:
      result = 3207047;
      break;
    default:
      result = 3207039;
      break;
  }
  return result;
}


//======================================================================
// sub_5E9160
// entry 005e9160  size 235  status ok
//======================================================================

int __thiscall sub_5E9160(void *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v6; // [esp-4h] [ebp-1Ch]
  int v7; // [esp+4h] [ebp-14h]
  int v9; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  if ( a2 == 200 && sub_5E8DE0() != -1 )
  {
    v6 = sub_5E8DE0();
    v2 = sub_5E9090();
    (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, v2, v6);
  }
  v3 = sub_5FB3A0(0);
  v9 = sub_606490(v3) + 1;
  for ( i = 1; i < 5; ++i )
  {
    if ( sub_5FB3A0(i) )
    {
      if ( v9 == i )
      {
        v7 = sub_5FB3A0(i);
        (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 116))(v7);
      }
      else
      {
        v4 = sub_5FB3A0(i);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 112))(v4, v4);
      }
    }
  }
  return sub_5E9250(this);
}


//======================================================================
// sub_5E9250
// entry 005e9250  size 397  status ok
//======================================================================

int sub_5E9250()
{
  int result; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // [esp+Ch] [ebp-20h]
  int v5; // [esp+10h] [ebp-1Ch]
  int v6; // [esp+18h] [ebp-14h]
  int v7; // [esp+1Ch] [ebp-10h]
  int v8; // [esp+20h] [ebp-Ch]
  int v9; // [esp+24h] [ebp-8h]
  int v10; // [esp+24h] [ebp-8h]
  int v11; // [esp+28h] [ebp-4h]

  result = sub_5FB2B0(0);
  v9 = result;
  if ( result )
  {
    v1 = sub_5FB3A0(0);
    v7 = sub_606490(v1);
    v6 = 3200578;
    switch ( v7 )
    {
      case 0:
        sub_5EAF00(3200578);
        break;
      case 1:
        sub_5EAF00(3200579);
        break;
      case 2:
        sub_5EAF00(3200580);
        break;
      case 3:
        v6 = 3200552;
        goto LABEL_7;
      default:
LABEL_7:
        sub_5EAF00(v6);
        break;
    }
    v2 = sub_5FB3A0(v7 + 1);
    v8 = sub_606490(v2);
    if ( v7 == 3 )
    {
      if ( v8 < 8 )
      {
        v4 = v8;
        if ( v8 >= 5 )
          v4 = v8 + 1;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 176))(v9, v4);
      }
      else
      {
        v5 = 0;
        if ( v8 == 8 )
        {
          v5 = 1;
        }
        else if ( v8 == 9 )
        {
          v5 = 2;
        }
        sub_5EAF00(3200556);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 176))(v9, v5);
      }
    }
    else
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 176))(v9, v8);
    }
    v10 = sub_5FB2B0(1);
    v3 = sub_5FB3A0(5);
    v11 = sub_606490(v3);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 176))(v10, v11);
  }
  return result;
}


//======================================================================
// sub_5E93F0
// entry 005e93f0  size 181  status ok
//======================================================================

int sub_5E93F0()
{
  int v1; // [esp+0h] [ebp-8h]

  sub_5E97F0(0, 100, &unk_75ED74, 9);
  sub_5FB3A0(0);
  sub_6064E0(0);
  sub_5F9CE0(0, 0, 3200514, 0, 0, 2000, 0, 255, 0);
  sub_5E9860(112, 310);
  sub_5E9910(112, 370);
  sub_5E99C0(1, 93, 217);
  v1 = sub_5FB2B0(1);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 176))(v1, 3);
}


//======================================================================
// sub_5E94B0
// entry 005e94b0  size 209  status ok
//======================================================================

int sub_5E94B0()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 2; ++i )
  {
    v0 = sub_5FB3A0(i);
    sub_5FBD10(v0, -1);
  }
  v1 = sub_5FB2B0(0);
  sub_5FBC80(v1, -1);
  v2 = sub_5FB2B0(1);
  sub_5FBC80(v2, -1);
  v3 = sub_5FB300(200);
  sub_5FBCB0(v3, -1);
  v4 = sub_5FB300(201);
  return sub_5FBCB0(v4, -1);
}


//======================================================================
// sub_5E9590
// entry 005e9590  size 126  status ok
//======================================================================

int sub_5E9590()
{
  int v0; // eax
  int result; // eax

  v0 = sub_5FB3A0(0);
  switch ( sub_606490(v0) )
  {
    case 0:
      result = 3208014;
      break;
    case 1:
      result = 3208020;
      break;
    case 2:
      result = 3208017;
      break;
    case 3:
      result = 3208016;
      break;
    case 4:
      result = 3208018;
      break;
    case 5:
      result = 3208015;
      break;
    case 6:
      result = 3208019;
      break;
    case 7:
      result = 3208022;
      break;
    case 8:
      result = 3208021;
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_5E9640
// entry 005e9640  size 93  status ok
//======================================================================

int sub_5E9640()
{
  int v0; // eax
  int result; // eax

  v0 = sub_5FB3A0(1);
  switch ( sub_606490(v0) )
  {
    case 0:
      result = 3208023;
      break;
    case 1:
      result = 3208024;
      break;
    case 2:
      result = 3208025;
      break;
    case 3:
      result = 3208026;
      break;
    default:
      result = 3208023;
      break;
  }
  return result;
}


//======================================================================
// sub_5E96B0
// entry 005e96b0  size 211  status ok
//======================================================================

void __stdcall sub_5E96B0(int a1)
{
  int v1; // [esp+8h] [ebp-8h]
  int v2; // [esp+Ch] [ebp-4h]
  int v3; // [esp+Ch] [ebp-4h]

  if ( a1 < 500 )
  {
    if ( a1 >= 100 )
    {
      v3 = sub_5FB2B0(0);
      if ( v3 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 176))(v3, a1 - 100);
    }
  }
  else
  {
    v1 = a1 - 500;
    switch ( a1 )
    {
      case 500:
        v1 = 3;
        break;
      case 501:
        v1 = 4;
        break;
      case 502:
        v1 = 6;
        break;
      case 503:
        v1 = 8;
        break;
      default:
        break;
    }
    v2 = sub_5FB2B0(1);
    if ( v2 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 176))(v2, v1);
  }
}


//======================================================================
// sub_5E97A0
// entry 005e97a0  size 79  status ok
//======================================================================

void __thiscall sub_5E97A0(void *this, int a2)
{
  int v2; // eax
  int v4; // [esp+4h] [ebp-4h]

  sub_5E96B0(a2);
  if ( a2 == 200 )
  {
    v4 = sub_5E9590();
    if ( v4 != -1 )
    {
      v2 = sub_5E9640();
      (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, v2, v4);
    }
  }
}


//======================================================================
// sub_5E97F0
// entry 005e97f0  size 105  status ok
//======================================================================

int __stdcall sub_5E97F0(int a1, int a2, int a3, int a4)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < a4; ++i )
  {
    sub_5F9FF0(0, 0, i + a2, a1, *(_DWORD *)(a3 + 4 * i), 0, 0, 4, &Source, 0, -1, -1, -1, 20, 0);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5E9860
// entry 005e9860  size 172  status ok
//======================================================================

int __stdcall sub_5E9860(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-20h]
  int v4; // [esp+4h] [ebp-1Ch]

  if ( operator new(0x1DCu) )
    v4 = Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v3);
  else
    v4 = 0;
  return sub_5F9DE0(v4, 200, 3200557, a1, a2, 1, &Source, -1, -1, -1, -1, 0);
}


//======================================================================
// sub_5E9910
// entry 005e9910  size 172  status ok
//======================================================================

int __stdcall sub_5E9910(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-20h]
  int v4; // [esp+4h] [ebp-1Ch]

  if ( operator new(0x1DCu) )
    v4 = Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v3);
  else
    v4 = 0;
  return sub_5F9DE0(v4, 201, 3200558, a1, a2, 1, &Source, -1, -1, -1, -1, 0);
}


//======================================================================
// sub_5E99C0
// entry 005e99c0  size 109  status ok
//======================================================================

int __stdcall sub_5E99C0(int a1, int a2, int a3)
{
  sub_5E97F0(a1, 500, (int)&unk_75ED98, 4);
  sub_5FB3A0(a1);
  sub_6064E0(0);
  return sub_5F9CE0(0, 1, 3200571, a2, a3, 2000, 0, 255, 0);
}


//======================================================================
// sub_5E9A30
// entry 005e9a30  size 109  status ok
//======================================================================

int __stdcall sub_5E9A30(int a1, int a2, int a3)
{
  sub_5E97F0(a1, 500, (int)&unk_75EDA8, 12);
  sub_5FB3A0(a1);
  sub_6064E0(0);
  return sub_5F9CE0(0, 1, 3200571, a2, a3, 2000, 0, 255, 0);
}


//======================================================================
// sub_5E9AA0
// entry 005e9aa0  size 287  status ok
//======================================================================

void sub_5E9AA0()
{
  int v0; // [esp+4h] [ebp-20h]
  int i; // [esp+14h] [ebp-10h]

  for ( i = 0; i < 2; ++i )
  {
    if ( operator new(0x1E8u) )
      v0 = sub_603120(0, dword_75EDE0[i], 0);
    else
      v0 = 0;
    sub_5F9DE0(v0, i + 100, dword_75EDD8[i], 0, 0, 1, &Source, -1, -1, -1, -1, 0);
    sub_5FB300(i + 100);
    sub_6023D0(0, 1, 0, 1);
    sub_5FB300(i + 100);
    sub_5EB700(1);
  }
}


//======================================================================
// sub_5E9BC0
// entry 005e9bc0  size 62  status ok
//======================================================================

int sub_5E9BC0()
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 2; ++i )
  {
    sub_5FBCB0(0, i + 100);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5E9C00
// entry 005e9c00  size 57  status ok
//======================================================================

int __thiscall sub_5E9C00(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  if ( a2 == 100 )
    return sub_5E88E0(this, 1);
  if ( a2 == 101 )
    return sub_5E88E0(this, 2);
  return result;
}


//======================================================================
// sub_5E9C40
// entry 005e9c40  size 348  status ok
//======================================================================

char __stdcall sub_5E9C40(int a1, int a2)
{
  switch ( a2 )
  {
    case 100001:
      sub_5FE640(-2, 0);
      sub_5FE640(100009, 0);
      sub_5FE640(100007, 0);
      sub_5FE640(100008, 0);
      sub_5FE240(5017, -1, -1, 0);
      sub_5FE240(100006, -1, -1, 0);
      sub_5FE240(-2, -1, 5017, 0);
      break;
    case 100031:
      sub_5FE640(-2, 0);
      sub_5FE640(100033, 0);
      break;
    case 100035:
      sub_5FE640(-2, 2);
      sub_5FE640(100037, 0);
      sub_5FE640(100038, 0);
      break;
    case 100055:
      sub_5FE640(-2, 0);
      sub_5FE640(100058, 0);
      sub_5FE640(100057, 0);
      sub_5FE240(-2, -1, 100061, 0);
      sub_5FE240(100062, -1, -2, 0);
      break;
    default:
      return sub_5D8670(a1, a2);
  }
  return sub_5D8670(a1, a2);
}


//======================================================================
// sub_5E9E60
// entry 005e9e60  size 24  status ok
//======================================================================

bool sub_5E9E60()
{
  return GetAsyncKeyState(17) < 0;
}


//======================================================================
// sub_5E9E80
// entry 005e9e80  size 24  status ok
//======================================================================

bool sub_5E9E80()
{
  return GetAsyncKeyState(16) < 0;
}


//======================================================================
// sub_5E9EC0
// entry 005e9ec0  size 24  status ok
//======================================================================

bool sub_5E9EC0()
{
  return GetAsyncKeyState(18) < 0;
}


//======================================================================
// sub_5E9F00
// entry 005e9f00  size 15  status ok
//======================================================================

void __cdecl sub_5E9F00(DWORD dwMilliseconds)
{
  Sleep(dwMilliseconds);
}


//======================================================================
// sub_5E9F20
// entry 005e9f20  size 160  status ok
//======================================================================

char __cdecl sub_5E9F20(const char *a1, const char *a2, int a3)
{
  char Buffer[524]; // [esp+0h] [ebp-210h] BYREF

  sub_62FDE0("Assert: %s\t%s\t%i\n", (char)a1);
  if ( dword_7960D8 && *(_DWORD *)(dword_7960D8 + 20) && sub_607960((int)"ShowAsserts", 0) )
  {
    sprintf(Buffer, "%s\n%s\nLine: %i", a1, a2, a3);
    MessageBoxA(0, Buffer, "Assert", 0);
  }
  return 1;
}


//======================================================================
// sub_5E9FC0
// entry 005e9fc0  size 11  status ok
//======================================================================

UINT sub_5E9FC0()
{
  return GetDoubleClickTime();
}


//======================================================================
// sub_5E9FD0
// entry 005e9fd0  size 28  status ok
//======================================================================

int __cdecl sub_5E9FD0(FILE *Stream)
{
  int v1; // eax

  v1 = fileno(Stream);
  return filelength(v1);
}


//======================================================================
// sub_5E9FF0
// entry 005e9ff0  size 72  status ok
//======================================================================

int __cdecl sub_5E9FF0(char *Str)
{
  FILE *Stream; // [esp+0h] [ebp-8h]
  int v3; // [esp+4h] [ebp-4h]

  Stream = (FILE *)sub_5EA9C0(Str, "rb");
  if ( !Stream )
    return -1;
  v3 = sub_5E9FD0(Stream);
  fclose(Stream);
  return v3;
}


//======================================================================
// sub_5EA040
// entry 005ea040  size 94  status ok
//======================================================================

bool __cdecl sub_5EA040(char *Source, LPCSTR lpNewFileName, unsigned __int8 a3)
{
  int Destination[131]; // [esp+0h] [ebp-210h] BYREF

  strcpy((char *)Destination, Source);
  sub_5EAA40((char *)Destination, Destination[0]);
  return CopyFileA((LPCSTR)Destination, lpNewFileName, a3);
}


//======================================================================
// sub_5EA0A0
// entry 005ea0a0  size 90  status ok
//======================================================================

bool __cdecl sub_5EA0A0(char *Source)
{
  int Destination[131]; // [esp+0h] [ebp-210h] BYREF

  strcpy((char *)Destination, Source);
  sub_5EAA40((char *)Destination, Destination[0]);
  return GetFileAttributesA((LPCSTR)Destination) != -1;
}


//======================================================================
// sub_5EA220
// entry 005ea220  size 177  status ok
//======================================================================

bool __cdecl sub_5EA220(LPCSTR lpFile)
{
  HWND hwnd; // [esp+0h] [ebp-8h]
  int v3; // [esp+4h] [ebp-4h]
  int v4; // [esp+4h] [ebp-4h]

  hwnd = 0;
  v3 = _RTDynamicCast(
         *(_DWORD *)(dword_7960D8 + 16),
         0,
         &VWindow `RTTI Type Descriptor',
         &Window `RTTI Type Descriptor',
         0);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 48))(v3) )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 36))(v3, 0);
  v4 = _RTDynamicCast(
         *(_DWORD *)(dword_7960D8 + 16),
         0,
         &VWindow `RTTI Type Descriptor',
         &Window `RTTI Type Descriptor',
         0);
  if ( v4 )
    hwnd = *(HWND *)(v4 + 140);
  return (int)ShellExecuteA(hwnd, "open", lpFile, 0, ".", 1) > 32;
}


//======================================================================
// sub_5EA2E0
// entry 005ea2e0  size 74  status ok
//======================================================================

bool sub_5EA2E0()
{
  int v1; // [esp+0h] [ebp-4h]

  v1 = _RTDynamicCast(
         *(_DWORD *)(dword_7960D8 + 16),
         0,
         &VWindow `RTTI Type Descriptor',
         &Window `RTTI Type Descriptor',
         0);
  return v1 && GetForegroundWindow() == *(HWND *)(v1 + 140);
}


//======================================================================
// sub_5EA400
// entry 005ea400  size 106  status ok
//======================================================================

LONG __cdecl sub_5EA400(LONG *a1)
{
  LONG result; // eax
  struct tagPOINT Point; // [esp+0h] [ebp-Ch] BYREF
  LONG v3; // [esp+8h] [ebp-4h]

  result = _RTDynamicCast(
             *(_DWORD *)(dword_7960D8 + 16),
             0,
             &VWindow `RTTI Type Descriptor',
             &Window `RTTI Type Descriptor',
             0);
  v3 = result;
  if ( result )
  {
    Point.x = *a1;
    Point.y = a1[1];
    ScreenToClient(*(HWND *)(v3 + 140), &Point);
    *a1 = Point.x;
    result = Point.y;
    a1[1] = Point.y;
  }
  return result;
}


//======================================================================
// sub_5EA470
// entry 005ea470  size 38  status ok
//======================================================================

struct tagPOINT sub_5EA470()
{
  struct tagPOINT Point; // [esp+0h] [ebp-10h] BYREF

  GetCursorPos(&Point);
  return Point;
}


//======================================================================
// sub_5EA540
// entry 005ea540  size 101  status ok
//======================================================================

char *__cdecl sub_5EA540(char *Str)
{
  if ( !Str || !*Str )
    return Str;
  sub_5EA5B0(Str);
  if ( *Str )
  {
    if ( Str[strlen(Str) - 1] != 92 )
      strcat(Str, "\\");
  }
  else
  {
    *Str = 92;
  }
  return Str;
}


//======================================================================
// sub_5EA5B0
// entry 005ea5b0  size 194  status ok
//======================================================================

char *__cdecl sub_5EA5B0(char *a1)
{
  size_t v2; // eax
  char *v3; // [esp+0h] [ebp-4h]
  char *i; // [esp+0h] [ebp-4h]

  if ( !a1 || !*a1 )
    return a1;
  if ( *a1 == 92 && a1[1] == 92 )
    v3 = a1 + 2;
  else
    v3 = a1;
  while ( *v3 )
  {
    if ( *v3 == 92 && v3[1] == 92 )
    {
      v2 = strlen(v3 + 1);
      memcpy(v3, v3 + 1, v2 + 1);
    }
    ++v3;
  }
  for ( i = v3 - 1; *i == 32; --i )
    *i = 0;
  return a1;
}


//======================================================================
// sub_5EA680
// entry 005ea680  size 211  status ok
//======================================================================

LPSTR sub_5EA680()
{
  const char *v1; // eax
  LPITEMIDLIST ppidl[2]; // [esp+8h] [ebp-Ch] BYREF
  IMalloc *ppMalloc; // [esp+10h] [ebp-4h] BYREF

  if ( !pszPath )
  {
    SHGetSpecialFolderLocation(0, 26, ppidl);
    pszPath = (LPSTR)malloc(0x104u);
    *pszPath = 0;
    ppidl[1] = (LPITEMIDLIST)SHGetPathFromIDListA(ppidl[0], pszPath);
    SHGetMalloc(&ppMalloc);
    ppMalloc->lpVtbl->Free(ppMalloc, ppidl[0]);
    ppMalloc->lpVtbl->Release(ppMalloc);
    strcat(pszPath, "\\");
    v1 = sub_5DCA70();
    strcat(pszPath, v1);
    sub_62FDE0("User data path: %s\n", (char)pszPath);
  }
  return pszPath;
}


//======================================================================
// sub_5EA760
// entry 005ea760  size 10  status ok
//======================================================================

char *sub_5EA760()
{
  return &byte_7950BC;
}


//======================================================================
// sub_5EA770
// entry 005ea770  size 162  status ok
//======================================================================

char *__cdecl sub_5EA770(char *Destination)
{
  char *v1; // eax
  const char *v2; // eax
  _BYTE v4[28]; // [esp+8h] [ebp-2Ch] BYREF
  int v5; // [esp+30h] [ebp-4h]

  sub_5EA5B0(Destination);
  std::string::string(v4, Destination);
  v5 = 0;
  v1 = sub_5EA760();
  strcpy(Destination, v1);
  v2 = (const char *)std::string::c_str(v4);
  strcat(Destination, v2);
  v5 = -1;
  std::string::~string(v4);
  return Destination;
}


//======================================================================
// sub_5EA820
// entry 005ea820  size 404  status ok
//======================================================================

FILE *__cdecl sub_5EA820(char *Str, char *Mode, int a3)
{
  size_t v3; // eax
  const char *v4; // eax
  const char *v6; // eax
  char *v7; // eax
  const char *v8; // eax
  FILE *v9; // [esp+4h] [ebp-38h]
  FILE *v10; // [esp+8h] [ebp-34h]
  char *Destination; // [esp+Ch] [ebp-30h]
  _BYTE v12[28]; // [esp+10h] [ebp-2Ch] BYREF
  int v13; // [esp+38h] [ebp-4h]

  v3 = strlen(Str);
  Destination = (char *)malloc(v3 + 10);
  strcpy(Destination, Str);
  sub_5EA5B0(Destination);
  std::string::operator=(a3, Destination);
  free(Destination);
  if ( *Mode != 114
    || strchr(Mode, 119)
    || *(_BYTE *)std::string::operator[](a3, 0)
    && *(_BYTE *)std::string::operator[](a3, 1) == 58
    && *(_BYTE *)std::string::operator[](a3, 2) == 92 )
  {
    v4 = (const char *)std::string::c_str(a3);
    return fopen(v4, Mode);
  }
  else
  {
    v6 = (const char *)std::string::c_str(a3);
    v10 = fopen(v6, Mode);
    if ( v10 )
    {
      return v10;
    }
    else
    {
      v7 = sub_5EA760();
      std::string::string(v12, v7);
      v13 = 0;
      std::string::append(v12, a3);
      std::string::operator=(a3, v12);
      v8 = (const char *)std::string::c_str(a3);
      v9 = fopen(v8, Mode);
      v13 = -1;
      std::string::~string(v12);
      return v9;
    }
  }
}


//======================================================================
// sub_5EA9C0
// entry 005ea9c0  size 123  status ok
//======================================================================

FILE *__cdecl sub_5EA9C0(char *Str, char *Mode)
{
  FILE *v3; // [esp+4h] [ebp-30h]
  int v4[7]; // [esp+8h] [ebp-2Ch] BYREF
  int v5; // [esp+30h] [ebp-4h]

  std::string::string(v4);
  v5 = 0;
  v3 = sub_5EA820(Str, Mode, (int)v4);
  v5 = -1;
  std::string::~string(v4);
  return v3;
}


//======================================================================
// sub_5EAA40
// entry 005eaa40  size 171  status ok
//======================================================================

char *__cdecl sub_5EAA40(char *Destination)
{
  const char *v1; // eax
  FILE *Stream; // [esp+8h] [ebp-30h]
  int v4[7]; // [esp+Ch] [ebp-2Ch] BYREF
  int v5; // [esp+34h] [ebp-4h]

  std::string::string(v4);
  v5 = 0;
  Stream = sub_5EA820(Destination, "rb", (int)v4);
  if ( Stream )
    fclose(Stream);
  v1 = (const char *)std::string::c_str(v4);
  strcpy(Destination, v1);
  v5 = -1;
  std::string::~string(v4);
  return Destination;
}


//======================================================================
// sub_5EAAF0
// entry 005eaaf0  size 262  status ok
//======================================================================

void __thiscall sub_5EAAF0(_DWORD *this)
{
  int v1; // [esp+0h] [ebp-14h]

  sub_5F49D0(v1);
  *this = &sciView::`vftable';
  *(this + 19) = 0;
  *((_BYTE *)this + 80) = 0;
  *(this + 89) = 0;
  *(this + 87) = 0;
  *(this + 93) = 0;
  *((_BYTE *)this + 364) = -1;
  *(this + 88) = 0;
  *(this + 90) = 0;
  sub_5EB700(0);
  *(this + 85) = 0;
  *(this + 86) = 0;
  *((_BYTE *)this + 366) = -1;
  *((_BYTE *)this + 367) = 0;
  *(this + 92) = 4;
  *(this + 18) = *(_DWORD *)(dword_7960D8 + 24);
}


//======================================================================
// sub_5EAC00
// entry 005eac00  size 125  status ok
//======================================================================

void __thiscall sub_5EAC00(_DWORD *this)
{
  *this = &sciView::`vftable';
  sub_5EAC80(this);
  if ( *(this + 93) )
    sub_6041D0(*(this + 93));
  sub_5F4AD0();
}


//======================================================================
// sub_5EAC80
// entry 005eac80  size 43  status ok
//======================================================================

int __thiscall sub_5EAC80(_DWORD *this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 10) )
  {
    result = sub_5F54A0(this);
    if ( (_BYTE)result )
      return sub_5F58D0(this);
  }
  return result;
}


//======================================================================
// sub_5EACD0
// entry 005eacd0  size 432  status ok
//======================================================================

int __thiscall sub_5EACD0(int this)
{
  int result; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax

  if ( *(_DWORD *)(this + 372) )
    sub_6041D0(*(_DWORD *)(this + 372));
  *(_DWORD *)(this + 372) = 0;
  if ( *(_DWORD *)(this + 76) || (result = strcmp((const char *)(this + 80), &Source)) != 0 )
  {
    if ( *(_DWORD *)(this + 76) )
      v2 = sub_603C50(542655828, *(_DWORD *)(this + 76), 0);
    else
      v2 = sub_603FB0(542655828, (char *)(this + 80));
    *(_DWORD *)(this + 372) = v2;
    if ( *(_DWORD *)(this + 372) )
    {
      *(_DWORD *)(this + 360) = sub_6163C0(*(_DWORD *)(this + 372)) - 1;
      *(_DWORD *)(this + 352) = sub_6163E0(0) - 1;
    }
    if ( *(_DWORD *)(this + 348) > sub_5EB240(this) )
      *(_DWORD *)(this + 348) = sub_5EB240(this);
    if ( *(int *)(this + 348) < 0 )
      *(_DWORD *)(this + 348) = 0;
    if ( *(_DWORD *)(this + 356) > CMFCRibbonButton::IsDefaultCommand((CMFCRibbonButton *)this) )
      *(_DWORD *)(this + 356) = CMFCRibbonButton::IsDefaultCommand((CMFCRibbonButton *)this);
    if ( *(int *)(this + 356) < 0 )
      *(_DWORD *)(this + 356) = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 172))(this);
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
    v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 76))(this, v3);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 68))(this, v4);
    return (*(int (__thiscall **)(int))(*(_DWORD *)this + 172))(this);
  }
  return result;
}


//======================================================================
// sub_5EAE80
// entry 005eae80  size 49  status ok
//======================================================================

int __stdcall sub_5EAE80(int a1, int a2, int a3, int a4, int a5)
{
  sub_5EAF00(a1);
  return sub_5F50C0(a2, a3, a4, a5);
}


//======================================================================
// sub_5EAEC0
// entry 005eaec0  size 49  status ok
//======================================================================

int __stdcall sub_5EAEC0(char *Str1, int a2, int a3, int a4, int a5)
{
  sub_5EAF60(Str1);
  return sub_5F50C0(a2, a3, a4, a5);
}


//======================================================================
// sub_5EAF00
// entry 005eaf00  size 83  status ok
//======================================================================

int __thiscall sub_5EAF00(int this, int a2)
{
  int result; // eax

  result = this;
  *(_BYTE *)(this + 80) = 0;
  if ( *(_DWORD *)(this + 76) != a2 )
  {
    result = this;
    *(_DWORD *)(this + 76) = a2;
    if ( *(_DWORD *)(this + 40) )
    {
      if ( a2 < 0 )
        sub_5E9F20("newView >= 0", "..\\scilib\\sciview.cpp", 108);
      return sub_5EACD0(this);
    }
  }
  return result;
}


//======================================================================
// sub_5EAF60
// entry 005eaf60  size 82  status ok
//======================================================================

char *__thiscall sub_5EAF60(int this, char *Str1)
{
  char *result; // eax

  *(_DWORD *)(this + 76) = 0;
  result = (char *)strcmp(Str1, (const char *)(this + 80));
  if ( result )
  {
    result = strcpy((char *)(this + 80), Str1);
    if ( *(_DWORD *)(this + 40) )
      return (char *)sub_5EACD0(this);
  }
  return result;
}


//======================================================================
// sub_5EB000
// entry 005eb000  size 268  status ok
//======================================================================

int __thiscall sub_5EB000(CMFCRibbonButton *this, int IsDefaultCommand)
{
  int result; // eax
  int v3; // eax
  int v4; // eax

  result = (int)this;
  if ( *((_DWORD *)this + 89) != IsDefaultCommand )
  {
    if ( *((_DWORD *)this + 10) )
    {
      if ( IsDefaultCommand > CMFCRibbonButton::IsDefaultCommand(this) )
        IsDefaultCommand = CMFCRibbonButton::IsDefaultCommand(this);
      if ( IsDefaultCommand < 0 )
        IsDefaultCommand = 0;
    }
    result = (int)this;
    if ( *((_DWORD *)this + 89) == IsDefaultCommand )
    {
      *((_DWORD *)this + 89) = IsDefaultCommand;
    }
    else
    {
      (*(void (__thiscall **)(CMFCRibbonButton *))(*(_DWORD *)this + 172))(this);
      *((_DWORD *)this + 89) = IsDefaultCommand;
      if ( *((_DWORD *)this + 93) )
        *((_DWORD *)this + 88) = sub_6163E0(*((_DWORD *)this + 89)) - 1;
      (*(void (__thiscall **)(CMFCRibbonButton *, _DWORD))(*(_DWORD *)this + 176))(this, *((_DWORD *)this + 87));
      v3 = (*(int (__thiscall **)(CMFCRibbonButton *))(*(_DWORD *)this + 84))(this);
      v4 = (*(int (__thiscall **)(CMFCRibbonButton *, int))(*(_DWORD *)this + 76))(this, v3);
      (*(void (__thiscall **)(CMFCRibbonButton *, int))(*(_DWORD *)this + 68))(this, v4);
      return (*(int (__thiscall **)(CMFCRibbonButton *))(*(_DWORD *)this + 172))(this);
    }
  }
  return result;
}


//======================================================================
// sub_5EB110
// entry 005eb110  size 20  status ok
//======================================================================

int __thiscall sub_5EB110(_DWORD *this)
{
  return *(this + 89);
}


//======================================================================
// sub_5EB150
// entry 005eb150  size 194  status ok
//======================================================================

int __thiscall sub_5EB150(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // eax

  result = (int)this;
  if ( *(this + 87) != a2 )
  {
    if ( *(this + 10) )
    {
      if ( a2 > sub_5EB240(this) )
        a2 = sub_5EB240(this);
      if ( a2 < 0 )
        a2 = 0;
      result = (int)this;
      if ( *(this + 87) != a2 )
      {
        (*(void (__thiscall **)(_DWORD *))(*this + 172))(this);
        *(this + 87) = a2;
        v3 = (*(int (__thiscall **)(_DWORD *))(*this + 84))(this);
        v4 = (*(int (__thiscall **)(_DWORD *, int))(*this + 76))(this, v3);
        (*(void (__thiscall **)(_DWORD *, int))(*this + 68))(this, v4);
        return (*(int (__thiscall **)(_DWORD *))(*this + 172))(this);
      }
    }
    else
    {
      *(this + 87) = a2;
    }
  }
  return result;
}


//======================================================================
// sub_5EB240
// entry 005eb240  size 20  status ok
//======================================================================

int __thiscall sub_5EB240(_DWORD *this)
{
  return *(this + 88);
}


//======================================================================
// sub_5EB260
// entry 005eb260  size 362  status ok
//======================================================================

int __thiscall sub_5EB260(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int result; // eax
  int v6; // [esp-4h] [ebp-Ch]
  int v7; // [esp-4h] [ebp-Ch]
  unsigned __int8 v9; // [esp+7h] [ebp-1h]

  v9 = 0;
  if ( *(this + 85) != a2 || *(this + 86) != a3 )
    v9 = 1;
  if ( v9 )
    (*(void (__thiscall **)(_DWORD *))(*this + 172))(this);
  *(this + 85) = a2;
  *(this + 86) = a3;
  if ( *(this + 93) )
  {
    v6 = sub_616450(*(this + 89), *(this + 87));
    v3 = sub_616410(*(this + 89), *(this + 87));
    (*(void (__thiscall **)(_DWORD *, int, int))(*this + 120))(this, v3, v6);
    v7 = *(this + 86) + *(this + 16) * sub_6164D0(*(this + 89), *(this + 87));
    v4 = sub_616490(*(this + 89), *(this + 87));
    sub_5F5110(*(this + 85) + *(this + 16) * v4, v7);
  }
  else
  {
    sub_5F5110(*(this + 85), *(this + 86));
  }
  result = v9;
  if ( v9 )
    return (*(int (__thiscall **)(_DWORD *))(*this + 172))(this);
  return result;
}


//======================================================================
// sub_5EB3D0
// entry 005eb3d0  size 44  status ok
//======================================================================

int __thiscall sub_5EB3D0(void *this, int a2)
{
  int v2; // eax

  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 84))(this);
  return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 68))(this, a2, v2);
}


//======================================================================
// sub_5EB420
// entry 005eb420  size 44  status ok
//======================================================================

int __thiscall sub_5EB420(void *this, int a2)
{
  int v2; // eax

  v2 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 76))(this, a2);
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 68))(this, v2);
}


//======================================================================
// sub_5EB470
// entry 005eb470  size 61  status ok
//======================================================================

int __thiscall sub_5EB470(_DWORD *this)
{
  if ( *(this + 93) )
    return sub_616490(*(this + 89), *(this + 87));
  else
    return 0;
}


//======================================================================
// sub_5EB4B0
// entry 005eb4b0  size 61  status ok
//======================================================================

int __thiscall sub_5EB4B0(_DWORD *this)
{
  if ( *(this + 93) )
    return sub_6164D0(*(this + 89), *(this + 87));
  else
    return 0;
}


//======================================================================
// sub_5EB4F0
// entry 005eb4f0  size 120  status ok
//======================================================================

int *__thiscall sub_5EB4F0(_DWORD *this, int *a2)
{
  int v2; // esi
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int v6; // eax
  int v9; // [esp+8h] [ebp-8h]

  v2 = (*(int (__thiscall **)(_DWORD *))(*this + 76))(this);
  v3 = sub_5EB470(this) + v2;
  v9 = sub_5F5550(this) / 2 + v3;
  v4 = (*(int (__thiscall **)(_DWORD *))(*this + 84))(this);
  v5 = sub_5EB4B0(this) + v4;
  v6 = sub_5F5590(this);
  *a2 = v9;
  a2[1] = v6 / 2 + v5;
  return a2;
}


//======================================================================
// sub_5EB570
// entry 005eb570  size 46  status ok
//======================================================================

int __thiscall sub_5EB570(_BYTE *this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 36) )
  {
    sub_5F5440(this);
    return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 172))(this);
  }
  return result;
}


//======================================================================
// sub_5EB5A0
// entry 005eb5a0  size 46  status ok
//======================================================================

void __thiscall sub_5EB5A0(CWnd *this)
{
  if ( !*((_BYTE *)this + 36) )
  {
    (*(void (__thiscall **)(CWnd *))(*(_DWORD *)this + 172))(this);
    CWnd::EnableActiveAccessibility(this);
  }
}


//======================================================================
// sub_5EB5D0
// entry 005eb5d0  size 61  status ok
//======================================================================

int __thiscall sub_5EB5D0(_BYTE *this, unsigned __int8 a2)
{
  int result; // eax

  result = (int)this;
  if ( (unsigned __int8)*(this + 364) != a2 )
  {
    *(this + 364) = a2;
    return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 172))(this);
  }
  return result;
}


//======================================================================
// sub_5EB610
// entry 005eb610  size 20  status ok
//======================================================================

char __thiscall sub_5EB610(_BYTE *this)
{
  return *(this + 364);
}


//======================================================================
// sub_5EB630
// entry 005eb630  size 154  status ok
//======================================================================

bool __thiscall sub_5EB630(int this, int a2, int a3)
{
  return (unsigned __int8)sub_5F5640(a2, a3)
      && (!*(_DWORD *)(this + 372)
       || !*(_BYTE *)(this + 365)
       || (unsigned __int8)sub_616AC0(
                             *(_DWORD *)(this + 356),
                             *(_DWORD *)(this + 348),
                             a2 - *(_DWORD *)(this + 16),
                             a3 - *(_DWORD *)(this + 20),
                             *(_BYTE *)(this + 366)));
}


//======================================================================
// sub_5EB6D0
// entry 005eb6d0  size 43  status ok
//======================================================================

int __thiscall sub_5EB6D0(void *this, int a2)
{
  return (*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)this + 128))(
           this,
           *(_DWORD *)(a2 + 8),
           *(_DWORD *)(a2 + 12));
}


//======================================================================
// sub_5EB700
// entry 005eb700  size 25  status ok
//======================================================================

_BYTE *__thiscall sub_5EB700(_BYTE *this, char a2)
{
  *(this + 365) = a2;
  return this;
}


//======================================================================
// sub_5EB720
// entry 005eb720  size 25  status ok
//======================================================================

_BYTE *__thiscall sub_5EB720(_BYTE *this, char a2)
{
  *(this + 366) = a2;
  return this;
}


//======================================================================
// sub_5EB780
// entry 005eb780  size 699  status ok
//======================================================================

int __thiscall sub_5EB780(int this, int *a2)
{
  int result; // eax
  int v4; // [esp+8h] [ebp-74h]
  int v5; // [esp+Ch] [ebp-70h]
  int v6; // [esp+10h] [ebp-6Ch]
  int v7; // [esp+14h] [ebp-68h]
  int v8; // [esp+28h] [ebp-54h]
  int v9; // [esp+2Ch] [ebp-50h]
  int v10; // [esp+30h] [ebp-4Ch]
  int v11; // [esp+34h] [ebp-48h]
  int v12[2]; // [esp+3Ch] [ebp-40h] BYREF
  int v13; // [esp+44h] [ebp-38h]
  int v14; // [esp+48h] [ebp-34h]
  _DWORD v15[4]; // [esp+4Ch] [ebp-30h] BYREF
  int v16; // [esp+5Ch] [ebp-20h] BYREF
  int v17; // [esp+60h] [ebp-1Ch]
  int v18; // [esp+64h] [ebp-18h]
  int v19; // [esp+68h] [ebp-14h]
  int v20; // [esp+6Ch] [ebp-10h] BYREF
  int v21; // [esp+70h] [ebp-Ch]
  int v22; // [esp+74h] [ebp-8h]
  int v23; // [esp+78h] [ebp-4h]

  result = this;
  if ( *(_DWORD *)(this + 372) )
  {
    if ( *(_DWORD *)(this + 4) )
    {
      result = sub_5F54A0(this);
      if ( (_BYTE)result )
      {
        result = this;
        if ( *(_BYTE *)(this + 364) )
        {
          v9 = *(_DWORD *)(this + 28);
          v10 = *(_DWORD *)(this + 24);
          v11 = *(_DWORD *)(this + 20);
          v16 = *(_DWORD *)(this + 16);
          v17 = v11;
          v18 = v10;
          v19 = v9;
          if ( *(int *)(this + 64) <= 1 )
          {
            v12[0] = *a2;
            v12[1] = a2[1];
            v13 = a2[2];
            v14 = a2[3];
            ++v13;
            ++v14;
            sub_5EC3A0(&v16, (int)&v16, (int)v12);
            v20 = v16;
            v21 = v17;
            v22 = v18;
            v23 = v19;
          }
          else
          {
            v15[0] = v16;
            v15[1] = v17;
            v15[2] = v18;
            v15[3] = v19;
            v8 = *(_DWORD *)(this + 64);
            if ( v8 > 1 )
            {
              v18 = v16 + v8 * (v18 - v16);
              v19 = v17 + v8 * (v19 - v17);
            }
            sub_5EC3A0(&v16, (int)&v16, (int)a2);
            v20 = v16;
            v21 = v17;
            v22 = v18;
            v23 = v19;
            sub_5EC4A0(&v16, v15, *(_DWORD *)(this + 64), 0);
            sub_5EC4A0(&v20, v15, *(_DWORD *)(this + 64), 1);
          }
          v6 = -*(_DWORD *)(this + 20);
          v7 = -*(_DWORD *)(this + 16);
          v20 -= *(_DWORD *)(this + 16);
          v21 += v6;
          v22 += v7;
          v23 += v6;
          v4 = sub_5F84F0(*(_DWORD *)(this + 4));
          v5 = unknown_libname_619(*(_DWORD *)(this + 4));
          return sub_616510(
                   *(_DWORD *)(this + 356),
                   *(_DWORD *)(this + 348),
                   *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 4) + 424) + 80),
                   v5 + v16,
                   v4 + v17,
                   v5 + v18,
                   v4 + v19,
                   v20,
                   v21,
                   v22,
                   v23,
                   *(unsigned __int8 *)(this + 364),
                   *(_DWORD *)(this + 64),
                   *(_BYTE *)(this + 367),
                   0);
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_5EBAC0
// entry 005ebac0  size 1209  status ok
//======================================================================

int *__thiscall sub_5EBAC0(_DWORD *this, int *a2)
{
  int v4; // [esp+4h] [ebp-3Ch]
  _BYTE v5[3]; // [esp+8h] [ebp-38h] BYREF
  unsigned __int8 v6; // [esp+Bh] [ebp-35h]
  _DWORD v7[4]; // [esp+Ch] [ebp-34h] BYREF
  char v8; // [esp+1Fh] [ebp-21h] BYREF
  int v9; // [esp+20h] [ebp-20h]
  int v10; // [esp+24h] [ebp-1Ch]
  int v11; // [esp+28h] [ebp-18h]
  int v12; // [esp+2Ch] [ebp-14h]
  int i; // [esp+30h] [ebp-10h]
  int j; // [esp+34h] [ebp-Ch]
  int v15; // [esp+38h] [ebp-8h]
  int v16; // [esp+3Ch] [ebp-4h]

  memset(v7, 0, sizeof(v7));
  v12 = sub_5F5550(this);
  v9 = sub_5F5590(this);
  if ( *(this + 93) && v12 && v9 )
  {
    v4 = 0;
    v15 = 0;
    v11 = v12;
    v16 = v9;
LABEL_6:
    j = v15;
    if ( v15 < v9 / 2 )
    {
      for ( i = v4; i < v11; ++i )
      {
        sub_616B30(*(this + 89), *(this + 87), i, j, v5, &v8);
        if ( v6 != 255 )
        {
          ++v4;
          --v11;
          ++v15;
          goto LABEL_6;
        }
      }
    }
    if ( j < v9 / 2 )
    {
LABEL_14:
      j = v16 - 1;
      if ( v16 - 1 >= v9 / 2 )
      {
        for ( i = v4; i < v11; ++i )
        {
          sub_616B30(*(this + 89), *(this + 87), i, j, v5, &v8);
          if ( v6 != 255 )
          {
            if ( v9 - j >= v4 )
            {
              ++v4;
              --v11;
            }
            --v16;
            goto LABEL_14;
          }
        }
      }
      if ( j >= v9 / 2 )
      {
        if ( v4 < v11 )
        {
          v10 = v4;
LABEL_27:
          while ( 1 )
          {
            for ( j = v15; j < v16; ++j )
            {
              sub_616B30(*(this + 89), *(this + 87), v4, j, v5, &v8);
              if ( v6 != 255 )
              {
                ++v4;
                goto LABEL_27;
              }
            }
            if ( v4 < v12 / 2 || v16 <= v15 )
              break;
            ++v15;
            --v16;
            v4 = v10;
          }
          if ( v4 < v12 / 2 )
          {
            v10 = v11;
LABEL_38:
            while ( 1 )
            {
              for ( j = v15; j < v16; ++j )
              {
                sub_616B30(*(this + 89), *(this + 87), v11, j, v5, &v8);
                if ( v6 != 255 )
                {
                  --v11;
                  goto LABEL_38;
                }
              }
              if ( v11 >= v12 / 2 || v16 <= v15 )
                break;
              ++v15;
              --v16;
              v11 = v10;
            }
            if ( v11 >= v12 / 2 )
            {
              v7[0] = v4;
              v7[1] = v15;
              v7[2] = v11;
              v7[3] = v16;
              *a2 = v4;
            }
            else
            {
              sub_5E9F20("iRight >= iWidth / 2", "..\\scilib\\sciview.cpp", 531);
              *a2 = v7[0];
            }
            a2[1] = v7[1];
            a2[2] = v7[2];
            a2[3] = v7[3];
            return a2;
          }
          else
          {
            sub_5E9F20("iLeft < iWidth / 2", "..\\scilib\\sciview.cpp", 508);
            *a2 = v7[0];
            a2[1] = v7[1];
            a2[2] = v7[2];
            a2[3] = v7[3];
            return a2;
          }
        }
        else
        {
          *a2 = v7[0];
          a2[1] = v7[1];
          a2[2] = v7[2];
          a2[3] = v7[3];
          return a2;
        }
      }
      else
      {
        sub_5E9F20("y >= iHeight / 2", "..\\scilib\\sciview.cpp", 481);
        *a2 = v7[0];
        a2[1] = v7[1];
        a2[2] = v7[2];
        a2[3] = v7[3];
        return a2;
      }
    }
    else
    {
      sub_5E9F20("y < iHeight / 2", "..\\scilib\\sciview.cpp", 458);
      *a2 = v7[0];
      a2[1] = v7[1];
      a2[2] = v7[2];
      a2[3] = v7[3];
      return a2;
    }
  }
  else
  {
    *a2 = v7[0];
    a2[1] = v7[1];
    a2[2] = v7[2];
    a2[3] = v7[3];
    return a2;
  }
}


//======================================================================
// sub_5EBF80
// entry 005ebf80  size 116  status ok
//======================================================================

_DWORD *__thiscall sub_5EBF80(_DWORD *this, _DWORD *a2)
{
  _DWORD v4[2]; // [esp+4h] [ebp-20h] BYREF
  int v5; // [esp+Ch] [ebp-18h]
  int v6; // [esp+10h] [ebp-14h]
  int v7; // [esp+14h] [ebp-10h]
  int v8; // [esp+18h] [ebp-Ch] BYREF
  int v9; // [esp+1Ch] [ebp-8h] BYREF
  int v10; // [esp+20h] [ebp-4h] BYREF

  sub_5EC060(&v9, &v8, v4, &v10);
  v4[1] = v9;
  v5 = v8;
  v6 = *(this + 6) - *(this + 4) - v4[0];
  v7 = *(this + 7) - *(this + 5) - v10;
  *a2 = v9;
  a2[1] = v5;
  a2[2] = v6;
  a2[3] = v7;
  return a2;
}


//======================================================================
// sub_5EC000
// entry 005ec000  size 82  status ok
//======================================================================

int __thiscall sub_5EC000(void *this, int a2)
{
  int v2; // eax
  int v3; // eax

  sub_5F55B0(a2);
  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 84))(this);
  v3 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 76))(this, v2);
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 68))(this, v3);
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 172))(this);
}


//======================================================================
// sub_5EC060
// entry 005ec060  size 738  status ok
//======================================================================

int __thiscall sub_5EC060(_DWORD *this, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int result; // eax
  char v7; // [esp+7h] [ebp-19h]
  char v8; // [esp+7h] [ebp-19h]
  char v9; // [esp+7h] [ebp-19h]
  unsigned __int8 v10; // [esp+7h] [ebp-19h]
  int j; // [esp+8h] [ebp-18h]
  int k; // [esp+8h] [ebp-18h]
  int ii; // [esp+8h] [ebp-18h]
  int jj; // [esp+8h] [ebp-18h]
  int i; // [esp+Ch] [ebp-14h]
  int m; // [esp+Ch] [ebp-14h]
  int n; // [esp+Ch] [ebp-14h]
  int kk; // [esp+Ch] [ebp-14h]
  _BYTE v19[3]; // [esp+10h] [ebp-10h] BYREF
  unsigned __int8 v20; // [esp+13h] [ebp-Dh]
  char v21; // [esp+17h] [ebp-9h] BYREF
  int v22; // [esp+18h] [ebp-8h]
  int v23; // [esp+1Ch] [ebp-4h]

  v23 = sub_5F5550(this);
  v22 = sub_5F5590(this);
  *a3 = 0;
  for ( i = 0; i < v22; ++i )
  {
    v7 = 1;
    for ( j = 0; j < v23; ++j )
    {
      sub_616B30(*(this + 89), *(this + 87), j, i, v19, &v21);
      if ( v20 == 255 )
      {
        v7 = 0;
        j = v23;
      }
    }
    if ( v7 )
      *a3 = i + 1;
    else
      i = v22;
  }
  *a2 = 0;
  for ( k = 0; k < v23; ++k )
  {
    v8 = 1;
    for ( m = 0; m < v22; ++m )
    {
      sub_616B30(*(this + 89), *(this + 87), k, m, v19, &v21);
      if ( v20 == 255 )
      {
        v8 = 0;
        m = v22;
      }
    }
    if ( v8 )
      *a2 = k + 1;
    else
      k = v23;
  }
  *a5 = 0;
  for ( n = v22 - 1; n >= 0; --n )
  {
    v9 = 1;
    for ( ii = 0; ii < v23; ++ii )
    {
      sub_616B30(*(this + 89), *(this + 87), ii, n, v19, &v21);
      if ( v20 == 255 )
      {
        v9 = 0;
        ii = v23;
      }
    }
    if ( v9 )
      *a5 = v22 - n;
    else
      n = 0;
  }
  *a4 = 0;
  result = v23 - 1;
  for ( jj = v23 - 1; jj >= 0; --jj )
  {
    v10 = 1;
    for ( kk = 0; kk < v22; ++kk )
    {
      sub_616B30(*(this + 89), *(this + 87), jj, kk, v19, &v21);
      if ( v20 == 255 )
      {
        v10 = 0;
        kk = v22;
      }
    }
    result = v10;
    if ( v10 )
      *a4 = v23 - jj;
    else
      jj = 0;
  }
  return result;
}


//======================================================================
// sub_5EC3A0
// entry 005ec3a0  size 246  status ok
//======================================================================

char __cdecl sub_5EC3A0(_DWORD *a1, int *a2, int *a3)
{
  int v4; // [esp+0h] [ebp-10h]
  int v5; // [esp+4h] [ebp-Ch]
  int v6; // [esp+8h] [ebp-8h]
  int v7; // [esp+Ch] [ebp-4h]

  if ( *a2 <= *a3 )
    v7 = *a3;
  else
    v7 = *a2;
  *a1 = v7;
  if ( a2[2] >= a3[2] )
    v6 = a3[2];
  else
    v6 = a2[2];
  a1[2] = v6;
  if ( *a1 < a1[2] )
  {
    v5 = a2[1] <= a3[1] ? a3[1] : a2[1];
    a1[1] = v5;
    v4 = a2[3] >= a3[3] ? a3[3] : a2[3];
    a1[3] = v4;
    if ( a1[1] < a1[3] )
      return 1;
  }
  memset(a1, 0, 0x10u);
  return 0;
}


//======================================================================
// sub_5EC4A0
// entry 005ec4a0  size 181  status ok
//======================================================================

int __cdecl sub_5EC4A0(_DWORD *a1, _DWORD *a2, int a3, char a4)
{
  int result; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  if ( a3 > 1 )
  {
    v6 = a1[2] - *a1;
    v5 = a1[3] - a1[1];
    if ( a4 )
    {
      a1[1] = a2[1] + (a1[1] - a2[1]) / a3;
      *a1 = *a2 + (*a1 - *a2) / a3;
    }
    a1[2] = (v6 % a3 != 0) + v6 / a3 + *a1;
    a1[3] = (v5 % a3 != 0) + v5 / a3 + a1[1];
    return v5 / a3;
  }
  return result;
}


//======================================================================
// sub_5EC760
// entry 005ec760  size 399  status ok
//======================================================================

void __thiscall sub_5EC760(void **this)
{
  *this = &sciText::`vftable';
  if ( *(this + 23) )
    operator delete(*(this + 23));
  if ( *(this + 38) )
    operator delete(*(this + 38));
  if ( *(this + 43) )
  {
    operator delete(*((void **)*(this + 43) + 1));
    operator delete(*(this + 43));
  }
  if ( *(this + 44) )
  {
    sub_6041D0(*(this + 44));
    *(this + 44) = 0;
  }
  if ( *(this + 47) )
  {
    freetype6_66(*(this + 47));
    *(this + 47) = 0;
  }
  if ( *(this + 46) )
  {
    sub_6041D0(*(this + 46));
    *(this + 46) = 0;
  }
  if ( *(this + 45) )
  {
    freetype6_67(*(this + 45));
    *(this + 45) = 0;
  }
  CExpandoObject::~CExpandoObject((CExpandoObject *)this);
}


//======================================================================
// sub_5EC8F0
// entry 005ec8f0  size 128  status ok
//======================================================================

int __thiscall sub_5EC8F0(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  sub_5F50C0(a6, a7, a8, a10);
  sub_5ECD00(a3, -1, word_75EE1C);
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, a2);
  sub_5ECC60(a4);
  sub_5ECCB0(a5);
  return sub_5EF310(a9);
}


//======================================================================
// sub_5ECC60
// entry 005ecc60  size 69  status ok
//======================================================================

int __thiscall sub_5ECC60(_DWORD *this, int a2)
{
  (*(void (__thiscall **)(_DWORD *))(*this + 172))(this);
  *(this + 26) = a2;
  sub_5F5530(*(this + 26));
  return (*(int (__thiscall **)(_DWORD *))(*this + 172))(this);
}


//======================================================================
// sub_5ECCB0
// entry 005eccb0  size 69  status ok
//======================================================================

int __thiscall sub_5ECCB0(_DWORD *this, int a2)
{
  (*(void (__thiscall **)(_DWORD *))(*this + 172))(this);
  *(this + 27) = a2;
  sub_5F5570(*(this + 27));
  return (*(int (__thiscall **)(_DWORD *))(*this + 172))(this);
}


//======================================================================
// sub_5ECD00
// entry 005ecd00  size 6073  status ok
//======================================================================

void __thiscall sub_5ECD00(_DWORD *this, int a2, int a3, int a4)
{
  int *v4; // ecx
  unsigned int PaneMenuEntryID; // eax
  int v6; // eax
  int *v7; // eax
  const void *v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  int v13; // [esp-4h] [ebp-130h]
  int v14; // [esp-4h] [ebp-130h]
  CRenderedInputPin *v15; // [esp+10h] [ebp-11Ch]
  int v16; // [esp+14h] [ebp-118h]
  int v17; // [esp+18h] [ebp-114h]
  int v18; // [esp+1Ch] [ebp-110h]
  int v19; // [esp+20h] [ebp-10Ch]
  int v20; // [esp+24h] [ebp-108h]
  int v21; // [esp+28h] [ebp-104h]
  int v22; // [esp+2Ch] [ebp-100h]
  int v23; // [esp+30h] [ebp-FCh]
  int v24; // [esp+34h] [ebp-F8h]
  int v25; // [esp+38h] [ebp-F4h]
  int v26; // [esp+3Ch] [ebp-F0h]
  int v27; // [esp+40h] [ebp-ECh]
  int v28; // [esp+44h] [ebp-E8h]
  void (__thiscall ***v29)(_DWORD, int); // [esp+48h] [ebp-E4h]
  char v30; // [esp+4Fh] [ebp-DDh]
  int v31; // [esp+50h] [ebp-DCh]
  CRenderedInputPin *v33; // [esp+6Ch] [ebp-C0h]
  void *v34; // [esp+80h] [ebp-ACh]
  char v35[16]; // [esp+88h] [ebp-A4h] BYREF
  int v36; // [esp+98h] [ebp-94h]
  int v37; // [esp+9Ch] [ebp-90h]
  int v38; // [esp+A0h] [ebp-8Ch]
  int v39; // [esp+A4h] [ebp-88h]
  unsigned __int16 v40; // [esp+A8h] [ebp-84h]
  int i; // [esp+ACh] [ebp-80h]
  int v42; // [esp+B0h] [ebp-7Ch]
  unsigned __int16 *v43; // [esp+B4h] [ebp-78h]
  int v44; // [esp+B8h] [ebp-74h]
  int v45; // [esp+BCh] [ebp-70h]
  int v46; // [esp+C0h] [ebp-6Ch]
  int v47; // [esp+C4h] [ebp-68h]
  int v48; // [esp+C8h] [ebp-64h]
  int v49; // [esp+CCh] [ebp-60h]
  int v50; // [esp+D0h] [ebp-5Ch]
  int v51; // [esp+D4h] [ebp-58h]
  int v52; // [esp+D8h] [ebp-54h]
  size_t Size; // [esp+DCh] [ebp-50h]
  int *v54; // [esp+E0h] [ebp-4Ch]
  _DWORD v55[4]; // [esp+E4h] [ebp-48h] BYREF
  void (__thiscall ***v56)(_DWORD, int); // [esp+F4h] [ebp-38h]
  int v57; // [esp+F8h] [ebp-34h]
  int v58; // [esp+FCh] [ebp-30h]
  int v59; // [esp+100h] [ebp-2Ch]
  struct CBaseFilter *v60; // [esp+104h] [ebp-28h]
  int v61; // [esp+108h] [ebp-24h]
  struct CCritSec *v62; // [esp+10Ch] [ebp-20h]
  int v63; // [esp+110h] [ebp-1Ch]
  int j; // [esp+114h] [ebp-18h]
  int v65; // [esp+118h] [ebp-14h]
  void *v66; // [esp+11Ch] [ebp-10h]
  int v67; // [esp+128h] [ebp-4h]

  if ( a2 == -1 )
    return;
  v31 = *(this + 25);
  if ( v31 > 0 )
  {
    if ( v31 <= 2 )
    {
      if ( *(this + 24) == a2 )
        return;
    }
    else if ( v31 != 3 )
    {
      goto LABEL_11;
    }
    if ( *(this + 24) == a2
      && *(this + 49) == a3
      && __PAIR64__(*((unsigned __int8 *)this + 201), *((unsigned __int8 *)this + 200)) == __PAIR64__(
                                                                                             BYTE1(a4),
                                                                                             (unsigned __int8)a4)
      && *((unsigned __int8 *)this + 202) == BYTE2(a4) )
    {
      return;
    }
  }
LABEL_11:
  *(this + 24) = a2;
  v4 = &dword_770028[3 * a2];
  *(this + 35) = *v4;
  *(this + 36) = v4[1];
  *(this + 37) = v4[2];
  if ( *(this + 44) )
  {
    sub_6041D0(*(this + 44));
    *(this + 44) = 0;
  }
  if ( *(this + 47) )
  {
    freetype6_66(*(this + 47));
    *(this + 47) = 0;
  }
  if ( *(this + 46) )
  {
    sub_6041D0(*(this + 46));
    *(this + 46) = 0;
  }
  if ( *(this + 45) )
  {
    freetype6_67(*(this + 45));
    *(this + 45) = 0;
  }
  *(this + 49) = -1;
  *((_WORD *)this + 100) = word_75EE1C;
  *((_BYTE *)this + 202) = byte_75EE1E;
  *(this + 25) = 0;
  if ( *(this + 35) && *((__int16 *)this + 75) >= 0 )
  {
    *(this + 44) = sub_603C50(542655828, *(this + 35), 0);
    *(this + 25) = 2;
LABEL_160:
    if ( *(this + 33) != -1 )
      *((_WORD *)this + 75) = *((_WORD *)this + 66);
    (*(void (__thiscall **)(_DWORD *))(*this + 172))(this);
    return;
  }
  if ( !*(this + 35) || *((__int16 *)this + 75) >= 0 )
  {
    v42 = sub_603C50(1414418246, a2, 0);
    if ( !v42 || !(*(int (__thiscall **)(int))(*(_DWORD *)v42 + 4))(v42) )
    {
      a2 = 2;
      v42 = sub_603C50(1414418246, 2, 0);
    }
    *(this + 24) = a2;
    v43 = (unsigned __int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)v42 + 4))(v42);
    *(this + 25) = 1;
    if ( v43 )
    {
      v40 = *v43;
      *(this + 35) = v40;
      *((_WORD *)this + 72) = v43[1];
      *((_WORD *)this + 73) = v43[2];
      *((_WORD *)this + 74) = v43[3];
      *((_WORD *)this + 75) = v43[4];
      v40 = v43[5];
      if ( !*(this + 38) )
        *(this + 38) = operator new(0x802u);
      memcpy((void *)*(this + 38), v43 + 5, 8 * v40 + 2);
      *(_WORD *)*(this + 38) = v40;
      for ( i = 0; i < *(unsigned __int16 *)*(this + 38); ++i )
        ;
    }
    else
    {
      if ( *(this + 38) )
      {
        operator delete((void *)*(this + 38));
        *(this + 38) = 0;
      }
      memset(this + 35, 0, 0xCu);
      *(this + 25) = 0;
    }
    sub_6041D0(v42);
    if ( *(this + 44) )
      sub_6041D0(*(this + 44));
    *(this + 44) = sub_603C50(542655828, *(this + 35), 0);
    goto LABEL_160;
  }
  freetype6_116(this + 45);
  if ( !*(this + 45) )
  {
    sub_5E9F20("m_hFTLibrary", "..\\scilib\\scitext.cpp", 296);
    sub_5ECD00(31, -1, word_75EE1C);
    return;
  }
  *(this + 25) = 3;
  *(this + 46) = sub_603C50(541480020, *(this + 35), 0);
  if ( *(this + 46) || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 46) + 4))(*(this + 46)) )
  {
    PaneMenuEntryID = CFrameWndEx::GetPaneMenuEntryID((CFrameWndEx *)*(this + 46));
    v6 = (*(int (__thiscall **)(_DWORD, unsigned int, _DWORD, _DWORD *))(*(_DWORD *)*(this + 46) + 4))(
           *(this + 46),
           PaneMenuEntryID,
           0,
           this + 47);
    freetype6_139(*(this + 45), v6);
    if ( !*(this + 47) )
    {
      sub_5E9F20("m_hFTFace", "..\\scilib\\scitext.cpp", 315);
      sub_5ECD00(31, -1, word_75EE1C);
      return;
    }
    if ( (*(_DWORD *)(*(this + 47) + 8) & 1) == 0 )
      sub_5E9F20("FT_IS_SCALABLE(m_hFTFace)", "..\\scilib\\scitext.cpp", 319);
    memset(v55, 0, sizeof(v55));
    memset(this + 48, 0, 0x10u);
    *(this + 48) = -1;
    if ( *((_WORD *)this + 72) )
    {
      v7 = (int *)sub_6102A0(v35, *((unsigned __int16 *)this + 72));
      v36 = *v7;
      v37 = v7[1];
      v38 = v7[2];
      v39 = v7[3];
      v55[0] = v36;
      v55[1] = v37;
      v55[2] = v38;
      v55[3] = v39;
      if ( !v36 )
        sub_5E9F20("rFTFontInfo.iFTInfoID", "..\\scilib\\scitext.cpp", 326);
    }
    if ( a3 <= 0 )
    {
      if ( *((_WORD *)this + 72) )
        *(this + 49) = v55[1];
      else
        *(this + 49) = 11;
    }
    else
    {
      *(this + 49) = a3;
    }
    freetype6_168(*(this + 47), *(this + 49) << 6, 0, 0, 0);
    if ( (unsigned __int8)a4 == (unsigned __int8)word_75EE1C
      && BYTE1(a4) == HIBYTE(word_75EE1C)
      && BYTE2(a4) == (unsigned __int8)byte_75EE1E )
    {
      if ( *((_WORD *)this + 72) )
      {
        *((_WORD *)this + 100) = v55[2];
        *((_BYTE *)this + 202) = BYTE2(v55[2]);
      }
      else
      {
        *((_WORD *)this + 100) = word_75EE1C;
        *((_BYTE *)this + 202) = byte_75EE1E;
      }
    }
    else
    {
      *((_WORD *)this + 100) = a4;
      *((_BYTE *)this + 202) = BYTE2(a4);
    }
    if ( *((_WORD *)this + 72) )
      v30 = HIBYTE(v55[2]);
    else
      v30 = 1;
    *((_BYTE *)this + 203) = v30;
    if ( (int)*(this + 24) >= 256 )
      sub_5E9F20("fontNumber < 256", "..\\scilib\\scitext.cpp", 348);
    if ( (int)*(this + 49) >= 64 )
      sub_5E9F20("m_rFTFontInfo.iPointSize < 64", "..\\scilib\\scitext.cpp", 349);
    v60 = (struct CBaseFilter *)((*((unsigned __int8 *)this + 202) / 4)
                               | ((*((unsigned __int8 *)this + 201) / 4) << 6)
                               | ((*((unsigned __int8 *)this + 200) / 4) << 12)
                               | ((*(this + 49) & 0x3F) << 18)
                               | (*(this + 24) << 24));
    v63 = sub_603C50(1398033990, v60, 0);
    if ( v63 && (*(int (__thiscall **)(int))(*(_DWORD *)v63 + 4))(v63) )
    {
      v8 = (const void *)sub_61F2A0(0);
      memcpy(this + 52, v8, 0x100u);
      *((_WORD *)this + 75) = *(_WORD *)sub_61F2A0(1);
      v9 = (_DWORD *)sub_61F2A0(2);
      *(this + 48) = *v9;
      *(this + 49) = v9[1];
      *(this + 50) = v9[2];
      *(this + 51) = v9[3];
      *(this + 44) = v63;
    }
    else
    {
      if ( v63 )
        sub_604220(v63);
      v34 = operator new(0x320u);
      v67 = 0;
      if ( v34 )
        v29 = (void (__thiscall ***)(_DWORD, int))Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>();
      else
        v29 = 0;
      v67 = -1;
      v56 = v29;
      if ( !v29 )
        sub_5E9F20("poNewTex", "..\\scilib\\scitext.cpp", 375);
      v57 = 0;
      v61 = 0;
      v59 = 0;
      memset(this + 52, 0, 0x100u);
      for ( j = 0; j < 256; ++j )
      {
        v13 = (*((_BYTE *)this + 203) != 0 ? 0 : 4096) | 4;
        v10 = sub_5EE4C0(j);
        freetype6_125(*(this + 47), v10, v13);
        if ( v59 <= *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 104) )
          v28 = *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 104);
        else
          v28 = v59;
        v59 = v28;
        if ( v61 <= ((*(int *)(*(_DWORD *)(*(this + 47) + 84) + 28) < 0 ? -32 : 32)
                   + *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 28))
                  / 64
                  - *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 104)
                  - 1 )
          v27 = ((*(int *)(*(_DWORD *)(*(this + 47) + 84) + 28) < 0 ? -32 : 32)
               + *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 28))
              / 64
              - *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 104)
              - 1;
        else
          v27 = v61;
        v61 = v27;
        if ( *(int *)(*(_DWORD *)(*(this + 47) + 84) + 100) >= 0 )
          LOBYTE(v26) = 0;
        else
          v26 = *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 100);
        *((_BYTE *)this + j + 208) = v26;
        if ( *(int *)(*(_DWORD *)(*(this + 47) + 84) + 100) <= 0 )
          v25 = 0;
        else
          v25 = *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 100);
        if ( v25 + *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 80) - *((char *)this + j + 208) <= ((*(int *)(*(_DWORD *)(*(this + 47) + 84) + 64) < 0 ? -32 : 32)
                                                                                                  + *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 64))
                                                                                                 / 64
                                                                                                 - *((char *)this + j + 208) )
        {
          v23 = ((*(int *)(*(_DWORD *)(*(this + 47) + 84) + 64) < 0 ? -32 : 32)
               + *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 64))
              / 64
              - *((char *)this + j + 208);
        }
        else
        {
          if ( *(int *)(*(_DWORD *)(*(this + 47) + 84) + 100) <= 0 )
            v24 = 0;
          else
            v24 = *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 100);
          v23 = v24 + *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 80) - *((char *)this + j + 208);
        }
        v52 = v23;
        if ( *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 80) )
        {
          if ( v52 >= *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 80) - *((char *)this + j + 208) + 2 )
            v22 = *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 80) - *((char *)this + j + 208) + 2;
          else
            v22 = v52;
          v52 = v22;
        }
        if ( v57 <= v52 )
          v21 = v52;
        else
          v21 = v57;
        v57 = v21;
      }
      v58 = v59 + v61 + 1;
      if ( v59 + v61 == -1 )
        sub_5E9F20("iHeight", "..\\scilib\\scitext.cpp", 395);
      Size = v57 * 4 * v58;
      v66 = operator new(4 * v57 * v58);
      *((_WORD *)this + 75) = v58 + 1;
      for ( j = 0; j < 256; ++j )
      {
        v51 = 1;
        v47 = 8;
        v14 = (*((_BYTE *)this + 203) != 0 ? 0 : 4096) | 4;
        v11 = sub_5EE4C0(j);
        freetype6_125(*(this + 47), v11, v14);
        v45 = *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 88);
        v44 = *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 84);
        if ( *(int *)(*(_DWORD *)(*(this + 47) + 84) + 100) <= 0 )
          v20 = 0;
        else
          v20 = *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 100);
        if ( v20 + *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 80) - *((char *)this + j + 208) <= (*(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 64)
                                                                                                  + (*(int *)(*(_DWORD *)(*(this + 47) + 84) + 64) < 0 ? -32 : 32))
                                                                                                 / 64
                                                                                                 - *((char *)this + j + 208) )
        {
          v18 = ((*(int *)(*(_DWORD *)(*(this + 47) + 84) + 64) < 0 ? -32 : 32)
               + *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 64))
              / 64
              - *((char *)this + j + 208);
        }
        else
        {
          if ( *(int *)(*(_DWORD *)(*(this + 47) + 84) + 100) <= 0 )
            v19 = 0;
          else
            v19 = *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 100);
          v18 = v19 + *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 80) - *((char *)this + j + 208);
        }
        v65 = v18;
        if ( *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 80) )
        {
          if ( v65 >= *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 80) - *((char *)this + j + 208) + 2 )
            v17 = *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 80) - *((char *)this + j + 208) + 2;
          else
            v17 = v65;
          v65 = v17;
        }
        if ( v65 <= 0 )
          sub_5E9F20("iWidth > 0", "..\\scilib\\scitext.cpp", 423);
        if ( !v65 )
          v65 = 1;
        if ( v65 >= 0 )
        {
          memset(v66, 0, Size);
          if ( *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 104) > v59 )
            sub_5E9F20("m_hFTFace->glyph->bitmap_top <= iHeightAboveBase", "..\\scilib\\scitext.cpp", 432);
          v50 = 0;
          v46 = v59 - *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 104);
          while ( v50 < *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 76) )
          {
            v49 = 0;
            if ( *(int *)(*(_DWORD *)(*(this + 47) + 84) + 100) <= 0 )
              v16 = 0;
            else
              v16 = *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 100);
            v48 = v16;
            while ( v49 < *(_DWORD *)(*(_DWORD *)(*(this + 47) + 84) + 80) )
            {
              if ( v48 < 0 )
                sub_5E9F20("iXDest >= 0", "..\\scilib\\scitext.cpp", 435);
              if ( *(_BYTE *)(*(_DWORD *)(*(this + 47) + 84) + 94) == 1 )
              {
                *((_BYTE *)v66 + 4 * v48 + 4 * v65 * v46 + 3) = (128 >> (v49 % 8))
                                                              & *(_BYTE *)(v45 + v49 / 8 + v44 * v50);
                *((_BYTE *)v66 + 4 * v48 + 4 * v65 * v46 + 3) = -(*((_BYTE *)v66 + 4 * v48 + 4 * v65 * v46 + 3) != 0);
              }
              else
              {
                *((_BYTE *)v66 + 4 * v48 + 4 * v65 * v46 + 3) = *(_BYTE *)(v45 + v49 + v44 * v50);
              }
              *((_BYTE *)v66 + 4 * v48 + 4 * v65 * v46 + 2) = *((_BYTE *)this + 202);
              *((_BYTE *)v66 + 4 * v48 + 4 * v65 * v46 + 1) = *((_BYTE *)this + 201);
              *((_BYTE *)v66 + 4 * v48 + 4 * v65 * v46) = *((_BYTE *)this + 200);
              ++v49;
              ++v48;
            }
            ++v50;
            ++v46;
          }
          sub_6209D0(v66, v65, v58, 4, 0, 1);
        }
      }
      operator delete(v66);
      sub_620FE0(4, 1);
      v12 = sub_620540(v56);
      v62 = (struct CCritSec *)operator new(v12);
      v54 = (int *)sub_6201C0(v62);
      v60 = (struct CBaseFilter *)((*((unsigned __int8 *)this + 202) / 4)
                                 | ((*((unsigned __int8 *)this + 201) / 4) << 6)
                                 | ((*((unsigned __int8 *)this + 200) / 4) << 12)
                                 | ((*(this + 49) & 0x3F) << 18)
                                 | (*(this + 24) << 24));
      v33 = (CRenderedInputPin *)operator new(0x96Cu);
      v67 = 1;
      if ( v33 )
        v15 = CRenderedInputPin::CRenderedInputPin(
                v33,
                (char *)0x53544E46,
                v60,
                v62,
                v54,
                *(const unsigned __int16 **)(dword_7960D8 + 24));
      else
        v15 = 0;
      v67 = -1;
      *(this + 44) = v15;
      sub_603AE0(*(this + 44));
      sub_61F1C0(0, this + 52, 1, 0x100u, 1, 1);
      sub_61F1C0(1, (char *)this + 150, 1, 2u, 1, 1);
      sub_61F1C0(2, this + 48, 1, 0x10u, 0, 1);
      operator delete(v62);
      if ( v56 )
        (**v56)(v56, 1);
    }
    goto LABEL_160;
  }
  if ( !*(this + 46) || !(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 46) + 4))(*(this + 46)) )
    sub_5E9F20("m_poFTFontResource && m_poFTFontResource->GetData()", "..\\scilib\\scitext.cpp", 306);
  sub_5ECD00(31, -1, word_75EE1C);
}


//======================================================================
// sub_5EE4C0
// entry 005ee4c0  size 280  status ok
//======================================================================

int __cdecl sub_5EE4C0(int a1)
{
  _DWORD v2[160]; // [esp+0h] [ebp-280h]

  if ( a1 <= 127 || a1 >= 160 )
    return a1;
  v2[128] = 65534;
  v2[129] = 65534;
  v2[130] = 8218;
  v2[131] = 402;
  v2[132] = 8222;
  v2[133] = 8230;
  v2[134] = 8224;
  v2[135] = 8225;
  v2[136] = 710;
  v2[137] = 8240;
  v2[138] = 352;
  v2[139] = 8249;
  v2[140] = 338;
  v2[141] = 65534;
  v2[142] = 65534;
  v2[143] = 65534;
  v2[144] = 65534;
  v2[145] = 8216;
  v2[146] = 8217;
  v2[147] = 8220;
  v2[148] = 8221;
  v2[149] = 8226;
  v2[150] = 8211;
  v2[151] = 8212;
  v2[152] = 732;
  v2[153] = 8482;
  v2[154] = 353;
  v2[155] = 8250;
  v2[156] = 339;
  v2[157] = 65534;
  v2[158] = 65534;
  v2[159] = 376;
  return v2[a1];
}


//======================================================================
// sub_5EE5E0
// entry 005ee5e0  size 210  status ok
//======================================================================

int __thiscall sub_5EE5E0(void *this, char *Str2)
{
  int result; // eax
  size_t v4; // [esp+Ch] [ebp-4h]

  if ( !*((_DWORD *)this + 23) || !Str2 || (result = strcmp(*((const char **)this + 23), Str2)) != 0 )
  {
    if ( !Str2 || !*Str2 )
      *((_DWORD *)this + 40) = 0;
    if ( *((_DWORD *)this + 23) )
    {
      operator delete(*((void **)this + 23));
      *((_DWORD *)this + 23) = 0;
    }
    if ( Str2 )
    {
      v4 = strlen(Str2);
      *((_DWORD *)this + 23) = operator new(v4 + 1);
      strcpy(*((char **)this + 23), Str2);
    }
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 172))(this);
  }
  return result;
}


//======================================================================
// sub_5EE6C0
// entry 005ee6c0  size 77  status ok
//======================================================================

int __thiscall sub_5EE6C0(void *this, int a2)
{
  char Buffer[68]; // [esp+4h] [ebp-48h] BYREF

  sprintf(Buffer, "%i", a2);
  return (*(int (__thiscall **)(void *, char *))(*(_DWORD *)this + 180))(this, Buffer);
}


//======================================================================
// sub_5EE710
// entry 005ee710  size 374  status ok
//======================================================================

int __thiscall sub_5EE710(_DWORD *this, char *Str)
{
  int result; // eax
  _DWORD *v3; // [esp+0h] [ebp-114h]
  char Destination[260]; // [esp+4h] [ebp-110h] BYREF
  signed int i; // [esp+10Ch] [ebp-8h]
  size_t v6; // [esp+110h] [ebp-4h]

  v3 = this;
  result = (*(int (__thiscall **)(_DWORD *, char *))(*this + 180))(this, Str);
  if ( Str )
  {
    result = strlen(Str);
    if ( (unsigned int)result < 0xFF )
    {
      result = (int)strcpy(Destination, Str);
      if ( (v3[28] & 2) != 0 )
      {
        while ( 1 )
        {
          result = Destination[0];
          if ( !Destination[0] )
            break;
          result = sub_5EF050(v3);
          if ( result < v3[26] )
            break;
          v6 = strlen(Destination);
          for ( i = 0; i < (int)(v6 - 1); ++i )
            Destination[i] = Destination[i + 1];
          Destination[i] = 0;
          (*(void (__thiscall **)(_DWORD *, char *))(*v3 + 180))(v3, Destination);
        }
      }
      else
      {
        while ( Destination[0] )
        {
          result = sub_5EF050(v3);
          if ( result < v3[26] )
            break;
          Destination[strlen(Destination) - 1] = 0;
          result = (*(int (__thiscall **)(_DWORD *, char *))(*v3 + 180))(v3, Destination);
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_5EE890
// entry 005ee890  size 33  status ok
//======================================================================

const char *__thiscall sub_5EE890(_DWORD *this)
{
  if ( *(this + 23) )
    return (const char *)*(this + 23);
  else
    return &Source;
}


//======================================================================
// sub_5EE8C0
// entry 005ee8c0  size 85  status ok
//======================================================================

int __thiscall sub_5EE8C0(_BYTE *this, char a2, char a3, char a4)
{
  sub_5F6580(a2, a3, a4);
  *(this + 136) = a2;
  *(this + 137) = a3;
  *(this + 138) = a4;
  return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 172))(this);
}


