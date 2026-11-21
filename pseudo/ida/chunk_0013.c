//======================================================================
// sub_4FDFC0
// entry 004fdfc0  size 209  status ok
//======================================================================

char __stdcall sub_4FDFC0(int a1, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_4FE0A0(a2);
  if ( v3 == -1 )
    return 0;
  if ( a1 == 5015 || a1 == 5016 )
  {
    *(_BYTE *)(dword_7947E0 + 20276) = a1 == 5016;
    *(_DWORD *)(dword_7947E0 + 20256) = sub_4FE0A0(a2);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 3200001, -1);
    return 1;
  }
  else
  {
    *(_DWORD *)(dword_7947E0 + 20236) = sub_4FE120(a1);
    *(_DWORD *)(dword_7947E0 + 20248) = v3;
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 11, -1);
    return 1;
  }
}


//======================================================================
// sub_4FE0A0
// entry 004fe0a0  size 98  status ok
//======================================================================

int __stdcall sub_4FE0A0(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 3205002:
      result = 0;
      break;
    case 3205003:
      result = 1;
      break;
    case 3205004:
      result = 2;
      break;
    case 3205005:
      result = 3;
      break;
    case 3205006:
      result = 4;
      break;
    case 3205007:
      result = 5;
      break;
    case 3205008:
      result = 6;
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_4FE120
// entry 004fe120  size 129  status ok
//======================================================================

int __stdcall sub_4FE120(int a1)
{
  int result; // eax
  bool v2; // [esp+4h] [ebp-8h]

  v2 = a1 >= 3205014 && a1 <= 3205017;
  *(_BYTE *)(dword_7947E0 + 20276) = v2;
  switch ( a1 )
  {
    case 3205010:
    case 3205014:
      result = 5;
      break;
    case 3205011:
    case 3205015:
      result = 25;
      break;
    case 3205012:
    case 3205016:
      result = 250;
      break;
    case 3205013:
    case 3205017:
      result = 1000;
      break;
    default:
      result = 5;
      break;
  }
  return result;
}


//======================================================================
// sub_4FE1E0
// entry 004fe1e0  size 170  status ok
//======================================================================

bool __cdecl sub_4FE1E0(int a1)
{
  if ( sub_47CE60((_DWORD *)dword_791364) == 3 )
  {
    if ( *((_DWORD *)dword_7926F8 + 256) == 2 || *((_DWORD *)dword_7926F8 + 256) == 3 )
    {
      if ( (int)sub_62FBF0(a1) > 1 )
        return 0;
    }
    else if ( sub_62FBF0(a1) )
    {
      return 0;
    }
    return 1;
  }
  else
  {
    sub_47CE60((_DWORD *)dword_791364);
    return sub_62FBF0(a1) == 0;
  }
}


//======================================================================
// sub_4FE290
// entry 004fe290  size 11692  status ok
//======================================================================

int __cdecl sub_4FE290(int a1, int a2, unsigned __int8 *a3, int a4)
{
  __int16 ExecutingContext; // ax
  __int16 v5; // si
  __int16 v6; // si
  __int16 v7; // ax
  int v8; // esi
  int v9; // esi
  int v10; // esi
  double v11; // st7
  unsigned __int8 *v12; // eax
  unsigned __int8 *v13; // eax
  unsigned __int8 *v14; // eax
  unsigned __int8 *v15; // eax
  unsigned __int8 *v16; // eax
  unsigned __int8 *v17; // eax
  unsigned __int8 *v18; // eax
  unsigned __int8 *v19; // eax
  unsigned __int8 *v20; // eax
  unsigned __int8 *v21; // eax
  unsigned __int8 *v22; // eax
  unsigned __int8 *v23; // eax
  unsigned __int8 *v24; // eax
  unsigned __int8 *v25; // eax
  unsigned __int8 *v26; // eax
  unsigned __int8 *v27; // eax
  unsigned __int8 *v28; // eax
  unsigned __int8 *v29; // eax
  unsigned __int8 *v30; // eax
  unsigned __int8 *v31; // eax
  unsigned __int8 *v32; // eax
  unsigned __int8 *v33; // eax
  unsigned __int8 *v34; // eax
  Concurrency::details::SchedulerProxy *v35; // eax
  CRecentFileList **v36; // eax
  CRecentFileList **v37; // eax
  int v38; // esi
  int v39; // esi
  int v40; // esi
  int v41; // esi
  int v42; // esi
  int v43; // esi
  double v44; // st7
  int v45; // esi
  Concurrency::details::SchedulerProxy *v46; // eax
  double v47; // st7
  int v48; // esi
  int v49; // esi
  Concurrency::details::SchedulerProxy *v50; // eax
  int v51; // esi
  int v53; // esi
  int v54; // esi
  int v55; // esi
  int v56; // esi
  int v57; // esi
  int v58; // esi
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // esi
  int v76; // eax
  int v77; // esi
  int v78; // eax
  int v79; // esi
  int v80; // esi
  int v81; // esi
  int v82; // esi
  int v83; // eax
  int v84; // esi
  int v85; // eax
  int v86; // esi
  int v87; // esi
  int v88; // esi
  int v89; // esi
  int v90; // eax
  int v91; // esi
  int v92; // eax
  int v93; // esi
  int v94; // esi
  int v95; // esi
  int v96; // esi
  __int16 v97; // [esp-18h] [ebp-2D4h] BYREF
  int v98; // [esp-14h] [ebp-2D0h]
  int v99; // [esp-10h] [ebp-2CCh]
  int *v100; // [esp-Ch] [ebp-2C8h]
  int *v101; // [esp-8h] [ebp-2C4h]
  unsigned __int8 *v102; // [esp-4h] [ebp-2C0h]
  int v103; // [esp+Ch] [ebp-2B0h]
  int v104; // [esp+10h] [ebp-2ACh]
  int v105; // [esp+14h] [ebp-2A8h]
  int v106; // [esp+18h] [ebp-2A4h]
  double v107; // [esp+1Ch] [ebp-2A0h]
  int v108; // [esp+24h] [ebp-298h]
  double v109; // [esp+28h] [ebp-294h]
  HFONT Font; // [esp+30h] [ebp-28Ch]
  int v111; // [esp+34h] [ebp-288h]
  int v112; // [esp+38h] [ebp-284h]
  int v113; // [esp+3Ch] [ebp-280h]
  int v114; // [esp+40h] [ebp-27Ch]
  __int16 *v115; // [esp+44h] [ebp-278h]
  __int16 *v116; // [esp+48h] [ebp-274h]
  __int16 *v117; // [esp+4Ch] [ebp-270h]
  __int16 *v118; // [esp+50h] [ebp-26Ch]
  BOOL v119; // [esp+54h] [ebp-268h]
  __int16 *v120; // [esp+58h] [ebp-264h]
  __int16 *v121; // [esp+5Ch] [ebp-260h]
  __int16 *v122; // [esp+60h] [ebp-25Ch]
  __int16 *v123; // [esp+64h] [ebp-258h]
  __int16 *v124; // [esp+68h] [ebp-254h]
  __int16 *v125; // [esp+6Ch] [ebp-250h]
  __int16 *v126; // [esp+70h] [ebp-24Ch]
  __int16 *v127; // [esp+74h] [ebp-248h]
  __int16 *v128; // [esp+78h] [ebp-244h]
  __int16 *v129; // [esp+7Ch] [ebp-240h]
  __int16 *v130; // [esp+80h] [ebp-23Ch]
  __int16 *v131; // [esp+84h] [ebp-238h]
  __int16 *v132; // [esp+88h] [ebp-234h]
  __int16 *v133; // [esp+8Ch] [ebp-230h]
  BOOL v134; // [esp+90h] [ebp-22Ch]
  _BYTE *v135; // [esp+94h] [ebp-228h]
  _BYTE *v136; // [esp+98h] [ebp-224h]
  _BYTE *v137; // [esp+9Ch] [ebp-220h]
  _BYTE *v138; // [esp+A0h] [ebp-21Ch]
  int v139; // [esp+A4h] [ebp-218h]
  __int16 *v140; // [esp+A8h] [ebp-214h]
  __int16 *v141; // [esp+ACh] [ebp-210h]
  __int16 *v142; // [esp+B0h] [ebp-20Ch]
  __int16 *v143; // [esp+B4h] [ebp-208h]
  __int16 *v144; // [esp+B8h] [ebp-204h]
  __int16 *v145; // [esp+BCh] [ebp-200h]
  __int16 *v146; // [esp+C0h] [ebp-1FCh]
  __int16 *v147; // [esp+C4h] [ebp-1F8h]
  __int16 *v148; // [esp+C8h] [ebp-1F4h]
  __int16 *v149; // [esp+CCh] [ebp-1F0h]
  _BYTE *v150; // [esp+D0h] [ebp-1ECh]
  _BYTE *v151; // [esp+D4h] [ebp-1E8h]
  _BYTE *v152; // [esp+D8h] [ebp-1E4h]
  _BYTE *v153; // [esp+DCh] [ebp-1E0h]
  _BYTE *v154; // [esp+E0h] [ebp-1DCh]
  _BYTE *v155; // [esp+E4h] [ebp-1D8h]
  _BYTE *v156; // [esp+E8h] [ebp-1D4h]
  _BYTE *v157; // [esp+ECh] [ebp-1D0h]
  _BYTE *v158; // [esp+F0h] [ebp-1CCh]
  _BYTE *v159; // [esp+F4h] [ebp-1C8h]
  _BYTE *v160; // [esp+F8h] [ebp-1C4h]
  _BYTE *v161; // [esp+FCh] [ebp-1C0h]
  _BYTE *v162; // [esp+100h] [ebp-1BCh]
  _BYTE *v163; // [esp+104h] [ebp-1B8h]
  _BYTE *v164; // [esp+108h] [ebp-1B4h]
  _BYTE *v165; // [esp+10Ch] [ebp-1B0h]
  _BYTE *v166; // [esp+110h] [ebp-1ACh]
  _BYTE *v167; // [esp+114h] [ebp-1A8h]
  _BYTE *v168; // [esp+118h] [ebp-1A4h]
  _BYTE *v169; // [esp+11Ch] [ebp-1A0h]
  _BYTE *v170; // [esp+120h] [ebp-19Ch]
  _BYTE *v171; // [esp+124h] [ebp-198h]
  _BYTE *v172; // [esp+128h] [ebp-194h]
  _BYTE *v173; // [esp+12Ch] [ebp-190h]
  _BYTE *v174; // [esp+130h] [ebp-18Ch]
  _BYTE *v175; // [esp+134h] [ebp-188h]
  _BYTE *v176; // [esp+138h] [ebp-184h]
  _BYTE *v177; // [esp+13Ch] [ebp-180h]
  _BYTE *v178; // [esp+140h] [ebp-17Ch]
  _BYTE *v179; // [esp+144h] [ebp-178h]
  _BYTE *v180; // [esp+148h] [ebp-174h]
  _BYTE *v181; // [esp+14Ch] [ebp-170h]
  __int16 *v182; // [esp+150h] [ebp-16Ch]
  __int16 *v183; // [esp+154h] [ebp-168h]
  __int16 *v184; // [esp+158h] [ebp-164h]
  __int16 *v185; // [esp+15Ch] [ebp-160h]
  int v186; // [esp+160h] [ebp-15Ch]
  __int16 *v187; // [esp+164h] [ebp-158h]
  __int16 *v188; // [esp+168h] [ebp-154h]
  char v189; // [esp+16Ch] [ebp-150h] BYREF
  char v190; // [esp+16Dh] [ebp-14Fh] BYREF
  char v191; // [esp+16Eh] [ebp-14Eh] BYREF
  char v192; // [esp+16Fh] [ebp-14Dh] BYREF
  __int16 v193[4]; // [esp+170h] [ebp-14Ch] BYREF
  __int16 v194[5]; // [esp+178h] [ebp-144h] BYREF
  char v195; // [esp+182h] [ebp-13Ah] BYREF
  bool v196; // [esp+183h] [ebp-139h]
  __int16 v197[5]; // [esp+184h] [ebp-138h] BYREF
  bool v198; // [esp+18Fh] [ebp-12Dh]
  char v199; // [esp+190h] [ebp-12Ch] BYREF
  char v200; // [esp+191h] [ebp-12Bh] BYREF
  char v201; // [esp+192h] [ebp-12Ah] BYREF
  char v202; // [esp+193h] [ebp-129h] BYREF
  __int16 v203[4]; // [esp+194h] [ebp-128h] BYREF
  char v204; // [esp+19Dh] [ebp-11Fh] BYREF
  char v205; // [esp+19Eh] [ebp-11Eh] BYREF
  char v206; // [esp+19Fh] [ebp-11Dh] BYREF
  __int16 v207[5]; // [esp+1A0h] [ebp-11Ch] BYREF
  char v208; // [esp+1AAh] [ebp-112h] BYREF
  char v209; // [esp+1ABh] [ebp-111h] BYREF
  __int16 v210[4]; // [esp+1ACh] [ebp-110h] BYREF
  char v211; // [esp+1B5h] [ebp-107h] BYREF
  char v212; // [esp+1B6h] [ebp-106h] BYREF
  char v213; // [esp+1B7h] [ebp-105h] BYREF
  __int16 v214[4]; // [esp+1B8h] [ebp-104h] BYREF
  char v215; // [esp+1C1h] [ebp-FBh] BYREF
  char v216; // [esp+1C2h] [ebp-FAh] BYREF
  char v217; // [esp+1C3h] [ebp-F9h] BYREF
  __int16 v218[4]; // [esp+1C4h] [ebp-F8h] BYREF
  char v219; // [esp+1CDh] [ebp-EFh] BYREF
  char v220; // [esp+1CEh] [ebp-EEh] BYREF
  char v221; // [esp+1CFh] [ebp-EDh] BYREF
  char v222; // [esp+1D0h] [ebp-ECh] BYREF
  bool v223; // [esp+1D1h] [ebp-EBh]
  char v224; // [esp+1D2h] [ebp-EAh] BYREF
  char v225; // [esp+1D3h] [ebp-E9h]
  __int16 *v226; // [esp+1D4h] [ebp-E8h]
  __int16 *v227; // [esp+1D8h] [ebp-E4h]
  __int16 v228[4]; // [esp+1DCh] [ebp-E0h] BYREF
  __int16 v229[4]; // [esp+1E4h] [ebp-D8h] BYREF
  __int16 v230[4]; // [esp+1ECh] [ebp-D0h] BYREF
  __int16 v231[4]; // [esp+1F4h] [ebp-C8h] BYREF
  char v232; // [esp+1FCh] [ebp-C0h] BYREF
  char v233; // [esp+1FDh] [ebp-BFh] BYREF
  char v234; // [esp+1FEh] [ebp-BEh] BYREF
  char v235; // [esp+1FFh] [ebp-BDh] BYREF
  char v236; // [esp+200h] [ebp-BCh] BYREF
  char v237; // [esp+201h] [ebp-BBh] BYREF
  char v238; // [esp+202h] [ebp-BAh] BYREF
  char v239; // [esp+203h] [ebp-B9h] BYREF
  char v240; // [esp+204h] [ebp-B8h] BYREF
  char v241; // [esp+205h] [ebp-B7h] BYREF
  char v242; // [esp+206h] [ebp-B6h] BYREF
  char v243; // [esp+207h] [ebp-B5h] BYREF
  char v244; // [esp+208h] [ebp-B4h] BYREF
  char v245; // [esp+209h] [ebp-B3h] BYREF
  char v246; // [esp+20Ah] [ebp-B2h] BYREF
  char v247; // [esp+20Bh] [ebp-B1h] BYREF
  __int16 v248[4]; // [esp+20Ch] [ebp-B0h] BYREF
  __int16 v249[4]; // [esp+214h] [ebp-A8h] BYREF
  int v250; // [esp+21Ch] [ebp-A0h]
  double v251; // [esp+220h] [ebp-9Ch]
  double v252; // [esp+228h] [ebp-94h]
  int v253; // [esp+230h] [ebp-8Ch]
  __int16 v254; // [esp+234h] [ebp-88h]
  double v255; // [esp+238h] [ebp-84h]
  __int16 j; // [esp+240h] [ebp-7Ch]
  __int16 v257[4]; // [esp+244h] [ebp-78h] BYREF
  int v258; // [esp+24Ch] [ebp-70h] BYREF
  int v259; // [esp+250h] [ebp-6Ch] BYREF
  int v260; // [esp+254h] [ebp-68h] BYREF
  int v261; // [esp+258h] [ebp-64h] BYREF
  int v262; // [esp+25Ch] [ebp-60h] BYREF
  int v263; // [esp+260h] [ebp-5Ch] BYREF
  __int16 v264[4]; // [esp+264h] [ebp-58h] BYREF
  int v265; // [esp+26Ch] [ebp-50h] BYREF
  __int16 v266[4]; // [esp+270h] [ebp-4Ch] BYREF
  int v267; // [esp+278h] [ebp-44h] BYREF
  int v268; // [esp+27Ch] [ebp-40h]
  __int16 v269; // [esp+280h] [ebp-3Ch]
  __int16 i; // [esp+284h] [ebp-38h]
  __int16 v271; // [esp+288h] [ebp-34h]
  __int16 v272[4]; // [esp+28Ch] [ebp-30h] BYREF
  __int16 v273; // [esp+294h] [ebp-28h]
  int v274; // [esp+298h] [ebp-24h] BYREF
  int v275; // [esp+29Ch] [ebp-20h]
  __int16 v276; // [esp+2A0h] [ebp-1Ch]
  int v277; // [esp+2A4h] [ebp-18h]
  Concurrency::details::SchedulerProxy *v278; // [esp+2A8h] [ebp-14h]
  __int16 v279; // [esp+2ACh] [ebp-10h]
  int v280; // [esp+2B8h] [ebp-4h]

  v186 = 0;
  v277 = sub_47E420((_DWORD *)dword_791364);
  v278 = 0;
  if ( v277 < 0 )
    sub_5E9F20((char)"currentPlayer >= 0", "..\\Casino\\PokerStudAI.cpp", 622);
  if ( v277 >= sub_47F950() )
    sub_5E9F20((char)"currentPlayer < pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerStudAI.cpp", 623);
  dword_7926F8 = (Concurrency::details::VirtualProcessor *)sub_47E3B0((void *)dword_791364);
  if ( word_792DE8[v277] == a1 )
  {
    if ( (unsigned __int8 *)word_792980[v277] == a3
      || word_792498[v277] == 6
      || word_792498[v277] == 10
      || word_792498[v277] == 2 )
    {
      v102 = a3;
      dbl_792DF8[v277] = sub_5010F0(a1, a2);
    }
    else
    {
      word_792980[v277] = (__int16)a3;
      v102 = a3;
      dbl_792DF8[v277] = sub_5010F0(a1, a2);
      word_792498[v277] = 1;
    }
  }
  else
  {
    v273 = 0;
    for ( i = 0; i < sub_47F950(); ++i )
    {
      if ( i != v277 )
      {
        v278 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v278) == 1 )
        {
          ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v278);
          v273 += sub_4F6A90(dword_791364 + 56, ExecutingContext);
        }
      }
    }
    v271 = sub_4D6DB0(dword_7926F8);
    v5 = sub_62FBF0(v271);
    v6 = v5 - sub_62FBF0(v271);
    v7 = sub_4D6D70(dword_7926F8);
    word_7925B0[v277] = v6 - sub_62FBF0(v7 + 1) * v273;
    sub_484300(v272);
    v280 = 0;
    if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
    {
      v185 = sub_4C80B0((CRecentFileList **)dword_7926F8, v249);
      v184 = v185;
      LOBYTE(v280) = 1;
      sub_484490(v272, v185);
      LOBYTE(v280) = 0;
      sub_484470(v249);
    }
    else
    {
      v183 = sub_4C7C40((CRecentFileList **)dword_7926F8, v248);
      v182 = v183;
      LOBYTE(v280) = 2;
      sub_484490(v272, v183);
      LOBYTE(v280) = 0;
      sub_484470(v248);
    }
    sub_4646A0(&v274);
    LOBYTE(v280) = 3;
    sub_4646F0(&v274);
    if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
    {
      v181 = sub_464130(&v247, (_BYTE *)dword_790768, (_BYTE *)dword_79076C);
      v180 = v181;
      LOBYTE(v280) = 4;
      sub_4648B0(&v274, v181);
      LOBYTE(v280) = 3;
      ATL::CComCriticalSection::~CComCriticalSection(&v247);
      v179 = sub_464130(&v246, (_BYTE *)dword_790768, (_BYTE *)dword_790754);
      v178 = v179;
      LOBYTE(v280) = 5;
      sub_4648B0(&v274, v179);
      LOBYTE(v280) = 3;
      ATL::CComCriticalSection::~CComCriticalSection(&v246);
      v177 = sub_464130(&v245, (_BYTE *)dword_790768, (_BYTE *)dword_790764);
      v176 = v177;
      LOBYTE(v280) = 6;
      sub_4648B0(&v274, v177);
      LOBYTE(v280) = 3;
      ATL::CComCriticalSection::~CComCriticalSection(&v245);
      v175 = sub_464130(&v244, (_BYTE *)dword_790768, (_BYTE *)dword_790770);
      v174 = v175;
      LOBYTE(v280) = 7;
      sub_4648B0(&v274, v175);
      LOBYTE(v280) = 3;
      ATL::CComCriticalSection::~CComCriticalSection(&v244);
      v173 = sub_464130(&v243, (_BYTE *)dword_790794, (_BYTE *)dword_79076C);
      v172 = v173;
      LOBYTE(v280) = 8;
      sub_4648B0(&v274, v173);
      LOBYTE(v280) = 3;
      ATL::CComCriticalSection::~CComCriticalSection(&v243);
      v171 = sub_464130(&v242, (_BYTE *)dword_790794, (_BYTE *)dword_790754);
      v170 = v171;
      LOBYTE(v280) = 9;
      sub_4648B0(&v274, v171);
      LOBYTE(v280) = 3;
      ATL::CComCriticalSection::~CComCriticalSection(&v242);
      v169 = sub_464130(&v241, (_BYTE *)dword_790794, (_BYTE *)dword_790764);
      v168 = v169;
      LOBYTE(v280) = 10;
      sub_4648B0(&v274, v169);
      LOBYTE(v280) = 3;
      ATL::CComCriticalSection::~CComCriticalSection(&v241);
      v167 = sub_464130(&v240, (_BYTE *)dword_790794, (_BYTE *)dword_790770);
      v166 = v167;
      LOBYTE(v280) = 11;
      sub_4648B0(&v274, v167);
      LOBYTE(v280) = 3;
      ATL::CComCriticalSection::~CComCriticalSection(&v240);
      v165 = sub_464130(&v239, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
      v164 = v165;
      LOBYTE(v280) = 12;
      sub_464770((unsigned __int8 *)&v274, v165);
      LOBYTE(v280) = 3;
      ATL::CComCriticalSection::~CComCriticalSection(&v239);
      v163 = sub_464130(&v238, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
      v162 = v163;
      LOBYTE(v280) = 13;
      sub_464770((unsigned __int8 *)&v274, v163);
      LOBYTE(v280) = 3;
      ATL::CComCriticalSection::~CComCriticalSection(&v238);
      v161 = sub_464130(&v237, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
      v160 = v161;
      LOBYTE(v280) = 14;
      sub_464770((unsigned __int8 *)&v274, v161);
      LOBYTE(v280) = 3;
      ATL::CComCriticalSection::~CComCriticalSection(&v237);
      v159 = sub_464130(&v236, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
      v158 = v159;
      LOBYTE(v280) = 15;
      sub_464770((unsigned __int8 *)&v274, v159);
      LOBYTE(v280) = 3;
      ATL::CComCriticalSection::~CComCriticalSection(&v236);
      v157 = sub_464130(&v235, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
      v156 = v157;
      LOBYTE(v280) = 16;
      sub_464770((unsigned __int8 *)&v274, v157);
      LOBYTE(v280) = 3;
      ATL::CComCriticalSection::~CComCriticalSection(&v235);
      v155 = sub_464130(&v234, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
      v154 = v155;
      LOBYTE(v280) = 17;
      sub_464770((unsigned __int8 *)&v274, v155);
      LOBYTE(v280) = 3;
      ATL::CComCriticalSection::~CComCriticalSection(&v234);
      v153 = sub_464130(&v233, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
      v152 = v153;
      LOBYTE(v280) = 18;
      sub_464770((unsigned __int8 *)&v274, v153);
      LOBYTE(v280) = 3;
      ATL::CComCriticalSection::~CComCriticalSection(&v233);
      v151 = sub_464130(&v232, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
      v150 = v151;
      LOBYTE(v280) = 19;
      sub_464770((unsigned __int8 *)&v274, v151);
      LOBYTE(v280) = 3;
      ATL::CComCriticalSection::~CComCriticalSection(&v232);
    }
    sub_4649C0(&v274, (int)v272);
    for ( i = 0; ; ++i )
    {
      v8 = i;
      if ( v8 >= sub_47F950() )
        break;
      if ( i != v277 )
      {
        v278 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v278) )
        {
          if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
          {
            v149 = sub_4C84A0((CRecentFileList **)v278, v231);
            v148 = v149;
            LOBYTE(v280) = 20;
            sub_4649C0(&v274, (int)v149);
            LOBYTE(v280) = 3;
            sub_484470(v231);
          }
          else
          {
            v147 = sub_4C8300((CRecentFileList **)v278, v230);
            v146 = v147;
            LOBYTE(v280) = 21;
            sub_4649C0(&v274, (int)v147);
            LOBYTE(v280) = 3;
            sub_484470(v230);
          }
        }
      }
    }
    sub_4958E0(
      v272,
      v274,
      v275,
      v276,
      (_WORD *)(2 * v277 + 7940568),
      (_WORD *)(2 * v277 + 7940144),
      (_WORD *)(2 * v277 + 7938296),
      (_WORD *)(2 * v277 + 7940128),
      (_WORD *)(2 * v277 + 7938584),
      (_WORD *)(2 * v277 + 7938632),
      (_WORD *)(2 * v277 + 7939520),
      (_WORD *)(2 * v277 + 7939836),
      (_WORD *)(2 * v277 + 7942008),
      (_WORD *)(2 * v277 + 7938280));
    for ( i = 0; ; ++i )
    {
      v9 = i;
      if ( v9 >= sub_47F950() )
        break;
      if ( i == v277 )
      {
        v267 = v274;
        v268 = v275;
        v269 = v276;
        LOBYTE(v280) = 22;
        sub_464860((unsigned __int8 *)&v267, (int)v272);
        if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
        {
          v145 = sub_4C84A0((CRecentFileList **)dword_7926F8, v229);
          v144 = v145;
          LOBYTE(v280) = 23;
          sub_4649C0(&v267, (int)v145);
          LOBYTE(v280) = 22;
          sub_484470(v229);
        }
        else
        {
          v143 = sub_4C8300((CRecentFileList **)dword_7926F8, v228);
          v142 = v143;
          LOBYTE(v280) = 24;
          sub_4649C0(&v267, (int)v143);
          LOBYTE(v280) = 22;
          sub_484470(v228);
        }
        if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
        {
          v102 = (unsigned __int8 *)&dword_791ED8[8 * v277 + i];
          v101 = &dword_792108[8 * v277 + i];
          v100 = &dword_792BE8[8 * v277 + i];
          v99 = (a1 == 7) + 2;
          v227 = &v97;
          v141 = sub_4C84A0((CRecentFileList **)dword_7926F8, &v97);
        }
        else
        {
          v102 = (unsigned __int8 *)&dword_791ED8[8 * v277 + i];
          v101 = &dword_792108[8 * v277 + i];
          v100 = &dword_792BE8[8 * v277 + i];
          v99 = (a1 == 7) + 2;
          v226 = &v97;
          v140 = sub_4C8300((CRecentFileList **)dword_7926F8, &v97);
        }
        sub_496370(v272, v267, v268, v269, v97, v98, v99, v100, v101, v102);
        v10 = sub_62FBF0(100);
        v11 = (double)dword_791ED8[9 * i] * 100.0;
        v139 = dword_791ED8[9 * i] + dword_792108[9 * i] + dword_792BE8[9 * i];
        byte_7924A8[i] = v10 < (int)(v11 / (double)v139);
        if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
        {
          switch ( a1 )
          {
            case 3:
              sub_4C84A0((CRecentFileList **)dword_7926F8, v266);
              LOBYTE(v280) = 25;
              v138 = sub_464130(&v224, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
              v137 = v138;
              LOBYTE(v280) = 26;
              v225 = sub_484BA0(v266, v138);
              LOBYTE(v280) = 25;
              ATL::CComCriticalSection::~CComCriticalSection(&v224);
              if ( v225 )
                word_7929C0[i] = 10;
              else
                word_7929C0[i] = 0;
              LOBYTE(v280) = 22;
              sub_484470(v266);
              break;
            case 4:
              sub_4C84A0((CRecentFileList **)dword_7926F8, v264);
              LOBYTE(v280) = 27;
              sub_485940(v264, &v265, 1, 1, 1, 1, 0, 0, 0);
              LOBYTE(v280) = 28;
              v102 = (unsigned __int8 *)dword_7913B0;
              v12 = sub_4A2160(&v265, &v222);
              v134 = sub_4A1F00(v12, v102)
                  && (v136 = sub_464130(&v221, (_BYTE *)dword_79077C, (_BYTE *)dword_790780),
                      v135 = v136,
                      LOBYTE(v280) = 29,
                      v186 |= 1u,
                      sub_484BA0(v264, v136));
              v223 = v134;
              v280 = 28;
              if ( (v186 & 1) != 0 )
              {
                v186 &= ~1u;
                ATL::CComCriticalSection::~CComCriticalSection(&v221);
              }
              if ( v223 )
              {
                v102 = (unsigned __int8 *)dword_7913C8;
                v13 = sub_4A21B0(&v265, &v220);
                if ( sub_4A1FB0(v13, v102) )
                  word_7929C0[i] = 10;
                else
                  word_7929C0[i] = 5;
              }
              else
              {
                v102 = (unsigned __int8 *)dword_7913B0;
                v14 = sub_4A2160(&v265, &v219);
                if ( sub_4A1F00(v14, v102) )
                  word_7929C0[i] = 3;
                else
                  word_7929C0[i] = 0;
              }
              LOBYTE(v280) = 27;
              ATL::CComCriticalSection::~CComCriticalSection(&v265);
              LOBYTE(v280) = 22;
              sub_484470(v264);
              break;
            case 5:
              v133 = sub_4C84A0((CRecentFileList **)dword_7926F8, v218);
              v132 = v133;
              LOBYTE(v280) = 30;
              sub_485940(v133, &v263, 1, 1, 1, 1, 0, 0, 0);
              LOBYTE(v280) = 32;
              sub_484470(v218);
              v102 = (unsigned __int8 *)dword_791418;
              v15 = sub_4A2160(&v263, &v217);
              if ( sub_4A1F00(v15, v102) )
              {
                v102 = (unsigned __int8 *)dword_7913C8;
                v16 = sub_4A21B0(&v263, &v216);
                if ( sub_4A1FB0(v16, v102) )
                  word_7929C0[i] = 10;
                else
                  word_7929C0[i] = 8;
              }
              else
              {
                v102 = (unsigned __int8 *)dword_7913B0;
                v17 = sub_4A2160(&v263, &v215);
                if ( sub_4A1F00(v17, v102) )
                  word_7929C0[i] = 3;
                else
                  word_7929C0[i] = 0;
              }
              LOBYTE(v280) = 22;
              ATL::CComCriticalSection::~CComCriticalSection(&v263);
              break;
            default:
              if ( a1 >= 6 )
              {
                v131 = sub_4C84A0((CRecentFileList **)dword_7926F8, v214);
                v130 = v131;
                LOBYTE(v280) = 33;
                sub_485940(v131, &v262, 1, 1, 1, 1, 0, 0, 0);
                LOBYTE(v280) = 35;
                sub_484470(v214);
                v102 = (unsigned __int8 *)dword_791394;
                v18 = sub_4A2160(&v262, &v213);
                if ( sub_4A1F00(v18, v102) )
                {
                  word_7929C0[i] = 10;
                }
                else
                {
                  v102 = (unsigned __int8 *)dword_791418;
                  v19 = sub_4A2160(&v262, &v212);
                  if ( sub_4A1F00(v19, v102) )
                  {
                    v102 = (unsigned __int8 *)dword_7913C8;
                    v20 = sub_4A21B0(&v262, &v211);
                    if ( sub_4A1FB0(v20, v102) )
                      word_7929C0[i] = 10;
                    else
                      word_7929C0[i] = 6;
                  }
                  else
                  {
                    word_7929C0[i] = 0;
                  }
                }
                LOBYTE(v280) = 22;
                ATL::CComCriticalSection::~CComCriticalSection(&v262);
              }
              break;
          }
        }
        else
        {
          switch ( a1 )
          {
            case 3:
              v129 = sub_4C8300((CRecentFileList **)dword_7926F8, v210);
              v128 = v129;
              LOBYTE(v280) = 36;
              sub_485940(v129, &v261, 1, 1, 1, 1, 0, 0, 0);
              LOBYTE(v280) = 38;
              sub_484470(v210);
              v102 = (unsigned __int8 *)dword_7913C8;
              v21 = sub_4A21B0(&v261, &v209);
              if ( sub_4A1FB0(v21, v102) )
              {
                word_7929C0[i] = 4;
              }
              else
              {
                v102 = (unsigned __int8 *)dword_7913E0;
                v22 = sub_4A21B0(&v261, &v208);
                word_7929C0[i] = sub_4A1FB0(v22, v102);
              }
              LOBYTE(v280) = 22;
              ATL::CComCriticalSection::~CComCriticalSection(&v261);
              break;
            case 4:
              v127 = sub_4C8300((CRecentFileList **)dword_7926F8, v207);
              v126 = v127;
              LOBYTE(v280) = 39;
              sub_485940(v127, &v260, 1, 1, 1, 1, 0, 0, 0);
              LOBYTE(v280) = 41;
              sub_484470(v207);
              v102 = (unsigned __int8 *)dword_7913B0;
              v23 = sub_4A2160(&v260, &v206);
              if ( sub_4A1F00(v23, v102) )
              {
                v102 = (unsigned __int8 *)dword_791400;
                v24 = sub_4A21B0(&v260, &v205);
                if ( sub_4A2040(v24, v102) )
                {
                  word_7929C0[i] = 10;
                }
                else
                {
                  v102 = (unsigned __int8 *)dword_7913F8;
                  v25 = sub_4A21B0(&v260, &v204);
                  if ( sub_4A2040(v25, v102) )
                    word_7929C0[i] = 7;
                  else
                    word_7929C0[i] = 5;
                }
              }
              else
              {
                word_7929C0[i] = 0;
              }
              LOBYTE(v280) = 22;
              ATL::CComCriticalSection::~CComCriticalSection(&v260);
              break;
            case 5:
              v125 = sub_4C8300((CRecentFileList **)dword_7926F8, v203);
              v124 = v125;
              LOBYTE(v280) = 42;
              sub_485940(v125, &v259, 1, 1, 1, 1, 0, 0, 0);
              LOBYTE(v280) = 44;
              sub_484470(v203);
              v102 = (unsigned __int8 *)dword_791418;
              v26 = sub_4A2160(&v259, &v202);
              if ( sub_4A1E10(v26, v102) )
              {
                word_7929C0[i] = 10;
              }
              else
              {
                v102 = (unsigned __int8 *)dword_7913B0;
                v27 = sub_4A2160(&v259, &v201);
                if ( sub_4A1E10(v27, v102) )
                {
                  v102 = (unsigned __int8 *)dword_7913E0;
                  v28 = sub_4A21B0(&v259, &v200);
                  if ( sub_4A2040(v28, v102) )
                  {
                    word_7929C0[i] = 10;
                  }
                  else
                  {
                    v102 = (unsigned __int8 *)dword_79138C;
                    v29 = sub_4A21B0(&v259, &v199);
                    if ( sub_4A2040(v29, v102) )
                      word_7929C0[i] = 7;
                    else
                      word_7929C0[i] = 4;
                  }
                }
                else
                {
                  v123 = sub_4C8300((CRecentFileList **)dword_7926F8, v197);
                  v122 = v123;
                  LOBYTE(v280) = 45;
                  v198 = sub_484BF0(v123) == 3;
                  LOBYTE(v280) = 44;
                  sub_484470(v197);
                  if ( v198 )
                  {
                    word_7929C0[i] = 7;
                  }
                  else
                  {
                    v102 = (unsigned __int8 *)dword_791390;
                    v30 = sub_4A2160(&v259, &v195);
                    v119 = sub_4A1E10(v30, v102)
                        && (v121 = sub_4C8300((CRecentFileList **)dword_7926F8, v194),
                            v120 = v121,
                            LOBYTE(v280) = 46,
                            v186 |= 2u,
                            !sub_484DB0(v121));
                    v196 = v119;
                    v280 = 44;
                    if ( (v186 & 2) != 0 )
                    {
                      v186 &= ~2u;
                      sub_484470(v194);
                    }
                    if ( v196 )
                      word_7929C0[i] = 5;
                    else
                      word_7929C0[i] = 0;
                  }
                }
              }
              LOBYTE(v280) = 22;
              ATL::CComCriticalSection::~CComCriticalSection(&v259);
              break;
            default:
              if ( a1 >= 6 )
              {
                sub_4C8300((CRecentFileList **)dword_7926F8, v257);
                LOBYTE(v280) = 47;
                v118 = sub_4C8300((CRecentFileList **)dword_7926F8, v193);
                v117 = v118;
                LOBYTE(v280) = 48;
                sub_485940(v118, &v258, 1, 1, 1, 1, 0, 0, 0);
                LOBYTE(v280) = 50;
                sub_484470(v193);
                v102 = (unsigned __int8 *)dword_791380;
                v31 = sub_4A2160(&v258, &v192);
                if ( sub_4A1F00(v31, v102) )
                {
                  word_7929C0[i] = 10;
                }
                else
                {
                  v102 = (unsigned __int8 *)dword_7913B0;
                  v32 = sub_4A2160(&v258, &v191);
                  if ( sub_4A1E10(v32, v102) )
                  {
                    v102 = (unsigned __int8 *)dword_7913E0;
                    v33 = sub_4A21B0(&v258, &v190);
                    if ( sub_4A2040(v33, v102) )
                    {
                      word_7929C0[i] = 5;
                    }
                    else
                    {
                      v102 = (unsigned __int8 *)dword_79138C;
                      v34 = sub_4A21B0(&v258, &v189);
                      if ( sub_4A2040(v34, v102) )
                        word_7929C0[i] = 2;
                    }
                  }
                  else if ( sub_484DB0(v257) )
                  {
                    if ( sub_484DB0(v257) )
                    {
                      word_7929C0[i] = 5;
                    }
                    else if ( sub_484BF0(v257) == 4 )
                    {
                      word_7929C0[i] = 10;
                    }
                    else if ( sub_484BF0(v257) == 3 )
                    {
                      word_7929C0[i] = 4;
                    }
                    else
                    {
                      word_7929C0[i] = 0;
                    }
                  }
                  else
                  {
                    word_7929C0[i] = 10;
                  }
                }
                LOBYTE(v280) = 47;
                ATL::CComCriticalSection::~CComCriticalSection(&v258);
                LOBYTE(v280) = 22;
                sub_484470(v257);
              }
              break;
          }
        }
        LOBYTE(v280) = 3;
        ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)&v267);
      }
      else
      {
        v35 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v35) == 1 )
        {
          if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
          {
            v102 = (unsigned __int8 *)&dword_791ED8[8 * v277 + i];
            v101 = &dword_792108[8 * v277 + i];
            v100 = &dword_792BE8[8 * v277 + i];
            v99 = (a1 == 7) + 2;
            v188 = &v97;
            v36 = (CRecentFileList **)sub_47E390(i);
            v116 = sub_4C84A0(v36, &v97);
          }
          else
          {
            v102 = (unsigned __int8 *)&dword_791ED8[8 * v277 + i];
            v101 = &dword_792108[8 * v277 + i];
            v100 = &dword_792BE8[8 * v277 + i];
            v99 = (a1 == 7) + 2;
            v187 = &v97;
            v37 = (CRecentFileList **)sub_47E390(i);
            v115 = sub_4C8300(v37, &v97);
          }
          sub_496370(v272, v274, v275, v276, v97, v98, v99, v100, v101, v102);
        }
      }
    }
    word_792DE8[v277] = a1;
    word_792980[v277] = (__int16)a3;
    if ( a1 == 3 )
    {
      v38 = sub_62FBF0(21);
      v39 = v38 + sub_62FBF0(21) + 60;
      v40 = sub_62FBF0(21) + v39;
      v114 = sub_62FBF0(21) + v40;
      dbl_792E38[v277] = (double)v114 * 0.01;
      for ( j = 0; ; ++j )
      {
        v41 = j;
        if ( v41 >= sub_47F950() )
          break;
        v42 = sub_62FBF0(51);
        v43 = v42 + sub_62FBF0(51) + 25;
        v113 = sub_62FBF0(51) + v43;
        dbl_7929E8[8 * v277 + j] = (double)v113 * 0.01;
      }
    }
    v102 = a3;
    v44 = sub_5010F0(a1, a2);
    dbl_792DF8[v277] = v44;
    word_792498[v277] = 1;
    if ( a1 >= 5 )
    {
      for ( i = 0; ; ++i )
      {
        v45 = i;
        if ( v45 >= sub_47F950() )
          break;
        if ( i != v277 )
        {
          v46 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v46) == 1 )
          {
            v47 = (double)dword_791ED8[8 * v277 + i];
            v112 = dword_792BE8[8 * v277 + i] + dword_792108[8 * v277 + i] + dword_791ED8[8 * v277 + i];
            v255 = v47 / (double)v112;
            if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
            {
              if ( v255 < 0.995 )
                break;
            }
            else if ( v255 < 0.99 )
            {
              break;
            }
          }
        }
      }
      v48 = i;
      if ( v48 == sub_47F950() )
        word_792498[v277] = 10;
    }
    if ( a1 == 7 )
    {
      for ( i = 0; ; ++i )
      {
        v49 = i;
        if ( v49 >= sub_47F950() )
          break;
        if ( i != v277 )
        {
          v50 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v50) == 1 && dword_792BE8[8 * v277 + i] > 0 )
            break;
        }
      }
      v51 = i;
      if ( v51 == sub_47F950() )
        word_792498[v277] = 6;
    }
    LOBYTE(v280) = 0;
    ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)&v274);
    v280 = -1;
    sub_484470(v272);
  }
  switch ( word_792498[v277] )
  {
    case 6:
      sub_4C79D0(dword_7926F8, 3);
      if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
      {
        if ( (unsigned __int8)sub_501040() || sub_62FBF0(20) )
          return 2;
        else
          return 1;
      }
      else if ( sub_4F66E0(dword_791364 + 56) )
      {
        return 4;
      }
      else
      {
        return 3;
      }
    case 10:
      sub_4C79D0(dword_7926F8, 3);
      if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
      {
        if ( (unsigned __int8)sub_501040() || sub_62FBF0(10) )
          return 2;
        else
          return 1;
      }
      else if ( sub_4F66E0(dword_791364 + 56) )
      {
        v53 = sub_62FBF0(100);
        if ( v53 < sub_4D6C70(dword_7926F8) )
        {
          v54 = sub_62FBF0(100);
          if ( v54 < sub_4D6C70(dword_7926F8) )
            word_792498[v277] = 5;
        }
        return 4;
      }
      else
      {
        return 3;
      }
    case 1:
      if ( sub_4F6690((_BYTE *)(dword_791364 + 56)) )
      {
        v251 = 1.95;
        if ( a1 == 3 )
        {
          v111 = sub_4C6DB0(dword_7926F8);
          v251 = (double)v111 / 100.0 + v251;
        }
        Font = CMFCCaptionBar::OnGetFont(dword_7926F8);
        v109 = ((double)(int)Font / 100.0 + 1.0) * v251 * dbl_792DF8[v277];
        v108 = sub_4F67D0((__int16 *)(dword_791364 + 56));
        v107 = (double)v108;
        v106 = sub_4F6840(dword_791364 + 56);
        v252 = v109 / (v107 / (double)v106);
        if ( a1 == 3 && !sub_47D6B0((_DWORD *)dword_791364) && sub_4F67D0((__int16 *)(dword_791364 + 56)) == a4 )
        {
          v254 = 0;
        }
        else if ( a1 == 3 )
        {
          v55 = sub_4D7E00(dword_7926F8);
          v254 = v55 / (sub_62FBF0(5) + 1);
        }
        else if ( a1 == 4 )
        {
          v56 = sub_4D7E00(dword_7926F8);
          v254 = v56 / (sub_62FBF0(2) + 1);
        }
        else
        {
          v254 = ((_WORD)a3 - 1) * sub_4D7E00(dword_7926F8);
        }
        v57 = sub_62FBF0(v254);
        v58 = sub_62FBF0(v254) + v57;
        v250 = v58 - sub_62FBF0(v254);
        v253 = sub_4D7E00(dword_7926F8);
        if ( v253 > 10 )
          v253 = 10;
        if ( a1 == 3 && sub_47D6F0((_DWORD *)dword_791364) == 1 )
        {
          v59 = sub_62FBF0(22 - v253);
          v250 -= v59;
        }
        else if ( a1 == 4 && sub_47D6F0((_DWORD *)dword_791364) == 1 )
        {
          v60 = sub_62FBF0(15 - v253);
          v250 -= v60;
        }
        else if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
        {
          v61 = sub_62FBF0(10 - v253);
          v250 -= v61;
        }
        else
        {
          switch ( a1 )
          {
            case 3:
              v62 = sub_62FBF0(20 - v253);
              v250 -= v62;
              v63 = sub_62FBF0(17 - v253);
              v250 -= v63;
              v64 = sub_62FBF0(10 - v253);
              v250 -= v64;
              break;
            case 4:
              v65 = sub_62FBF0(18 - v253);
              v250 -= v65;
              v66 = sub_62FBF0(16 - v253);
              v250 -= v66;
              v67 = sub_62FBF0(10 - v253);
              v250 -= v67;
              break;
            case 5:
              v68 = sub_62FBF0(10 - v253);
              v250 -= v68;
              v69 = sub_62FBF0(10 - v253);
              v250 -= v69 / 3;
              v70 = sub_62FBF0(10 - v253);
              v250 -= v70 / 3;
              break;
            case 6:
              v71 = sub_62FBF0(10 - v253);
              v250 -= v71 / 3;
              break;
          }
        }
        if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
        {
          v72 = sub_62FBF0(17 - a1 - v253);
          v250 -= v72;
          v73 = sub_62FBF0(17 - a1 - v253);
          v250 -= v73;
          v74 = sub_62FBF0(17 - a1 - v253);
          v250 -= v74;
        }
        if ( v250 < -19 )
          v250 = -19;
        if ( (double)v250 / 20.0 + 1.0 >= v252 )
        {
          if ( word_792990[v277] != a1 || !sub_62FBF0(10 - a1) )
            return 0;
          word_792498[v277] = 2;
          return 3;
        }
        if ( !(unsigned __int8)sub_502080(a1, a3) )
        {
          v75 = sub_62FBF0(100);
          if ( v75 < sub_4D7AD0(dword_7926F8) )
            word_792498[v277] = 2;
          return 3;
        }
      }
      else if ( !(unsigned __int8)sub_502080(a1, a3) )
      {
        return 1;
      }
      break;
  }
  if ( sub_47D6B0((_DWORD *)dword_791364) == 1 )
    v279 = 0;
  else
    v279 = sub_4D7EB0(dword_7926F8);
  if ( word_792498[v277] == 5 || word_792498[v277] == 13 )
  {
    if ( a1 != 3 || sub_4FE1E0(v279) )
    {
      if ( word_792498[v277] == 5 )
      {
        v76 = sub_47CE60((_DWORD *)dword_791364);
        v105 = sub_4C6EF0(dword_7926F8, a1 == 7, v76);
      }
      else
      {
        v105 = sub_4C6F50(dword_7926F8);
      }
      v77 = word_7929C0[v277];
      v78 = sub_62FBF0(10);
      v79 = sub_62FBF0(100 - v78 * v77 - v105);
      if ( v79 < (__int16)sub_502530(a1, 3) )
      {
        if ( !sub_4F6640((_BYTE *)(dword_791364 + 56)) && !sub_4F66E0(dword_791364 + 56) && word_792498[v277] == 13 )
          return 0;
        sub_4C79D0(dword_7926F8, 3);
        v80 = sub_62FBF0(100);
        if ( v80 >= sub_4D6C70(dword_7926F8) )
        {
          v82 = sub_62FBF0(100);
          if ( v82 < sub_4D6C90(dword_7926F8) )
            word_792498[v277] = 1;
        }
        else
        {
          v81 = sub_62FBF0(100);
          if ( v81 >= sub_4D6C70(dword_7926F8) / 2 )
            word_792498[v277] = 4;
          else
            word_792498[v277] = 3;
        }
        if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
          return 2;
        if ( sub_4F66E0(dword_791364 + 56) && sub_47D6F0((_DWORD *)dword_791364) == 1 && sub_62FBF0(3) )
          return 4;
        if ( sub_4F66E0(dword_791364 + 56) && sub_47D6F0((_DWORD *)dword_791364) != 1 && a1 == 7 && sub_62FBF0(4) )
          return 4;
        if ( sub_4F66E0(dword_791364 + 56) && sub_47D6F0((_DWORD *)dword_791364) != 1 && a1 == 6 && sub_62FBF0(4) )
          return 4;
        if ( sub_4F66E0(dword_791364 + 56) && sub_47D6F0((_DWORD *)dword_791364) != 1 && a1 == 5 && sub_62FBF0(3) )
          return 4;
        if ( sub_4F66E0(dword_791364 + 56) && sub_47D6F0((_DWORD *)dword_791364) != 1 && a1 == 4 && sub_62FBF0(2) )
          return 4;
        if ( sub_4F66E0(dword_791364 + 56)
          && sub_47D6F0((_DWORD *)dword_791364) != 1
          && a1 == 3
          && (int)sub_62FBF0(5) < 2 )
        {
          return 4;
        }
        return 3;
      }
    }
  }
  else if ( word_792498[v277] == 4 || word_792498[v277] == 12 )
  {
    if ( a1 != 3 || sub_4FE1E0(v279) )
    {
      if ( word_792498[v277] == 4 )
      {
        v83 = sub_47CE60((_DWORD *)dword_791364);
        v104 = sub_4C6EF0(dword_7926F8, a1 == 7, v83);
      }
      else
      {
        v104 = sub_4C6F50(dword_7926F8);
      }
      v84 = word_7929C0[v277];
      v85 = sub_62FBF0(10);
      v86 = sub_62FBF0(100 - v85 * v84 - v104);
      if ( v86 < (__int16)sub_502530(a1, 2) )
      {
        if ( !sub_4F6640((_BYTE *)(dword_791364 + 56)) && !sub_4F66E0(dword_791364 + 56) && word_792498[v277] == 12 )
          return 0;
        sub_4C79D0(dword_7926F8, 2);
        v87 = sub_62FBF0(100);
        if ( v87 >= sub_4D6C70(dword_7926F8) )
        {
          v89 = sub_62FBF0(100);
          if ( v89 < sub_4D6C90(dword_7926F8) )
            word_792498[v277] = 1;
        }
        else
        {
          v88 = sub_62FBF0(100);
          if ( v88 >= sub_4D6C70(dword_7926F8) / 2 )
            word_792498[v277] = 3;
          else
            word_792498[v277] = 2;
        }
        if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
          return 2;
        if ( sub_4F66E0(dword_791364 + 56) && sub_47D6F0((_DWORD *)dword_791364) == 1 && sub_62FBF0(3) )
          return 4;
        if ( sub_4F66E0(dword_791364 + 56) && sub_47D6F0((_DWORD *)dword_791364) != 1 && a1 == 7 && sub_62FBF0(4) )
          return 4;
        if ( sub_4F66E0(dword_791364 + 56) && sub_47D6F0((_DWORD *)dword_791364) != 1 && a1 == 6 && sub_62FBF0(4) )
          return 4;
        if ( sub_4F66E0(dword_791364 + 56) && sub_47D6F0((_DWORD *)dword_791364) != 1 && a1 == 5 && sub_62FBF0(3) )
          return 4;
        if ( sub_4F66E0(dword_791364 + 56) && sub_47D6F0((_DWORD *)dword_791364) != 1 && a1 == 4 && sub_62FBF0(2) )
          return 4;
        if ( sub_4F66E0(dword_791364 + 56)
          && sub_47D6F0((_DWORD *)dword_791364) != 1
          && a1 == 3
          && (int)sub_62FBF0(5) < 2 )
        {
          return 4;
        }
        if ( word_792498[v277] == 12 )
          return 0;
        return 3;
      }
    }
  }
  else if ( (word_792498[v277] == 3 || word_792498[v277] == 11) && (a1 != 3 || sub_4FE1E0(v279)) )
  {
    if ( word_792498[v277] == 3 )
    {
      v90 = sub_47CE60((_DWORD *)dword_791364);
      v103 = sub_4C6EF0(dword_7926F8, a1 == 7, v90);
    }
    else
    {
      v103 = sub_4C6F50(dword_7926F8);
    }
    v91 = word_7929C0[v277];
    v92 = sub_62FBF0(10);
    v93 = sub_62FBF0(100 - v92 * v91 - v103);
    if ( v93 < (__int16)sub_502530(a1, 1) )
    {
      if ( !sub_4F6640((_BYTE *)(dword_791364 + 56)) && !sub_4F66E0(dword_791364 + 56) && word_792498[v277] == 11 )
        return 0;
      sub_4C79D0(dword_7926F8, 1);
      v94 = sub_62FBF0(100);
      if ( v94 >= sub_4D6C70(dword_7926F8) )
      {
        v95 = sub_62FBF0(100);
        if ( v95 < sub_4D6C90(dword_7926F8) )
          word_792498[v277] = 1;
      }
      else
      {
        word_792498[v277] = 2;
      }
      if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
        return 2;
      if ( sub_4F66E0(dword_791364 + 56) && sub_47D6F0((_DWORD *)dword_791364) == 1 && sub_62FBF0(3) )
        return 4;
      if ( sub_4F66E0(dword_791364 + 56) && sub_47D6F0((_DWORD *)dword_791364) != 1 && a1 == 7 && sub_62FBF0(4) )
        return 4;
      if ( sub_4F66E0(dword_791364 + 56) && sub_47D6F0((_DWORD *)dword_791364) != 1 && a1 == 6 && sub_62FBF0(4) )
        return 4;
      if ( sub_4F66E0(dword_791364 + 56) && sub_47D6F0((_DWORD *)dword_791364) != 1 && a1 == 5 && sub_62FBF0(3) )
        return 4;
      if ( sub_4F66E0(dword_791364 + 56) && sub_47D6F0((_DWORD *)dword_791364) != 1 && a1 == 4 && sub_62FBF0(2) )
        return 4;
      if ( sub_4F66E0(dword_791364 + 56) && sub_47D6F0((_DWORD *)dword_791364) != 1 && a1 == 3 && (int)sub_62FBF0(5) < 2 )
        return 4;
      if ( word_792498[v277] == 11 )
        return 0;
      return 3;
    }
  }
  if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
    goto LABEL_409;
  switch ( word_792498[v277] )
  {
    case 13:
      return 0;
    case 12:
      return 0;
    case 11:
      return 0;
  }
LABEL_409:
  v96 = sub_62FBF0(100);
  if ( v96 < sub_4D6C90(dword_7926F8) )
    word_792498[v277] = 1;
  if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
    return 1;
  else
    return 3;
}


//======================================================================
// sub_501040
// entry 00501040  size 161  status ok
//======================================================================

char sub_501040()
{
  __int16 ExecutingContext; // ax
  __int16 i; // [esp+4h] [ebp-Ch]
  Concurrency::details::VirtualProcessor *v3; // [esp+Ch] [ebp-4h]

  for ( i = 0; i < sub_47F950(); ++i )
  {
    if ( i != sub_47E420((_DWORD *)dword_791364) )
    {
      v3 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v3) == 1 )
      {
        ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v3);
        if ( sub_4F69E0((__int16 *)(dword_791364 + 56), ExecutingContext) != 1 )
          return 0;
      }
    }
  }
  return 1;
}


//======================================================================
// sub_5010F0
// entry 005010f0  size 3984  status ok
//======================================================================

double __cdecl sub_5010F0(int a1, int a2)
{
  unsigned __int8 *v2; // eax
  unsigned __int8 *v3; // eax
  unsigned __int8 *v4; // eax
  int v5; // esi
  Concurrency::details::SchedulerProxy *v6; // eax
  Concurrency::details::VirtualProcessor *v7; // eax
  __int16 v8; // ax
  __int16 v9; // ax
  double v10; // st7
  double v11; // st7
  double v12; // st7
  double v13; // st7
  double v14; // st7
  double v15; // st7
  double v16; // st7
  double v17; // st7
  double v18; // st7
  double v19; // st6
  unsigned __int8 *v21; // [esp-4h] [ebp-238h]
  unsigned __int8 *v22; // [esp-4h] [ebp-238h]
  unsigned __int8 *v23; // [esp-4h] [ebp-238h]
  double v24; // [esp+1Ch] [ebp-218h]
  double v25; // [esp+28h] [ebp-20Ch]
  double v26; // [esp+34h] [ebp-200h]
  double v27; // [esp+44h] [ebp-1F0h]
  double v28; // [esp+50h] [ebp-1E4h]
  double v29; // [esp+5Ch] [ebp-1D8h]
  _BYTE *v30; // [esp+68h] [ebp-1CCh]
  __int16 *v31; // [esp+70h] [ebp-1C4h]
  _BYTE *v32; // [esp+B0h] [ebp-184h]
  __int16 *v33; // [esp+B8h] [ebp-17Ch]
  _BYTE *v34; // [esp+D0h] [ebp-164h]
  __int16 *v35; // [esp+D8h] [ebp-15Ch]
  _BYTE *v36; // [esp+E0h] [ebp-154h]
  __int16 *v37; // [esp+E8h] [ebp-14Ch]
  char v38; // [esp+F3h] [ebp-141h] BYREF
  int v39; // [esp+F4h] [ebp-140h] BYREF
  __int16 v40[5]; // [esp+F8h] [ebp-13Ch] BYREF
  bool v41; // [esp+102h] [ebp-132h]
  char v42; // [esp+103h] [ebp-131h] BYREF
  int v43; // [esp+104h] [ebp-130h] BYREF
  __int16 v44[5]; // [esp+108h] [ebp-12Ch] BYREF
  bool v45; // [esp+112h] [ebp-122h]
  char v46; // [esp+113h] [ebp-121h] BYREF
  int v47; // [esp+114h] [ebp-120h] BYREF
  __int16 v48[5]; // [esp+118h] [ebp-11Ch] BYREF
  bool v49; // [esp+122h] [ebp-112h]
  char v50; // [esp+123h] [ebp-111h] BYREF
  int v51; // [esp+124h] [ebp-110h] BYREF
  __int16 v52[4]; // [esp+128h] [ebp-10Ch] BYREF
  __int16 v53; // [esp+130h] [ebp-104h]
  __int16 v54; // [esp+134h] [ebp-100h]
  __int16 v55; // [esp+138h] [ebp-FCh]
  struct Concurrency::IExecutionContext *ExecutingContext; // [esp+13Ch] [ebp-F8h]
  __int16 v57; // [esp+140h] [ebp-F4h]
  char v58; // [esp+147h] [ebp-EDh]
  double v59; // [esp+148h] [ebp-ECh]
  double v60; // [esp+150h] [ebp-E4h]
  __int16 i; // [esp+158h] [ebp-DCh]
  unsigned __int8 *v62; // [esp+15Ch] [ebp-D8h]
  double v63; // [esp+160h] [ebp-D4h]
  double v64; // [esp+168h] [ebp-CCh]
  double v65; // [esp+170h] [ebp-C4h]
  double v66; // [esp+178h] [ebp-BCh]
  double v67; // [esp+180h] [ebp-B4h]
  double v68; // [esp+188h] [ebp-ACh]
  double v69; // [esp+190h] [ebp-A4h]
  double v70; // [esp+198h] [ebp-9Ch]
  double v71; // [esp+1A0h] [ebp-94h]
  double v72; // [esp+1A8h] [ebp-8Ch]
  double v73; // [esp+1B0h] [ebp-84h]
  __int16 v74; // [esp+1B8h] [ebp-7Ch]
  int v75; // [esp+1BCh] [ebp-78h]
  double v76; // [esp+1C0h] [ebp-74h]
  double v77; // [esp+1C8h] [ebp-6Ch]
  double v78; // [esp+1D0h] [ebp-64h]
  double v79; // [esp+1D8h] [ebp-5Ch]
  double v80; // [esp+1E0h] [ebp-54h]
  double v81; // [esp+1E8h] [ebp-4Ch]
  double v82; // [esp+1F0h] [ebp-44h]
  double v83; // [esp+1F8h] [ebp-3Ch]
  double v84; // [esp+200h] [ebp-34h]
  double v85; // [esp+208h] [ebp-2Ch]
  double v86; // [esp+210h] [ebp-24h]
  double v87; // [esp+218h] [ebp-1Ch]
  double v88; // [esp+220h] [ebp-14h]
  int v89; // [esp+230h] [ebp-4h]

  v75 = sub_47E420((_DWORD *)dword_791364);
  v77 = 1.0;
  v78 = sub_4D66F0((__int16 *)dword_7926F8) / (double)a2;
  if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
  {
    v76 = 0.0;
  }
  else
  {
    v37 = sub_4C7C40((CRecentFileList **)dword_7926F8, v52);
    v89 = 0;
    v36 = sub_485940(v37, &v51, 1, 1, 1, 1, 0, 0, 0);
    LOBYTE(v89) = 1;
    v62 = sub_4A21B0(v36, &v50);
    LOBYTE(v89) = 0;
    ATL::CComCriticalSection::~CComCriticalSection(&v51);
    v89 = -1;
    sub_484470(v52);
    if ( sub_4A1FB0(v62, (unsigned __int8 *)dword_7913C8) )
    {
      v76 = 0.0;
    }
    else if ( sub_4A1FB0(v62, (unsigned __int8 *)dword_7913E0) )
    {
      v76 = 0.2;
    }
    else if ( sub_4A1FB0(v62, (unsigned __int8 *)dword_7913BC) )
    {
      v76 = 0.3;
    }
    else if ( sub_4A1FB0(v62, (unsigned __int8 *)dword_791400) )
    {
      v76 = 0.4;
    }
    else if ( sub_4A1FB0(v62, (unsigned __int8 *)dword_79138C) )
    {
      v76 = 0.5;
    }
    else if ( sub_4A1FB0(v62, (unsigned __int8 *)dword_7913F4) )
    {
      v76 = 0.6;
    }
    else if ( sub_4A1FB0(v62, (unsigned __int8 *)dword_791410) )
    {
      v76 = 0.7;
    }
    else if ( sub_4A1FB0(v62, (unsigned __int8 *)dword_7913F8) )
    {
      v76 = 0.8;
    }
    else
    {
      v76 = 0.9;
    }
  }
  if ( a1 == 3 )
  {
    if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
    {
      v79 = 0.003136639271093053;
      v80 = 0.004410995167297688;
      v81 = 0.05023240065256872;
      v82 = 0.007110536522301228;
      v83 = 0.01023178502170099;
      v84 = 0.03439837473450919;
      v85 = 0.2431434112106381;
      v86 = 0.0274263551574476;
      v87 = 0.43937575030012;
      v88 = 0.1805337519623234;
    }
    else
    {
      v79 = 0.0;
      v80 = 0.0000153907716932927;
      v81 = 0.0002400960384153662;
      v82 = 0.001440576230492197;
      v83 = 0.001965401545233478;
      v84 = 0.003924646781789639;
      v85 = 0.02112845138055222;
      v86 = 0.0475390156062425;
      v87 = 0.4225690276110444;
      v88 = 0.5011773940345369;
    }
  }
  else if ( a1 == 4 )
  {
    if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
    {
      v79 = 0.01336659049871995;
      v80 = 0.01945485231735902;
      v81 = 0.0980623345901372;
      v82 = 0.03272143554639532;
      v83 = 0.03804795240518466;
      v84 = 0.09923589730491214;
      v85 = 0.2392228904655152;
      v86 = 0.05777040767207046;
      v87 = 0.3132604924130045;
      v88 = 0.08885714678670159;
    }
    else
    {
      v79 = 0.0;
      v80 = 0.00009057632873116513;
      v81 = 0.0007202881152460984;
      v82 = 0.008153048453423923;
      v83 = 0.01010839687757263;
      v84 = 0.01776258785019736;
      v85 = 0.03596332149881229;
      v86 = 0.1244106153099538;
      v87 = 0.4779689289791203;
      v88 = 0.3248222365869425;
    }
  }
  else if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
  {
    v79 = 0.03658413198055142;
    v80 = 0.04588457741311852;
    v81 = 0.150805145227521;
    v82 = 0.08227137720526195;
    v83 = 0.07560603405953573;
    v84 = 0.1416623861527818;
    v85 = 0.1741372846014518;
    v86 = 0.08650684354009162;
    v87 = 0.1716951492758208;
    v88 = 0.03484707054386545;
  }
  else
  {
    v79 = 0.0;
    v80 = 0.0003108280955590092;
    v81 = 0.001680672268907563;
    v82 = 0.02596102270695512;
    v83 = 0.03025494122789655;
    v84 = 0.04619382087140698;
    v85 = 0.04829869754775887;
    v86 = 0.2349553640569584;
    v87 = 0.4382254574070431;
    v88 = 0.1741191958175144;
  }
  v64 = v79;
  v65 = v80 + v79;
  v66 = v81 + v65;
  v67 = v82 + v66;
  v68 = v83 + v67;
  v69 = v84 + v68;
  v70 = v85 + v69;
  v71 = v86 + v70;
  v72 = v87 + v71;
  v63 = 1.0;
  if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
  {
    v63 = 0.0;
  }
  else
  {
    v35 = sub_4C7C40((CRecentFileList **)dword_7926F8, v48);
    v89 = 2;
    v34 = sub_485940(v35, &v47, 1, 1, 1, 1, 0, 0, 0);
    LOBYTE(v89) = 3;
    v21 = (unsigned __int8 *)dword_791418;
    v2 = sub_4A2160(v34, &v46);
    v49 = sub_4A1E10(v2, v21);
    LOBYTE(v89) = 2;
    ATL::CComCriticalSection::~CComCriticalSection(&v47);
    v89 = -1;
    sub_484470(v48);
    if ( v49 )
      v63 = 0.0;
  }
  v74 = word_7920E8[v75]
      + word_792F78[v75]
      + word_7926FC[v75]
      + word_7925C0[v75]
      + word_792248[v75]
      + word_792218[v75]
      + word_792820[v75]
      + word_7920F8[v75]
      + word_792830[v75]
      + word_7929D8[v75];
  if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
  {
    v73 = (double)word_7929D8[v75] * 1.0 / (double)v74 + (1.0 - v64) * (double)word_792830[v75] / (double)v74;
    v33 = sub_4C80B0((CRecentFileList **)dword_7926F8, v44);
    v89 = 4;
    v32 = sub_485940(v33, &v43, 1, 1, 1, 1, 0, 0, 0);
    LOBYTE(v89) = 5;
    v22 = (unsigned __int8 *)dword_791418;
    v3 = sub_4A2160(v32, &v42);
    v45 = sub_4A1ED0(v3, v22);
    LOBYTE(v89) = 4;
    ATL::CComCriticalSection::~CComCriticalSection(&v43);
    v89 = -1;
    sub_484470(v44);
    if ( v45 )
      v73 = 0.0;
  }
  else
  {
    v73 = (double)word_7929D8[v75] * 1.0 / (double)v74
        + (1.0 - v64) * (double)word_792830[v75] / (double)v74
        + (1.0 - v65) * (double)word_7920F8[v75] / (double)v74
        + (1.0 - v66) * (double)word_792820[v75] / (double)v74
        + (1.0 - v67) * (double)word_792218[v75] / (double)v74
        + (1.0 - v68) * (double)word_792248[v75] / (double)v74
        + (1.0 - v76 * v85 - v69) * v63 * (double)word_7925C0[v75] / (double)v74;
    v31 = sub_4C7C40((CRecentFileList **)dword_7926F8, v40);
    v89 = 6;
    v30 = sub_485940(v31, &v39, 1, 1, 1, 1, 0, 0, 0);
    LOBYTE(v89) = 7;
    v23 = (unsigned __int8 *)dword_791418;
    v4 = sub_4A2160(v30, &v38);
    v41 = sub_4A1ED0(v4, v23);
    LOBYTE(v89) = 6;
    ATL::CComCriticalSection::~CComCriticalSection(&v39);
    v89 = -1;
    sub_484470(v40);
    if ( v41 )
      v73 = 0.0;
  }
  for ( i = 0; ; ++i )
  {
    v5 = i;
    if ( v5 >= sub_47F950() )
      break;
    if ( i != v75 )
    {
      v6 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v6) == 1 )
      {
        v59 = 0.0;
        v60 = sub_4D7900((int)dword_7926F8, i, a2);
        if ( v60 * dbl_7929E8[8 * v75 + i] <= v78 )
        {
          v7 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
          ExecutingContext = Concurrency::details::VirtualProcessor::GetExecutingContext(v7);
          v54 = sub_4F6880((__int16 *)(dword_791364 + 56), (__int16)ExecutingContext);
          v55 = sub_4F6930((__int16 *)(dword_791364 + 56), (__int16)ExecutingContext);
          v8 = sub_4F6A90(dword_791364 + 56, (__int16)ExecutingContext);
          v53 = v8 - v54;
          v9 = sub_4F6B20(dword_791364 + 56, (__int16)ExecutingContext);
          v57 = v9 - v55;
          if ( v54 < 0 )
            sub_5E9F20((char)"shCurrentBets >= 0", "..\\Casino\\PokerStudAI.cpp", 383);
          if ( v55 < 0 )
            sub_5E9F20((char)"shCurrentCalls >= 0", "..\\Casino\\PokerStudAI.cpp", 384);
          if ( v53 < 0 )
            sub_5E9F20((char)"shOldBets >= 0", "..\\Casino\\PokerStudAI.cpp", 385);
          if ( v57 < 0 )
            sub_5E9F20((char)"shOldCalls >= 0", "..\\Casino\\PokerStudAI.cpp", 386);
          v58 = 0;
          if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
          {
            v10 = sub_4D6720(dword_7926F8);
            v29 = v10 * (double)v53 / 4.0 + 1.0;
            v11 = sub_4D67F0(dword_7926F8);
            v28 = v11 * (double)v57 / 4.0 + v29;
            v12 = sub_4D68C0(dword_7926F8);
            v27 = v12 * (double)v54 / 4.0 + v28;
            v13 = sub_4D6990(dword_7926F8);
            v59 = v13 * (double)v55 / 4.0 + v27;
          }
          else
          {
            v14 = sub_4D6720(dword_7926F8);
            v26 = v14 * (double)v53 + 1.0;
            v15 = sub_4D67F0(dword_7926F8);
            v25 = v15 * (double)v57 + v26;
            v16 = sub_4D68C0(dword_7926F8);
            v24 = v16 * (double)v54 + v25;
            v17 = sub_4D6990(dword_7926F8);
            v59 = v17 * (double)v55 + v24;
          }
        }
        else
        {
          v58 = 1;
        }
        if ( v58 )
        {
          v18 = v73
              + 1.0
              - (double)dword_792BE8[8 * v75 + i]
              / (double)(dword_791ED8[8 * v75 + i] + dword_792108[8 * v75 + i] + dword_792BE8[8 * v75 + i]);
          v19 = (double)dword_792108[8 * v75 + i]
              / (double)(dword_791ED8[8 * v75 + i] + dword_792108[8 * v75 + i] + dword_792BE8[8 * v75 + i])
              * 0.25;
        }
        else
        {
          v18 = v73
              + 1.0
              - (double)dword_792BE8[8 * v75 + i]
              / (double)(dword_791ED8[8 * v75 + i] + dword_792108[8 * v75 + i] + dword_792BE8[8 * v75 + i])
              * v59;
          v19 = v59
              * 0.25
              * ((double)dword_792108[8 * v75 + i]
               / (double)(dword_791ED8[8 * v75 + i] + dword_792108[8 * v75 + i] + dword_792BE8[8 * v75 + i]));
        }
        v77 = (v18 - v19) * v77;
        if ( v77 < 0.0 )
          v77 = 0.0;
      }
    }
  }
  v77 = v77 * dbl_792E38[v75];
  if ( v77 > 100.0 )
    return 100.0;
  return v77;
}


//======================================================================
// sub_502080
// entry 00502080  size 1188  status ok
//======================================================================

char __cdecl sub_502080(int a1, int a2)
{
  __int16 ExecutingContext; // ax
  __int16 v3; // ax
  __int16 v4; // ax
  __int16 v5; // si
  double v6; // st7
  int v7; // eax
  int v9; // eax
  int v10; // eax
  double v11; // [esp+20h] [ebp-4Ch]
  __int16 v12; // [esp+30h] [ebp-3Ch]
  __int16 i; // [esp+34h] [ebp-38h]
  int v14; // [esp+38h] [ebp-34h]
  __int16 v15; // [esp+3Ch] [ebp-30h]
  __int16 v16; // [esp+40h] [ebp-2Ch]
  __int16 v17; // [esp+44h] [ebp-28h]
  __int16 v18; // [esp+48h] [ebp-24h]
  Concurrency::details::VirtualProcessor *v19; // [esp+54h] [ebp-18h]
  __int16 v20; // [esp+58h] [ebp-14h]
  double v21; // [esp+5Ch] [ebp-10h]
  __int16 v22; // [esp+68h] [ebp-4h]

  v14 = sub_47E420((_DWORD *)dword_791364);
  v15 = 0;
  for ( i = 0; i < sub_47F950(); ++i )
  {
    if ( i != v14 )
    {
      v19 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v19) == 1 )
      {
        ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v19);
        v15 += sub_4F69E0((__int16 *)(dword_791364 + 56), ExecutingContext);
        v3 = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v19);
        if ( sub_4F6880((__int16 *)(dword_791364 + 56), v3) > 0 )
        {
          v15 = 0;
          break;
        }
      }
    }
  }
  v4 = sub_4D6CB0(dword_7926F8);
  v18 = sub_62FBF0(v4 + 1);
  v5 = sub_62FBF0(5);
  v16 = sub_62FBF0(word_7929C0[v14]) * v5;
  if ( v16 + v18 * v15 + word_7925B0[v14] <= 10 )
    v6 = dbl_792DF8[v14];
  else
    v6 = (double)(v18 * v15 + word_7925B0[v14] + v16 - 10) / 100.0 + dbl_792DF8[v14];
  v12 = sub_4D7AF0(dword_7926F8, 3);
  v20 = sub_4D7AF0(dword_7926F8, 2);
  v17 = sub_4D7AF0(dword_7926F8, 1);
  v22 = sub_4D7DE0(dword_7926F8);
  v11 = (double)(int)sub_62FBF0(v22) / 100.0 + 1.0;
  v21 = (v11 - (double)(int)sub_62FBF0(v22) / 100.0) / (double)a2;
  if ( sub_62FBF0(10) >= word_7929C0[v14] )
  {
    if ( byte_7924A8[i] && a1 == 4 )
    {
      v12 *= 2;
      v20 *= 2;
      v17 *= 2;
    }
    else if ( byte_7924A8[i] && a1 == 5 )
    {
      v12 = (__int16)(3 * v12) / 2;
      v20 = (__int16)(3 * v20) / 2;
      v17 = (__int16)(3 * v17) / 2;
    }
  }
  else
  {
    v12 /= 2;
    v20 /= 2;
    v17 /= 2;
  }
  v7 = sub_47CE60((_DWORD *)dword_791364);
  if ( (double)(v12 - sub_4C6F90(dword_7926F8, a1 == 7, v7)) / 100.0 + v21 >= dbl_792DF8[v14] )
  {
    v9 = sub_47CE60((_DWORD *)dword_791364);
    if ( (double)(v20 - sub_4C6F90(dword_7926F8, a1 == 7, v9)) / 100.0 + v21 >= dbl_792DF8[v14] )
    {
      v10 = sub_47CE60((_DWORD *)dword_791364);
      if ( (double)(v17 - sub_4C6F90(dword_7926F8, a1 == 7, v10)) / 100.0 + v21 >= dbl_792DF8[v14] )
      {
        if ( (double)(v12 - sub_4C6FD0(dword_7926F8)) / 100.0 + v21 >= v6 )
        {
          if ( (double)(v20 - sub_4C6FD0(dword_7926F8)) / 100.0 + v21 >= v6 )
          {
            if ( (double)(v17 - sub_4C6FD0(dword_7926F8)) / 100.0 + v21 >= v6 )
            {
              return 0;
            }
            else
            {
              word_792498[v14] = 11;
              return 1;
            }
          }
          else
          {
            word_792498[v14] = 12;
            return 1;
          }
        }
        else
        {
          word_792498[v14] = 13;
          return 1;
        }
      }
      else
      {
        word_792498[v14] = 3;
        return 1;
      }
    }
    else
    {
      word_792498[v14] = 4;
      return 1;
    }
  }
  else
  {
    word_792498[v14] = 5;
    return 1;
  }
}


//======================================================================
// sub_502530
// entry 00502530  size 143  status ok
//======================================================================

__int16 __cdecl sub_502530(int a1, __int16 a2)
{
  __int16 v3; // [esp+0h] [ebp-4h]

  v3 = sub_4D6A60(dword_7926F8, a2);
  if ( a1 == 7 && sub_4F6640((_BYTE *)(dword_791364 + 56)) )
  {
    v3 += (100 - v3) / 2;
  }
  else if ( sub_47D6F0((_DWORD *)dword_791364) == 1 && a1 < 5 && !sub_4F6640((_BYTE *)(dword_791364 + 56)) )
  {
    v3 /= 2;
  }
  return v3;
}


//======================================================================
// sub_5025C0
// entry 005025c0  size 1826  status ok
//======================================================================

void sub_5025C0()
{
  int v0; // esi
  Concurrency::details::SchedulerProxy *v1; // eax
  CRecentFileList **v2; // eax
  _BYTE *v3; // [esp+10h] [ebp-E0h]
  _BYTE *v4; // [esp+1Ch] [ebp-D4h]
  _BYTE *v5; // [esp+28h] [ebp-C8h]
  _BYTE *v6; // [esp+34h] [ebp-BCh]
  _BYTE *v7; // [esp+40h] [ebp-B0h]
  _BYTE *v8; // [esp+4Ch] [ebp-A4h]
  _BYTE *v9; // [esp+58h] [ebp-98h]
  _BYTE *v10; // [esp+64h] [ebp-8Ch]
  _BYTE *v11; // [esp+70h] [ebp-80h]
  _BYTE *v12; // [esp+7Ch] [ebp-74h]
  _BYTE *v13; // [esp+88h] [ebp-68h]
  _BYTE *v14; // [esp+94h] [ebp-5Ch]
  __int16 *v15; // [esp+9Ch] [ebp-54h]
  char v16; // [esp+A7h] [ebp-49h] BYREF
  char v17; // [esp+A8h] [ebp-48h] BYREF
  char v18; // [esp+A9h] [ebp-47h] BYREF
  bool v19; // [esp+AAh] [ebp-46h]
  char v20; // [esp+ABh] [ebp-45h] BYREF
  char v21; // [esp+ACh] [ebp-44h] BYREF
  bool v22; // [esp+ADh] [ebp-43h]
  char v23; // [esp+AEh] [ebp-42h] BYREF
  char v24; // [esp+AFh] [ebp-41h] BYREF
  bool v25; // [esp+B0h] [ebp-40h]
  char v26; // [esp+B1h] [ebp-3Fh] BYREF
  char v27; // [esp+B2h] [ebp-3Eh] BYREF
  bool v28; // [esp+B3h] [ebp-3Dh]
  char v29; // [esp+B4h] [ebp-3Ch] BYREF
  char v30; // [esp+B5h] [ebp-3Bh] BYREF
  bool v31; // [esp+B6h] [ebp-3Ah]
  char v32; // [esp+B7h] [ebp-39h] BYREF
  char v33; // [esp+B8h] [ebp-38h] BYREF
  bool v34; // [esp+B9h] [ebp-37h]
  char v35; // [esp+BAh] [ebp-36h] BYREF
  char v36; // [esp+BBh] [ebp-35h] BYREF
  bool v37; // [esp+BCh] [ebp-34h]
  char v38; // [esp+BDh] [ebp-33h] BYREF
  char v39; // [esp+BEh] [ebp-32h] BYREF
  bool v40; // [esp+BFh] [ebp-31h]
  char v41; // [esp+C0h] [ebp-30h] BYREF
  char v42; // [esp+C1h] [ebp-2Fh] BYREF
  bool v43; // [esp+C2h] [ebp-2Eh]
  char v44; // [esp+C3h] [ebp-2Dh] BYREF
  char v45; // [esp+C4h] [ebp-2Ch] BYREF
  bool v46; // [esp+C5h] [ebp-2Bh]
  char v47; // [esp+C6h] [ebp-2Ah] BYREF
  char v48; // [esp+C7h] [ebp-29h] BYREF
  bool v49; // [esp+C8h] [ebp-28h]
  char v50; // [esp+C9h] [ebp-27h] BYREF
  char v51; // [esp+CAh] [ebp-26h] BYREF
  bool v52; // [esp+CBh] [ebp-25h]
  __int16 v53[4]; // [esp+CCh] [ebp-24h] BYREF
  __int16 i; // [esp+D4h] [ebp-1Ch]
  _WORD v55[6]; // [esp+D8h] [ebp-18h] BYREF
  int v56; // [esp+ECh] [ebp-4h]

  sub_4646A0(v55);
  v56 = 0;
  sub_4646F0(v55);
  for ( i = 0; ; ++i )
  {
    v0 = i;
    if ( v0 >= sub_47F950() )
      break;
    v1 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
    if ( Concurrency::details::SchedulerProxy::GetQueueLength(v1) )
    {
      v2 = (CRecentFileList **)sub_47E390(i);
      v15 = sub_4C8300(v2, v53);
      LOBYTE(v56) = 1;
      sub_4649C0(v55, (int)v15);
      LOBYTE(v56) = 0;
      sub_484470(v53);
    }
  }
  v14 = sub_464130(&v51, (_BYTE *)dword_7907A4, (_BYTE *)dword_79076C);
  LOBYTE(v56) = 2;
  v52 = sub_464B90(v55, v14);
  LOBYTE(v56) = 0;
  ATL::CComCriticalSection::~CComCriticalSection(&v51);
  if ( v52 )
  {
    byte_792F88 = *sub_464130(&v50, (_BYTE *)dword_7907A4, (_BYTE *)dword_79076C);
    ATL::CComCriticalSection::~CComCriticalSection(&v50);
  }
  else
  {
    v13 = sub_464130(&v48, (_BYTE *)dword_7907A8, (_BYTE *)dword_79076C);
    LOBYTE(v56) = 3;
    v49 = sub_464B90(v55, v13);
    LOBYTE(v56) = 0;
    ATL::CComCriticalSection::~CComCriticalSection(&v48);
    if ( v49 )
    {
      byte_792F88 = *sub_464130(&v47, (_BYTE *)dword_7907A8, (_BYTE *)dword_79076C);
      ATL::CComCriticalSection::~CComCriticalSection(&v47);
    }
    else
    {
      v12 = sub_464130(&v45, (_BYTE *)dword_7907B0, (_BYTE *)dword_79076C);
      LOBYTE(v56) = 4;
      v46 = sub_464B90(v55, v12);
      LOBYTE(v56) = 0;
      ATL::CComCriticalSection::~CComCriticalSection(&v45);
      if ( v46 )
      {
        byte_792F88 = *sub_464130(&v44, (_BYTE *)dword_7907B0, (_BYTE *)dword_79076C);
        ATL::CComCriticalSection::~CComCriticalSection(&v44);
      }
      else
      {
        v11 = sub_464130(&v42, (_BYTE *)dword_790774, (_BYTE *)dword_79076C);
        LOBYTE(v56) = 5;
        v43 = sub_464B90(v55, v11);
        LOBYTE(v56) = 0;
        ATL::CComCriticalSection::~CComCriticalSection(&v42);
        if ( v43 )
        {
          byte_792F88 = *sub_464130(&v41, (_BYTE *)dword_790774, (_BYTE *)dword_79076C);
          ATL::CComCriticalSection::~CComCriticalSection(&v41);
        }
        else
        {
          v10 = sub_464130(&v39, (_BYTE *)dword_790788, (_BYTE *)dword_79076C);
          LOBYTE(v56) = 6;
          v40 = sub_464B90(v55, v10);
          LOBYTE(v56) = 0;
          ATL::CComCriticalSection::~CComCriticalSection(&v39);
          if ( v40 )
          {
            byte_792F88 = *sub_464130(&v38, (_BYTE *)dword_790788, (_BYTE *)dword_79076C);
            ATL::CComCriticalSection::~CComCriticalSection(&v38);
          }
          else
          {
            v9 = sub_464130(&v36, (_BYTE *)dword_790794, (_BYTE *)dword_79076C);
            LOBYTE(v56) = 7;
            v37 = sub_464B90(v55, v9);
            LOBYTE(v56) = 0;
            ATL::CComCriticalSection::~CComCriticalSection(&v36);
            if ( v37 )
            {
              byte_792F88 = *sub_464130(&v35, (_BYTE *)dword_790794, (_BYTE *)dword_79076C);
              ATL::CComCriticalSection::~CComCriticalSection(&v35);
            }
            else
            {
              v8 = sub_464130(&v33, (_BYTE *)dword_790798, (_BYTE *)dword_79076C);
              LOBYTE(v56) = 8;
              v34 = sub_464B90(v55, v8);
              LOBYTE(v56) = 0;
              ATL::CComCriticalSection::~CComCriticalSection(&v33);
              if ( v34 )
              {
                byte_792F88 = *sub_464130(&v32, (_BYTE *)dword_790798, (_BYTE *)dword_79076C);
                ATL::CComCriticalSection::~CComCriticalSection(&v32);
              }
              else
              {
                v7 = sub_464130(&v30, (_BYTE *)dword_790760, (_BYTE *)dword_79076C);
                LOBYTE(v56) = 9;
                v31 = sub_464B90(v55, v7);
                LOBYTE(v56) = 0;
                ATL::CComCriticalSection::~CComCriticalSection(&v30);
                if ( v31 )
                {
                  byte_792F88 = *sub_464130(&v29, (_BYTE *)dword_790760, (_BYTE *)dword_79076C);
                  ATL::CComCriticalSection::~CComCriticalSection(&v29);
                }
                else
                {
                  v6 = sub_464130(&v27, (_BYTE *)dword_79079C, (_BYTE *)dword_79076C);
                  LOBYTE(v56) = 10;
                  v28 = sub_464B90(v55, v6);
                  LOBYTE(v56) = 0;
                  ATL::CComCriticalSection::~CComCriticalSection(&v27);
                  if ( v28 )
                  {
                    byte_792F88 = *sub_464130(&v26, (_BYTE *)dword_79079C, (_BYTE *)dword_79076C);
                    ATL::CComCriticalSection::~CComCriticalSection(&v26);
                  }
                  else
                  {
                    v5 = sub_464130(&v24, (_BYTE *)dword_790750, (_BYTE *)dword_79076C);
                    LOBYTE(v56) = 11;
                    v25 = sub_464B90(v55, v5);
                    LOBYTE(v56) = 0;
                    ATL::CComCriticalSection::~CComCriticalSection(&v24);
                    if ( v25 )
                    {
                      byte_792F88 = *sub_464130(&v23, (_BYTE *)dword_790750, (_BYTE *)dword_79076C);
                      ATL::CComCriticalSection::~CComCriticalSection(&v23);
                    }
                    else
                    {
                      v4 = sub_464130(&v21, (_BYTE *)dword_790790, (_BYTE *)dword_79076C);
                      LOBYTE(v56) = 12;
                      v22 = sub_464B90(v55, v4);
                      LOBYTE(v56) = 0;
                      ATL::CComCriticalSection::~CComCriticalSection(&v21);
                      if ( v22 )
                      {
                        byte_792F88 = *sub_464130(&v20, (_BYTE *)dword_790790, (_BYTE *)dword_79076C);
                        ATL::CComCriticalSection::~CComCriticalSection(&v20);
                      }
                      else
                      {
                        v3 = sub_464130(&v18, (_BYTE *)dword_790768, (_BYTE *)dword_79076C);
                        LOBYTE(v56) = 13;
                        v19 = sub_464B90(v55, v3);
                        LOBYTE(v56) = 0;
                        ATL::CComCriticalSection::~CComCriticalSection(&v18);
                        if ( v19 )
                        {
                          byte_792F88 = *sub_464130(&v17, (_BYTE *)dword_790768, (_BYTE *)dword_79076C);
                          ATL::CComCriticalSection::~CComCriticalSection(&v17);
                        }
                        else
                        {
                          byte_792F88 = *sub_464130(&v16, (_BYTE *)dword_790758, (_BYTE *)dword_79076C);
                          ATL::CComCriticalSection::~CComCriticalSection(&v16);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v56 = -1;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)v55);
}


//======================================================================
// sub_502CF0
// entry 00502cf0  size 465  status ok
//======================================================================

void sub_502CF0()
{
  int v0; // esi
  Concurrency::details::SchedulerProxy *v1; // eax
  CRecentFileList **v2; // eax
  int v3; // esi
  Concurrency::details::SchedulerProxy *v4; // eax
  CRecentFileList **v5; // eax
  int v6; // [esp-4h] [ebp-50h]
  int *v7; // [esp+8h] [ebp-44h]
  __int16 *v8; // [esp+Ch] [ebp-40h]
  __int16 *v9; // [esp+14h] [ebp-38h]
  int v10; // [esp+1Ch] [ebp-30h] BYREF
  __int16 v11[4]; // [esp+20h] [ebp-2Ch] BYREF
  __int16 v12[4]; // [esp+28h] [ebp-24h] BYREF
  __int16 i; // [esp+30h] [ebp-1Ch]
  _DWORD v14[2]; // [esp+34h] [ebp-18h] BYREF
  __int16 v15; // [esp+3Ch] [ebp-10h]
  int v16; // [esp+48h] [ebp-4h]

  sub_4646A0(v14);
  v16 = 0;
  sub_4646F0(v14);
  for ( i = 0; ; ++i )
  {
    v0 = i;
    if ( v0 >= sub_47F950() )
      break;
    v1 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
    if ( Concurrency::details::SchedulerProxy::GetQueueLength(v1) )
    {
      v2 = (CRecentFileList **)sub_47E390(i);
      v9 = sub_4C8300(v2, v12);
      LOBYTE(v16) = 1;
      sub_4649C0(v14, (int)v9);
      LOBYTE(v16) = 0;
      sub_484470(v12);
    }
  }
  for ( i = 0; ; ++i )
  {
    v3 = i;
    if ( v3 >= sub_47F950() )
      break;
    v4 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
    if ( Concurrency::details::SchedulerProxy::GetQueueLength(v4) == 1 )
    {
      v5 = (CRecentFileList **)sub_47E390(i);
      v8 = sub_4C8300(v5, v11);
      LOBYTE(v16) = 2;
      LOWORD(v6) = v15;
      v7 = sub_496200(v8, &v10, v14[0], v14[1], v6);
      dword_793010[i] = *v7;
      ATL::CComCriticalSection::~CComCriticalSection(&v10);
      LOBYTE(v16) = 0;
      sub_484470(v11);
    }
    else
    {
      sub_4A2100(
        (_WORD *)(4 * i + 7942160),
        (_BYTE *)dword_791390,
        &byte_7913FF,
        (unsigned __int8 *)&byte_7913FF,
        (unsigned __int8 *)&byte_7913FF,
        (unsigned __int8 *)&byte_7913FF,
        (unsigned __int8 *)&byte_7913FF);
    }
  }
  v16 = -1;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)v14);
}


//======================================================================
// sub_502ED0
// entry 00502ed0  size 15538  status ok
//======================================================================

int __cdecl sub_502ED0(int a1, int a2, unsigned __int8 *a3)
{
  int v3; // esi
  Concurrency::details::SchedulerProxy *v4; // eax
  Concurrency::details::VirtualProcessor *v5; // eax
  __int16 ExecutingContext; // ax
  __int16 v7; // ax
  CRecentFileList **v8; // eax
  __int16 v9; // si
  __int16 v10; // si
  __int16 v11; // di
  __int16 v12; // ax
  int v13; // esi
  Concurrency::details::SchedulerProxy *v14; // eax
  CRecentFileList **v15; // eax
  int v16; // esi
  int v17; // esi
  unsigned __int8 *v18; // eax
  unsigned __int8 *v19; // eax
  unsigned __int8 *v20; // eax
  unsigned __int8 *v21; // eax
  unsigned __int8 *v22; // eax
  unsigned __int8 *v23; // eax
  unsigned __int8 *v24; // eax
  unsigned __int8 *v25; // eax
  unsigned __int8 *v26; // eax
  unsigned __int8 *v27; // eax
  unsigned __int8 *v28; // eax
  unsigned __int8 *v29; // eax
  unsigned __int8 *v30; // eax
  unsigned __int8 *v31; // eax
  unsigned __int8 *v32; // eax
  unsigned __int8 *v33; // eax
  unsigned __int8 *v34; // eax
  unsigned __int8 *v35; // eax
  unsigned __int8 *v36; // eax
  unsigned __int8 *v37; // eax
  unsigned __int8 *v38; // eax
  unsigned __int8 *v39; // eax
  unsigned __int8 *v40; // eax
  unsigned __int8 *v41; // eax
  unsigned __int8 *v42; // eax
  unsigned __int8 *v43; // eax
  unsigned __int8 *v44; // eax
  unsigned __int8 *v45; // eax
  unsigned __int8 *v46; // eax
  unsigned __int8 *v47; // eax
  unsigned __int8 *v48; // eax
  unsigned __int8 *v49; // eax
  unsigned __int8 *v50; // eax
  unsigned __int8 *v51; // eax
  unsigned __int8 *v52; // eax
  unsigned __int8 *v53; // eax
  unsigned __int8 *v54; // eax
  unsigned __int8 *v55; // eax
  unsigned __int8 *v56; // eax
  unsigned __int8 *v57; // eax
  unsigned __int8 *v58; // eax
  unsigned __int8 *v59; // eax
  unsigned __int8 *v60; // eax
  unsigned __int8 *v61; // eax
  Concurrency::details::SchedulerProxy *v62; // eax
  CRecentFileList **v63; // eax
  CRecentFileList **v64; // eax
  CRecentFileList **v65; // eax
  CRecentFileList **v66; // eax
  int v67; // esi
  int v68; // esi
  int v69; // esi
  int v70; // esi
  int v71; // esi
  double v72; // st7
  int v73; // esi
  Concurrency::details::SchedulerProxy *v74; // eax
  int v75; // esi
  int v76; // esi
  Concurrency::details::SchedulerProxy *v77; // eax
  int v78; // esi
  int v79; // esi
  Concurrency::details::SchedulerProxy *v80; // eax
  int v81; // esi
  int v82; // esi
  Concurrency::details::SchedulerProxy *v83; // eax
  __int16 v85; // ax
  int v86; // esi
  int v87; // esi
  int v88; // edi
  int v89; // esi
  int v90; // esi
  int v91; // edi
  int v92; // esi
  int v93; // esi
  int v94; // esi
  int v95; // esi
  int v96; // esi
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int v101; // eax
  int v102; // esi
  int v103; // eax
  int v104; // esi
  int v105; // eax
  int v106; // esi
  int v107; // esi
  int v108; // esi
  int v109; // esi
  int v110; // eax
  int v111; // esi
  int v112; // eax
  int v113; // esi
  int v114; // esi
  int v115; // esi
  int v116; // esi
  int v117; // eax
  int v118; // esi
  int v119; // eax
  int v120; // esi
  int v121; // esi
  int v122; // esi
  int v123; // esi
  __int16 v124; // [esp-38h] [ebp-3FCh] BYREF
  __int16 *v125; // [esp-34h] [ebp-3F8h]
  __int16 v126; // [esp-30h] [ebp-3F4h] BYREF
  int v127; // [esp-2Ch] [ebp-3F0h]
  int v128; // [esp-28h] [ebp-3ECh]
  int *v129; // [esp-24h] [ebp-3E8h]
  int *v130; // [esp-20h] [ebp-3E4h]
  int *v131; // [esp-1Ch] [ebp-3E0h]
  int *v132; // [esp-18h] [ebp-3DCh]
  int *v133; // [esp-14h] [ebp-3D8h]
  int *v134; // [esp-10h] [ebp-3D4h]
  int *v135; // [esp-Ch] [ebp-3D0h]
  int *v136; // [esp-8h] [ebp-3CCh]
  unsigned __int8 *v137; // [esp-4h] [ebp-3C8h]
  int v138; // [esp+Ch] [ebp-3B8h]
  int v139; // [esp+10h] [ebp-3B4h]
  int v140; // [esp+14h] [ebp-3B0h]
  int v141; // [esp+18h] [ebp-3ACh]
  double v142; // [esp+1Ch] [ebp-3A8h]
  int v143; // [esp+24h] [ebp-3A0h]
  double v144; // [esp+28h] [ebp-39Ch]
  HFONT Font; // [esp+30h] [ebp-394h]
  int v146; // [esp+34h] [ebp-390h]
  int v147; // [esp+38h] [ebp-38Ch]
  int v148; // [esp+3Ch] [ebp-388h]
  _BYTE *v149; // [esp+40h] [ebp-384h]
  _BYTE *v150; // [esp+44h] [ebp-380h]
  _BYTE *v151; // [esp+48h] [ebp-37Ch]
  _BYTE *v152; // [esp+4Ch] [ebp-378h]
  _BYTE *v153; // [esp+50h] [ebp-374h]
  _BYTE *v154; // [esp+54h] [ebp-370h]
  int v155; // [esp+58h] [ebp-36Ch]
  int v156; // [esp+5Ch] [ebp-368h]
  __int16 *v157; // [esp+60h] [ebp-364h]
  __int16 *v158; // [esp+64h] [ebp-360h]
  __int16 *v159; // [esp+68h] [ebp-35Ch]
  __int16 *v160; // [esp+6Ch] [ebp-358h]
  _BYTE *v161; // [esp+70h] [ebp-354h]
  _BYTE *v162; // [esp+74h] [ebp-350h]
  __int16 *v163; // [esp+78h] [ebp-34Ch]
  __int16 *v164; // [esp+7Ch] [ebp-348h]
  __int16 *v165; // [esp+80h] [ebp-344h]
  __int16 *v166; // [esp+84h] [ebp-340h]
  __int16 *v167; // [esp+88h] [ebp-33Ch]
  __int16 *v168; // [esp+8Ch] [ebp-338h]
  _BYTE *v169; // [esp+90h] [ebp-334h]
  _BYTE *v170; // [esp+94h] [ebp-330h]
  __int16 *v171; // [esp+98h] [ebp-32Ch]
  __int16 *v172; // [esp+9Ch] [ebp-328h]
  __int16 *v173; // [esp+A0h] [ebp-324h]
  __int16 *v174; // [esp+A4h] [ebp-320h]
  __int16 *v175; // [esp+A8h] [ebp-31Ch]
  __int16 *v176; // [esp+ACh] [ebp-318h]
  __int16 *v177; // [esp+B0h] [ebp-314h]
  __int16 *v178; // [esp+B4h] [ebp-310h]
  __int16 *v179; // [esp+B8h] [ebp-30Ch]
  __int16 *v180; // [esp+BCh] [ebp-308h]
  __int16 *v181; // [esp+C0h] [ebp-304h]
  __int16 *v182; // [esp+C4h] [ebp-300h]
  __int16 *v183; // [esp+C8h] [ebp-2FCh]
  __int16 *v184; // [esp+CCh] [ebp-2F8h]
  __int16 *v185; // [esp+D0h] [ebp-2F4h]
  __int16 *v186; // [esp+D4h] [ebp-2F0h]
  __int16 *v187; // [esp+D8h] [ebp-2ECh]
  __int16 *v188; // [esp+DCh] [ebp-2E8h]
  _BYTE *v189; // [esp+E0h] [ebp-2E4h]
  _BYTE *v190; // [esp+E4h] [ebp-2E0h]
  __int16 *v191; // [esp+E8h] [ebp-2DCh]
  __int16 *v192; // [esp+ECh] [ebp-2D8h]
  BOOL v193; // [esp+F0h] [ebp-2D4h]
  __int16 *v194; // [esp+F4h] [ebp-2D0h]
  __int16 *v195; // [esp+F8h] [ebp-2CCh]
  __int16 *v196; // [esp+FCh] [ebp-2C8h]
  __int16 *v197; // [esp+100h] [ebp-2C4h]
  __int16 *v198; // [esp+104h] [ebp-2C0h]
  __int16 *v199; // [esp+108h] [ebp-2BCh]
  __int16 *v200; // [esp+10Ch] [ebp-2B8h]
  __int16 *v201; // [esp+110h] [ebp-2B4h]
  __int16 *v202; // [esp+114h] [ebp-2B0h]
  __int16 *v203; // [esp+118h] [ebp-2ACh]
  int v204; // [esp+11Ch] [ebp-2A8h]
  int v205; // [esp+120h] [ebp-2A4h]
  __int16 *v206; // [esp+124h] [ebp-2A0h]
  __int16 *v207; // [esp+128h] [ebp-29Ch]
  __int16 *v208; // [esp+12Ch] [ebp-298h]
  __int16 *v209; // [esp+130h] [ebp-294h]
  _BYTE *v210; // [esp+134h] [ebp-290h]
  _BYTE *v211; // [esp+138h] [ebp-28Ch]
  __int16 *v212; // [esp+13Ch] [ebp-288h]
  __int16 *v213; // [esp+140h] [ebp-284h]
  __int16 *v214; // [esp+144h] [ebp-280h]
  __int16 *v215; // [esp+148h] [ebp-27Ch]
  __int16 *v216; // [esp+14Ch] [ebp-278h]
  __int16 *v217; // [esp+150h] [ebp-274h]
  _BYTE *v218; // [esp+154h] [ebp-270h]
  _BYTE *v219; // [esp+158h] [ebp-26Ch]
  __int16 *v220; // [esp+15Ch] [ebp-268h]
  __int16 *v221; // [esp+160h] [ebp-264h]
  __int16 *v222; // [esp+164h] [ebp-260h]
  __int16 *v223; // [esp+168h] [ebp-25Ch]
  _BYTE *v224; // [esp+16Ch] [ebp-258h]
  _BYTE *v225; // [esp+170h] [ebp-254h]
  _BYTE *v226; // [esp+174h] [ebp-250h]
  _BYTE *v227; // [esp+178h] [ebp-24Ch]
  __int16 *v228; // [esp+17Ch] [ebp-248h]
  __int16 *v229; // [esp+180h] [ebp-244h]
  __int16 *v230; // [esp+184h] [ebp-240h]
  __int16 *v231; // [esp+188h] [ebp-23Ch]
  _BYTE *v232; // [esp+18Ch] [ebp-238h]
  _BYTE *v233; // [esp+190h] [ebp-234h]
  int v234; // [esp+194h] [ebp-230h]
  char v235; // [esp+19Ah] [ebp-22Ah] BYREF
  char v236; // [esp+19Bh] [ebp-229h]
  char v237; // [esp+19Ch] [ebp-228h] BYREF
  char v238; // [esp+19Dh] [ebp-227h]
  char v239; // [esp+19Eh] [ebp-226h] BYREF
  char v240; // [esp+19Fh] [ebp-225h]
  __int16 *v241; // [esp+1A0h] [ebp-224h]
  __int16 *v242; // [esp+1A4h] [ebp-220h]
  char v243; // [esp+1ABh] [ebp-219h] BYREF
  __int16 v244[4]; // [esp+1ACh] [ebp-218h] BYREF
  __int16 *v245; // [esp+1B4h] [ebp-210h]
  void *v246; // [esp+1B8h] [ebp-20Ch]
  __int16 *v247; // [esp+1BCh] [ebp-208h]
  char v248; // [esp+1C3h] [ebp-201h] BYREF
  __int16 v249[4]; // [esp+1C4h] [ebp-200h] BYREF
  char v250; // [esp+1CCh] [ebp-1F8h] BYREF
  char v251; // [esp+1CDh] [ebp-1F7h] BYREF
  char v252; // [esp+1CEh] [ebp-1F6h] BYREF
  char v253; // [esp+1CFh] [ebp-1F5h] BYREF
  char v254; // [esp+1D0h] [ebp-1F4h] BYREF
  char v255; // [esp+1D1h] [ebp-1F3h] BYREF
  char v256; // [esp+1D2h] [ebp-1F2h] BYREF
  char v257; // [esp+1D3h] [ebp-1F1h] BYREF
  char v258; // [esp+1D4h] [ebp-1F0h] BYREF
  char v259; // [esp+1D5h] [ebp-1EFh] BYREF
  char v260; // [esp+1D6h] [ebp-1EEh] BYREF
  char v261; // [esp+1D7h] [ebp-1EDh] BYREF
  char v262; // [esp+1D8h] [ebp-1ECh] BYREF
  char v263; // [esp+1D9h] [ebp-1EBh] BYREF
  char v264; // [esp+1DAh] [ebp-1EAh] BYREF
  char v265; // [esp+1DBh] [ebp-1E9h] BYREF
  __int16 v266[4]; // [esp+1DCh] [ebp-1E8h] BYREF
  __int16 v267[5]; // [esp+1E4h] [ebp-1E0h] BYREF
  char v268; // [esp+1EEh] [ebp-1D6h] BYREF
  char v269; // [esp+1EFh] [ebp-1D5h] BYREF
  __int16 v270[4]; // [esp+1F0h] [ebp-1D4h] BYREF
  bool v271; // [esp+1F9h] [ebp-1CBh]
  char v272; // [esp+1FAh] [ebp-1CAh] BYREF
  char v273; // [esp+1FBh] [ebp-1C9h] BYREF
  __int16 v274[5]; // [esp+1FCh] [ebp-1C8h] BYREF
  bool v275; // [esp+206h] [ebp-1BEh]
  char v276; // [esp+207h] [ebp-1BDh] BYREF
  char v277; // [esp+208h] [ebp-1BCh] BYREF
  char v278; // [esp+209h] [ebp-1BBh] BYREF
  char v279; // [esp+20Ah] [ebp-1BAh] BYREF
  char v280; // [esp+20Bh] [ebp-1B9h] BYREF
  __int16 v281[4]; // [esp+20Ch] [ebp-1B8h] BYREF
  __int16 v282[4]; // [esp+214h] [ebp-1B0h] BYREF
  char v283; // [esp+21Ch] [ebp-1A8h] BYREF
  char v284; // [esp+21Dh] [ebp-1A7h] BYREF
  char v285; // [esp+21Eh] [ebp-1A6h] BYREF
  char v286; // [esp+21Fh] [ebp-1A5h] BYREF
  __int16 v287[4]; // [esp+220h] [ebp-1A4h] BYREF
  __int16 v288[5]; // [esp+228h] [ebp-19Ch] BYREF
  char v289; // [esp+233h] [ebp-191h] BYREF
  __int16 v290[5]; // [esp+234h] [ebp-190h] BYREF
  char v291; // [esp+23Eh] [ebp-186h] BYREF
  char v292; // [esp+23Fh] [ebp-185h]
  char v293; // [esp+240h] [ebp-184h] BYREF
  char v294; // [esp+241h] [ebp-183h] BYREF
  char v295; // [esp+242h] [ebp-182h] BYREF
  char v296; // [esp+243h] [ebp-181h] BYREF
  __int16 v297[4]; // [esp+244h] [ebp-180h] BYREF
  __int16 v298[5]; // [esp+24Ch] [ebp-178h] BYREF
  char v299; // [esp+256h] [ebp-16Eh] BYREF
  bool v300; // [esp+257h] [ebp-16Dh]
  __int16 v301[5]; // [esp+258h] [ebp-16Ch] BYREF
  bool v302; // [esp+263h] [ebp-161h]
  char v303; // [esp+264h] [ebp-160h] BYREF
  char v304; // [esp+265h] [ebp-15Fh] BYREF
  char v305; // [esp+266h] [ebp-15Eh] BYREF
  char v306; // [esp+267h] [ebp-15Dh] BYREF
  __int16 v307[4]; // [esp+268h] [ebp-15Ch] BYREF
  char v308; // [esp+271h] [ebp-153h] BYREF
  char v309; // [esp+272h] [ebp-152h] BYREF
  char v310; // [esp+273h] [ebp-151h] BYREF
  __int16 v311[5]; // [esp+274h] [ebp-150h] BYREF
  char v312; // [esp+27Eh] [ebp-146h] BYREF
  char v313; // [esp+27Fh] [ebp-145h] BYREF
  __int16 v314[4]; // [esp+280h] [ebp-144h] BYREF
  __int16 *v315; // [esp+288h] [ebp-13Ch]
  __int16 *v316; // [esp+28Ch] [ebp-138h]
  char v317; // [esp+293h] [ebp-131h] BYREF
  __int16 v318[4]; // [esp+294h] [ebp-130h] BYREF
  __int16 *v319; // [esp+29Ch] [ebp-128h]
  void *v320; // [esp+2A0h] [ebp-124h]
  __int16 *v321; // [esp+2A4h] [ebp-120h]
  char v322; // [esp+2ABh] [ebp-119h] BYREF
  __int16 v323[4]; // [esp+2ACh] [ebp-118h] BYREF
  __int16 v324[4]; // [esp+2B4h] [ebp-110h] BYREF
  __int16 v325[5]; // [esp+2BCh] [ebp-108h] BYREF
  char v326; // [esp+2C6h] [ebp-FEh] BYREF
  char v327; // [esp+2C7h] [ebp-FDh] BYREF
  __int16 v328[4]; // [esp+2C8h] [ebp-FCh] BYREF
  __int16 v329[5]; // [esp+2D0h] [ebp-F4h] BYREF
  char v330; // [esp+2DAh] [ebp-EAh] BYREF
  char v331; // [esp+2DBh] [ebp-E9h]
  int v332; // [esp+2DCh] [ebp-E8h]
  double v333; // [esp+2E0h] [ebp-E4h]
  double v334; // [esp+2E8h] [ebp-DCh]
  int v335; // [esp+2F4h] [ebp-D0h]
  double v336; // [esp+2F8h] [ebp-CCh]
  __int16 v337; // [esp+304h] [ebp-C0h]
  __int16 v338; // [esp+308h] [ebp-BCh]
  __int16 v339[5]; // [esp+30Ch] [ebp-B8h] BYREF
  char v340; // [esp+317h] [ebp-ADh]
  __int16 v341; // [esp+318h] [ebp-ACh]
  __int16 v342[4]; // [esp+31Ch] [ebp-A8h] BYREF
  __int16 v343[4]; // [esp+324h] [ebp-A0h] BYREF
  __int16 v344[4]; // [esp+32Ch] [ebp-98h] BYREF
  __int16 j; // [esp+334h] [ebp-90h]
  __int16 v346[4]; // [esp+338h] [ebp-8Ch] BYREF
  int v347; // [esp+340h] [ebp-84h] BYREF
  int v348; // [esp+344h] [ebp-80h] BYREF
  int v349; // [esp+348h] [ebp-7Ch] BYREF
  int v350; // [esp+34Ch] [ebp-78h] BYREF
  int v351; // [esp+350h] [ebp-74h] BYREF
  int v352; // [esp+354h] [ebp-70h] BYREF
  int v353; // [esp+358h] [ebp-6Ch] BYREF
  __int16 v354[4]; // [esp+35Ch] [ebp-68h] BYREF
  __int16 v355[4]; // [esp+364h] [ebp-60h] BYREF
  int v356; // [esp+36Ch] [ebp-58h] BYREF
  int v357; // [esp+370h] [ebp-54h] BYREF
  int v358; // [esp+374h] [ebp-50h] BYREF
  int v359; // [esp+378h] [ebp-4Ch] BYREF
  int v360; // [esp+37Ch] [ebp-48h] BYREF
  int v361; // [esp+380h] [ebp-44h]
  __int16 v362; // [esp+384h] [ebp-40h]
  __int16 v363[4]; // [esp+388h] [ebp-3Ch] BYREF
  __int16 i; // [esp+390h] [ebp-34h]
  __int16 v365; // [esp+394h] [ebp-30h]
  __int16 v366[4]; // [esp+398h] [ebp-2Ch] BYREF
  __int16 v367; // [esp+3A0h] [ebp-24h]
  int v368; // [esp+3A4h] [ebp-20h] BYREF
  int v369; // [esp+3A8h] [ebp-1Ch]
  __int16 v370; // [esp+3ACh] [ebp-18h]
  int v371; // [esp+3B0h] [ebp-14h]
  __int16 v372; // [esp+3B4h] [ebp-10h]
  int v373; // [esp+3C0h] [ebp-4h]

  v234 = 0;
  v371 = sub_47E420((_DWORD *)dword_791364);
  if ( v371 < 0 )
    sub_5E9F20((char)"currentPlayer >= 0", "..\\Casino\\PokerStudAI.cpp", 2327);
  if ( v371 >= sub_47F950() )
    sub_5E9F20((char)"currentPlayer < pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerStudAI.cpp", 2328);
  dword_7926F8 = (Concurrency::details::VirtualProcessor *)sub_47E3B0((void *)dword_791364);
  if ( word_792DE8[v371] == a1 )
  {
    if ( (unsigned __int8 *)word_792980[v371] == a3
      || word_792498[v371] == 6
      || word_792498[v371] == 7
      || word_792498[v371] == 8
      || word_792498[v371] == 9
      || word_792498[v371] == 2 )
    {
      v137 = a3;
      dbl_792DF8[v371] = sub_506B90(a1, a2);
    }
    else
    {
      word_792980[v371] = (__int16)a3;
      v137 = a3;
      dbl_792DF8[v371] = sub_506B90(a1, a2);
      word_792498[v371] = 1;
    }
  }
  else
  {
    byte_7926F0[v371] = 0;
    v367 = 0;
    for ( i = 0; ; ++i )
    {
      v3 = i;
      if ( v3 >= sub_47F950() )
        break;
      if ( i != v371 )
      {
        v4 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v4) == 1 )
        {
          v5 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
          ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v5);
          v7 = sub_4F6A90(dword_791364 + 56, ExecutingContext);
          v367 += v7;
          if ( sub_47D770((_DWORD *)dword_791364) == 3 )
          {
            v8 = (CRecentFileList **)sub_47E390(i);
            sub_4C8300(v8, v363);
            v373 = 0;
            v233 = sub_464130(&v330, (_BYTE *)dword_7907A4, (_BYTE *)dword_79076C);
            v232 = v233;
            LOBYTE(v373) = 1;
            v331 = sub_484BA0(v363, v233);
            LOBYTE(v373) = 0;
            ATL::CComCriticalSection::~CComCriticalSection(&v330);
            if ( v331 )
              byte_7926F0[v371] = 1;
            v373 = -1;
            sub_484470(v363);
          }
        }
      }
    }
    v365 = sub_4D9140(dword_7926F8) / 2;
    v9 = sub_62FBF0(v365);
    v10 = v9 - sub_62FBF0(v365);
    v11 = v367;
    v12 = sub_4D9100(dword_7926F8);
    word_7925B0[v371] = v10 - sub_62FBF0(v12 + 1) * v11;
    sub_484300(v366);
    v373 = 2;
    if ( sub_47D6F0((_DWORD *)dword_791364) == 2 )
    {
      v231 = sub_4C8210((CRecentFileList **)dword_7926F8, v329);
      v230 = v231;
      LOBYTE(v373) = 3;
      sub_484490(v366, v231);
      LOBYTE(v373) = 2;
      sub_484470(v329);
    }
    else
    {
      v229 = sub_4C7C40((CRecentFileList **)dword_7926F8, v328);
      v228 = v229;
      LOBYTE(v373) = 4;
      sub_484490(v366, v229);
      LOBYTE(v373) = 2;
      sub_484470(v328);
    }
    sub_4646A0(&v368);
    LOBYTE(v373) = 5;
    sub_4646F0(&v368);
    if ( sub_47D6F0((_DWORD *)dword_791364) == 2 )
    {
      v227 = sub_464130(&v327, (_BYTE *)dword_7907B0, (_BYTE *)dword_79076C);
      v226 = v227;
      LOBYTE(v373) = 6;
      sub_4648B0(&v368, v227);
      LOBYTE(v373) = 5;
      ATL::CComCriticalSection::~CComCriticalSection(&v327);
      v225 = sub_464130(&v326, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
      v224 = v225;
      LOBYTE(v373) = 7;
      sub_464770((unsigned __int8 *)&v368, v225);
      LOBYTE(v373) = 5;
      ATL::CComCriticalSection::~CComCriticalSection(&v326);
    }
    sub_4649C0(&v368, (int)v366);
    for ( i = 0; ; ++i )
    {
      v13 = i;
      if ( v13 >= sub_47F950() )
        break;
      if ( i != v371 )
      {
        v14 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v14) )
        {
          v15 = (CRecentFileList **)sub_47E390(i);
          v223 = sub_4C8300(v15, v325);
          v222 = v223;
          LOBYTE(v373) = 8;
          sub_4649C0(&v368, (int)v223);
          LOBYTE(v373) = 5;
          sub_484470(v325);
        }
      }
    }
    sub_4958E0(
      v366,
      v368,
      v369,
      v370,
      (_WORD *)(2 * v371 + 7940568),
      (_WORD *)(2 * v371 + 7940144),
      (_WORD *)(2 * v371 + 7938296),
      (_WORD *)(2 * v371 + 7940128),
      (_WORD *)(2 * v371 + 7938584),
      (_WORD *)(2 * v371 + 7938632),
      (_WORD *)(2 * v371 + 7939520),
      (_WORD *)(2 * v371 + 7939836),
      (_WORD *)(2 * v371 + 7942008),
      (_WORD *)(2 * v371 + 7938280));
    if ( !sub_47D770((_DWORD *)dword_791364) )
      sub_4966E0(
        v366,
        v368,
        v369,
        v370,
        (_WORD *)(2 * v371 + 7939536),
        (_WORD *)(2 * v371 + 7940112),
        (_WORD *)(2 * v371 + 7938568),
        (_WORD *)(2 * v371 + 7940512),
        (_WORD *)(2 * v371 + 7937736),
        (_WORD *)(2 * v371 + 7938264),
        (_WORD *)(2 * v371 + 7938600),
        (_WORD *)(2 * v371 + 7940528),
        (_WORD *)(2 * v371 + 7938616),
        (_WORD *)(2 * v371 + 7939552));
    for ( i = 0; ; ++i )
    {
      v16 = i;
      if ( v16 >= sub_47F950() )
        break;
      if ( i == v371 )
      {
        v360 = v368;
        v361 = v369;
        v362 = v370;
        LOBYTE(v373) = 9;
        sub_464860((unsigned __int8 *)&v360, (int)v366);
        v221 = sub_4C8300((CRecentFileList **)dword_7926F8, v324);
        v220 = v221;
        LOBYTE(v373) = 10;
        sub_4649C0(&v360, (int)v221);
        LOBYTE(v373) = 9;
        sub_484470(v324);
        if ( sub_47D770((_DWORD *)dword_791364) == 3 )
        {
          if ( sub_47D6F0((_DWORD *)dword_791364) != 2 )
            sub_5E9F20((char)"pokerGame->GetWildCardRules() == THE_BITCH_WILD", "..\\Casino\\PokerStudAI.cpp", 2468);
          v219 = sub_464130(&v322, (_BYTE *)dword_7907B0, (_BYTE *)dword_79076C);
          v218 = v219;
          LOBYTE(v373) = 11;
          v234 |= 1u;
          v217 = sub_4C8300((CRecentFileList **)dword_7926F8, v323);
          v216 = v217;
          v373 = 12;
          v234 |= 2u;
          if ( sub_484BA0(v217, v218) )
            sub_5E9F20(
              (char)"!(currentPokerPlayer->GetLogicalStudHandShowing().ContainsCard(PokerCard(QueenRank,SpadesSuit)))",
              "..\\Casino\\PokerStudAI.cpp",
              2469);
          v373 = 11;
          if ( (v234 & 2) != 0 )
          {
            v234 &= ~2u;
            sub_484470(v323);
          }
          v373 = 9;
          if ( (v234 & 1) != 0 )
          {
            v234 &= ~1u;
            ATL::CComCriticalSection::~CComCriticalSection(&v322);
          }
          v137 = (unsigned __int8 *)&dword_792398[8 * v371 + i];
          v136 = &dword_792880[8 * v371 + i];
          v135 = &dword_791FD8[8 * v371 + i];
          v134 = &dword_792CE8[8 * v371 + i];
          v133 = &dword_792E78[8 * v371 + i];
          v132 = &dword_7924B0[8 * v371 + i];
          v131 = &dword_792258[8 * v371 + i];
          v130 = &dword_7925F0[8 * v371 + i];
          v129 = &dword_792710[8 * v371 + i];
          v128 = (a1 == 7) + 2;
          v321 = &v126;
          v215 = sub_4C8300((CRecentFileList **)dword_7926F8, &v126);
          sub_496FE0(v366, v360, v361, v362, v126, v127, v128, v129, v130, v131, v132, v133, v134, v135, v136, v137);
        }
        else if ( sub_47D770((_DWORD *)dword_791364) == 4 )
        {
          v137 = (unsigned __int8 *)&dword_792398[8 * v371 + i];
          v136 = &dword_792880[8 * v371 + i];
          v135 = &dword_791FD8[8 * v371 + i];
          v134 = &dword_792CE8[8 * v371 + i];
          v133 = &dword_792E78[8 * v371 + i];
          v132 = &dword_7924B0[8 * v371 + i];
          v131 = &dword_792258[8 * v371 + i];
          v130 = &dword_7925F0[8 * v371 + i];
          v129 = &dword_792710[8 * v371 + i];
          v128 = (a1 == 7) + 2;
          v320 = &v126;
          v214 = sub_4C8300((CRecentFileList **)dword_7926F8, &v126);
          v213 = v214;
          LOBYTE(v373) = 13;
          v319 = &v124;
          v212 = sub_4C8700((CRecentFileList **)dword_7926F8, &v124);
          LOBYTE(v373) = 9;
          sub_497BD0(
            v366,
            v360,
            v361,
            v362,
            v124,
            (int)v125,
            v126,
            v127,
            v128,
            v129,
            v130,
            v131,
            v132,
            v133,
            v134,
            v135,
            v136,
            v137);
        }
        else if ( sub_47D770((_DWORD *)dword_791364) == 2 )
        {
          v211 = sub_464130(&v317, (_BYTE *)dword_7907B0, (_BYTE *)dword_79076C);
          v210 = v211;
          LOBYTE(v373) = 14;
          v234 |= 4u;
          v209 = sub_4C8300((CRecentFileList **)dword_7926F8, v318);
          v208 = v209;
          v373 = 15;
          v234 |= 8u;
          if ( sub_484BA0(v209, v210) )
            sub_5E9F20(
              (char)"!(currentPokerPlayer->GetLogicalStudHandShowing().ContainsCard(PokerCard(QueenRank,SpadesSuit)))",
              "..\\Casino\\PokerStudAI.cpp",
              2503);
          v373 = 14;
          if ( (v234 & 8) != 0 )
          {
            v234 &= ~8u;
            sub_484470(v318);
          }
          v373 = 9;
          if ( (v234 & 4) != 0 )
          {
            v234 &= ~4u;
            ATL::CComCriticalSection::~CComCriticalSection(&v317);
          }
          v137 = (unsigned __int8 *)&dword_792398[8 * v371 + i];
          v136 = &dword_792880[8 * v371 + i];
          v135 = &dword_791FD8[8 * v371 + i];
          v134 = &dword_792CE8[8 * v371 + i];
          v133 = &dword_792E78[8 * v371 + i];
          v132 = &dword_7924B0[8 * v371 + i];
          v131 = &dword_792258[8 * v371 + i];
          v130 = &dword_7925F0[8 * v371 + i];
          v129 = &dword_792710[8 * v371 + i];
          v128 = (a1 == 7) + 2;
          v316 = &v126;
          v207 = sub_4C8300((CRecentFileList **)dword_7926F8, &v126);
          sub_496B20(v366, v360, v361, v362, v126, v127, v128, v129, v130, v131, v132, v133, v134, v135, v136, v137);
        }
        else
        {
          v137 = (unsigned __int8 *)&dword_792398[8 * v371 + i];
          v136 = &dword_792880[8 * v371 + i];
          v135 = &dword_791FD8[8 * v371 + i];
          v134 = &dword_792CE8[8 * v371 + i];
          v133 = &dword_792E78[8 * v371 + i];
          v132 = &dword_7924B0[8 * v371 + i];
          v131 = &dword_792258[8 * v371 + i];
          v130 = &dword_7925F0[8 * v371 + i];
          v129 = &dword_792710[8 * v371 + i];
          v128 = (a1 == 7) + 2;
          v315 = &v126;
          v206 = sub_4C8300((CRecentFileList **)dword_7926F8, &v126);
          sub_496B20(v366, v360, v361, v362, v126, v127, v128, v129, v130, v131, v132, v133, v134, v135, v136, v137);
        }
        v17 = sub_62FBF0(100);
        v205 = dword_792398[9 * i] + dword_792CE8[9 * i] + dword_792258[9 * i];
        v204 = dword_792398[9 * i]
             + dword_792880[9 * i]
             + dword_791FD8[9 * i]
             + dword_792CE8[9 * i]
             + dword_792E78[9 * i]
             + dword_7924B0[9 * i]
             + dword_792258[9 * i]
             + dword_7925F0[9 * i]
             + dword_792710[9 * i];
        byte_7924A8[i] = v17 < (int)((double)v205 * 100.0 / (double)v204);
        if ( sub_47D770((_DWORD *)dword_791364) )
        {
          switch ( a1 )
          {
            case 3:
              v203 = sub_4C8300((CRecentFileList **)dword_7926F8, v314);
              v202 = v203;
              LOBYTE(v373) = 16;
              sub_485940(v203, &v359, 1, 1, 1, 1, 0, 0, 0);
              LOBYTE(v373) = 18;
              sub_484470(v314);
              v137 = (unsigned __int8 *)dword_7913C8;
              v18 = sub_4A21B0(&v359, &v313);
              if ( sub_4A1FB0(v18, v137) )
              {
                word_7929C0[i] = 4;
              }
              else
              {
                v137 = (unsigned __int8 *)dword_7913E0;
                v19 = sub_4A21B0(&v359, &v312);
                word_7929C0[i] = sub_4A1FB0(v19, v137);
              }
              LOBYTE(v373) = 9;
              ATL::CComCriticalSection::~CComCriticalSection(&v359);
              break;
            case 4:
              v201 = sub_4C8300((CRecentFileList **)dword_7926F8, v311);
              v200 = v201;
              LOBYTE(v373) = 19;
              sub_485940(v201, &v358, 1, 1, 1, 1, 0, 0, 0);
              LOBYTE(v373) = 21;
              sub_484470(v311);
              v137 = (unsigned __int8 *)dword_7913B0;
              v20 = sub_4A2160(&v358, &v310);
              if ( sub_4A1F00(v20, v137) )
              {
                v137 = (unsigned __int8 *)dword_791400;
                v21 = sub_4A21B0(&v358, &v309);
                if ( sub_4A2040(v21, v137) )
                {
                  word_7929C0[i] = 10;
                }
                else
                {
                  v137 = (unsigned __int8 *)dword_7913F8;
                  v22 = sub_4A21B0(&v358, &v308);
                  if ( sub_4A2040(v22, v137) )
                    word_7929C0[i] = 7;
                  else
                    word_7929C0[i] = 5;
                }
              }
              else
              {
                word_7929C0[i] = 0;
              }
              LOBYTE(v373) = 9;
              ATL::CComCriticalSection::~CComCriticalSection(&v358);
              break;
            case 5:
              v199 = sub_4C8300((CRecentFileList **)dword_7926F8, v307);
              v198 = v199;
              LOBYTE(v373) = 22;
              sub_485940(v199, &v357, 1, 1, 1, 1, 0, 0, 0);
              LOBYTE(v373) = 24;
              sub_484470(v307);
              v137 = (unsigned __int8 *)dword_791418;
              v23 = sub_4A2160(&v357, &v306);
              if ( sub_4A1E10(v23, v137) )
              {
                word_7929C0[i] = 10;
              }
              else
              {
                v137 = (unsigned __int8 *)dword_7913B0;
                v24 = sub_4A2160(&v357, &v305);
                if ( sub_4A1E10(v24, v137) )
                {
                  v137 = (unsigned __int8 *)dword_7913E0;
                  v25 = sub_4A21B0(&v357, &v304);
                  if ( sub_4A2040(v25, v137) )
                  {
                    word_7929C0[i] = 10;
                  }
                  else
                  {
                    v137 = (unsigned __int8 *)dword_79138C;
                    v26 = sub_4A21B0(&v357, &v303);
                    if ( sub_4A2040(v26, v137) )
                      word_7929C0[i] = 7;
                    else
                      word_7929C0[i] = 4;
                  }
                }
                else
                {
                  v197 = sub_4C8300((CRecentFileList **)dword_7926F8, v301);
                  v196 = v197;
                  LOBYTE(v373) = 25;
                  v302 = sub_484BF0(v197) == 3;
                  LOBYTE(v373) = 24;
                  sub_484470(v301);
                  if ( v302 )
                  {
                    word_7929C0[i] = 7;
                  }
                  else
                  {
                    v137 = (unsigned __int8 *)dword_791390;
                    v27 = sub_4A2160(&v357, &v299);
                    v193 = sub_4A1E10(v27, v137)
                        && (v195 = sub_4C8300((CRecentFileList **)dword_7926F8, v298),
                            v194 = v195,
                            LOBYTE(v373) = 26,
                            v234 |= 0x10u,
                            !sub_484DB0(v195));
                    v300 = v193;
                    v373 = 24;
                    if ( (v234 & 0x10) != 0 )
                    {
                      v234 &= ~0x10u;
                      sub_484470(v298);
                    }
                    if ( v300 )
                      word_7929C0[i] = 5;
                    else
                      word_7929C0[i] = 0;
                  }
                }
              }
              LOBYTE(v373) = 9;
              ATL::CComCriticalSection::~CComCriticalSection(&v357);
              break;
            default:
              if ( a1 >= 6 )
              {
                sub_4C8300((CRecentFileList **)dword_7926F8, v355);
                LOBYTE(v373) = 27;
                v192 = sub_4C8300((CRecentFileList **)dword_7926F8, v297);
                v191 = v192;
                LOBYTE(v373) = 28;
                sub_485940(v192, &v356, 1, 1, 1, 1, 0, 0, 0);
                LOBYTE(v373) = 30;
                sub_484470(v297);
                v137 = (unsigned __int8 *)dword_791380;
                v28 = sub_4A2160(&v356, &v296);
                if ( sub_4A1F00(v28, v137) )
                {
                  word_7929C0[i] = 10;
                }
                else
                {
                  v137 = (unsigned __int8 *)dword_7913B0;
                  v29 = sub_4A2160(&v356, &v295);
                  if ( sub_4A1E10(v29, v137) )
                  {
                    v137 = (unsigned __int8 *)dword_7913E0;
                    v30 = sub_4A21B0(&v356, &v294);
                    if ( sub_4A2040(v30, v137) )
                    {
                      word_7929C0[i] = 5;
                    }
                    else
                    {
                      v137 = (unsigned __int8 *)dword_79138C;
                      v31 = sub_4A21B0(&v356, &v293);
                      if ( sub_4A2040(v31, v137) )
                        word_7929C0[i] = 2;
                    }
                  }
                  else if ( sub_484DB0(v355) )
                  {
                    if ( sub_484DB0(v355) )
                    {
                      word_7929C0[i] = 5;
                    }
                    else if ( sub_484BF0(v355) == 4 )
                    {
                      word_7929C0[i] = 10;
                    }
                    else if ( sub_484BF0(v355) == 3 )
                    {
                      word_7929C0[i] = 4;
                    }
                    else
                    {
                      word_7929C0[i] = 0;
                    }
                  }
                  else
                  {
                    word_7929C0[i] = 10;
                  }
                }
                LOBYTE(v373) = 27;
                ATL::CComCriticalSection::~CComCriticalSection(&v356);
                LOBYTE(v373) = 9;
                sub_484470(v355);
              }
              break;
          }
          if ( sub_47D770((_DWORD *)dword_791364) == 3 )
          {
            word_7929C0[i] /= 2;
            sub_4C8300((CRecentFileList **)dword_7926F8, v354);
            LOBYTE(v373) = 31;
            v190 = sub_464130(&v291, (_BYTE *)dword_7907A4, (_BYTE *)dword_79076C);
            v189 = v190;
            LOBYTE(v373) = 32;
            v292 = sub_484BA0(v354, v190);
            LOBYTE(v373) = 31;
            ATL::CComCriticalSection::~CComCriticalSection(&v291);
            if ( v292 )
              word_7929C0[i] = 10;
            LOBYTE(v373) = 9;
            sub_484470(v354);
          }
          else if ( sub_47D770((_DWORD *)dword_791364) == 4 )
          {
            word_7929C0[i] /= 2;
          }
        }
        else
        {
          switch ( a1 )
          {
            case 3:
              v188 = sub_4C8300((CRecentFileList **)dword_7926F8, v290);
              v187 = v188;
              LOBYTE(v373) = 33;
              sub_485940(v188, &v353, 1, 1, 1, 1, 0, 0, 0);
              LOBYTE(v373) = 35;
              sub_484470(v290);
              v137 = (unsigned __int8 *)dword_7913C8;
              v32 = sub_4A21B0(&v353, &v289);
              if ( sub_4A1FB0(v32, v137) )
                word_7929C0[i] = 3;
              else
                word_7929C0[i] = 0;
              LOBYTE(v373) = 9;
              ATL::CComCriticalSection::~CComCriticalSection(&v353);
              break;
            case 4:
              v186 = sub_4C8300((CRecentFileList **)dword_7926F8, v288);
              v185 = v186;
              LOBYTE(v373) = 36;
              sub_485940(v186, &v352, 1, 1, 1, 1, 0, 0, 0);
              LOBYTE(v373) = 38;
              sub_484470(v288);
              v184 = sub_4C8300((CRecentFileList **)dword_7926F8, v287);
              v183 = v184;
              LOBYTE(v373) = 39;
              sub_485940(v184, &v351, 0, 1, 1, 1, 0, 0, 0);
              LOBYTE(v373) = 41;
              sub_484470(v287);
              v137 = (unsigned __int8 *)dword_7913B0;
              v33 = sub_4A2160(&v352, &v286);
              if ( sub_4A1E10(v33, v137) )
              {
                v137 = (unsigned __int8 *)dword_7913C8;
                v34 = sub_4A21B0(&v352, &v285);
                if ( sub_4A1FB0(v34, v137) )
                  word_7929C0[i] = 7;
                else
                  word_7929C0[i] = 0;
              }
              else
              {
                v137 = (unsigned __int8 *)dword_7913A4;
                v35 = sub_4A21B0(&v351, &v284);
                if ( sub_4A20A0(v35, v137) )
                {
                  word_7929C0[i] = 7;
                }
                else
                {
                  v137 = (unsigned __int8 *)dword_791410;
                  v36 = sub_4A21B0(&v351, &v283);
                  if ( sub_4A20A0(v36, v137) )
                    word_7929C0[i] = 3;
                  else
                    word_7929C0[i] = 0;
                }
              }
              LOBYTE(v373) = 38;
              ATL::CComCriticalSection::~CComCriticalSection(&v351);
              LOBYTE(v373) = 9;
              ATL::CComCriticalSection::~CComCriticalSection(&v352);
              break;
            case 5:
              v182 = sub_4C8300((CRecentFileList **)dword_7926F8, v282);
              v181 = v182;
              LOBYTE(v373) = 42;
              sub_485940(v182, &v350, 1, 1, 1, 1, 0, 0, 0);
              LOBYTE(v373) = 44;
              sub_484470(v282);
              v180 = sub_4C8300((CRecentFileList **)dword_7926F8, v281);
              v179 = v180;
              LOBYTE(v373) = 45;
              sub_485940(v180, &v349, 0, 1, 1, 1, 0, 0, 0);
              LOBYTE(v373) = 47;
              sub_484470(v281);
              v137 = (unsigned __int8 *)dword_791418;
              v37 = sub_4A2160(&v350, &v280);
              if ( sub_4A1E10(v37, v137) )
              {
                word_7929C0[i] = 10;
              }
              else
              {
                v137 = (unsigned __int8 *)dword_7913B0;
                v38 = sub_4A2160(&v350, &v279);
                if ( sub_4A1E10(v38, v137) )
                {
                  v137 = (unsigned __int8 *)dword_7913C8;
                  v39 = sub_4A21B0(&v350, &v278);
                  if ( sub_4A1FB0(v39, v137) )
                  {
                    v137 = (unsigned __int8 *)dword_7913A4;
                    v40 = sub_4A2200(&v350, &v277);
                    if ( sub_4A20A0(v40, v137) )
                    {
                      word_7929C0[i] = 10;
                    }
                    else
                    {
                      v137 = (unsigned __int8 *)dword_791410;
                      v41 = sub_4A2200(&v350, &v276);
                      if ( sub_4A20A0(v41, v137) )
                        word_7929C0[i] = 7;
                      else
                        word_7929C0[i] = 2;
                    }
                  }
                  else
                  {
                    word_7929C0[i] = 0;
                  }
                }
                else
                {
                  v178 = sub_4C8300((CRecentFileList **)dword_7926F8, v274);
                  v177 = v178;
                  LOBYTE(v373) = 48;
                  v275 = sub_484BF0(v178) == 3;
                  LOBYTE(v373) = 47;
                  sub_484470(v274);
                  if ( v275 )
                  {
                    v137 = (unsigned __int8 *)dword_7913A4;
                    v42 = sub_4A21B0(&v349, &v273);
                    if ( sub_4A20A0(v42, v137) )
                    {
                      word_7929C0[i] = 10;
                    }
                    else
                    {
                      v137 = (unsigned __int8 *)dword_791410;
                      v43 = sub_4A21B0(&v349, &v272);
                      if ( sub_4A20A0(v43, v137) )
                        word_7929C0[i] = 8;
                      else
                        word_7929C0[i] = 3;
                    }
                  }
                  else
                  {
                    v176 = sub_4C8300((CRecentFileList **)dword_7926F8, v270);
                    v175 = v176;
                    LOBYTE(v373) = 49;
                    v271 = !sub_484DB0(v176);
                    LOBYTE(v373) = 47;
                    sub_484470(v270);
                    if ( v271 )
                    {
                      v137 = (unsigned __int8 *)dword_7913A4;
                      v44 = sub_4A21B0(&v349, &v269);
                      if ( sub_4A20A0(v44, v137) )
                      {
                        word_7929C0[i] = 10;
                      }
                      else
                      {
                        v137 = (unsigned __int8 *)dword_791410;
                        v45 = sub_4A21B0(&v349, &v268);
                        if ( sub_4A20A0(v45, v137) )
                          word_7929C0[i] = 5;
                        else
                          word_7929C0[i] = 1;
                      }
                    }
                    else
                    {
                      word_7929C0[i] = 0;
                    }
                  }
                }
              }
              LOBYTE(v373) = 44;
              ATL::CComCriticalSection::~CComCriticalSection(&v349);
              LOBYTE(v373) = 9;
              ATL::CComCriticalSection::~CComCriticalSection(&v350);
              break;
            default:
              if ( a1 >= 6 )
              {
                sub_4C8300((CRecentFileList **)dword_7926F8, v346);
                LOBYTE(v373) = 50;
                v174 = sub_4C8300((CRecentFileList **)dword_7926F8, v267);
                v173 = v174;
                LOBYTE(v373) = 51;
                sub_485940(v174, &v348, 1, 1, 1, 1, 0, 0, 0);
                LOBYTE(v373) = 53;
                sub_484470(v267);
                v172 = sub_4C8300((CRecentFileList **)dword_7926F8, v266);
                v171 = v172;
                LOBYTE(v373) = 54;
                sub_485940(v172, &v347, 0, 1, 1, 1, 0, 0, 0);
                LOBYTE(v373) = 56;
                sub_484470(v266);
                v137 = (unsigned __int8 *)dword_791380;
                v46 = sub_4A2160(&v348, &v265);
                if ( sub_4A1F00(v46, v137) )
                {
                  word_7929C0[i] = 10;
                }
                else
                {
                  v137 = (unsigned __int8 *)dword_7913B0;
                  v47 = sub_4A2160(&v348, &v264);
                  if ( sub_4A1E10(v47, v137) )
                  {
                    v137 = (unsigned __int8 *)dword_7913C8;
                    v48 = sub_4A21B0(&v348, &v263);
                    if ( sub_4A1FB0(v48, v137) )
                    {
                      v137 = (unsigned __int8 *)dword_7913A4;
                      v49 = sub_4A2200(&v348, &v262);
                      if ( sub_4A20A0(v49, v137) )
                      {
                        word_7929C0[i] = 10;
                      }
                      else
                      {
                        v137 = (unsigned __int8 *)dword_791410;
                        v50 = sub_4A2200(&v348, &v261);
                        if ( sub_4A20A0(v50, v137) )
                          word_7929C0[i] = 7;
                      }
                    }
                    else
                    {
                      v137 = (unsigned __int8 *)dword_791410;
                      v51 = sub_4A21B0(&v348, &v260);
                      if ( sub_4A20A0(v51, v137) )
                      {
                        v137 = (unsigned __int8 *)dword_7913A4;
                        v52 = sub_4A2200(&v347, &v259);
                        if ( sub_4A20A0(v52, v137) )
                        {
                          word_7929C0[i] = 10;
                        }
                        else
                        {
                          v137 = (unsigned __int8 *)dword_791410;
                          v53 = sub_4A2200(&v347, &v258);
                          if ( sub_4A20A0(v53, v137) )
                            word_7929C0[i] = 7;
                        }
                      }
                      else
                      {
                        word_7929C0[i] = 0;
                      }
                    }
                  }
                  else if ( sub_484BF0(v346) == 4 )
                  {
                    word_7929C0[i] = 10;
                  }
                  else if ( sub_484DB0(v346) )
                  {
                    if ( sub_484DB0(v346) )
                    {
                      v137 = (unsigned __int8 *)dword_7913A4;
                      v56 = sub_4A21B0(&v347, &v255);
                      if ( sub_4A20A0(v56, v137) )
                      {
                        word_7929C0[i] = 10;
                      }
                      else
                      {
                        v137 = (unsigned __int8 *)dword_791410;
                        v57 = sub_4A21B0(&v347, &v254);
                        if ( sub_4A20A0(v57, v137) )
                          word_7929C0[i] = 4;
                        else
                          word_7929C0[i] = 0;
                      }
                    }
                    else if ( sub_484BF0(v346) == 3 )
                    {
                      v137 = (unsigned __int8 *)dword_7913A4;
                      v58 = sub_4A21B0(&v347, &v253);
                      if ( sub_4A20A0(v58, v137) )
                      {
                        word_7929C0[i] = 10;
                      }
                      else
                      {
                        v137 = (unsigned __int8 *)dword_791410;
                        v59 = sub_4A21B0(&v347, &v252);
                        if ( sub_4A20A0(v59, v137) )
                          word_7929C0[i] = 8;
                        else
                          word_7929C0[i] = 2;
                      }
                    }
                    else
                    {
                      v137 = (unsigned __int8 *)dword_7913A4;
                      v60 = sub_4A21B0(&v347, &v251);
                      if ( sub_4A20A0(v60, v137) )
                      {
                        word_7929C0[i] = 10;
                      }
                      else
                      {
                        v137 = (unsigned __int8 *)dword_791410;
                        v61 = sub_4A21B0(&v347, &v250);
                        if ( sub_4A20A0(v61, v137) )
                          word_7929C0[i] = 5;
                        else
                          word_7929C0[i] = 0;
                      }
                    }
                  }
                  else
                  {
                    v137 = (unsigned __int8 *)dword_7913A4;
                    v54 = sub_4A21B0(&v347, &v257);
                    if ( sub_4A20A0(v54, v137) )
                    {
                      word_7929C0[i] = 10;
                    }
                    else
                    {
                      v137 = (unsigned __int8 *)dword_791410;
                      v55 = sub_4A21B0(&v347, &v256);
                      if ( sub_4A20A0(v55, v137) )
                        word_7929C0[i] = 7;
                      else
                        word_7929C0[i] = 5;
                    }
                  }
                }
                LOBYTE(v373) = 53;
                ATL::CComCriticalSection::~CComCriticalSection(&v347);
                LOBYTE(v373) = 50;
                ATL::CComCriticalSection::~CComCriticalSection(&v348);
                LOBYTE(v373) = 9;
                sub_484470(v346);
              }
              break;
          }
        }
        LOBYTE(v373) = 5;
        ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)&v360);
      }
      else
      {
        v62 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v62) == 1 )
        {
          if ( sub_47D770((_DWORD *)dword_791364) == 3 )
          {
            if ( sub_47D6F0((_DWORD *)dword_791364) != 2 )
              sub_5E9F20((char)"pokerGame->GetWildCardRules() == THE_BITCH_WILD", "..\\Casino\\PokerStudAI.cpp", 2783);
            v170 = sub_464130(&v248, (_BYTE *)dword_7907B0, (_BYTE *)dword_79076C);
            v169 = v170;
            LOBYTE(v373) = 57;
            v234 |= 0x20u;
            v168 = sub_4C8300((CRecentFileList **)dword_7926F8, v249);
            v167 = v168;
            v373 = 58;
            v234 |= 0x40u;
            if ( sub_484BA0(v168, v169) )
              sub_5E9F20(
                (char)"!(currentPokerPlayer->GetLogicalStudHandShowing().ContainsCard(PokerCard(QueenRank,SpadesSuit)))",
                "..\\Casino\\PokerStudAI.cpp",
                2784);
            v373 = 57;
            if ( (v234 & 0x40) != 0 )
            {
              v234 &= ~0x40u;
              sub_484470(v249);
            }
            v373 = 5;
            if ( (v234 & 0x20) != 0 )
            {
              v234 &= ~0x20u;
              ATL::CComCriticalSection::~CComCriticalSection(&v248);
            }
            v137 = (unsigned __int8 *)&dword_792398[8 * v371 + i];
            v136 = &dword_792880[8 * v371 + i];
            v135 = &dword_791FD8[8 * v371 + i];
            v134 = &dword_792CE8[8 * v371 + i];
            v133 = &dword_792E78[8 * v371 + i];
            v132 = &dword_7924B0[8 * v371 + i];
            v131 = &dword_792258[8 * v371 + i];
            v130 = &dword_7925F0[8 * v371 + i];
            v129 = &dword_792710[8 * v371 + i];
            v128 = (a1 == 7) + 2;
            v247 = &v126;
            v125 = &v126;
            v63 = (CRecentFileList **)sub_47E390(i);
            v166 = sub_4C8300(v63, v125);
            sub_496FE0(v366, v368, v369, v370, v126, v127, v128, v129, v130, v131, v132, v133, v134, v135, v136, v137);
          }
          else if ( sub_47D770((_DWORD *)dword_791364) == 4 )
          {
            v137 = (unsigned __int8 *)&dword_792398[8 * v371 + i];
            v136 = &dword_792880[8 * v371 + i];
            v135 = &dword_791FD8[8 * v371 + i];
            v134 = &dword_792CE8[8 * v371 + i];
            v133 = &dword_792E78[8 * v371 + i];
            v132 = &dword_7924B0[8 * v371 + i];
            v131 = &dword_792258[8 * v371 + i];
            v130 = &dword_7925F0[8 * v371 + i];
            v129 = &dword_792710[8 * v371 + i];
            v128 = (a1 == 7) + 2;
            v246 = &v126;
            v125 = &v126;
            v64 = (CRecentFileList **)sub_47E390(i);
            v165 = sub_4C8300(v64, v125);
            v164 = v165;
            LOBYTE(v373) = 59;
            v245 = &v124;
            v163 = sub_4C8700((CRecentFileList **)dword_7926F8, &v124);
            LOBYTE(v373) = 5;
            sub_497BD0(
              v366,
              v368,
              v369,
              v370,
              v124,
              (int)v125,
              v126,
              v127,
              v128,
              v129,
              v130,
              v131,
              v132,
              v133,
              v134,
              v135,
              v136,
              v137);
          }
          else if ( sub_47D770((_DWORD *)dword_791364) == 2 )
          {
            v162 = sub_464130(&v243, (_BYTE *)dword_7907B0, (_BYTE *)dword_79076C);
            v161 = v162;
            LOBYTE(v373) = 60;
            v234 |= 0x80u;
            v160 = sub_4C8300((CRecentFileList **)dword_7926F8, v244);
            v159 = v160;
            v373 = 61;
            v234 |= 0x100u;
            if ( sub_484BA0(v160, v161) )
              sub_5E9F20(
                (char)"!(currentPokerPlayer->GetLogicalStudHandShowing().ContainsCard(PokerCard(QueenRank,SpadesSuit)))",
                "..\\Casino\\PokerStudAI.cpp",
                2818);
            v373 = 60;
            if ( (v234 & 0x100) != 0 )
            {
              v234 &= ~0x100u;
              sub_484470(v244);
            }
            v373 = 5;
            if ( (v234 & 0x80) != 0 )
            {
              v234 &= ~0x80u;
              ATL::CComCriticalSection::~CComCriticalSection(&v243);
            }
            v137 = (unsigned __int8 *)&dword_792398[8 * v371 + i];
            v136 = &dword_792880[8 * v371 + i];
            v135 = &dword_791FD8[8 * v371 + i];
            v134 = &dword_792CE8[8 * v371 + i];
            v133 = &dword_792E78[8 * v371 + i];
            v132 = &dword_7924B0[8 * v371 + i];
            v131 = &dword_792258[8 * v371 + i];
            v130 = &dword_7925F0[8 * v371 + i];
            v129 = &dword_792710[8 * v371 + i];
            v128 = (a1 == 7) + 2;
            v242 = &v126;
            v125 = &v126;
            v65 = (CRecentFileList **)sub_47E390(i);
            v158 = sub_4C8300(v65, v125);
            sub_497690(v366, v368, v369, v370, v126, v127, v128, v129, v130, v131, v132, v133, v134, v135, v136, v137);
          }
          else
          {
            v137 = (unsigned __int8 *)&dword_792398[8 * v371 + i];
            v136 = &dword_792880[8 * v371 + i];
            v135 = &dword_791FD8[8 * v371 + i];
            v134 = &dword_792CE8[8 * v371 + i];
            v133 = &dword_792E78[8 * v371 + i];
            v132 = &dword_7924B0[8 * v371 + i];
            v131 = &dword_792258[8 * v371 + i];
            v130 = &dword_7925F0[8 * v371 + i];
            v129 = &dword_792710[8 * v371 + i];
            v128 = (a1 == 7) + 2;
            v241 = &v126;
            v125 = &v126;
            v66 = (CRecentFileList **)sub_47E390(i);
            v157 = sub_4C8300(v66, v125);
            sub_496B20(v366, v368, v369, v370, v126, v127, v128, v129, v130, v131, v132, v133, v134, v135, v136, v137);
          }
        }
      }
    }
    word_792DE8[v371] = a1;
    word_792980[v371] = (__int16)a3;
    if ( a1 == 3 )
    {
      v67 = sub_62FBF0(21);
      v68 = v67 + sub_62FBF0(21) + 70;
      v156 = sub_62FBF0(21) + v68;
      dbl_792E38[v371] = (double)v156 * 0.01;
      for ( j = 0; ; ++j )
      {
        v69 = j;
        if ( v69 >= sub_47F950() )
          break;
        v70 = sub_62FBF0(51);
        v71 = v70 + sub_62FBF0(51) + 25;
        v155 = sub_62FBF0(51) + v71;
        dbl_7929E8[8 * v371 + j] = (double)v155 * 0.01;
      }
    }
    v137 = a3;
    v72 = sub_506B90(a1, a2);
    dbl_792DF8[v371] = v72;
    word_792498[v371] = 1;
    if ( sub_47D770((_DWORD *)dword_791364) == 3 )
    {
      sub_4C8700((CRecentFileList **)dword_7926F8, v344);
      LOBYTE(v373) = 62;
      v154 = sub_464130(&v239, (_BYTE *)dword_7907A4, (_BYTE *)dword_79076C);
      v153 = v154;
      LOBYTE(v373) = 63;
      v240 = sub_484BA0(v344, v154);
      LOBYTE(v373) = 62;
      ATL::CComCriticalSection::~CComCriticalSection(&v239);
      if ( v240 )
        word_792498[v371] = 9;
      LOBYTE(v373) = 5;
      sub_484470(v344);
    }
    else if ( sub_47D770((_DWORD *)dword_791364) == 2 )
    {
      sub_4C8700((CRecentFileList **)dword_7926F8, v343);
      LOBYTE(v373) = 64;
      v152 = sub_464130(&v237, (_BYTE *)dword_7907B0, (_BYTE *)dword_79076C);
      v151 = v152;
      LOBYTE(v373) = 65;
      v238 = sub_484BA0(v343, v152);
      LOBYTE(v373) = 64;
      ATL::CComCriticalSection::~CComCriticalSection(&v237);
      if ( v238 )
        word_792498[v371] = 9;
      LOBYTE(v373) = 5;
      sub_484470(v343);
    }
    else if ( sub_47D770((_DWORD *)dword_791364) == 4 )
    {
      sub_4C8700((CRecentFileList **)dword_7926F8, v342);
      LOBYTE(v373) = 66;
      if ( sub_484BA0(v342, &byte_792F88) )
        word_792498[v371] = 9;
      LOBYTE(v373) = 5;
      sub_484470(v342);
    }
    if ( a1 == 7 )
    {
      for ( i = 0; ; ++i )
      {
        v73 = i;
        if ( v73 >= sub_47F950() )
          break;
        if ( i != v371 )
        {
          v74 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v74) == 1
            && (dword_792710[8 * v371 + i] > 0
             || dword_7924B0[8 * v371 + i] > 0
             || dword_791FD8[8 * v371 + i] > 0
             || dword_7925F0[8 * v371 + i] > 0
             || dword_792258[8 * v371 + i] > 0) )
          {
            break;
          }
        }
      }
      v75 = i;
      if ( v75 == sub_47F950() )
        word_792498[v371] = 6;
      for ( i = 0; ; ++i )
      {
        v76 = i;
        if ( v76 >= sub_47F950() )
          break;
        if ( i != v371 )
        {
          v77 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v77) == 1
            && (dword_792710[8 * v371 + i] > 0
             || dword_7925F0[8 * v371 + i] > 0
             || dword_792258[8 * v371 + i] > 0
             || dword_7924B0[8 * v371 + i] > 0
             || dword_792E78[8 * v371 + i] > 0
             || dword_792CE8[8 * v371 + i] > 0) )
          {
            break;
          }
        }
      }
      v78 = i;
      if ( v78 == sub_47F950() )
        word_792498[v371] = 6;
      for ( i = 0; ; ++i )
      {
        v79 = i;
        if ( v79 >= sub_47F950() )
          break;
        if ( i != v371 )
        {
          v80 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v80) == 1
            && (dword_792710[8 * v371 + i] > 0
             || dword_7924B0[8 * v371 + i] > 0
             || dword_791FD8[8 * v371 + i] > 0
             || dword_7925F0[8 * v371 + i] > 0
             || dword_792E78[8 * v371 + i] > 0
             || dword_792880[8 * v371 + i] > 0) )
          {
            break;
          }
        }
      }
      v81 = i;
      if ( v81 == sub_47F950() )
        word_792498[v371] = 6;
      if ( word_792498[v371] == 6 )
      {
        v341 = 0;
        v340 = 0;
        for ( i = 0; ; ++i )
        {
          v82 = i;
          if ( v82 >= sub_47F950() )
            break;
          if ( i != v371 )
          {
            v83 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
            if ( Concurrency::details::SchedulerProxy::GetQueueLength(v83) == 1 )
            {
              ++v341;
              if ( dword_792398[8 * v371 + i] <= 0 )
              {
                if ( dword_792CE8[8 * v371 + i] <= 0 )
                {
                  if ( dword_792880[8 * v371 + i] <= 0 )
                  {
                    if ( dword_792E78[8 * v371 + i] > 0 )
                      v340 = 1;
                  }
                  else
                  {
                    v340 = 1;
                  }
                }
                else
                {
                  v340 = 1;
                }
              }
              else
              {
                v340 = 1;
              }
            }
          }
        }
        if ( !v340 && v341 == 1 )
          word_792498[v371] = 7;
      }
    }
    if ( sub_47D770((_DWORD *)dword_791364) == 3 )
    {
      sub_4C8300((CRecentFileList **)dword_7926F8, v339);
      LOBYTE(v373) = 67;
      v150 = sub_464130(&v235, (_BYTE *)dword_7907A4, (_BYTE *)dword_79076C);
      v149 = v150;
      LOBYTE(v373) = 68;
      v236 = sub_484BA0(v339, v150);
      LOBYTE(v373) = 67;
      ATL::CComCriticalSection::~CComCriticalSection(&v235);
      if ( v236 )
        word_792498[v371] = 8;
      LOBYTE(v373) = 5;
      sub_484470(v339);
    }
    LOBYTE(v373) = 2;
    ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)&v368);
    v373 = -1;
    sub_484470(v366);
  }
  switch ( word_792498[v371] )
  {
    case 8:
      sub_4C79D0(dword_7926F8, 4);
      if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
        return 2;
      if ( sub_4F66E0(dword_791364 + 56) )
        return 4;
      return 3;
    case 7:
      sub_4C79D0(dword_7926F8, 3);
      if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
      {
        if ( sub_501040() || sub_62FBF0(20) )
          return 2;
        else
          return 1;
      }
      else if ( sub_4F66E0(dword_791364 + 56) )
      {
        v85 = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(dword_7926F8);
        v338 = sub_4F6880((__int16 *)(dword_791364 + 56), v85);
        v86 = v338;
        if ( v86 <= sub_62FBF0(8) + 3 )
          return 4;
        else
          return 3;
      }
      else
      {
        return 3;
      }
    case 6:
      sub_4C79D0(dword_7926F8, 3);
      if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
      {
        if ( sub_501040() || sub_62FBF0(20) )
          return 2;
        else
          return 1;
      }
      else if ( sub_4F66E0(dword_791364 + 56) )
      {
        return 4;
      }
      else
      {
        return 3;
      }
    case 1:
      if ( sub_4F6690((_BYTE *)(dword_791364 + 56)) )
      {
        v336 = dbl_792DF8[v371];
        if ( a1 >= 5 )
        {
          v87 = (int)(100.0 * dbl_792358[v371]) - 80;
          v88 = sub_62FBF0(30);
          if ( v87 > v88 - sub_62FBF0(10) )
          {
            v89 = sub_62FBF0(20);
            v148 = sub_62FBF0(20) + v89;
            v336 = (double)v148 / 100.0 + v336;
          }
        }
        if ( a1 >= 5 )
        {
          v90 = (int)(100.0 * dbl_792840[v371]) - 80;
          v91 = sub_62FBF0(30);
          if ( v90 > v91 - sub_62FBF0(10) )
          {
            v92 = sub_62FBF0(20);
            v147 = sub_62FBF0(20) + v92;
            v336 = (double)v147 / 100.0 + v336;
          }
        }
        v333 = 1.65;
        if ( a1 == 3 )
        {
          v146 = sub_4C6DB0(dword_7926F8);
          v333 = (double)v146 / 100.0 + v333;
        }
        Font = CMFCCaptionBar::OnGetFont(dword_7926F8);
        v144 = ((double)(int)Font / 100.0 + v336) * v333 * v336;
        v143 = sub_4F67D0((__int16 *)(dword_791364 + 56));
        v142 = (double)v143;
        v141 = sub_4F6840(dword_791364 + 56);
        v334 = v144 / (v142 / (double)v141);
        if ( a1 == 3 )
        {
          v93 = sub_4DA190(dword_7926F8);
          v337 = v93 / (sub_62FBF0(5) + 1);
        }
        else if ( a1 == 4 )
        {
          v94 = sub_4DA190(dword_7926F8);
          v337 = v94 / (sub_62FBF0(2) + 1);
        }
        else
        {
          v337 = ((_WORD)a3 - 1) * sub_4DA190(dword_7926F8);
        }
        if ( sub_47D770((_DWORD *)dword_791364) )
          v337 = 0;
        v95 = sub_62FBF0(v337);
        v96 = sub_62FBF0(v337) + v95;
        v332 = v96 - sub_62FBF0(v337);
        v335 = sub_4DA190(dword_7926F8);
        if ( v335 > 10 )
          v335 = 10;
        if ( sub_47D770((_DWORD *)dword_791364) == 3 )
        {
          v97 = sub_62FBF0(22 - v335);
          v332 -= v97;
        }
        else if ( sub_47D770((_DWORD *)dword_791364) == 2 )
        {
          v98 = sub_62FBF0(2 * (10 - a1) + 19 - v335);
          v332 -= v98;
        }
        else if ( sub_47D770((_DWORD *)dword_791364) )
        {
          v99 = sub_62FBF0(15 - v335);
          v332 -= v99;
        }
        else if ( a1 == 3 )
        {
          v100 = sub_62FBF0(10 - v335);
          v332 -= v100;
        }
        else if ( a1 == 4 )
        {
          v101 = sub_62FBF0(10 - v335);
          v332 -= v101 / 2;
        }
        if ( v332 < -19 )
          v332 = -19;
        if ( (double)v332 / 20.0 + 1.0 >= v334 )
          return 0;
        if ( !(unsigned __int8)sub_508ED0(a1, a3) )
        {
          v102 = sub_62FBF0(100);
          if ( v102 < sub_4D9E60(dword_7926F8) )
            word_792498[v371] = 2;
          return 3;
        }
      }
      else if ( !(unsigned __int8)sub_508ED0(a1, a3) )
      {
        return 1;
      }
      break;
  }
  if ( sub_47D6B0((_DWORD *)dword_791364) == 1 )
    v372 = 0;
  else
    v372 = sub_4DA240(dword_7926F8);
  if ( word_792498[v371] == 5 || word_792498[v371] == 13 || word_792498[v371] == 9 )
  {
    if ( a1 != 3 || sub_4FE1E0(v372) )
    {
      if ( word_792498[v371] == 5 )
      {
        v103 = sub_47CE60((_DWORD *)dword_791364);
        v140 = sub_4C6EF0(dword_7926F8, a1 == 7, v103);
      }
      else
      {
        v140 = sub_4C6F50(dword_7926F8);
      }
      v104 = word_7929C0[v371];
      v105 = sub_62FBF0(10);
      v106 = sub_62FBF0(100 - v105 * v104 - v140);
      if ( v106 < (__int16)sub_509500(a1, 3) )
      {
        if ( !sub_4F6640((_BYTE *)(dword_791364 + 56)) && !sub_4F66E0(dword_791364 + 56) && word_792498[v371] == 13 )
          return 0;
        sub_4C79D0(dword_7926F8, 3);
        v107 = sub_62FBF0(100);
        if ( v107 >= sub_4D9000(dword_7926F8) || word_792498[v371] == 9 )
        {
          v109 = sub_62FBF0(100);
          if ( v109 < sub_4D9020(dword_7926F8) && word_792498[v371] != 9 )
            word_792498[v371] = 1;
        }
        else
        {
          v108 = sub_62FBF0(100);
          if ( v108 >= sub_4D9000(dword_7926F8) / 2 )
            word_792498[v371] = 4;
          else
            word_792498[v371] = 3;
        }
        if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
        {
          if ( byte_7926F0[v371] )
            return 1;
          else
            return 2;
        }
        else if ( sub_4F66E0(dword_791364 + 56) && sub_62FBF0(3) && !byte_7926F0[v371] )
        {
          return 4;
        }
        else
        {
          return 3;
        }
      }
    }
  }
  else if ( word_792498[v371] == 4 || word_792498[v371] == 12 )
  {
    if ( a1 != 3 || sub_4FE1E0(v372) )
    {
      if ( word_792498[v371] == 4 )
      {
        v110 = sub_47CE60((_DWORD *)dword_791364);
        v139 = sub_4C6EF0(dword_7926F8, a1 == 7, v110);
      }
      else
      {
        v139 = sub_4C6F50(dword_7926F8);
      }
      v111 = word_7929C0[v371];
      v112 = sub_62FBF0(10);
      v113 = sub_62FBF0(100 - v112 * v111 - v139);
      if ( v113 < (__int16)sub_509500(a1, 2) )
      {
        if ( !sub_4F6640((_BYTE *)(dword_791364 + 56)) && !sub_4F66E0(dword_791364 + 56) && word_792498[v371] == 12 )
          return 0;
        sub_4C79D0(dword_7926F8, 2);
        v114 = sub_62FBF0(100);
        if ( v114 >= sub_4D9000(dword_7926F8) )
        {
          v116 = sub_62FBF0(100);
          if ( v116 < sub_4D9020(dword_7926F8) )
            word_792498[v371] = 1;
        }
        else
        {
          v115 = sub_62FBF0(100);
          if ( v115 >= sub_4D9000(dword_7926F8) / 2 )
            word_792498[v371] = 3;
          else
            word_792498[v371] = 2;
        }
        if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
        {
          if ( byte_7926F0[v371] )
            return 1;
          else
            return 2;
        }
        else if ( sub_4F66E0(dword_791364 + 56) && sub_62FBF0(3) && !byte_7926F0[v371] )
        {
          return 4;
        }
        else
        {
          return 3;
        }
      }
    }
  }
  else if ( (word_792498[v371] == 3 || word_792498[v371] == 11) && (a1 != 3 || sub_4FE1E0(v372)) )
  {
    if ( word_792498[v371] == 3 )
    {
      v117 = sub_47CE60((_DWORD *)dword_791364);
      v138 = sub_4C6EF0(dword_7926F8, a1 == 7, v117);
    }
    else
    {
      v138 = sub_4C6F50(dword_7926F8);
    }
    v118 = word_7929C0[v371];
    v119 = sub_62FBF0(10);
    v120 = sub_62FBF0(100 - v119 * v118 - v138);
    if ( v120 < (__int16)sub_509500(a1, 1) )
    {
      if ( !sub_4F6640((_BYTE *)(dword_791364 + 56)) && !sub_4F66E0(dword_791364 + 56) && word_792498[v371] == 11 )
        return 0;
      sub_4C79D0(dword_7926F8, 1);
      v121 = sub_62FBF0(100);
      if ( v121 >= sub_4D9000(dword_7926F8) )
      {
        v122 = sub_62FBF0(100);
        if ( v122 < sub_4D9020(dword_7926F8) )
          word_792498[v371] = 1;
      }
      else
      {
        word_792498[v371] = 2;
      }
      if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
      {
        if ( byte_7926F0[v371] )
          return 1;
        else
          return 2;
      }
      else if ( sub_4F66E0(dword_791364 + 56) && sub_62FBF0(3) && !byte_7926F0[v371] )
      {
        return 4;
      }
      else
      {
        return 3;
      }
    }
  }
  if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
    goto LABEL_479;
  switch ( word_792498[v371] )
  {
    case 13:
      return 0;
    case 12:
      return 0;
    case 11:
      return 0;
  }
LABEL_479:
  v123 = sub_62FBF0(100);
  if ( v123 < sub_4D9020(dword_7926F8) )
    word_792498[v371] = 1;
  if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
    return 1;
  else
    return 3;
}


//======================================================================
// sub_506B90
// entry 00506b90  size 9015  status ok
//======================================================================

double __cdecl sub_506B90(int a1, int a2)
{
  unsigned __int8 *v2; // eax
  unsigned __int8 *v3; // eax
  unsigned __int8 *v4; // eax
  unsigned __int8 *v5; // eax
  unsigned __int8 *v6; // eax
  unsigned __int8 *v7; // eax
  int v8; // esi
  Concurrency::details::SchedulerProxy *v9; // eax
  Concurrency::details::VirtualProcessor *v10; // eax
  __int16 v11; // ax
  __int16 v12; // ax
  double v13; // st7
  double v14; // st7
  double v15; // st7
  double v16; // st7
  double v17; // st7
  unsigned __int8 *v19; // [esp-4h] [ebp-37Ch]
  unsigned __int8 *v20; // [esp-4h] [ebp-37Ch]
  unsigned __int8 *v21; // [esp-4h] [ebp-37Ch]
  unsigned __int8 *v22; // [esp-4h] [ebp-37Ch]
  unsigned __int8 *v23; // [esp-4h] [ebp-37Ch]
  unsigned __int8 *v24; // [esp-4h] [ebp-37Ch]
  double v25; // [esp+1Ch] [ebp-35Ch]
  double v26; // [esp+28h] [ebp-350h]
  double v27; // [esp+34h] [ebp-344h]
  char v28; // [esp+40h] [ebp-338h]
  _BYTE *v29; // [esp+44h] [ebp-334h]
  __int16 *v30; // [esp+4Ch] [ebp-32Ch]
  _BYTE *v31; // [esp+54h] [ebp-324h]
  __int16 *v32; // [esp+5Ch] [ebp-31Ch]
  _BYTE *v33; // [esp+8Ch] [ebp-2ECh]
  __int16 *v34; // [esp+94h] [ebp-2E4h]
  _BYTE *v35; // [esp+9Ch] [ebp-2DCh]
  __int16 *v36; // [esp+A4h] [ebp-2D4h]
  _BYTE *v37; // [esp+E4h] [ebp-294h]
  __int16 *v38; // [esp+ECh] [ebp-28Ch]
  _BYTE *v39; // [esp+F4h] [ebp-284h]
  __int16 *v40; // [esp+FCh] [ebp-27Ch]
  _BYTE *v41; // [esp+104h] [ebp-274h]
  __int16 *v42; // [esp+10Ch] [ebp-26Ch]
  _BYTE *v43; // [esp+114h] [ebp-264h]
  __int16 *v44; // [esp+11Ch] [ebp-25Ch]
  char v45; // [esp+124h] [ebp-254h]
  char v46; // [esp+12Bh] [ebp-24Dh] BYREF
  int v47; // [esp+12Ch] [ebp-24Ch] BYREF
  __int16 v48[5]; // [esp+130h] [ebp-248h] BYREF
  char v49; // [esp+13Bh] [ebp-23Dh] BYREF
  int v50; // [esp+13Ch] [ebp-23Ch] BYREF
  __int16 v51[5]; // [esp+140h] [ebp-238h] BYREF
  char v52; // [esp+14Ah] [ebp-22Eh]
  char v53; // [esp+14Bh] [ebp-22Dh] BYREF
  int v54; // [esp+14Ch] [ebp-22Ch] BYREF
  __int16 v55[5]; // [esp+150h] [ebp-228h] BYREF
  bool v56; // [esp+15Ah] [ebp-21Eh]
  char v57; // [esp+15Bh] [ebp-21Dh] BYREF
  int v58; // [esp+15Ch] [ebp-21Ch] BYREF
  __int16 v59[5]; // [esp+160h] [ebp-218h] BYREF
  bool v60; // [esp+16Ah] [ebp-20Eh]
  char v61; // [esp+16Bh] [ebp-20Dh] BYREF
  int v62; // [esp+16Ch] [ebp-20Ch] BYREF
  __int16 v63[5]; // [esp+170h] [ebp-208h] BYREF
  bool v64; // [esp+17Ah] [ebp-1FEh]
  char v65; // [esp+17Bh] [ebp-1FDh] BYREF
  int v66; // [esp+17Ch] [ebp-1FCh] BYREF
  __int16 v67[5]; // [esp+180h] [ebp-1F8h] BYREF
  bool v68; // [esp+18Ah] [ebp-1EEh]
  char v69; // [esp+18Bh] [ebp-1EDh] BYREF
  int v70; // [esp+18Ch] [ebp-1ECh] BYREF
  __int16 v71[5]; // [esp+190h] [ebp-1E8h] BYREF
  char v72; // [esp+19Bh] [ebp-1DDh] BYREF
  int v73; // [esp+19Ch] [ebp-1DCh] BYREF
  __int16 v74[4]; // [esp+1A0h] [ebp-1D8h] BYREF
  __int16 v75; // [esp+1A8h] [ebp-1D0h]
  __int16 v76; // [esp+1ACh] [ebp-1CCh]
  __int16 v77; // [esp+1B0h] [ebp-1C8h]
  struct Concurrency::IExecutionContext *ExecutingContext; // [esp+1B4h] [ebp-1C4h]
  __int16 v79; // [esp+1B8h] [ebp-1C0h]
  int v80; // [esp+1BCh] [ebp-1BCh]
  char v81; // [esp+1C3h] [ebp-1B5h]
  double v82; // [esp+1C4h] [ebp-1B4h]
  double v83; // [esp+1CCh] [ebp-1ACh]
  double v84; // [esp+1D4h] [ebp-1A4h]
  double v85; // [esp+1DCh] [ebp-19Ch]
  double v86; // [esp+1E4h] [ebp-194h]
  double v87; // [esp+1ECh] [ebp-18Ch]
  double v88; // [esp+1F4h] [ebp-184h]
  double v89; // [esp+1FCh] [ebp-17Ch]
  double v90; // [esp+204h] [ebp-174h]
  double v91; // [esp+20Ch] [ebp-16Ch]
  double v92; // [esp+214h] [ebp-164h]
  double v93; // [esp+21Ch] [ebp-15Ch]
  double v94; // [esp+224h] [ebp-154h]
  double v95; // [esp+22Ch] [ebp-14Ch]
  double v96; // [esp+234h] [ebp-144h]
  __int16 v97; // [esp+23Ch] [ebp-13Ch]
  __int16 i; // [esp+240h] [ebp-138h]
  int v99; // [esp+250h] [ebp-128h]
  double v100; // [esp+254h] [ebp-124h]
  double v101; // [esp+25Ch] [ebp-11Ch]
  double v102; // [esp+264h] [ebp-114h]
  double v103; // [esp+26Ch] [ebp-10Ch]
  double v104; // [esp+274h] [ebp-104h]
  double v105; // [esp+27Ch] [ebp-FCh]
  double v106; // [esp+284h] [ebp-F4h]
  double v107; // [esp+28Ch] [ebp-ECh]
  double v108; // [esp+294h] [ebp-E4h]
  double v109; // [esp+29Ch] [ebp-DCh]
  __int16 v110; // [esp+2A8h] [ebp-D0h]
  double v111; // [esp+2ACh] [ebp-CCh]
  double v112; // [esp+2B4h] [ebp-C4h]
  double v113; // [esp+2BCh] [ebp-BCh]
  double v114; // [esp+2C4h] [ebp-B4h]
  double v115; // [esp+2CCh] [ebp-ACh]
  double v116; // [esp+2D4h] [ebp-A4h]
  double v117; // [esp+2DCh] [ebp-9Ch]
  double v118; // [esp+2E4h] [ebp-94h]
  double v119; // [esp+2ECh] [ebp-8Ch]
  double v120; // [esp+2F4h] [ebp-84h]
  unsigned __int8 *v121; // [esp+2FCh] [ebp-7Ch]
  __int16 v122; // [esp+300h] [ebp-78h]
  double v123; // [esp+304h] [ebp-74h]
  double v124; // [esp+30Ch] [ebp-6Ch]
  __int16 v125; // [esp+318h] [ebp-60h]
  double v126; // [esp+31Ch] [ebp-5Ch]
  double v127; // [esp+324h] [ebp-54h]
  double v128; // [esp+32Ch] [ebp-4Ch]
  double v129; // [esp+334h] [ebp-44h]
  double v130; // [esp+33Ch] [ebp-3Ch]
  double v131; // [esp+344h] [ebp-34h]
  double v132; // [esp+34Ch] [ebp-2Ch]
  double v133; // [esp+354h] [ebp-24h]
  double v134; // [esp+35Ch] [ebp-1Ch]
  double v135; // [esp+364h] [ebp-14h]
  int v136; // [esp+374h] [ebp-4h]

  v45 = 0;
  v99 = sub_47E420((_DWORD *)dword_791364);
  v123 = 1.0;
  v124 = sub_4D8A80((__int16 *)dword_7926F8) / (double)a2;
  if ( sub_47D6F0((_DWORD *)dword_791364) == 2 )
  {
    v44 = sub_4C8210((CRecentFileList **)dword_7926F8, v74);
    v136 = 0;
    v43 = sub_485940(v44, &v73, 1, 1, 1, 1, 0, 0, 0);
    LOBYTE(v136) = 1;
    v121 = sub_4A21B0(v43, &v72);
    LOBYTE(v136) = 0;
    ATL::CComCriticalSection::~CComCriticalSection(&v73);
    v136 = -1;
    sub_484470(v74);
  }
  else
  {
    v42 = sub_4C7C40((CRecentFileList **)dword_7926F8, v71);
    v136 = 2;
    v41 = sub_485940(v42, &v70, 1, 1, 1, 1, 0, 0, 0);
    LOBYTE(v136) = 3;
    v121 = sub_4A21B0(v41, &v69);
    LOBYTE(v136) = 2;
    ATL::CComCriticalSection::~CComCriticalSection(&v70);
    v136 = -1;
    sub_484470(v71);
  }
  if ( sub_4A1FB0(v121, (unsigned __int8 *)dword_7913C8) )
  {
    v109 = 0.0;
  }
  else if ( sub_4A1FB0(v121, (unsigned __int8 *)dword_7913E0) )
  {
    v109 = 0.2;
  }
  else if ( sub_4A1FB0(v121, (unsigned __int8 *)dword_7913BC) )
  {
    v109 = 0.3;
  }
  else if ( sub_4A1FB0(v121, (unsigned __int8 *)dword_791400) )
  {
    v109 = 0.4;
  }
  else if ( sub_4A1FB0(v121, (unsigned __int8 *)dword_79138C) )
  {
    v109 = 0.5;
  }
  else if ( sub_4A1FB0(v121, (unsigned __int8 *)dword_7913F4) )
  {
    v109 = 0.6;
  }
  else if ( sub_4A1FB0(v121, (unsigned __int8 *)dword_791410) )
  {
    v109 = 0.7;
  }
  else if ( sub_4A1FB0(v121, (unsigned __int8 *)dword_7913F8) )
  {
    v109 = 0.8;
  }
  else
  {
    v109 = 0.9;
  }
  if ( a1 == 3 )
  {
    if ( sub_47D6F0((_DWORD *)dword_791364) == 2 )
    {
      v126 = 0.00000461723150798781;
      v127 = 0.00007349093483547265;
      v128 = 0.001103518330409087;
      v129 = 0.00229938129097793;
      v130 = 0.002732631514144119;
      v131 = 0.007363329947363561;
      v132 = 0.04835164835164835;
      v133 = 0.04296795641333456;
      v134 = 0.4421991873672546;
      v135 = 0.4529042386185244;
    }
    else
    {
      v126 = 0.0;
      v127 = 0.0000153907716932927;
      v128 = 0.0002400960384153662;
      v129 = 0.001440576230492197;
      v130 = 0.001965401545233478;
      v131 = 0.003924646781789639;
      v132 = 0.02112845138055222;
      v133 = 0.0475390156062425;
      v134 = 0.4225690276110444;
      v135 = 0.5011773940345369;
    }
    v111 = 0.0003940037553482932;
    v112 = 0.001970018776741466;
    v113 = 0.005910056330224398;
    v114 = 0.01379013143719026;
    v115 = 0.02758026287438052;
    v116 = 0.04964447317388494;
    v117 = 0.08274078862314156;
    v118 = 0.1300212392649367;
    v119 = 0.1950318588974051;
    v120 = 0.4929171668667467;
  }
  else if ( a1 == 4 )
  {
    if ( sub_47D6F0((_DWORD *)dword_791364) == 2 )
    {
      v126 = 0.00002770338904792686;
      v127 = 0.0004221819660761195;
      v128 = 0.003241296518607443;
      v129 = 0.01269758312490299;
      v130 = 0.01378052039146264;
      v131 = 0.03110736929796468;
      v132 = 0.07627970991997454;
      v133 = 0.1100555443126514;
      v134 = 0.4652807767951698;
      v135 = 0.2871073142841425;
    }
    else
    {
      v126 = 0.0;
      v127 = 0.00009057632873116513;
      v128 = 0.0007202881152460984;
      v129 = 0.008153048453423923;
      v130 = 0.01010839687757263;
      v131 = 0.01776258785019736;
      v132 = 0.03596332149881229;
      v133 = 0.1244106153099538;
      v134 = 0.4779689289791203;
      v135 = 0.3248222365869425;
    }
    v111 = 0.001986784893990329;
    v112 = 0.008927957435019835;
    v113 = 0.02376597120026407;
    v114 = 0.04841216355609347;
    v115 = 0.08274078862314156;
    v116 = 0.1235830502413731;
    v117 = 0.1637211349351524;
    v118 = 0.1908822448783114;
    v119 = 0.1867326308592177;
    v120 = 0.1692472733774361;
  }
  else
  {
    if ( sub_47D6F0((_DWORD *)dword_791364) == 2 )
    {
      v126 = 0.00009696186166774402;
      v127 = 0.001413444122400971;
      v128 = 0.007379805263028858;
      v129 = 0.03915371101119591;
      v130 = 0.03924907328618489;
      v131 = 0.07347730560238043;
      v132 = 0.08691041776420239;
      v133 = 0.2032765514944326;
      v134 = 0.3986776201977268;
      v135 = 0.1503651093967794;
    }
    else
    {
      v126 = 0.0;
      v127 = 0.0003108280955590092;
      v128 = 0.001680672268907563;
      v129 = 0.02596102270695512;
      v130 = 0.03025494122789655;
      v131 = 0.04619382087140698;
      v132 = 0.04829869754775887;
      v133 = 0.2349553640569584;
      v134 = 0.4382254574070431;
      v135 = 0.1741191958175144;
    }
    v111 = 0.005843903063253338;
    v112 = 0.02355548353262888;
    v113 = 0.05551133852815302;
    v114 = 0.09845082272573158;
    v115 = 0.1433229664170514;
    v116 = 0.176970376850662;
    v117 = 0.1856501228542367;
    v118 = 0.160391602738014;
    v119 = 0.1041913954794186;
    v120 = 0.04611198781085052;
  }
  v86 = v126;
  v87 = v127 + v126;
  v88 = v128 + v87;
  v89 = v129 + v88;
  v90 = v130 + v89;
  v91 = v131 + v90;
  v92 = v132 + v91;
  v93 = v133 + v92;
  v94 = v134 + v93;
  v100 = v111;
  v101 = v112 + v111;
  v102 = v113 + v101;
  v103 = v114 + v102;
  v104 = v115 + v103;
  v105 = v116 + v104;
  v106 = v117 + v105;
  v107 = v118 + v106;
  v108 = v119 + v107;
  v85 = 1.0;
  if ( sub_47D6F0((_DWORD *)dword_791364) == 2 )
  {
    v40 = sub_4C8210((CRecentFileList **)dword_7926F8, v67);
    v136 = 4;
    v39 = sub_485940(v40, &v66, 1, 1, 1, 1, 0, 0, 0);
    LOBYTE(v136) = 5;
    v19 = (unsigned __int8 *)dword_791418;
    v2 = sub_4A2160(v39, &v65);
    v68 = sub_4A1E10(v2, v19);
    LOBYTE(v136) = 4;
    ATL::CComCriticalSection::~CComCriticalSection(&v66);
    v136 = -1;
    sub_484470(v67);
    if ( v68 )
      v85 = 0.0;
  }
  else
  {
    v38 = sub_4C7C40((CRecentFileList **)dword_7926F8, v63);
    v136 = 6;
    v37 = sub_485940(v38, &v62, 1, 1, 1, 1, 0, 0, 0);
    LOBYTE(v136) = 7;
    v20 = (unsigned __int8 *)dword_791418;
    v3 = sub_4A2160(v37, &v61);
    v64 = sub_4A1E10(v3, v20);
    LOBYTE(v136) = 6;
    ATL::CComCriticalSection::~CComCriticalSection(&v62);
    v136 = -1;
    sub_484470(v63);
    if ( v64 )
      v85 = 0.0;
  }
  v97 = word_7920E8[v99]
      + word_792F78[v99]
      + word_7926FC[v99]
      + word_7925C0[v99]
      + word_792248[v99]
      + word_792218[v99]
      + word_792820[v99]
      + word_7920F8[v99]
      + word_792830[v99]
      + word_7929D8[v99];
  v95 = (double)word_7929D8[v99] * 1.0 / (double)v97
      + (1.0 - v86) * (double)word_792830[v99] / (double)v97
      + (1.0 - v87) * (double)word_7920F8[v99] / (double)v97
      + (1.0 - v88) * (double)word_792820[v99] / (double)v97
      + (1.0 - v89) * (double)word_792218[v99] / (double)v97
      + (1.0 - v90) * (double)word_792248[v99] / (double)v97
      + (1.0 - v109 * v132 - v91) * v85 * (double)word_7925C0[v99] / (double)v97;
  if ( sub_47D6F0((_DWORD *)dword_791364) == 2 )
  {
    v36 = sub_4C8210((CRecentFileList **)dword_7926F8, v59);
    v136 = 8;
    v35 = sub_485940(v36, &v58, 1, 1, 1, 1, 0, 0, 0);
    LOBYTE(v136) = 9;
    v21 = (unsigned __int8 *)dword_791418;
    v4 = sub_4A2160(v35, &v57);
    v60 = sub_4A1ED0(v4, v21);
    LOBYTE(v136) = 8;
    ATL::CComCriticalSection::~CComCriticalSection(&v58);
    v136 = -1;
    sub_484470(v59);
    if ( v60 )
      v95 = 0.0;
  }
  else
  {
    v34 = sub_4C7C40((CRecentFileList **)dword_7926F8, v55);
    v136 = 10;
    v33 = sub_485940(v34, &v54, 1, 1, 1, 1, 0, 0, 0);
    LOBYTE(v136) = 11;
    v22 = (unsigned __int8 *)dword_791418;
    v5 = sub_4A2160(v33, &v53);
    v56 = sub_4A1ED0(v5, v22);
    LOBYTE(v136) = 10;
    ATL::CComCriticalSection::~CComCriticalSection(&v54);
    v136 = -1;
    sub_484470(v55);
    if ( v56 )
      v95 = 0.0;
  }
  if ( sub_47D770((_DWORD *)dword_791364) )
  {
    v96 = 0.0;
  }
  else
  {
    v96 = (double)word_7925D0[v99] * 1.0 / (double)v97
        + (1.0 - v100) * (double)word_792810[v99] / (double)v97
        + (1.0 - v101) * (double)word_792208[v99] / (double)v97
        + (1.0 - v102) * (double)word_7929A0[v99] / (double)v97
        + (1.0 - v103) * (double)word_791EC8[v99] / (double)v97;
    if ( a1 < 5 )
      goto LABEL_52;
    v32 = sub_4C7C40((CRecentFileList **)dword_7926F8, v51);
    v136 = 12;
    v31 = sub_485940(v32, &v50, 0, 0, 1, 0, 0, 0, 0);
    v136 = 13;
    v45 = 3;
    v23 = (unsigned __int8 *)dword_791390;
    v6 = sub_4A2160(v31, &v49);
    if ( !sub_4A1E10(v6, v23) )
      goto LABEL_52;
    v30 = sub_4C7C40((CRecentFileList **)dword_7926F8, v48);
    v136 = 14;
    v29 = sub_485940(v30, &v47, 0, 0, 1, 0, 0, 0, 0);
    v136 = 15;
    v45 = 15;
    v24 = (unsigned __int8 *)dword_7913F4;
    v7 = sub_4A21B0(v29, &v46);
    if ( sub_4A20A0(v7, v24) )
      v28 = 1;
    else
LABEL_52:
      v28 = 0;
    v52 = v28;
    v136 = 14;
    if ( (v45 & 8) != 0 )
    {
      v45 &= ~8u;
      ATL::CComCriticalSection::~CComCriticalSection(&v47);
    }
    v136 = 13;
    if ( (v45 & 4) != 0 )
    {
      v45 &= ~4u;
      sub_484470(v48);
    }
    v136 = 12;
    if ( (v45 & 2) != 0 )
    {
      v45 &= ~2u;
      ATL::CComCriticalSection::~CComCriticalSection(&v50);
    }
    v136 = -1;
    if ( (v45 & 1) != 0 )
      sub_484470(v51);
    if ( v52 )
      v96 = 0.0;
  }
  dbl_792358[v99] = 1.0;
  dbl_792840[v99] = 1.0;
  for ( i = 0; ; ++i )
  {
    v8 = i;
    if ( v8 >= sub_47F950() )
      break;
    if ( i != v99 )
    {
      v9 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v9) == 1 )
      {
        v82 = 0.0;
        v84 = 0.0;
        v83 = sub_4D9C90((int)dword_7926F8, i, a2);
        if ( v83 * dbl_7929E8[8 * v99 + i] <= v124 )
        {
          v10 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
          ExecutingContext = Concurrency::details::VirtualProcessor::GetExecutingContext(v10);
          v76 = sub_4F6880((__int16 *)(dword_791364 + 56), (__int16)ExecutingContext);
          v77 = sub_4F6930((__int16 *)(dword_791364 + 56), (__int16)ExecutingContext);
          v11 = sub_4F6A90(dword_791364 + 56, (__int16)ExecutingContext);
          v75 = v11 - v76;
          v12 = sub_4F6B20(dword_791364 + 56, (__int16)ExecutingContext);
          v79 = v12 - v77;
          if ( v76 < 0 )
            sub_5E9F20((char)"shCurrentBets >= 0", "..\\Casino\\PokerStudAI.cpp", 1738);
          if ( v77 < 0 )
            sub_5E9F20((char)"shCurrentCalls >= 0", "..\\Casino\\PokerStudAI.cpp", 1739);
          if ( v75 < 0 )
            sub_5E9F20((char)"shOldBets >= 0", "..\\Casino\\PokerStudAI.cpp", 1740);
          if ( v79 < 0 )
            sub_5E9F20((char)"shOldCalls >= 0", "..\\Casino\\PokerStudAI.cpp", 1741);
          v81 = 0;
          v13 = sub_4D8AB0(dword_7926F8);
          v27 = v13 * (double)v75 + 1.0;
          v14 = sub_4D8B80(dword_7926F8);
          v26 = v14 * (double)v79 + v27;
          v15 = sub_4D8C50(dword_7926F8);
          v25 = v15 * (double)v76 + v26;
          v16 = sub_4D8D20(dword_7926F8);
          v82 = v16 * (double)v77 + v25;
          if ( sub_47D770((_DWORD *)dword_791364) == 3 )
          {
            v84 = (v82 - 1.0) * 1.4 + 1.0;
          }
          else if ( sub_47D770((_DWORD *)dword_791364) == 4 )
          {
            v84 = v82 - 1.0 + v82 - 1.0 + 1.0;
          }
          else
          {
            v84 = v82;
          }
        }
        else
        {
          v81 = 1;
        }
        v80 = dword_792398[8 * v99 + i]
            + dword_792CE8[8 * v99 + i]
            + dword_792258[8 * v99 + i]
            + dword_792880[8 * v99 + i]
            + dword_792E78[8 * v99 + i]
            + dword_7925F0[8 * v99 + i]
            + dword_791FD8[8 * v99 + i]
            + dword_7924B0[8 * v99 + i]
            + dword_792710[8 * v99 + i];
        if ( v81 )
        {
          v123 = (0.5 * v95
                + 1.0
                + 0.5 * v96
                - (double)dword_792710[8 * v99 + i] / (double)v80 * 1.0
                - (double)dword_7925F0[8 * v99 + i] / (double)v80 * 0.875
                - (double)dword_7924B0[8 * v99 + i] / (double)v80 * 0.875
                - (double)dword_791FD8[8 * v99 + i] / (double)v80 * 0.35
                - (double)dword_792258[8 * v99 + i] / (double)v80 * 0.35
                - (double)dword_792E78[8 * v99 + i] / (double)v80 * 0.25
                - (double)dword_792CE8[8 * v99 + i] / (double)v80 * 0.125
                - (double)dword_792880[8 * v99 + i] / (double)v80 * 0.125)
               * v123;
          dbl_792358[v99] = (1.0
                           - (double)dword_792710[8 * v99 + i] / (double)v80 * 1.0
                           - (double)dword_7924B0[8 * v99 + i] / (double)v80 * 1.0
                           - (double)dword_791FD8[8 * v99 + i] / (double)v80 * 1.0
                           - (double)dword_7925F0[8 * v99 + i] / (double)v80 * 0.25
                           - (double)dword_792E78[8 * v99 + i] / (double)v80 * 0.25
                           - (double)dword_792880[8 * v99 + i] / (double)v80 * 0.25)
                          * dbl_792358[v99];
          v17 = (1.0
               - (double)dword_792710[8 * v99 + i] / (double)v80 * 1.0
               - (double)dword_7925F0[8 * v99 + i] / (double)v80 * 1.0
               - (double)dword_792258[8 * v99 + i] / (double)v80 * 1.0
               - (double)dword_7924B0[8 * v99 + i] / (double)v80 * 0.25
               - (double)dword_792E78[8 * v99 + i] / (double)v80 * 0.25
               - (double)dword_792CE8[8 * v99 + i] / (double)v80 * 0.25)
              * dbl_792840[v99];
        }
        else
        {
          v123 = (0.5 * v95
                + 1.0
                + 0.5 * v96
                - v82 * 1.0 * ((double)dword_792710[8 * v99 + i] / (double)v80)
                - v82 * 0.875 * ((double)dword_7925F0[8 * v99 + i] / (double)v80)
                - v82 * 0.875 * ((double)dword_7924B0[8 * v99 + i] / (double)v80)
                - v82 * 0.35 * ((double)dword_791FD8[8 * v99 + i] / (double)v80)
                - v82 * 0.35 * ((double)dword_792258[8 * v99 + i] / (double)v80)
                - v82 * 0.25 * ((double)dword_792E78[8 * v99 + i] / (double)v80)
                - v82 * 0.125 * ((double)dword_792CE8[8 * v99 + i] / (double)v80)
                - v82 * 0.125 * ((double)dword_792880[8 * v99 + i] / (double)v80))
               * v123;
          dbl_792358[v99] = (1.0
                           - v82 * 1.0 * ((double)dword_792710[8 * v99 + i] / (double)v80)
                           - v82 * 1.0 * ((double)dword_7924B0[8 * v99 + i] / (double)v80)
                           - v82 * 1.0 * ((double)dword_791FD8[8 * v99 + i] / (double)v80)
                           - v82 * 0.25 * ((double)dword_7925F0[8 * v99 + i] / (double)v80)
                           - v82 * 0.25 * ((double)dword_792E78[8 * v99 + i] / (double)v80)
                           - v82 * 0.25 * ((double)dword_792880[8 * v99 + i] / (double)v80))
                          * dbl_792358[v99];
          v17 = (1.0
               - v84 * 1.0 * ((double)dword_792710[8 * v99 + i] / (double)v80)
               - v84 * 1.0 * ((double)dword_7925F0[8 * v99 + i] / (double)v80)
               - v84 * 1.0 * ((double)dword_792258[8 * v99 + i] / (double)v80)
               - v84 * 0.25 * ((double)dword_7924B0[8 * v99 + i] / (double)v80)
               - v84 * 0.25 * ((double)dword_792E78[8 * v99 + i] / (double)v80)
               - v84 * 0.25 * ((double)dword_792CE8[8 * v99 + i] / (double)v80))
              * dbl_792840[v99];
        }
        dbl_792840[v99] = v17;
        if ( v123 < 0.0 )
          v123 = 0.0;
        if ( dbl_792358[v99] < 0.0 )
          dbl_792358[v99] = 0.0;
        if ( dbl_792840[v99] < 0.0 )
          dbl_792840[v99] = 0.0;
      }
    }
  }
  v123 = v123 * dbl_792E38[v99];
  dbl_792358[v99] = dbl_792358[v99] * dbl_792E38[v99];
  dbl_792840[v99] = dbl_792840[v99] * dbl_792E38[v99];
  if ( v123 > 100.0 )
    v123 = 100.0;
  if ( dbl_792358[v99] > 100.0 )
    dbl_792358[v99] = 100.0;
  if ( dbl_792840[v99] > 100.0 )
    dbl_792840[v99] = 100.0;
  v122 = 0;
  v110 = 0;
  v125 = 0;
  if ( sub_47D770((_DWORD *)dword_791364) )
  {
    if ( sub_47D770((_DWORD *)dword_791364) == 2 )
    {
      if ( dbl_792358[v99] >= v123 || dbl_792840[v99] >= v123 )
      {
        if ( dbl_792358[v99] >= dbl_792840[v99] )
        {
          v122 = 1;
          v110 = 0;
          if ( a1 >= 5 )
            v125 = 4;
          else
            v125 = 7;
        }
        else
        {
          v122 = 2;
          v110 = 1;
          v125 = 0;
        }
      }
      else
      {
        v122 = 4;
        v110 = 1;
        v125 = 2;
      }
    }
    else if ( sub_47D770((_DWORD *)dword_791364) == 4 )
    {
      if ( dbl_792358[v99] >= v123 || dbl_792840[v99] >= v123 )
      {
        if ( dbl_792358[v99] >= dbl_792840[v99] )
        {
          v122 = 1;
          v110 = 0;
          if ( a1 >= 5 )
            v125 = 2;
          else
            v125 = 4;
        }
        else
        {
          v122 = 2;
          v110 = 1;
          v125 = 0;
        }
      }
      else
      {
        v122 = 4;
        v110 = 1;
        v125 = 2;
      }
    }
    else if ( dbl_792358[v99] >= v123 || dbl_792840[v99] >= v123 )
    {
      if ( dbl_792358[v99] >= dbl_792840[v99] )
      {
        v122 = 1;
        v110 = 0;
        if ( a1 >= 5 )
          v125 = 2;
        else
          v125 = 3;
      }
      else
      {
        v122 = 2;
        v110 = 1;
        v125 = 0;
      }
    }
    else
    {
      v122 = 2;
      v110 = 0;
      v125 = 1;
    }
  }
  else
  {
    switch ( a1 )
    {
      case 7:
        if ( dbl_792358[v99] >= v123 || dbl_792840[v99] >= v123 )
        {
          if ( dbl_792358[v99] >= dbl_792840[v99] )
          {
            v122 = 2;
            v110 = 0;
            v125 = 1;
          }
          else
          {
            v122 = 2;
            v110 = 1;
            v125 = 0;
          }
        }
        else
        {
          v122 = 1;
          v110 = 0;
          v125 = 0;
        }
        break;
      case 6:
        if ( dbl_792358[v99] >= v123 || dbl_792840[v99] >= v123 )
        {
          if ( dbl_792358[v99] >= dbl_792840[v99] )
          {
            v122 = 2;
            v110 = 0;
            v125 = 1;
          }
          else
          {
            v122 = 2;
            v110 = 1;
            v125 = 0;
          }
        }
        else
        {
          v122 = 1;
          v110 = 0;
          v125 = 0;
        }
        break;
      case 5:
        if ( dbl_792358[v99] >= v123 || dbl_792840[v99] >= v123 )
        {
          if ( dbl_792358[v99] >= dbl_792840[v99] )
          {
            v122 = 4;
            v110 = 0;
            v125 = 1;
          }
          else
          {
            v122 = 1;
            v110 = 1;
            v125 = 0;
          }
        }
        else
        {
          v122 = 1;
          v110 = 0;
          v125 = 0;
        }
        break;
      case 4:
        if ( dbl_792358[v99] >= v123 || dbl_792840[v99] >= v123 )
        {
          if ( dbl_792358[v99] >= dbl_792840[v99] )
          {
            v122 = 1;
            v110 = 0;
          }
          else
          {
            v122 = 1;
            v110 = 3;
          }
          v125 = 0;
        }
        else
        {
          v122 = 1;
          v110 = 0;
          v125 = 0;
        }
        break;
      case 3:
        if ( dbl_792358[v99] >= v123 || dbl_792840[v99] >= v123 )
        {
          if ( dbl_792358[v99] >= dbl_792840[v99] )
          {
            v122 = 1;
            v110 = 0;
          }
          else
          {
            v122 = 1;
            v110 = 3;
          }
          v125 = 0;
        }
        else
        {
          v122 = 1;
          v110 = 0;
          v125 = 0;
        }
        break;
      default:
        sub_5E9F20((char)"0", "..\\Casino\\PokerStudAI.cpp", 2007);
        break;
    }
  }
  return ((double)v122 * v123 + (double)v110 * dbl_792840[v99] + (double)v125 * dbl_792358[v99])
       / (double)(v125 + v110 + v122);
}


//======================================================================
// sub_508ED0
// entry 00508ed0  size 1580  status ok
//======================================================================

char __cdecl sub_508ED0(int a1, int a2)
{
  __int16 v2; // ax
  __int16 v3; // si
  int v4; // esi
  int v5; // edi
  int v6; // esi
  int v7; // esi
  int v8; // edi
  int v9; // esi
  int v10; // eax
  int v12; // eax
  int v13; // eax
  double v14; // [esp+24h] [ebp-70h]
  double v15; // [esp+3Ch] [ebp-58h]
  double v16; // [esp+44h] [ebp-50h]
  __int16 v17; // [esp+4Ch] [ebp-48h]
  __int16 i; // [esp+50h] [ebp-44h]
  double v19; // [esp+54h] [ebp-40h]
  int v20; // [esp+5Ch] [ebp-38h]
  __int16 v21; // [esp+60h] [ebp-34h]
  __int16 v22; // [esp+64h] [ebp-30h]
  __int16 v23; // [esp+68h] [ebp-2Ch]
  Concurrency::details::VirtualProcessor *v24; // [esp+6Ch] [ebp-28h]
  __int16 v25; // [esp+70h] [ebp-24h]
  double v26; // [esp+74h] [ebp-20h]
  __int16 v27; // [esp+80h] [ebp-14h]
  double v28; // [esp+84h] [ebp-10h]
  __int16 ExecutingContext; // [esp+8Ch] [ebp-8h]
  __int16 v30; // [esp+90h] [ebp-4h]

  v20 = sub_47E420((_DWORD *)dword_791364);
  v21 = 0;
  for ( i = 0; i < sub_47F950(); ++i )
  {
    if ( i != v20 )
    {
      v24 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v24) == 1 )
      {
        ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v24);
        v21 += sub_4F69E0((__int16 *)(dword_791364 + 56), ExecutingContext);
        if ( sub_4F6880((__int16 *)(dword_791364 + 56), ExecutingContext) > 0 )
        {
          v21 = 0;
          break;
        }
      }
    }
  }
  v19 = dbl_792DF8[v20];
  v2 = sub_4D9040(dword_7926F8);
  v25 = sub_62FBF0(v2 + 1);
  if ( sub_47D770((_DWORD *)dword_791364) == 2 )
    v25 *= (unsigned __int16)sub_62FBF0(7 - a1 + 2) + 1;
  v3 = sub_62FBF0(5);
  v22 = sub_62FBF0(word_7929C0[v20]) * v3;
  if ( v22 + v25 * v21 + word_7925B0[v20] <= 10 )
    v26 = v19;
  else
    v26 = (double)(v25 * v21 + word_7925B0[v20] + v22 - 10) / 100.0 + v19;
  if ( a1 >= 5 )
  {
    v4 = (int)(100.0 * dbl_792358[v20]) - 80;
    v5 = sub_62FBF0(30);
    if ( v4 > v5 - sub_62FBF0(10) )
    {
      v6 = sub_62FBF0(10);
      v16 = (double)(sub_62FBF0(10) + v6) / 100.0;
      v19 = v19 + v16;
      v26 = v26 + v16;
    }
  }
  if ( a1 >= 5 || sub_47D770((_DWORD *)dword_791364) )
  {
    v7 = (int)(100.0 * dbl_792840[v20]) - 80;
    v8 = sub_62FBF0(30);
    if ( v7 > v8 - sub_62FBF0(10) )
    {
      v9 = sub_62FBF0(10);
      v15 = (double)(sub_62FBF0(10) + v9) / 100.0;
      v19 = v19 + v15;
      v26 = v26 + v15;
    }
  }
  v17 = sub_4D9E80(dword_7926F8, 3);
  v27 = sub_4D9E80(dword_7926F8, 2);
  v23 = sub_4D9E80(dword_7926F8, 1);
  v30 = sub_4DA170(dword_7926F8);
  v14 = (double)(int)sub_62FBF0(v30) / 100.0 + 1.0;
  v28 = (v14 - (double)(int)sub_62FBF0(v30) / 100.0) / (double)a2;
  if ( sub_62FBF0(10) >= word_7929C0[v20] )
  {
    if ( !sub_47D770((_DWORD *)dword_791364) )
    {
      if ( byte_7924A8[i] && a1 == 3 )
      {
        v17 *= 2;
        v27 *= 2;
        v23 *= 2;
      }
      else if ( byte_7924A8[i] && a1 == 4 )
      {
        v17 *= 2;
        v27 *= 2;
        v23 *= 2;
      }
      else if ( byte_7924A8[i] && a1 == 5 )
      {
        v17 = (__int16)(3 * v17) / 2;
        v27 = (__int16)(3 * v27) / 2;
        v23 = (__int16)(3 * v23) / 2;
      }
    }
  }
  else
  {
    v17 /= 2;
    v27 /= 2;
    v23 /= 2;
  }
  v10 = sub_47CE60((_DWORD *)dword_791364);
  if ( (double)(v17 - sub_4C6F90(dword_7926F8, a1 == 7, v10)) / 100.0 + v28 >= v19 )
  {
    v12 = sub_47CE60((_DWORD *)dword_791364);
    if ( (double)(v27 - sub_4C6F90(dword_7926F8, a1 == 7, v12)) / 100.0 + v28 >= v19 )
    {
      v13 = sub_47CE60((_DWORD *)dword_791364);
      if ( (double)(v23 - sub_4C6F90(dword_7926F8, a1 == 7, v13)) / 100.0 + v28 >= v19 )
      {
        if ( (double)(v17 - sub_4C6FD0(dword_7926F8)) / 100.0 + v28 >= v26 )
        {
          if ( (double)(v27 - sub_4C6FD0(dword_7926F8)) / 100.0 + v28 >= v26 )
          {
            if ( (double)(v23 - sub_4C6FD0(dword_7926F8)) / 100.0 + v28 >= v26 )
            {
              return 0;
            }
            else
            {
              word_792498[v20] = 11;
              return 1;
            }
          }
          else
          {
            word_792498[v20] = 12;
            return 1;
          }
        }
        else
        {
          word_792498[v20] = 13;
          return 1;
        }
      }
      else
      {
        word_792498[v20] = 3;
        return 1;
      }
    }
    else
    {
      word_792498[v20] = 4;
      return 1;
    }
  }
  else
  {
    word_792498[v20] = 5;
    return 1;
  }
}


//======================================================================
// sub_509500
// entry 00509500  size 174  status ok
//======================================================================

__int16 __cdecl sub_509500(int a1, __int16 a2)
{
  __int16 v3; // [esp+0h] [ebp-8h]
  int v4; // [esp+4h] [ebp-4h]

  v4 = sub_47E420((_DWORD *)dword_791364);
  v3 = sub_4D8DF0(dword_7926F8, a2);
  if ( a1 == 7 && sub_4F6640((_BYTE *)(dword_791364 + 56)) )
  {
    v3 += (100 - v3) / 2;
  }
  else if ( a1 < 5
         && sub_47D770((_DWORD *)dword_791364)
         && word_792498[v4] != 9
         && !sub_4F6640((_BYTE *)(dword_791364 + 56)) )
  {
    v3 /= 2;
  }
  return v3;
}


//======================================================================
// sub_5095B0
// entry 005095b0  size 3040  status ok
//======================================================================

char __cdecl sub_5095B0(int a1)
{
  int v1; // esi
  int v2; // esi
  Concurrency::details::SchedulerProxy *v3; // eax
  CRecentFileList **v4; // eax
  _WORD *v6; // eax
  unsigned __int8 *v7; // eax
  int v8; // esi
  _WORD *v9; // eax
  unsigned __int8 *v10; // eax
  int v11; // esi
  int v12; // esi
  Concurrency::details::SchedulerProxy *v13; // eax
  CRecentFileList **v14; // eax
  _WORD *v15; // eax
  unsigned __int8 *v16; // eax
  int v17; // esi
  _WORD *v18; // eax
  unsigned __int8 *v19; // eax
  int v20; // esi
  int v21; // esi
  Concurrency::details::SchedulerProxy *v22; // eax
  CRecentFileList **v23; // eax
  int v24; // esi
  unsigned __int8 *v25; // eax
  __int16 v26; // ax
  int v27; // esi
  unsigned __int8 *v28; // [esp-4h] [ebp-104h]
  unsigned __int8 *v29; // [esp+Ch] [ebp-F4h]
  _BYTE *v30; // [esp+24h] [ebp-DCh]
  _BYTE *v31; // [esp+3Ch] [ebp-C4h]
  char v32; // [esp+48h] [ebp-B8h] BYREF
  int v33; // [esp+4Ah] [ebp-B6h] BYREF
  bool v34; // [esp+4Eh] [ebp-B2h]
  _WORD v35[2]; // [esp+52h] [ebp-AEh] BYREF
  bool v36; // [esp+56h] [ebp-AAh]
  _WORD v37[2]; // [esp+5Ah] [ebp-A6h] BYREF
  bool v38; // [esp+5Eh] [ebp-A2h]
  char v39; // [esp+5Fh] [ebp-A1h] BYREF
  char v40; // [esp+60h] [ebp-A0h]
  __int16 v41; // [esp+64h] [ebp-9Ch] BYREF
  bool v42; // [esp+68h] [ebp-98h]
  _WORD v43[2]; // [esp+6Ch] [ebp-94h] BYREF
  bool v44; // [esp+71h] [ebp-8Fh]
  char v45; // [esp+72h] [ebp-8Eh] BYREF
  char v46; // [esp+73h] [ebp-8Dh]
  __int16 v47[4]; // [esp+74h] [ebp-8Ch] BYREF
  int v48; // [esp+7Ch] [ebp-84h] BYREF
  __int16 k; // [esp+80h] [ebp-80h]
  __int16 v50[4]; // [esp+84h] [ebp-7Ch] BYREF
  int v51; // [esp+8Ch] [ebp-74h] BYREF
  __int16 v52[4]; // [esp+90h] [ebp-70h] BYREF
  int v53; // [esp+98h] [ebp-68h] BYREF
  __int16 v54[4]; // [esp+9Ch] [ebp-64h] BYREF
  __int16 v55[4]; // [esp+A4h] [ebp-5Ch] BYREF
  __int16 j; // [esp+ACh] [ebp-54h]
  __int16 v57; // [esp+B0h] [ebp-50h]
  int v58; // [esp+B4h] [ebp-4Ch] BYREF
  __int16 v59[4]; // [esp+B8h] [ebp-48h] BYREF
  int v60; // [esp+C0h] [ebp-40h] BYREF
  __int16 v61[4]; // [esp+C4h] [ebp-3Ch] BYREF
  __int16 v62[4]; // [esp+CCh] [ebp-34h] BYREF
  __int16 i; // [esp+D4h] [ebp-2Ch]
  __int16 v64; // [esp+D8h] [ebp-28h]
  double v65; // [esp+DCh] [ebp-24h]
  int v66; // [esp+E8h] [ebp-18h]
  int v67; // [esp+ECh] [ebp-14h]
  int v68; // [esp+F0h] [ebp-10h]
  int v69; // [esp+FCh] [ebp-4h]

  v67 = sub_47E420((_DWORD *)dword_791364);
  word_792990[v67] = a1;
  dword_7926F8 = (Concurrency::details::VirtualProcessor *)sub_47E3B0((void *)dword_791364);
  v66 = sub_4F6840(dword_791364 + 56);
  v1 = sub_4C6A70(dword_7926F8);
  v68 = v1 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  if ( v68 <= 0 )
    sub_5E9F20((char)"lBankChips > 0L", "..\\Casino\\PokerStudAI.cpp", 3350);
  if ( v66 <= 0 )
    sub_5E9F20((char)"lMatchChips > 0L", "..\\Casino\\PokerStudAI.cpp", 3351);
  v65 = 1.0;
  if ( v68 <= v66 )
    v65 = (double)v68 / (double)v66;
  v65 = v65 / 4.0;
  if ( a1 == 3 )
  {
    v64 = 0;
    for ( i = 0; ; ++i )
    {
      v2 = i;
      if ( v2 >= sub_47F950() )
        break;
      if ( i != v67 )
      {
        v3 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v3) == 1 )
        {
          v4 = (CRecentFileList **)sub_47E390(i);
          sub_4C84A0(v4, v62);
          v69 = 0;
          v31 = sub_464130(&v45, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
          LOBYTE(v69) = 1;
          v46 = sub_484BA0(v62, v31);
          LOBYTE(v69) = 0;
          ATL::CComCriticalSection::~CComCriticalSection(&v45);
          if ( v46 )
            ++v64;
          v69 = -1;
          sub_484470(v62);
        }
      }
    }
    if ( v64 )
    {
      if ( v64 == 1 )
      {
        sub_4C80B0((CRecentFileList **)dword_7926F8, v61);
        v69 = 2;
        sub_485940(v61, &v60, 1, 1, 1, 1, 0, 0, 0);
        LOBYTE(v69) = 3;
        sub_4A20D0(v43);
        LOBYTE(v69) = 4;
        v7 = (unsigned __int8 *)sub_4A2100(
                                  v6,
                                  (_BYTE *)dword_7913B0,
                                  (_BYTE *)dword_7913C8,
                                  (unsigned __int8 *)&byte_7913FF,
                                  (unsigned __int8 *)&byte_7913FF,
                                  (unsigned __int8 *)&byte_7913FF,
                                  (unsigned __int8 *)&byte_7913FF);
        v44 = sub_4A24D0((unsigned __int8 *)&v60, v7);
        LOBYTE(v69) = 3;
        ATL::CComCriticalSection::~CComCriticalSection(v43);
        if ( v44 || (v8 = sub_62FBF0((int)(150.0 * v65)), v8 < sub_4D6DB0(dword_7926F8)) )
        {
          LOBYTE(v69) = 2;
          ATL::CComCriticalSection::~CComCriticalSection(&v60);
          v69 = -1;
          sub_484470(v61);
          return 1;
        }
        else
        {
          LOBYTE(v69) = 2;
          ATL::CComCriticalSection::~CComCriticalSection(&v60);
          v69 = -1;
          sub_484470(v61);
          return 0;
        }
      }
      else
      {
        sub_4C80B0((CRecentFileList **)dword_7926F8, v59);
        v69 = 5;
        sub_485940(v59, &v58, 1, 1, 1, 1, 0, 0, 0);
        LOBYTE(v69) = 6;
        sub_4A20D0(&v41);
        LOBYTE(v69) = 7;
        v10 = (unsigned __int8 *)sub_4A2100(
                                   v9,
                                   (_BYTE *)dword_7913B0,
                                   (_BYTE *)dword_7913C8,
                                   (unsigned __int8 *)&byte_7913FF,
                                   (unsigned __int8 *)&byte_7913FF,
                                   (unsigned __int8 *)&byte_7913FF,
                                   (unsigned __int8 *)&byte_7913FF);
        v42 = sub_4A24D0((unsigned __int8 *)&v58, v10);
        LOBYTE(v69) = 6;
        ATL::CComCriticalSection::~CComCriticalSection(&v41);
        if ( v42 || (v11 = sub_62FBF0((int)(300.0 * v65)), v11 < sub_4D6DB0(dword_7926F8)) )
        {
          LOBYTE(v69) = 5;
          ATL::CComCriticalSection::~CComCriticalSection(&v58);
          v69 = -1;
          sub_484470(v59);
          return 1;
        }
        else
        {
          LOBYTE(v69) = 5;
          ATL::CComCriticalSection::~CComCriticalSection(&v58);
          v69 = -1;
          sub_484470(v59);
          return 0;
        }
      }
    }
    else
    {
      return 1;
    }
  }
  else if ( a1 == 4 )
  {
    v57 = 0;
    for ( j = 0; ; ++j )
    {
      v12 = j;
      if ( v12 >= sub_47F950() )
        break;
      if ( j != v67 )
      {
        v13 = (Concurrency::details::SchedulerProxy *)sub_47E390(j);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v13) == 1 )
        {
          v14 = (CRecentFileList **)sub_47E390(j);
          sub_4C84A0(v14, v55);
          v69 = 8;
          v30 = sub_464130(&v39, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
          LOBYTE(v69) = 9;
          v40 = sub_484BA0(v55, v30);
          LOBYTE(v69) = 8;
          ATL::CComCriticalSection::~CComCriticalSection(&v39);
          if ( v40 )
            ++v57;
          v69 = -1;
          sub_484470(v55);
        }
      }
    }
    if ( v57 )
    {
      if ( v57 == 1 )
      {
        sub_4C80B0((CRecentFileList **)dword_7926F8, v54);
        v69 = 10;
        sub_485940(v54, &v53, 1, 1, 1, 1, 0, 0, 0);
        LOBYTE(v69) = 11;
        sub_4A20D0(v37);
        LOBYTE(v69) = 12;
        v16 = (unsigned __int8 *)sub_4A2100(
                                   v15,
                                   (_BYTE *)dword_791418,
                                   (_BYTE *)dword_791410,
                                   (unsigned __int8 *)&byte_7913FF,
                                   (unsigned __int8 *)&byte_7913FF,
                                   (unsigned __int8 *)&byte_7913FF,
                                   (unsigned __int8 *)&byte_7913FF);
        v38 = sub_4A24D0((unsigned __int8 *)&v53, v16);
        LOBYTE(v69) = 11;
        ATL::CComCriticalSection::~CComCriticalSection(v37);
        if ( v38 || (v17 = sub_62FBF0((int)(100.0 * v65)), v17 < sub_4D6DB0(dword_7926F8)) )
        {
          LOBYTE(v69) = 10;
          ATL::CComCriticalSection::~CComCriticalSection(&v53);
          v69 = -1;
          sub_484470(v54);
          return 1;
        }
        else
        {
          LOBYTE(v69) = 10;
          ATL::CComCriticalSection::~CComCriticalSection(&v53);
          v69 = -1;
          sub_484470(v54);
          return 0;
        }
      }
      else
      {
        sub_4C80B0((CRecentFileList **)dword_7926F8, v52);
        v69 = 13;
        sub_485940(v52, &v51, 1, 1, 1, 1, 0, 0, 0);
        LOBYTE(v69) = 14;
        sub_4A20D0(v35);
        LOBYTE(v69) = 15;
        v19 = (unsigned __int8 *)sub_4A2100(
                                   v18,
                                   (_BYTE *)dword_791418,
                                   (_BYTE *)dword_7913C8,
                                   (unsigned __int8 *)&byte_7913FF,
                                   (unsigned __int8 *)&byte_7913FF,
                                   (unsigned __int8 *)&byte_7913FF,
                                   (unsigned __int8 *)&byte_7913FF);
        v36 = sub_4A24D0((unsigned __int8 *)&v51, v19);
        LOBYTE(v69) = 14;
        ATL::CComCriticalSection::~CComCriticalSection(v35);
        if ( v36 || (v20 = sub_62FBF0((int)(350.0 * v65)), v20 < sub_4D6DB0(dword_7926F8)) )
        {
          LOBYTE(v69) = 13;
          ATL::CComCriticalSection::~CComCriticalSection(&v51);
          v69 = -1;
          sub_484470(v52);
          return 1;
        }
        else
        {
          LOBYTE(v69) = 13;
          ATL::CComCriticalSection::~CComCriticalSection(&v51);
          v69 = -1;
          sub_484470(v52);
          return 0;
        }
      }
    }
    else
    {
      return 1;
    }
  }
  else
  {
    sub_4C80B0((CRecentFileList **)dword_7926F8, v50);
    v69 = 16;
    sub_485940(v50, &v48, 1, 1, 1, 1, 0, 0, 0);
    LOBYTE(v69) = 17;
    for ( k = 0; ; ++k )
    {
      v21 = k;
      if ( v21 >= sub_47F950() )
        break;
      if ( k != v67 )
      {
        v22 = (Concurrency::details::SchedulerProxy *)sub_47E390(k);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v22) == 1 )
        {
          v23 = (CRecentFileList **)sub_47E390(k);
          sub_4C84A0(v23, v47);
          LOBYTE(v69) = 18;
          v29 = (unsigned __int8 *)sub_485940(v47, &v33, 1, 1, 1, 1, 0, 0, 0);
          LOBYTE(v69) = 19;
          v34 = sub_4A2550((unsigned __int8 *)&v48, v29);
          LOBYTE(v69) = 18;
          ATL::CComCriticalSection::~CComCriticalSection(&v33);
          if ( v34 )
          {
            LOBYTE(v69) = 17;
            sub_484470(v47);
            break;
          }
          LOBYTE(v69) = 17;
          sub_484470(v47);
        }
      }
    }
    v24 = k;
    if ( v24 >= sub_47F950() )
    {
      v28 = (unsigned __int8 *)dword_791398;
      v25 = sub_4A2160(&v48, &v32);
      if ( sub_4A1F00(v25, v28)
        || (v26 = sub_4D6DB0(dword_7926F8),
            v27 = sub_62FBF0(v26 / 4),
            v65 / 2.0 < (double)(v27 + 5 * sub_62FBF0(13) + 70) / 100.0 * dbl_792DF8[v67]) )
      {
        LOBYTE(v69) = 16;
        ATL::CComCriticalSection::~CComCriticalSection(&v48);
        v69 = -1;
        sub_484470(v50);
        return 1;
      }
      else
      {
        LOBYTE(v69) = 16;
        ATL::CComCriticalSection::~CComCriticalSection(&v48);
        v69 = -1;
        sub_484470(v50);
        return 0;
      }
    }
    else
    {
      LOBYTE(v69) = 16;
      ATL::CComCriticalSection::~CComCriticalSection(&v48);
      v69 = -1;
      sub_484470(v50);
      return 0;
    }
  }
}


//======================================================================
// sub_50A190
// entry 0050a190  size 6370  status ok
//======================================================================

int __cdecl sub_50A190(int a1, int a2, unsigned __int8 *a3)
{
  Concurrency::details::SchedulerProxy *v3; // eax
  Concurrency::details::VirtualProcessor *v4; // eax
  __int16 ExecutingContext; // ax
  __int16 v6; // si
  __int16 v7; // si
  __int16 v8; // ax
  int v9; // esi
  Concurrency::details::SchedulerProxy *v10; // eax
  CRecentFileList **v11; // eax
  int v12; // esi
  int v13; // esi
  double v14; // st7
  unsigned __int8 *v15; // eax
  unsigned __int8 *v16; // eax
  unsigned __int8 *v17; // eax
  unsigned __int8 *v18; // eax
  unsigned __int8 *v19; // eax
  unsigned __int8 *v20; // eax
  unsigned __int8 *v21; // eax
  unsigned __int8 *v22; // eax
  unsigned __int8 *v23; // eax
  unsigned __int8 *v24; // eax
  unsigned __int8 *v25; // eax
  unsigned __int8 *v26; // eax
  unsigned __int8 *v27; // eax
  unsigned __int8 *v28; // eax
  Concurrency::details::SchedulerProxy *v29; // eax
  CRecentFileList **v30; // eax
  int v31; // esi
  int v32; // esi
  int v33; // esi
  int v34; // esi
  int v35; // esi
  int v36; // esi
  double v37; // st7
  int v38; // esi
  Concurrency::details::SchedulerProxy *v39; // eax
  int v40; // esi
  int v42; // esi
  int v43; // esi
  int v44; // esi
  int v45; // esi
  int v46; // eax
  int v47; // eax
  int v48; // esi
  int v49; // esi
  int v50; // eax
  int v51; // esi
  int v52; // esi
  int v53; // esi
  int v54; // esi
  int v55; // esi
  int v56; // eax
  int v57; // esi
  int v58; // esi
  int v59; // esi
  int v60; // esi
  int v61; // esi
  int v62; // eax
  int v63; // esi
  int v64; // esi
  int v65; // esi
  int v66; // esi
  __int16 v67; // [esp-18h] [ebp-170h] BYREF
  int v68; // [esp-14h] [ebp-16Ch]
  int v69; // [esp-10h] [ebp-168h]
  int *v70; // [esp-Ch] [ebp-164h]
  int *v71; // [esp-8h] [ebp-160h]
  unsigned __int8 *v72; // [esp-4h] [ebp-15Ch]
  int v73; // [esp+Ch] [ebp-14Ch]
  double v74; // [esp+10h] [ebp-148h]
  int v75; // [esp+18h] [ebp-140h]
  int v76; // [esp+1Ch] [ebp-13Ch]
  int v77; // [esp+20h] [ebp-138h]
  __int16 *v78; // [esp+24h] [ebp-134h]
  __int16 *v79; // [esp+28h] [ebp-130h]
  __int16 *v80; // [esp+2Ch] [ebp-12Ch]
  BOOL v81; // [esp+30h] [ebp-128h]
  __int16 *v82; // [esp+34h] [ebp-124h]
  __int16 *v83; // [esp+38h] [ebp-120h]
  __int16 *v84; // [esp+3Ch] [ebp-11Ch]
  __int16 *v85; // [esp+40h] [ebp-118h]
  __int16 *v86; // [esp+44h] [ebp-114h]
  __int16 *v87; // [esp+48h] [ebp-110h]
  __int16 *v88; // [esp+4Ch] [ebp-10Ch]
  __int16 *v89; // [esp+50h] [ebp-108h]
  __int16 *v90; // [esp+54h] [ebp-104h]
  __int16 *v91; // [esp+58h] [ebp-100h]
  int v92; // [esp+5Ch] [ebp-FCh]
  __int16 *v93; // [esp+60h] [ebp-F8h]
  __int16 *v94; // [esp+64h] [ebp-F4h]
  __int16 *v95; // [esp+68h] [ebp-F0h]
  __int16 *v96; // [esp+6Ch] [ebp-ECh]
  __int16 *v97; // [esp+70h] [ebp-E8h]
  __int16 *v98; // [esp+74h] [ebp-E4h]
  __int16 *v99; // [esp+78h] [ebp-E0h]
  int v100; // [esp+7Ch] [ebp-DCh]
  __int16 *v101; // [esp+80h] [ebp-D8h]
  char v102; // [esp+84h] [ebp-D4h] BYREF
  char v103; // [esp+85h] [ebp-D3h] BYREF
  char v104; // [esp+86h] [ebp-D2h] BYREF
  char v105; // [esp+87h] [ebp-D1h] BYREF
  __int16 v106[4]; // [esp+88h] [ebp-D0h] BYREF
  __int16 v107[5]; // [esp+90h] [ebp-C8h] BYREF
  char v108; // [esp+9Ah] [ebp-BEh] BYREF
  bool v109; // [esp+9Bh] [ebp-BDh]
  __int16 v110[5]; // [esp+9Ch] [ebp-BCh] BYREF
  bool v111; // [esp+A7h] [ebp-B1h]
  char v112; // [esp+A8h] [ebp-B0h] BYREF
  char v113; // [esp+A9h] [ebp-AFh] BYREF
  char v114; // [esp+AAh] [ebp-AEh] BYREF
  char v115; // [esp+ABh] [ebp-ADh] BYREF
  __int16 v116[4]; // [esp+ACh] [ebp-ACh] BYREF
  char v117; // [esp+B5h] [ebp-A3h] BYREF
  char v118; // [esp+B6h] [ebp-A2h] BYREF
  char v119; // [esp+B7h] [ebp-A1h] BYREF
  __int16 v120[5]; // [esp+B8h] [ebp-A0h] BYREF
  char v121; // [esp+C2h] [ebp-96h] BYREF
  char v122; // [esp+C3h] [ebp-95h] BYREF
  __int16 v123[4]; // [esp+C4h] [ebp-94h] BYREF
  __int16 *v124; // [esp+CCh] [ebp-8Ch]
  __int16 v125[4]; // [esp+D0h] [ebp-88h] BYREF
  __int16 v126[4]; // [esp+D8h] [ebp-80h] BYREF
  __int16 v127[4]; // [esp+E0h] [ebp-78h] BYREF
  int v128; // [esp+E8h] [ebp-70h]
  double v129; // [esp+ECh] [ebp-6Ch]
  int v130; // [esp+F4h] [ebp-64h]
  __int16 v131; // [esp+F8h] [ebp-60h]
  __int16 j; // [esp+FCh] [ebp-5Ch]
  __int16 v133[4]; // [esp+100h] [ebp-58h] BYREF
  int v134; // [esp+108h] [ebp-50h] BYREF
  int v135; // [esp+10Ch] [ebp-4Ch] BYREF
  int v136; // [esp+110h] [ebp-48h] BYREF
  int v137; // [esp+114h] [ebp-44h] BYREF
  int v138; // [esp+118h] [ebp-40h] BYREF
  int v139; // [esp+11Ch] [ebp-3Ch]
  __int16 v140; // [esp+120h] [ebp-38h]
  __int16 i; // [esp+124h] [ebp-34h]
  __int16 v142; // [esp+128h] [ebp-30h]
  __int16 v143[4]; // [esp+12Ch] [ebp-2Ch] BYREF
  __int16 v144; // [esp+134h] [ebp-24h]
  int v145; // [esp+138h] [ebp-20h] BYREF
  int v146; // [esp+13Ch] [ebp-1Ch]
  __int16 v147; // [esp+140h] [ebp-18h]
  int v148; // [esp+144h] [ebp-14h]
  __int16 v149; // [esp+148h] [ebp-10h]
  int v150; // [esp+154h] [ebp-4h]

  v100 = 0;
  v148 = sub_47E420((_DWORD *)dword_791364);
  if ( v148 < 0 )
    sub_5E9F20((char)"currentPlayer >= 0", "..\\Casino\\PokerStudAI.cpp", 3787);
  if ( v148 >= sub_47F950() )
    sub_5E9F20((char)"currentPlayer < pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerStudAI.cpp", 3788);
  dword_7926F8 = (Concurrency::details::VirtualProcessor *)sub_47E3B0((void *)dword_791364);
  if ( word_792DE8[v148] == a1 )
  {
    if ( (unsigned __int8 *)word_792980[v148] == a3 || word_792498[v148] == 6 || word_792498[v148] == 2 )
    {
      v72 = a3;
      dbl_792DF8[v148] = sub_50BA80(a1, a2);
    }
    else
    {
      word_792980[v148] = (__int16)a3;
      v72 = a3;
      dbl_792DF8[v148] = sub_50BA80(a1, a2);
      word_792498[v148] = 1;
    }
  }
  else
  {
    v144 = 0;
    for ( i = 0; i < sub_47F950(); ++i )
    {
      if ( i != v148 )
      {
        v3 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v3) == 1 )
        {
          v4 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
          ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v4);
          v144 += sub_4F6A90(dword_791364 + 56, ExecutingContext);
        }
      }
    }
    v142 = sub_4EC160(dword_7926F8);
    v6 = sub_62FBF0(v142);
    v7 = v6 - sub_62FBF0(v142);
    v8 = sub_4EC120(dword_7926F8);
    word_7925B0[v148] = v7 - sub_62FBF0(v8 + 1) * v144;
    sub_484300(v143);
    v150 = 0;
    v99 = sub_4C7C40((CRecentFileList **)dword_7926F8, v127);
    v98 = v99;
    LOBYTE(v150) = 1;
    sub_484490(v143, v99);
    LOBYTE(v150) = 0;
    sub_484470(v127);
    sub_4646A0(&v145);
    LOBYTE(v150) = 2;
    sub_4646F0(&v145);
    sub_4649C0(&v145, (int)v143);
    for ( i = 0; ; ++i )
    {
      v9 = i;
      if ( v9 >= sub_47F950() )
        break;
      if ( i != v148 )
      {
        v10 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v10) )
        {
          v11 = (CRecentFileList **)sub_47E390(i);
          v97 = sub_4C8300(v11, v126);
          v96 = v97;
          LOBYTE(v150) = 3;
          sub_4649C0(&v145, (int)v97);
          LOBYTE(v150) = 2;
          sub_484470(v126);
        }
      }
    }
    sub_495D10(
      v143,
      v145,
      v146,
      v147,
      (_WORD *)(2 * v148 + 7940568),
      (_WORD *)(2 * v148 + 7940144),
      (_WORD *)(2 * v148 + 7938296),
      (_WORD *)(2 * v148 + 7940128),
      (_WORD *)(2 * v148 + 7938584),
      (_WORD *)(2 * v148 + 7938632),
      (_WORD *)(2 * v148 + 7939520),
      (_WORD *)(2 * v148 + 7939836),
      (_WORD *)(2 * v148 + 7942008),
      (_WORD *)(2 * v148 + 7938280));
    for ( i = 0; ; ++i )
    {
      v12 = i;
      if ( v12 >= sub_47F950() )
        break;
      if ( i == v148 )
      {
        v138 = v145;
        v139 = v146;
        v140 = v147;
        LOBYTE(v150) = 4;
        sub_464860((unsigned __int8 *)&v138, (int)v143);
        v95 = sub_4C8300((CRecentFileList **)dword_7926F8, v125);
        v94 = v95;
        LOBYTE(v150) = 5;
        sub_4649C0(&v138, (int)v95);
        LOBYTE(v150) = 4;
        sub_484470(v125);
        v72 = (unsigned __int8 *)&dword_791ED8[8 * v148 + i];
        v71 = &dword_792108[8 * v148 + i];
        v70 = &dword_792BE8[8 * v148 + i];
        v69 = 1;
        v124 = &v67;
        v93 = sub_4C8300((CRecentFileList **)dword_7926F8, &v67);
        sub_496370(v143, v138, v139, v140, v67, v68, v69, v70, v71, v72);
        v13 = sub_62FBF0(100);
        v14 = (double)dword_791ED8[9 * i] * 100.0;
        v92 = dword_791ED8[9 * i] + dword_792108[9 * i] + dword_792BE8[9 * i];
        byte_7924A8[i] = v13 < (int)(v14 / (double)v92);
        switch ( a1 )
        {
          case 2:
            v91 = sub_4C8300((CRecentFileList **)dword_7926F8, v123);
            v90 = v91;
            LOBYTE(v150) = 6;
            sub_485940(v91, &v137, 1, 1, 1, 1, 0, 0, 0);
            LOBYTE(v150) = 8;
            sub_484470(v123);
            v72 = (unsigned __int8 *)dword_7913C8;
            v15 = sub_4A21B0(&v137, &v122);
            if ( sub_4A1FB0(v15, v72) )
            {
              word_7929C0[i] = 4;
            }
            else
            {
              v72 = (unsigned __int8 *)dword_7913E0;
              v16 = sub_4A21B0(&v137, &v121);
              word_7929C0[i] = sub_4A1FB0(v16, v72);
            }
            LOBYTE(v150) = 4;
            ATL::CComCriticalSection::~CComCriticalSection(&v137);
            break;
          case 3:
            v89 = sub_4C8300((CRecentFileList **)dword_7926F8, v120);
            v88 = v89;
            LOBYTE(v150) = 9;
            sub_485940(v89, &v136, 1, 1, 1, 1, 0, 0, 0);
            LOBYTE(v150) = 11;
            sub_484470(v120);
            v72 = (unsigned __int8 *)dword_7913B0;
            v17 = sub_4A2160(&v136, &v119);
            if ( sub_4A1F00(v17, v72) )
            {
              v72 = (unsigned __int8 *)dword_791400;
              v18 = sub_4A21B0(&v136, &v118);
              if ( sub_4A2040(v18, v72) )
              {
                word_7929C0[i] = 10;
              }
              else
              {
                v72 = (unsigned __int8 *)dword_7913F8;
                v19 = sub_4A21B0(&v136, &v117);
                if ( sub_4A2040(v19, v72) )
                  word_7929C0[i] = 8;
                else
                  word_7929C0[i] = 6;
              }
            }
            else
            {
              word_7929C0[i] = 0;
            }
            LOBYTE(v150) = 4;
            ATL::CComCriticalSection::~CComCriticalSection(&v136);
            break;
          case 4:
            v87 = sub_4C8300((CRecentFileList **)dword_7926F8, v116);
            v86 = v87;
            LOBYTE(v150) = 12;
            sub_485940(v87, &v135, 1, 1, 1, 1, 0, 0, 0);
            LOBYTE(v150) = 14;
            sub_484470(v116);
            v72 = (unsigned __int8 *)dword_791418;
            v20 = sub_4A2160(&v135, &v115);
            if ( sub_4A1E10(v20, v72) )
            {
              word_7929C0[i] = 10;
            }
            else
            {
              v72 = (unsigned __int8 *)dword_7913B0;
              v21 = sub_4A2160(&v135, &v114);
              if ( sub_4A1E10(v21, v72) )
              {
                v72 = (unsigned __int8 *)dword_7913E0;
                v22 = sub_4A21B0(&v135, &v113);
                if ( sub_4A2040(v22, v72) )
                {
                  word_7929C0[i] = 10;
                }
                else
                {
                  v72 = (unsigned __int8 *)dword_79138C;
                  v23 = sub_4A21B0(&v135, &v112);
                  if ( sub_4A2040(v23, v72) )
                    word_7929C0[i] = 8;
                  else
                    word_7929C0[i] = 6;
                }
              }
              else
              {
                v85 = sub_4C8300((CRecentFileList **)dword_7926F8, v110);
                v84 = v85;
                LOBYTE(v150) = 15;
                v111 = sub_484BF0(v85) == 3;
                LOBYTE(v150) = 14;
                sub_484470(v110);
                if ( v111 )
                {
                  word_7929C0[i] = 4;
                }
                else
                {
                  v72 = (unsigned __int8 *)dword_791390;
                  v24 = sub_4A2160(&v135, &v108);
                  v81 = sub_4A1E10(v24, v72)
                     && (v83 = sub_4C8300((CRecentFileList **)dword_7926F8, v107),
                         v82 = v83,
                         LOBYTE(v150) = 16,
                         v100 |= 1u,
                         !sub_484DB0(v83));
                  v109 = v81;
                  v150 = 14;
                  if ( (v100 & 1) != 0 )
                  {
                    v100 &= ~1u;
                    sub_484470(v107);
                  }
                  if ( v109 )
                    word_7929C0[i] = 4;
                  else
                    word_7929C0[i] = 0;
                }
              }
            }
            LOBYTE(v150) = 4;
            ATL::CComCriticalSection::~CComCriticalSection(&v135);
            break;
          case 5:
            sub_4C8300((CRecentFileList **)dword_7926F8, v133);
            LOBYTE(v150) = 17;
            v80 = sub_4C8300((CRecentFileList **)dword_7926F8, v106);
            v79 = v80;
            LOBYTE(v150) = 18;
            sub_485940(v80, &v134, 1, 1, 1, 1, 0, 0, 0);
            LOBYTE(v150) = 20;
            sub_484470(v106);
            v72 = (unsigned __int8 *)dword_791380;
            v25 = sub_4A2160(&v134, &v105);
            if ( sub_4A1F00(v25, v72) )
            {
              word_7929C0[i] = 10;
            }
            else
            {
              v72 = (unsigned __int8 *)dword_7913B0;
              v26 = sub_4A2160(&v134, &v104);
              if ( sub_4A1E10(v26, v72) )
              {
                v72 = (unsigned __int8 *)dword_7913E0;
                v27 = sub_4A21B0(&v134, &v103);
                if ( sub_4A2040(v27, v72) )
                {
                  word_7929C0[i] = 6;
                }
                else
                {
                  v72 = (unsigned __int8 *)dword_79138C;
                  v28 = sub_4A21B0(&v134, &v102);
                  if ( sub_4A2040(v28, v72) )
                    word_7929C0[i] = 4;
                }
              }
              else if ( sub_484DB0(v133) )
              {
                if ( sub_484DB0(v133) )
                {
                  word_7929C0[i] = 3;
                }
                else if ( sub_484BF0(v133) == 4 )
                {
                  word_7929C0[i] = 7;
                }
                else
                {
                  word_7929C0[i] = 0;
                }
              }
              else
              {
                word_7929C0[i] = 6;
              }
            }
            LOBYTE(v150) = 17;
            ATL::CComCriticalSection::~CComCriticalSection(&v134);
            LOBYTE(v150) = 4;
            sub_484470(v133);
            break;
        }
        LOBYTE(v150) = 2;
        ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)&v138);
      }
      else
      {
        v29 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v29) == 1 )
        {
          v72 = (unsigned __int8 *)&dword_791ED8[8 * v148 + i];
          v71 = &dword_792108[8 * v148 + i];
          v70 = &dword_792BE8[8 * v148 + i];
          v69 = 1;
          v101 = &v67;
          v30 = (CRecentFileList **)sub_47E390(i);
          v78 = sub_4C8300(v30, &v67);
          sub_496370(v143, v145, v146, v147, v67, v68, v69, v70, v71, v72);
        }
      }
    }
    word_792DE8[v148] = a1;
    word_792980[v148] = (__int16)a3;
    if ( a1 == 2 )
    {
      v31 = sub_62FBF0(21);
      v32 = v31 + sub_62FBF0(21) + 60;
      v33 = sub_62FBF0(21) + v32;
      v77 = sub_62FBF0(21) + v33;
      dbl_792E38[v148] = (double)v77 * 0.01;
      for ( j = 0; ; ++j )
      {
        v34 = j;
        if ( v34 >= sub_47F950() )
          break;
        v35 = sub_62FBF0(51);
        v36 = v35 + sub_62FBF0(51) + 25;
        v76 = sub_62FBF0(51) + v36;
        dbl_7929E8[8 * v148 + j] = (double)v76 * 0.01;
      }
    }
    v72 = a3;
    v37 = sub_50BA80(a1, a2);
    dbl_792DF8[v148] = v37;
    word_792498[v148] = 1;
    if ( a1 == 5 )
    {
      for ( i = 0; ; ++i )
      {
        v38 = i;
        if ( v38 >= sub_47F950() )
          break;
        if ( i != v148 )
        {
          v39 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v39) == 1 && dword_792BE8[8 * v148 + i] > 0 )
            break;
        }
      }
      v40 = i;
      if ( v40 == sub_47F950() )
        word_792498[v148] = 6;
    }
    LOBYTE(v150) = 0;
    ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)&v145);
    v150 = -1;
    sub_484470(v143);
  }
  if ( word_792498[v148] == 6 )
  {
    sub_4C79D0(dword_7926F8, 3);
    if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
    {
      if ( sub_501040() || sub_62FBF0(20) )
        return 2;
      else
        return 1;
    }
    else if ( sub_4F66E0(dword_791364 + 56) )
    {
      return 4;
    }
    else
    {
      return 3;
    }
  }
  if ( word_792498[v148] == 1 )
  {
    if ( sub_4F6690((_BYTE *)(dword_791364 + 56)) )
    {
      v75 = sub_4F67D0((__int16 *)(dword_791364 + 56));
      v74 = (double)v75;
      v73 = sub_4F6840(dword_791364 + 56);
      v129 = dbl_792DF8[v148] / (v74 / (double)v73);
      if ( a1 == 2 )
      {
        v42 = sub_4ED1B0(dword_7926F8);
        v131 = v42 / (sub_62FBF0(5) + 1);
      }
      else if ( a1 == 3 )
      {
        v43 = sub_4ED1B0(dword_7926F8);
        v131 = v43 / (sub_62FBF0(2) + 1);
      }
      else
      {
        v131 = ((_WORD)a3 - 1) * sub_4ED1B0(dword_7926F8);
      }
      v44 = sub_62FBF0(v131);
      v45 = sub_62FBF0(v131) + v44;
      v128 = v45 - sub_62FBF0(v131);
      v130 = sub_4ED1B0(dword_7926F8);
      if ( v130 > 10 )
        v130 = 10;
      if ( a1 == 2 )
      {
        v46 = sub_62FBF0(10 - v130);
        v128 -= v46;
      }
      else if ( a1 == 3 )
      {
        v47 = sub_62FBF0(10 - v130);
        v128 -= v47 / 2;
      }
      if ( v128 < -19 )
        v128 = -19;
      if ( (double)v128 / 20.0 + 1.0 >= v129 )
      {
        if ( word_792990[v148] != a1 || !sub_62FBF0(10 - a1) )
          return 0;
        word_792498[v148] = 2;
        return 3;
      }
      if ( !(unsigned __int8)sub_50C2D0(a1, a3) )
      {
        v48 = sub_62FBF0(100);
        if ( v48 < sub_4ECE80(dword_7926F8) )
          word_792498[v148] = 2;
        return 3;
      }
    }
    else if ( !(unsigned __int8)sub_50C2D0(a1, a3) )
    {
      return 1;
    }
  }
  if ( sub_47D6B0((_DWORD *)dword_791364) == 1 )
    v149 = 0;
  else
    v149 = sub_4ED260(dword_7926F8);
  if ( word_792498[v148] == 5 || word_792498[v148] == 13 )
  {
    if ( (a1 != 3 || !sub_62FBF0(v149))
      && (a1 != 2 || !byte_7929D0[v148] || sub_62FBF0(2))
      && (a1 != 3 || !byte_7929D0[v148] || (int)sub_62FBF0(5) >= 2)
      && (a1 != 4 || !byte_7929D0[v148] || !sub_62FBF0(3))
      && (a1 != 5 || !byte_7929D0[v148] || !sub_62FBF0(5)) )
    {
      v49 = word_7929C0[v148];
      v50 = sub_62FBF0(10);
      v51 = sub_62FBF0(100 - v50 * v49);
      if ( v51 < (__int16)sub_50C660(a1, 3) )
      {
        if ( !sub_4F6640((_BYTE *)(dword_791364 + 56)) && !sub_4F66E0(dword_791364 + 56) && word_792498[v148] == 13 )
          return 0;
        sub_4C79D0(dword_7926F8, 3);
        v52 = sub_62FBF0(100);
        if ( v52 >= sub_4EC020(dword_7926F8) )
        {
          v54 = sub_62FBF0(100);
          if ( v54 < sub_4EC040(dword_7926F8) )
            word_792498[v148] = 1;
        }
        else
        {
          v53 = sub_62FBF0(100);
          if ( v53 >= sub_4EC020(dword_7926F8) / 2 )
            word_792498[v148] = 4;
          else
            word_792498[v148] = 3;
        }
        if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
          return 2;
        if ( sub_4F66E0(dword_791364 + 56) && sub_62FBF0(3) )
          return 4;
        return 3;
      }
    }
  }
  else if ( word_792498[v148] == 4 || word_792498[v148] == 12 )
  {
    if ( (a1 != 3 || !sub_62FBF0(v149))
      && (a1 != 2 || !byte_7929D0[v148] || !sub_62FBF0(2))
      && (a1 != 3 || !byte_7929D0[v148] || !sub_62FBF0(3))
      && (a1 != 4 || !byte_7929D0[v148] || !sub_62FBF0(4))
      && (a1 != 5 || !byte_7929D0[v148] || !sub_62FBF0(6)) )
    {
      v55 = word_7929C0[v148];
      v56 = sub_62FBF0(10);
      v57 = sub_62FBF0(100 - v56 * v55);
      if ( v57 < (__int16)sub_50C660(a1, 2) )
      {
        if ( !sub_4F6640((_BYTE *)(dword_791364 + 56)) && !sub_4F66E0(dword_791364 + 56) && word_792498[v148] == 12 )
          return 0;
        sub_4C79D0(dword_7926F8, 2);
        v58 = sub_62FBF0(100);
        if ( v58 >= sub_4EC020(dword_7926F8) )
        {
          v60 = sub_62FBF0(100);
          if ( v60 < sub_4EC040(dword_7926F8) )
            word_792498[v148] = 1;
        }
        else
        {
          v59 = sub_62FBF0(100);
          if ( v59 >= sub_4EC020(dword_7926F8) / 2 )
            word_792498[v148] = 3;
          else
            word_792498[v148] = 2;
        }
        if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
          return 2;
        if ( sub_4F66E0(dword_791364 + 56) && sub_62FBF0(3) )
          return 4;
        if ( word_792498[v148] == 12 )
          return 0;
        return 3;
      }
    }
  }
  else if ( (word_792498[v148] == 3 || word_792498[v148] == 11)
         && (a1 != 3 || !sub_62FBF0(v149))
         && (a1 != 2 || !byte_7929D0[v148] || !sub_62FBF0(3))
         && (a1 != 3 || !byte_7929D0[v148] || !sub_62FBF0(4))
         && (a1 != 4 || !byte_7929D0[v148] || !sub_62FBF0(6))
         && (a1 != 5 || !byte_7929D0[v148] || !sub_62FBF0(8)) )
  {
    v61 = word_7929C0[v148];
    v62 = sub_62FBF0(10);
    v63 = sub_62FBF0(100 - v62 * v61);
    if ( v63 < (__int16)sub_50C660(a1, 1) )
    {
      if ( !sub_4F6640((_BYTE *)(dword_791364 + 56)) && !sub_4F66E0(dword_791364 + 56) && word_792498[v148] == 11 )
        return 0;
      sub_4C79D0(dword_7926F8, 1);
      v64 = sub_62FBF0(100);
      if ( v64 >= sub_4EC020(dword_7926F8) )
      {
        v65 = sub_62FBF0(100);
        if ( v65 < sub_4EC040(dword_7926F8) )
          word_792498[v148] = 1;
      }
      else
      {
        word_792498[v148] = 2;
      }
      if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
        return 2;
      if ( sub_4F66E0(dword_791364 + 56) && sub_62FBF0(3) )
        return 4;
      if ( word_792498[v148] == 11 )
        return 0;
      return 3;
    }
  }
  if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
    goto LABEL_254;
  switch ( word_792498[v148] )
  {
    case 13:
      return 0;
    case 12:
      return 0;
    case 11:
      return 0;
  }
LABEL_254:
  v66 = sub_62FBF0(100);
  if ( v66 < sub_4EC040(dword_7926F8) )
    word_792498[v148] = 1;
  if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
    return 1;
  else
    return 3;
}


//======================================================================
// sub_50BA80
// entry 0050ba80  size 2121  status ok
//======================================================================

double __cdecl sub_50BA80(int a1, int a2)
{
  unsigned __int8 *v2; // eax
  int v3; // esi
  Concurrency::details::SchedulerProxy *v4; // eax
  Concurrency::details::VirtualProcessor *v5; // eax
  __int16 v6; // ax
  __int16 v7; // ax
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // st7
  double v12; // st7
  unsigned __int8 *v14; // [esp-4h] [ebp-198h]
  double v15; // [esp+10h] [ebp-184h]
  double v16; // [esp+1Ch] [ebp-178h]
  double v17; // [esp+28h] [ebp-16Ch]
  _BYTE *v18; // [esp+34h] [ebp-160h]
  __int16 *v19; // [esp+3Ch] [ebp-158h]
  char v20; // [esp+87h] [ebp-10Dh] BYREF
  int v21; // [esp+88h] [ebp-10Ch] BYREF
  __int16 v22[5]; // [esp+8Ch] [ebp-108h] BYREF
  bool v23; // [esp+97h] [ebp-FDh]
  __int16 v24; // [esp+98h] [ebp-FCh]
  __int16 v25; // [esp+9Ch] [ebp-F8h]
  __int16 v26; // [esp+A0h] [ebp-F4h]
  struct Concurrency::IExecutionContext *ExecutingContext; // [esp+A4h] [ebp-F0h]
  __int16 v28; // [esp+A8h] [ebp-ECh]
  char v29; // [esp+AFh] [ebp-E5h]
  double v30; // [esp+B0h] [ebp-E4h]
  double v31; // [esp+B8h] [ebp-DCh]
  double v32; // [esp+C0h] [ebp-D4h]
  double v33; // [esp+C8h] [ebp-CCh]
  double v34; // [esp+D0h] [ebp-C4h]
  double v35; // [esp+D8h] [ebp-BCh]
  double v36; // [esp+E0h] [ebp-B4h]
  double v37; // [esp+E8h] [ebp-ACh]
  double v38; // [esp+F0h] [ebp-A4h]
  double v39; // [esp+F8h] [ebp-9Ch]
  double v40; // [esp+100h] [ebp-94h]
  double v41; // [esp+108h] [ebp-8Ch]
  double v42; // [esp+110h] [ebp-84h]
  __int16 v43; // [esp+11Ch] [ebp-78h]
  __int16 i; // [esp+120h] [ebp-74h]
  int v45; // [esp+124h] [ebp-70h]
  double v46; // [esp+128h] [ebp-6Ch]
  double v47; // [esp+130h] [ebp-64h]
  double v48; // [esp+138h] [ebp-5Ch]
  double v49; // [esp+140h] [ebp-54h]
  double v50; // [esp+148h] [ebp-4Ch]
  double v51; // [esp+150h] [ebp-44h]
  double v52; // [esp+158h] [ebp-3Ch]
  double v53; // [esp+160h] [ebp-34h]
  double v54; // [esp+168h] [ebp-2Ch]
  double v55; // [esp+170h] [ebp-24h]
  double v56; // [esp+178h] [ebp-1Ch]
  double v57; // [esp+180h] [ebp-14h]
  int v58; // [esp+190h] [ebp-4h]

  v45 = sub_47E420((_DWORD *)dword_791364);
  v46 = 1.0;
  v47 = sub_4EBAA0((__int16 *)dword_7926F8) / (double)a2;
  v42 = 0.0;
  v43 = 0;
  v48 = 0.0;
  v49 = 0.0000153907716932927;
  v50 = 0.0002400960384153662;
  v51 = 0.001440576230492197;
  v52 = 0.001965401545233478;
  v53 = 0.003924646781789639;
  v54 = 0.02112845138055222;
  v55 = 0.0475390156062425;
  v56 = 0.4225690276110444;
  v57 = 0.5011773940345369;
  v33 = 0.0;
  v34 = 0.0 + 0.0000153907716932927;
  v35 = v34 + 0.0002400960384153662;
  v36 = v35 + 0.001440576230492197;
  v37 = v36 + 0.001965401545233478;
  v38 = v37 + 0.003924646781789639;
  v39 = v38 + 0.02112845138055222;
  v40 = v39 + 0.0475390156062425;
  v41 = v40 + 0.4225690276110444;
  v43 = word_7920E8[v45]
      + word_792F78[v45]
      + word_7926FC[v45]
      + word_7925C0[v45]
      + word_792248[v45]
      + word_792218[v45]
      + word_792820[v45]
      + word_7920F8[v45]
      + word_792830[v45]
      + word_7929D8[v45];
  v42 = (double)word_7929D8[v45] * 1.0 / (double)v43
      + (1.0 - 0.0) * (double)word_792830[v45] / (double)v43
      + (1.0 - v34) * (double)word_7920F8[v45] / (double)v43
      + (1.0 - v35) * (double)word_792820[v45] / (double)v43
      + (1.0 - v36) * (double)word_792218[v45] / (double)v43
      + (1.0 - v37) * (double)word_792248[v45] / (double)v43
      + (1.0 - v38) * (double)word_7925C0[v45] / (double)v43
      + (1.0 - v39) * (double)word_7926FC[v45] / (double)v43;
  v19 = sub_4C7C40((CRecentFileList **)dword_7926F8, v22);
  v58 = 0;
  v18 = sub_485940(v19, &v21, 1, 1, 1, 1, 0, 0, 0);
  LOBYTE(v58) = 1;
  v14 = (unsigned __int8 *)dword_791380;
  v2 = sub_4A2160(v18, &v20);
  v23 = sub_4A1F00(v2, v14);
  LOBYTE(v58) = 0;
  ATL::CComCriticalSection::~CComCriticalSection(&v21);
  v58 = -1;
  sub_484470(v22);
  if ( v23 )
    v42 = 0.0;
  if ( a1 == 2 )
  {
    v42 = v42 / 5.0;
  }
  else if ( a1 == 3 )
  {
    v42 = v42 / 2.5;
  }
  byte_7929D0[v45] = 0;
  for ( i = 0; ; ++i )
  {
    v3 = i;
    if ( v3 >= sub_47F950() )
      break;
    if ( i != v45 )
    {
      v4 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v4) == 1 )
      {
        if ( sub_4A2440((unsigned __int8 *)(4 * i + 7942160), (unsigned __int8 *)(4 * v45 + 7942160)) )
          byte_7929D0[v45] = 1;
        v31 = 0.0;
        v32 = sub_4ECCB0((int)dword_7926F8, i, a2);
        if ( v32 * dbl_7929E8[8 * v45 + i] <= v47 )
        {
          v5 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
          ExecutingContext = Concurrency::details::VirtualProcessor::GetExecutingContext(v5);
          v25 = sub_4F6880((__int16 *)(dword_791364 + 56), (__int16)ExecutingContext);
          v26 = sub_4F6930((__int16 *)(dword_791364 + 56), (__int16)ExecutingContext);
          v6 = sub_4F6A90(dword_791364 + 56, (__int16)ExecutingContext);
          v24 = v6 - v25;
          v7 = sub_4F6B20(dword_791364 + 56, (__int16)ExecutingContext);
          v28 = v7 - v26;
          if ( v25 < 0 )
            sub_5E9F20((char)"shCurrentBets >= 0", "..\\Casino\\PokerStudAI.cpp", 3580);
          if ( v26 < 0 )
            sub_5E9F20((char)"shCurrentCalls >= 0", "..\\Casino\\PokerStudAI.cpp", 3581);
          if ( v24 < 0 )
            sub_5E9F20((char)"shOldBets >= 0", "..\\Casino\\PokerStudAI.cpp", 3582);
          if ( v28 < 0 )
            sub_5E9F20((char)"shOldCalls >= 0", "..\\Casino\\PokerStudAI.cpp", 3583);
          v29 = 0;
          v8 = sub_4EBAD0(dword_7926F8);
          v17 = v8 * (double)v24 + 1.0;
          v9 = sub_4EBBA0(dword_7926F8);
          v16 = v9 * (double)v28 + v17;
          v10 = sub_4EBC70(dword_7926F8);
          v15 = v10 * (double)v25 + v16;
          v11 = sub_4EBD40(dword_7926F8);
          v31 = v11 * (double)v26 + v15;
        }
        else
        {
          v29 = 1;
        }
        v30 = (double)(dword_791ED8[8 * v45 + i] + dword_792108[8 * v45 + i] + dword_792BE8[8 * v45 + i]);
        if ( v29 )
          v12 = (v42 + 1.0 - (double)dword_792BE8[8 * v45 + i] / v30 - (double)dword_792108[8 * v45 + i] / v30 * 0.25)
              * v46;
        else
          v12 = (v42
               + 1.0
               - (double)dword_792BE8[8 * v45 + i] / v30 * v31
               - v31 * 0.25 * ((double)dword_792108[8 * v45 + i] / v30))
              * v46;
        v46 = v12;
        if ( v12 < 0.0 )
          v46 = 0.0;
      }
    }
  }
  v46 = v46 * dbl_792E38[v45];
  if ( v46 > 100.0 )
    return 100.0;
  return v46;
}


//======================================================================
// sub_50C2D0
// entry 0050c2d0  size 904  status ok
//======================================================================

char __cdecl sub_50C2D0(int a1, int a2)
{
  __int16 ExecutingContext; // ax
  __int16 v3; // ax
  __int16 v4; // ax
  __int16 v5; // si
  double v6; // st7
  double v8; // [esp+20h] [ebp-4Ch]
  __int16 v9; // [esp+30h] [ebp-3Ch]
  __int16 i; // [esp+34h] [ebp-38h]
  int v11; // [esp+38h] [ebp-34h]
  __int16 v12; // [esp+3Ch] [ebp-30h]
  __int16 v13; // [esp+40h] [ebp-2Ch]
  __int16 v14; // [esp+44h] [ebp-28h]
  __int16 v15; // [esp+48h] [ebp-24h]
  Concurrency::details::VirtualProcessor *v16; // [esp+54h] [ebp-18h]
  __int16 v17; // [esp+58h] [ebp-14h]
  double v18; // [esp+5Ch] [ebp-10h]
  __int16 v19; // [esp+68h] [ebp-4h]

  v11 = sub_47E420((_DWORD *)dword_791364);
  v12 = 0;
  for ( i = 0; i < sub_47F950(); ++i )
  {
    if ( i != v11 )
    {
      v16 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v16) == 1 )
      {
        ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v16);
        v12 += sub_4F69E0((__int16 *)(dword_791364 + 56), ExecutingContext);
        v3 = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v16);
        if ( sub_4F6880((__int16 *)(dword_791364 + 56), v3) > 0 )
        {
          v12 = 0;
          break;
        }
      }
    }
  }
  v4 = sub_4EC060(dword_7926F8);
  v15 = sub_62FBF0(v4 + 1);
  v5 = sub_62FBF0(5);
  v13 = sub_62FBF0(word_7929C0[v11]) * v5;
  if ( v13 + v15 * v12 + word_7925B0[v11] <= 10 )
    v6 = dbl_792DF8[v11];
  else
    v6 = (double)(v15 * v12 + word_7925B0[v11] + v13 - 10) / 100.0 + dbl_792DF8[v11];
  v9 = sub_4ECEA0(dword_7926F8, 3);
  v17 = sub_4ECEA0(dword_7926F8, 2);
  v14 = sub_4ECEA0(dword_7926F8, 1);
  v19 = sub_4ED190(dword_7926F8);
  v8 = (double)(int)sub_62FBF0(v19) / 100.0 + 1.0;
  v18 = (v8 - (double)(int)sub_62FBF0(v19) / 100.0) / (double)a2;
  if ( sub_62FBF0(10) < word_7929C0[v11] )
  {
    v9 /= 2;
    v17 /= 2;
    v14 /= 2;
  }
  if ( (double)v9 / 100.0 + v18 >= dbl_792DF8[v11] )
  {
    if ( (double)v17 / 100.0 + v18 >= dbl_792DF8[v11] )
    {
      if ( (double)v14 / 100.0 + v18 >= dbl_792DF8[v11] )
      {
        if ( (double)v9 / 100.0 + v18 >= v6 )
        {
          if ( (double)v17 / 100.0 + v18 >= v6 )
          {
            if ( (double)v14 / 100.0 + v18 >= v6 )
            {
              return 0;
            }
            else
            {
              word_792498[v11] = 11;
              return 1;
            }
          }
          else
          {
            word_792498[v11] = 12;
            return 1;
          }
        }
        else
        {
          word_792498[v11] = 13;
          return 1;
        }
      }
      else
      {
        word_792498[v11] = 3;
        return 1;
      }
    }
    else
    {
      word_792498[v11] = 4;
      return 1;
    }
  }
  else
  {
    word_792498[v11] = 5;
    return 1;
  }
}


//======================================================================
// sub_50C660
// entry 0050c660  size 85  status ok
//======================================================================

__int16 __cdecl sub_50C660(int a1, __int16 a2)
{
  __int16 v3; // [esp+0h] [ebp-4h]

  v3 = sub_4EBE10(dword_7926F8, a2);
  if ( a1 == 5 && sub_4F6640((_BYTE *)(dword_791364 + 56)) )
    v3 += (100 - v3) / 2;
  return v3;
}


//======================================================================
// sub_50C6C0
// entry 0050c6c0  size 221  status ok
//======================================================================

int sub_50C6C0()
{
  __int16 v0; // ax
  __int16 v2; // ax
  __int16 v3; // ax

  dword_7926F8 = (Concurrency::details::VirtualProcessor *)sub_47E3B0((void *)dword_791364);
  if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
  {
    if ( sub_62FBF0(7) )
    {
      return 1;
    }
    else
    {
      v0 = sub_62FBF0(3);
      sub_4C79D0(dword_7926F8, v0 + 1);
      return 2;
    }
  }
  else if ( sub_62FBF0(7) || !sub_4F66E0(dword_791364 + 56) )
  {
    if ( sub_62FBF0(4) )
    {
      v3 = sub_62FBF0(3);
      sub_4C79D0(dword_7926F8, v3 + 1);
      return 3;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v2 = sub_62FBF0(3);
    sub_4C79D0(dword_7926F8, v2 + 1);
    return 4;
  }
}


//======================================================================
// sub_50C7A0
// entry 0050c7a0  size 143  status ok
//======================================================================

void __cdecl sub_50C7A0(int a1, _DWORD *a2)
{
  __int16 v2[4]; // [esp+4h] [ebp-14h] BYREF
  int v3; // [esp+14h] [ebp-4h]

  dword_7926F8 = (Concurrency::details::VirtualProcessor *)sub_47E390(a1);
  sub_4C7C40((CRecentFileList **)dword_7926F8, v2);
  v3 = 0;
  sub_49DB00(v2, a2, (__int16 *)(8 * a1 + 7942032), (__int16 *)(8 * a1 + 7942096));
  v3 = -1;
  sub_484470(v2);
}


//======================================================================
// sub_50C830
// entry 0050c830  size 311  status ok
//======================================================================

int __cdecl sub_50C830(int a1, int a2, int a3)
{
  int result; // eax
  __int16 v4; // [esp+0h] [ebp-Ch]
  __int16 j; // [esp+4h] [ebp-8h]
  __int16 i; // [esp+8h] [ebp-4h]
  __int16 k; // [esp+8h] [ebp-4h]
  __int16 m; // [esp+8h] [ebp-4h]

  dword_7926F8 = (Concurrency::details::VirtualProcessor *)sub_47E390(a1);
  for ( i = 0; i < 7; ++i )
    *(_BYTE *)(a2 + i) = 0;
  *(_BYTE *)(a2 + sub_62FBF0(7)) = 1;
  for ( j = sub_62FBF0(7); *(_BYTE *)(a2 + j); j = sub_62FBF0(7) )
    ;
  *(_BYTE *)(a2 + j) = 1;
  for ( k = 0; k < 7; ++k )
  {
    if ( *(_BYTE *)(a2 + k) )
      *(_WORD *)(a3 + 2 * k) = -1;
    else
      *(_WORD *)(a3 + 2 * k) = -2;
  }
  for ( m = 0; ; ++m )
  {
    result = m;
    if ( m >= 5 )
      break;
    do
      v4 = sub_62FBF0(7);
    while ( *(__int16 *)(a3 + 2 * v4) != -2 );
    *(_WORD *)(a3 + 2 * v4) = m;
  }
  return result;
}


//======================================================================
// sub_50C970
// entry 0050c970  size 47  status ok
//======================================================================

bool __cdecl sub_50C970(int a1)
{
  dword_7926F8 = (Concurrency::details::VirtualProcessor *)sub_47E390(a1);
  return sub_62FBF0(2) == 0;
}


//======================================================================
// sub_50C9A0
// entry 0050c9a0  size 41776  status ok
//======================================================================

int __thiscall sub_50C9A0(void *this, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // esi
  _DWORD *v5; // eax
  Concurrency::details::SchedulerProxy *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  _BYTE *v11; // eax
  _DWORD *v12; // eax
  int v13; // esi
  _BYTE *v14; // eax
  _DWORD *v15; // eax
  ATL::CAtlWinModule *v16; // eax
  int v17; // eax
  CRecentFileList **v18; // eax
  CRecentFileList **v19; // eax
  _DWORD **v20; // eax
  int v21; // eax
  Concurrency::details::SchedulerProxy *v22; // eax
  CRecentFileList **v23; // eax
  int v24; // esi
  Concurrency::details::VirtualProcessor *v25; // eax
  __int16 ExecutingContext; // ax
  int v27; // eax
  _DWORD **v28; // eax
  int v29; // eax
  Concurrency::details::SchedulerProxy *v30; // eax
  int v31; // eax
  Concurrency::details::SchedulerProxy *v32; // eax
  CRecentFileList **v33; // eax
  CRecentFileList **v34; // eax
  int v35; // esi
  Concurrency::details::VirtualProcessor *v36; // eax
  __int16 v37; // ax
  _DWORD *v38; // eax
  _DWORD **v39; // eax
  _DWORD *v40; // eax
  int v41; // eax
  __int16 *v42; // eax
  __int16 *v43; // ecx
  int v44; // eax
  int v45; // eax
  int v46; // esi
  _DWORD *v47; // eax
  int v48; // edi
  _DWORD **v49; // eax
  int *v50; // eax
  _DWORD **v51; // eax
  _DWORD *v52; // eax
  int v53; // esi
  CRecentFileList **v54; // eax
  CRecentFileList **v55; // eax
  CRecentFileList **v56; // eax
  _DWORD **v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  CRecentFileList **v74; // eax
  _DWORD **v75; // eax
  _DWORD **v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  int v80; // eax
  struct CDockablePane *TabbedPane; // esi
  int v82; // esi
  int *v83; // eax
  int v84; // esi
  _DWORD *v85; // eax
  _DWORD **v86; // eax
  _DWORD **v87; // eax
  _DWORD **v88; // eax
  Concurrency::details::SchedulerProxy *v89; // eax
  CRecentFileList **v90; // eax
  _DWORD **v91; // eax
  _DWORD *v92; // eax
  int v93; // esi
  int v94; // edi
  int v95; // edi
  _DWORD *v96; // eax
  _DWORD *v97; // eax
  _DWORD *v98; // eax
  _DWORD *v99; // eax
  _DWORD *v100; // eax
  _WORD *v101; // eax
  CRecentFileList **v102; // eax
  unsigned __int8 *v103; // eax
  _DWORD *v104; // eax
  _DWORD *v105; // eax
  _WORD *v106; // eax
  CRecentFileList **v107; // eax
  unsigned __int8 *v108; // eax
  _DWORD *v109; // eax
  CRecentFileList **v110; // eax
  unsigned __int8 *v111; // eax
  _DWORD *v112; // eax
  CRecentFileList **v113; // eax
  unsigned __int8 *v114; // eax
  CRecentFileList **v115; // eax
  unsigned __int8 *v116; // eax
  _DWORD *v117; // eax
  CRecentFileList **v118; // eax
  _DWORD *v119; // eax
  CRecentFileList **v120; // eax
  _DWORD *v121; // eax
  _WORD *v122; // eax
  CRecentFileList **v123; // eax
  unsigned __int8 *v124; // eax
  CRecentFileList **v125; // eax
  _DWORD *v126; // eax
  _WORD *v127; // eax
  CRecentFileList **v128; // eax
  unsigned __int8 *v129; // eax
  _DWORD *v130; // eax
  _DWORD *v131; // eax
  _DWORD *v132; // eax
  _DWORD *v133; // eax
  int v134; // eax
  int v135; // esi
  __int16 v136; // ax
  _DWORD *v137; // eax
  __int16 v138; // ax
  ATL::CComCriticalSection *v139; // eax
  int v140; // eax
  __int16 v141; // ax
  int v142; // esi
  unsigned int v143; // eax
  _DWORD **v144; // eax
  int v145; // eax
  Concurrency::details::SchedulerProxy *v146; // eax
  Concurrency::details::SchedulerProxy *v147; // eax
  _DWORD *v148; // eax
  Concurrency::details::VirtualProcessor *v149; // eax
  Concurrency::details::VirtualProcessor *v150; // eax
  Concurrency::details::VirtualProcessor *v151; // eax
  Concurrency::details::VirtualProcessor *v152; // eax
  Concurrency::details::VirtualProcessor *v153; // eax
  Concurrency::details::VirtualProcessor *v154; // eax
  _DWORD *v155; // eax
  Concurrency::details::SchedulerProxy *v156; // eax
  int v157; // esi
  _DWORD *v158; // eax
  Concurrency::details::SchedulerProxy *v159; // eax
  Concurrency::details::SchedulerProxy *v160; // eax
  CRecentFileList **v161; // eax
  CRecentFileList **v162; // eax
  CRecentFileList **v163; // eax
  unsigned __int8 *v164; // eax
  int v165; // esi
  _DWORD *v166; // eax
  _DWORD *v167; // eax
  _DWORD *v168; // eax
  Concurrency::details::SchedulerProxy *v169; // eax
  _DWORD *v170; // eax
  Concurrency::details::SchedulerProxy *v171; // eax
  _DWORD *v172; // eax
  _DWORD *v173; // eax
  _DWORD *v174; // eax
  Concurrency::details::VirtualProcessor *v175; // eax
  __int16 v176; // ax
  Concurrency::details::SchedulerProxy *v177; // eax
  CRecentFileList **v178; // eax
  _DWORD **v179; // eax
  int v180; // esi
  __int16 v181; // ax
  _DWORD *v182; // eax
  __int16 v183; // ax
  ATL::CComCriticalSection *v184; // eax
  __int16 v185; // ax
  int v186; // esi
  unsigned int v187; // eax
  int v188; // esi
  __int16 v189; // ax
  _DWORD *v190; // eax
  __int16 v191; // ax
  ATL::CComCriticalSection *v192; // eax
  __int16 v193; // ax
  int v194; // esi
  unsigned int v195; // eax
  _DWORD *v196; // eax
  Concurrency::details::SchedulerProxy *v197; // eax
  int v198; // eax
  _DWORD *v199; // eax
  Concurrency::details::SchedulerProxy *v200; // eax
  int v201; // eax
  Concurrency::details::SchedulerProxy *v202; // eax
  Concurrency::details::SchedulerProxy *v203; // eax
  Concurrency::details::SchedulerProxy *v204; // eax
  Concurrency::details::VirtualProcessor *v205; // eax
  int v206; // eax
  int v207; // eax
  Concurrency::details::SchedulerProxy *v208; // eax
  Concurrency::details::SchedulerProxy *v209; // eax
  int v210; // eax
  Concurrency::details::SchedulerProxy *v211; // eax
  Concurrency::details::SchedulerProxy *v212; // eax
  int v213; // esi
  __int16 v214; // ax
  _DWORD *v215; // eax
  __int16 v216; // ax
  ATL::CComCriticalSection *v217; // eax
  __int16 v218; // ax
  int v219; // esi
  unsigned int v220; // eax
  int v221; // eax
  Concurrency::details::SchedulerProxy *v222; // eax
  Concurrency::details::SchedulerProxy *v223; // eax
  Concurrency::details::VirtualProcessor *v224; // eax
  Concurrency::details::SchedulerProxy *v225; // eax
  Concurrency::details::SchedulerProxy *v226; // eax
  Concurrency::details::SchedulerProxy *v227; // eax
  Concurrency::details::SchedulerProxy *v228; // eax
  Concurrency::details::SchedulerProxy *v229; // eax
  Concurrency::details::SchedulerProxy *v230; // eax
  _DWORD *v231; // eax
  _DWORD *v232; // eax
  _DWORD *v233; // eax
  int v234; // eax
  ATL::CAtlWinModule *v235; // eax
  int v236; // eax
  _DWORD *v237; // eax
  Concurrency::details::SchedulerProxy *v238; // eax
  Concurrency::details::SchedulerProxy *v239; // eax
  int v240; // eax
  _DWORD *v241; // eax
  Concurrency::details::SchedulerProxy *v242; // eax
  Concurrency::details::SchedulerProxy *v243; // eax
  Concurrency::details::SchedulerProxy *v244; // eax
  Concurrency::details::SchedulerProxy *v245; // eax
  _DWORD *v246; // eax
  _DWORD *v247; // eax
  int v248; // eax
  int v249; // eax
  int v250; // eax
  int v251; // eax
  _DWORD **v252; // eax
  int v253; // eax
  Concurrency::details::SchedulerProxy *v254; // eax
  Concurrency::details::SchedulerProxy *v255; // eax
  _DWORD *v256; // eax
  int v257; // eax
  int v258; // eax
  int v259; // esi
  Concurrency::details::SchedulerProxy *v260; // eax
  Concurrency::details::SchedulerProxy *v261; // eax
  _DWORD *v262; // eax
  Concurrency::details::SchedulerProxy *v263; // eax
  Concurrency::details::SchedulerProxy *v264; // eax
  _DWORD *v265; // eax
  _DWORD **v266; // eax
  __int16 v267; // ax
  Concurrency::details::SchedulerProxy *v268; // eax
  __int16 v269; // ax
  Concurrency::details::SchedulerProxy *v270; // eax
  int v271; // esi
  _DWORD *v272; // eax
  _DWORD *v273; // eax
  _DWORD *v274; // eax
  _DWORD *v275; // eax
  _DWORD *v276; // eax
  CRecentFileList **v277; // eax
  CRecentFileList **v278; // eax
  CRecentFileList **v279; // eax
  _DWORD **v280; // eax
  CRecentFileList **v281; // eax
  CRecentFileList **v282; // eax
  CRecentFileList **v283; // eax
  CRecentFileList **v284; // eax
  _DWORD **v285; // eax
  _DWORD **v286; // eax
  CRecentFileList **v287; // eax
  int v288; // eax
  CRecentFileList **v289; // eax
  int v290; // eax
  CRecentFileList **v291; // eax
  _DWORD **v292; // eax
  _DWORD **v293; // eax
  int v294; // eax
  int v295; // esi
  _DWORD *v296; // eax
  ATL::CComCriticalSection *v297; // eax
  int v298; // eax
  int v299; // esi
  unsigned int v300; // eax
  _DWORD *v301; // eax
  _DWORD *v302; // eax
  int v303; // esi
  _DWORD *v304; // eax
  ATL::CComCriticalSection *v305; // eax
  int v306; // eax
  int v307; // esi
  unsigned int v308; // eax
  int v309; // esi
  int v310; // edi
  int v311; // edi
  int v312; // esi
  int v313; // edi
  int v314; // edi
  _WORD *v315; // eax
  int *v316; // eax
  _WORD *v317; // eax
  int *v318; // eax
  _WORD *v319; // eax
  int *v320; // eax
  int v321; // esi
  _DWORD *v322; // eax
  ATL::CComCriticalSection *v323; // eax
  int v324; // eax
  int v325; // esi
  unsigned int v326; // eax
  _DWORD *v327; // eax
  _DWORD *v328; // eax
  int v329; // esi
  _DWORD *v330; // eax
  ATL::CComCriticalSection *v331; // eax
  int v332; // eax
  int v333; // esi
  unsigned int v334; // eax
  int v335; // esi
  int v336; // edi
  int v337; // edi
  int v338; // esi
  int v339; // edi
  int v340; // edi
  int v341; // eax
  _DWORD *v342; // eax
  _DWORD *v343; // eax
  _DWORD *v344; // eax
  _DWORD *v345; // eax
  _DWORD *v346; // eax
  int v347; // esi
  _DWORD *v348; // eax
  ATL::CComCriticalSection *v349; // eax
  int v350; // esi
  unsigned int v351; // eax
  int v352; // eax
  int v353; // eax
  _DWORD *v354; // eax
  _DWORD *v355; // eax
  int v356; // esi
  _DWORD *v357; // eax
  ATL::CComCriticalSection *v358; // eax
  int v359; // eax
  int v360; // eax
  int v361; // esi
  unsigned int v362; // eax
  int v363; // esi
  int v364; // edi
  int v365; // edi
  int v366; // esi
  int v367; // edi
  int v368; // edi
  int v369; // eax
  int v370; // eax
  int v371; // esi
  _DWORD *v372; // eax
  _DWORD *v373; // eax
  _DWORD *v374; // eax
  _DWORD *v375; // eax
  _DWORD *v376; // eax
  int v377; // esi
  _DWORD *v378; // eax
  ATL::CComCriticalSection *v379; // eax
  int v380; // esi
  unsigned int v381; // eax
  int v382; // esi
  int v383; // edi
  int v384; // edi
  int v385; // esi
  int v386; // edi
  int v387; // edi
  _DWORD *v388; // eax
  _DWORD *v389; // eax
  _DWORD *v390; // eax
  CRecentFileList **v391; // eax
  unsigned __int8 *v392; // eax
  _DWORD *v393; // eax
  _DWORD *v394; // eax
  CRecentFileList **v395; // eax
  unsigned __int8 *v396; // eax
  _DWORD *v397; // eax
  _DWORD *v398; // eax
  CRecentFileList **v399; // eax
  unsigned __int8 *v400; // eax
  _DWORD *v401; // eax
  _DWORD *v402; // eax
  _DWORD *v403; // eax
  _DWORD *v404; // eax
  _DWORD *v405; // eax
  _DWORD *v406; // eax
  _DWORD *v407; // eax
  int v408; // esi
  _DWORD *v409; // eax
  Concurrency::details::SchedulerProxy *v410; // eax
  _DWORD *v411; // eax
  Concurrency::details::SchedulerProxy *v412; // eax
  _DWORD *v413; // eax
  CRecentFileList **v414; // eax
  unsigned __int8 *v415; // eax
  CRecentFileList **v416; // eax
  unsigned __int8 *v417; // eax
  _DWORD *v418; // eax
  CRecentFileList **v419; // eax
  unsigned __int8 *v420; // eax
  _DWORD *v421; // eax
  _DWORD *v422; // eax
  _DWORD *v423; // eax
  _DWORD *v424; // eax
  CRecentFileList **v425; // eax
  unsigned __int8 *v426; // eax
  _DWORD *v427; // eax
  CRecentFileList **v428; // eax
  unsigned __int8 *v429; // eax
  _DWORD *v430; // eax
  _DWORD *v431; // eax
  _DWORD *v432; // eax
  _DWORD *v433; // eax
  CRecentFileList **v434; // eax
  unsigned __int8 *v435; // eax
  CRecentFileList **v436; // eax
  unsigned __int8 *v437; // eax
  _DWORD *v438; // eax
  CRecentFileList **v439; // eax
  unsigned __int8 *v440; // eax
  _DWORD *v441; // eax
  _DWORD *v442; // eax
  _DWORD *v443; // eax
  _DWORD *v444; // eax
  CRecentFileList **v445; // eax
  unsigned __int8 *v446; // eax
  _DWORD *v447; // eax
  CRecentFileList **v448; // eax
  unsigned __int8 *v449; // eax
  _DWORD *v450; // eax
  _DWORD *v451; // eax
  _DWORD *v452; // eax
  _DWORD *v453; // eax
  CRecentFileList **v454; // eax
  unsigned __int8 *v455; // eax
  _DWORD *v456; // eax
  CRecentFileList **v457; // eax
  unsigned __int8 *v458; // eax
  _DWORD *v459; // eax
  _DWORD *v460; // eax
  _DWORD *v461; // eax
  _DWORD *v462; // eax
  _DWORD *v463; // eax
  _DWORD *v464; // eax
  _DWORD *v465; // eax
  _DWORD *v466; // eax
  int v467; // eax
  _DWORD *v468; // eax
  _DWORD *v469; // eax
  _DWORD *v470; // eax
  _DWORD *v471; // eax
  __int16 v472; // [esp-Ch] [ebp-778h] BYREF
  int v473; // [esp-8h] [ebp-774h]
  int v474; // [esp-4h] [ebp-770h]
  BOOL v475; // [esp+Ch] [ebp-760h]
  _BYTE *v476; // [esp+10h] [ebp-75Ch]
  __int16 *v477; // [esp+18h] [ebp-754h]
  BOOL v478; // [esp+20h] [ebp-74Ch]
  _BYTE *v479; // [esp+24h] [ebp-748h]
  __int16 *v480; // [esp+2Ch] [ebp-740h]
  BOOL v481; // [esp+34h] [ebp-738h]
  _BYTE *v482; // [esp+38h] [ebp-734h]
  __int16 *v483; // [esp+40h] [ebp-72Ch]
  BOOL v484; // [esp+48h] [ebp-724h]
  _BYTE *v485; // [esp+4Ch] [ebp-720h]
  __int16 *v486; // [esp+54h] [ebp-718h]
  BOOL v487; // [esp+5Ch] [ebp-710h]
  _BYTE *v488; // [esp+60h] [ebp-70Ch]
  __int16 *v489; // [esp+68h] [ebp-704h]
  BOOL v490; // [esp+70h] [ebp-6FCh]
  _BYTE *v491; // [esp+74h] [ebp-6F8h]
  __int16 *v492; // [esp+7Ch] [ebp-6F0h]
  BOOL v493; // [esp+84h] [ebp-6E8h]
  _BYTE *v494; // [esp+88h] [ebp-6E4h]
  __int16 *v495; // [esp+90h] [ebp-6DCh]
  BOOL v496; // [esp+98h] [ebp-6D4h]
  _BYTE *v497; // [esp+9Ch] [ebp-6D0h]
  __int16 *v498; // [esp+A4h] [ebp-6C8h]
  BOOL v499; // [esp+ACh] [ebp-6C0h]
  _BYTE *v500; // [esp+B0h] [ebp-6BCh]
  __int16 *v501; // [esp+B8h] [ebp-6B4h]
  BOOL v502; // [esp+C0h] [ebp-6ACh]
  _BYTE *v503; // [esp+C4h] [ebp-6A8h]
  __int16 *v504; // [esp+CCh] [ebp-6A0h]
  BOOL v505; // [esp+D4h] [ebp-698h]
  _BYTE *v506; // [esp+D8h] [ebp-694h]
  __int16 *v507; // [esp+E0h] [ebp-68Ch]
  BOOL v508; // [esp+E8h] [ebp-684h]
  _BYTE *v509; // [esp+ECh] [ebp-680h]
  __int16 *v510; // [esp+F4h] [ebp-678h]
  BOOL v511; // [esp+FCh] [ebp-670h]
  _BYTE *v512; // [esp+100h] [ebp-66Ch]
  __int16 *v513; // [esp+108h] [ebp-664h]
  BOOL v514; // [esp+110h] [ebp-65Ch]
  _BYTE *v515; // [esp+114h] [ebp-658h]
  __int16 *v516; // [esp+11Ch] [ebp-650h]
  BOOL v517; // [esp+124h] [ebp-648h]
  _BYTE *v518; // [esp+128h] [ebp-644h]
  __int16 *v519; // [esp+130h] [ebp-63Ch]
  _WORD *v520; // [esp+138h] [ebp-634h]
  _WORD *v521; // [esp+13Ch] [ebp-630h]
  _WORD *v522; // [esp+140h] [ebp-62Ch]
  _WORD *v523; // [esp+144h] [ebp-628h]
  _WORD *v524; // [esp+148h] [ebp-624h]
  _WORD *v525; // [esp+14Ch] [ebp-620h]
  int *v526; // [esp+150h] [ebp-61Ch]
  int *v527; // [esp+154h] [ebp-618h]
  __int16 *v528; // [esp+158h] [ebp-614h]
  __int16 *v529; // [esp+15Ch] [ebp-610h]
  int *v530; // [esp+160h] [ebp-60Ch]
  int *v531; // [esp+164h] [ebp-608h]
  int *v532; // [esp+168h] [ebp-604h]
  int *v533; // [esp+16Ch] [ebp-600h]
  int *v534; // [esp+170h] [ebp-5FCh]
  int *v535; // [esp+174h] [ebp-5F8h]
  __int16 *v536; // [esp+178h] [ebp-5F4h]
  __int16 *v537; // [esp+17Ch] [ebp-5F0h]
  __int16 *v538; // [esp+180h] [ebp-5ECh]
  __int16 *v539; // [esp+184h] [ebp-5E8h]
  __int16 *v540; // [esp+188h] [ebp-5E4h]
  __int16 *v541; // [esp+18Ch] [ebp-5E0h]
  __int16 *v542; // [esp+190h] [ebp-5DCh]
  __int16 *v543; // [esp+194h] [ebp-5D8h]
  __int16 *v544; // [esp+198h] [ebp-5D4h]
  __int16 *v545; // [esp+19Ch] [ebp-5D0h]
  int v546; // [esp+1A0h] [ebp-5CCh]
  unsigned __int8 *v547; // [esp+1A4h] [ebp-5C8h]
  __int16 *v548; // [esp+1ACh] [ebp-5C0h]
  _WORD *v549; // [esp+1B4h] [ebp-5B8h]
  _WORD *v550; // [esp+1B8h] [ebp-5B4h]
  int v551; // [esp+1BCh] [ebp-5B0h]
  __int16 *v552; // [esp+1C0h] [ebp-5ACh]
  unsigned __int8 *v553; // [esp+1C8h] [ebp-5A4h]
  __int16 *v554; // [esp+1D0h] [ebp-59Ch]
  _WORD *v555; // [esp+1D8h] [ebp-594h]
  _WORD *v556; // [esp+1DCh] [ebp-590h]
  BOOL v557; // [esp+1E0h] [ebp-58Ch]
  __int16 *v558; // [esp+1E4h] [ebp-588h]
  _BYTE *v559; // [esp+1ECh] [ebp-580h]
  BOOL v560; // [esp+1F4h] [ebp-578h]
  __int16 *v561; // [esp+1F8h] [ebp-574h]
  int v562; // [esp+200h] [ebp-56Ch]
  _BYTE *v563; // [esp+204h] [ebp-568h]
  __int16 *v564; // [esp+20Ch] [ebp-560h]
  _BYTE *v565; // [esp+214h] [ebp-558h]
  __int16 *v566; // [esp+21Ch] [ebp-550h]
  int v567; // [esp+224h] [ebp-548h]
  _BYTE *v568; // [esp+228h] [ebp-544h]
  __int16 *v569; // [esp+230h] [ebp-53Ch]
  int v570; // [esp+238h] [ebp-534h]
  unsigned __int8 *v571; // [esp+23Ch] [ebp-530h]
  __int16 *v572; // [esp+244h] [ebp-528h]
  _WORD *v573; // [esp+24Ch] [ebp-520h]
  _WORD *v574; // [esp+250h] [ebp-51Ch]
  int v575; // [esp+254h] [ebp-518h]
  unsigned __int8 *v576; // [esp+258h] [ebp-514h]
  __int16 *v577; // [esp+260h] [ebp-50Ch]
  _WORD *v578; // [esp+268h] [ebp-504h]
  _WORD *v579; // [esp+26Ch] [ebp-500h]
  __int16 *v580; // [esp+270h] [ebp-4FCh]
  __int16 *v581; // [esp+274h] [ebp-4F8h]
  __int16 *v582; // [esp+278h] [ebp-4F4h]
  __int16 *v583; // [esp+27Ch] [ebp-4F0h]
  __int16 *v584; // [esp+280h] [ebp-4ECh]
  __int16 *v585; // [esp+284h] [ebp-4E8h]
  int *v586; // [esp+288h] [ebp-4E4h]
  __int16 *v587; // [esp+28Ch] [ebp-4E0h]
  __int16 *v588; // [esp+290h] [ebp-4DCh]
  int *v589; // [esp+294h] [ebp-4D8h]
  __int16 *v590; // [esp+298h] [ebp-4D4h]
  __int16 *v591; // [esp+29Ch] [ebp-4D0h]
  int *v592; // [esp+2A0h] [ebp-4CCh]
  __int16 *v593; // [esp+2A4h] [ebp-4C8h]
  __int16 *v594; // [esp+2A8h] [ebp-4C4h]
  __int16 *v595; // [esp+2ACh] [ebp-4C0h]
  __int16 *v596; // [esp+2B0h] [ebp-4BCh]
  int v597; // [esp+2B4h] [ebp-4B8h]
  int v598; // [esp+2B8h] [ebp-4B4h]
  int v599; // [esp+2BCh] [ebp-4B0h]
  int v600; // [esp+2C0h] [ebp-4ACh]
  char v601; // [esp+2C7h] [ebp-4A5h] BYREF
  int v602; // [esp+2C8h] [ebp-4A4h] BYREF
  __int16 v603[5]; // [esp+2CCh] [ebp-4A0h] BYREF
  bool v604; // [esp+2D6h] [ebp-496h]
  char v605; // [esp+2D7h] [ebp-495h] BYREF
  int v606; // [esp+2D8h] [ebp-494h] BYREF
  __int16 v607[5]; // [esp+2DCh] [ebp-490h] BYREF
  bool v608; // [esp+2E6h] [ebp-486h]
  char v609; // [esp+2E7h] [ebp-485h] BYREF
  int v610; // [esp+2E8h] [ebp-484h] BYREF
  __int16 v611[5]; // [esp+2ECh] [ebp-480h] BYREF
  bool v612; // [esp+2F6h] [ebp-476h]
  char v613; // [esp+2F7h] [ebp-475h] BYREF
  int v614; // [esp+2F8h] [ebp-474h] BYREF
  __int16 v615[5]; // [esp+2FCh] [ebp-470h] BYREF
  bool v616; // [esp+306h] [ebp-466h]
  char v617; // [esp+307h] [ebp-465h] BYREF
  int v618; // [esp+308h] [ebp-464h] BYREF
  __int16 v619[5]; // [esp+30Ch] [ebp-460h] BYREF
  bool v620; // [esp+316h] [ebp-456h]
  char v621; // [esp+317h] [ebp-455h] BYREF
  int v622; // [esp+318h] [ebp-454h] BYREF
  __int16 v623[5]; // [esp+31Ch] [ebp-450h] BYREF
  bool v624; // [esp+326h] [ebp-446h]
  char v625; // [esp+327h] [ebp-445h] BYREF
  int v626; // [esp+328h] [ebp-444h] BYREF
  __int16 v627[5]; // [esp+32Ch] [ebp-440h] BYREF
  bool v628; // [esp+336h] [ebp-436h]
  char v629; // [esp+337h] [ebp-435h] BYREF
  int v630; // [esp+338h] [ebp-434h] BYREF
  __int16 v631[5]; // [esp+33Ch] [ebp-430h] BYREF
  bool v632; // [esp+346h] [ebp-426h]
  char v633; // [esp+347h] [ebp-425h] BYREF
  int v634; // [esp+348h] [ebp-424h] BYREF
  __int16 v635[5]; // [esp+34Ch] [ebp-420h] BYREF
  bool v636; // [esp+356h] [ebp-416h]
  char v637; // [esp+357h] [ebp-415h] BYREF
  int v638; // [esp+358h] [ebp-414h] BYREF
  __int16 v639[5]; // [esp+35Ch] [ebp-410h] BYREF
  bool v640; // [esp+366h] [ebp-406h]
  char v641; // [esp+367h] [ebp-405h] BYREF
  int v642; // [esp+368h] [ebp-404h] BYREF
  __int16 v643[5]; // [esp+36Ch] [ebp-400h] BYREF
  bool v644; // [esp+376h] [ebp-3F6h]
  char v645; // [esp+377h] [ebp-3F5h] BYREF
  int v646; // [esp+378h] [ebp-3F4h] BYREF
  __int16 v647[5]; // [esp+37Ch] [ebp-3F0h] BYREF
  bool v648; // [esp+386h] [ebp-3E6h]
  char v649; // [esp+387h] [ebp-3E5h] BYREF
  int v650; // [esp+388h] [ebp-3E4h] BYREF
  __int16 v651[5]; // [esp+38Ch] [ebp-3E0h] BYREF
  bool v652; // [esp+396h] [ebp-3D6h]
  char v653; // [esp+397h] [ebp-3D5h] BYREF
  int v654; // [esp+398h] [ebp-3D4h] BYREF
  __int16 v655[5]; // [esp+39Ch] [ebp-3D0h] BYREF
  bool v656; // [esp+3A6h] [ebp-3C6h]
  char v657; // [esp+3A7h] [ebp-3C5h] BYREF
  int v658; // [esp+3A8h] [ebp-3C4h] BYREF
  __int16 v659[5]; // [esp+3ACh] [ebp-3C0h] BYREF
  bool v660; // [esp+3B7h] [ebp-3B5h]
  __int64 v661; // [esp+3B8h] [ebp-3B4h]
  __int64 v662; // [esp+3C0h] [ebp-3ACh]
  __int64 v663; // [esp+3C8h] [ebp-3A4h]
  __int64 v664; // [esp+3D0h] [ebp-39Ch]
  __int64 v665; // [esp+3D8h] [ebp-394h]
  __int16 v666; // [esp+3E0h] [ebp-38Ch] BYREF
  __int16 v667; // [esp+3E4h] [ebp-388h] BYREF
  __int16 v668; // [esp+3E8h] [ebp-384h] BYREF
  __int64 v669; // [esp+3ECh] [ebp-380h]
  __int64 v670; // [esp+3F4h] [ebp-378h]
  int v671; // [esp+3FEh] [ebp-36Eh] BYREF
  char v672; // [esp+403h] [ebp-369h] BYREF
  void *v673[2]; // [esp+404h] [ebp-368h] BYREF
  char v674; // [esp+40Dh] [ebp-35Fh] BYREF
  int v675; // [esp+40Eh] [ebp-35Eh] BYREF
  int v676; // [esp+412h] [ebp-35Ah] BYREF
  int v677; // [esp+416h] [ebp-356h] BYREF
  char v678; // [esp+41Bh] [ebp-351h] BYREF
  __int16 v679[4]; // [esp+41Ch] [ebp-350h] BYREF
  __int16 v680[4]; // [esp+424h] [ebp-348h] BYREF
  __int16 v681[4]; // [esp+42Ch] [ebp-340h] BYREF
  __int64 v682; // [esp+434h] [ebp-338h]
  __int64 v683; // [esp+43Ch] [ebp-330h]
  __int64 v684; // [esp+444h] [ebp-328h]
  char v685; // [esp+44Fh] [ebp-31Dh] BYREF
  _BYTE v686[8]; // [esp+450h] [ebp-31Ch] BYREF
  void *v687; // [esp+458h] [ebp-314h]
  __int64 v688; // [esp+45Ch] [ebp-310h]
  __int16 v689; // [esp+464h] [ebp-308h] BYREF
  int v690; // [esp+468h] [ebp-304h] BYREF
  __int16 v691[5]; // [esp+46Ch] [ebp-300h] BYREF
  char v692; // [esp+477h] [ebp-2F5h]
  __int16 v693[4]; // [esp+478h] [ebp-2F4h] BYREF
  __int16 v694; // [esp+480h] [ebp-2ECh] BYREF
  int v695; // [esp+484h] [ebp-2E8h] BYREF
  __int16 v696[5]; // [esp+488h] [ebp-2E4h] BYREF
  char v697; // [esp+492h] [ebp-2DAh]
  char v698; // [esp+493h] [ebp-2D9h] BYREF
  __int16 v699[5]; // [esp+494h] [ebp-2D8h] BYREF
  bool v700; // [esp+49Fh] [ebp-2CDh]
  __int16 v701[5]; // [esp+4A0h] [ebp-2CCh] BYREF
  bool v702; // [esp+4AAh] [ebp-2C2h]
  char v703; // [esp+4ABh] [ebp-2C1h] BYREF
  int v704; // [esp+4ACh] [ebp-2C0h] BYREF
  __int16 v705[5]; // [esp+4B0h] [ebp-2BCh] BYREF
  char v706; // [esp+4BBh] [ebp-2B1h] BYREF
  int v707; // [esp+4BCh] [ebp-2B0h] BYREF
  __int16 v708[5]; // [esp+4C0h] [ebp-2ACh] BYREF
  char v709; // [esp+4CAh] [ebp-2A2h]
  char v710; // [esp+4CBh] [ebp-2A1h] BYREF
  int v711; // [esp+4CCh] [ebp-2A0h] BYREF
  __int16 v712[5]; // [esp+4D0h] [ebp-29Ch] BYREF
  char v713; // [esp+4DBh] [ebp-291h]
  __int16 v714; // [esp+4DCh] [ebp-290h] BYREF
  int v715; // [esp+4E0h] [ebp-28Ch] BYREF
  __int16 v716[5]; // [esp+4E4h] [ebp-288h] BYREF
  char v717; // [esp+4EFh] [ebp-27Dh]
  __int16 v718; // [esp+4F0h] [ebp-27Ch] BYREF
  int v719; // [esp+4F4h] [ebp-278h] BYREF
  __int16 v720[4]; // [esp+4F8h] [ebp-274h] BYREF
  char v721; // [esp+501h] [ebp-26Bh]
  char v722; // [esp+502h] [ebp-26Ah] BYREF
  char v723; // [esp+503h] [ebp-269h] BYREF
  __int16 v724[4]; // [esp+504h] [ebp-268h] BYREF
  __int16 v725[4]; // [esp+50Ch] [ebp-260h] BYREF
  __int16 v726[4]; // [esp+514h] [ebp-258h] BYREF
  int v727; // [esp+51Ch] [ebp-250h] BYREF
  __int16 v728[4]; // [esp+520h] [ebp-24Ch] BYREF
  int v729; // [esp+528h] [ebp-244h] BYREF
  __int16 v730[4]; // [esp+52Ch] [ebp-240h] BYREF
  int v731; // [esp+534h] [ebp-238h] BYREF
  __int16 v732[4]; // [esp+538h] [ebp-234h] BYREF
  void *v733; // [esp+540h] [ebp-22Ch]
  int jj; // [esp+544h] [ebp-228h]
  int v735; // [esp+548h] [ebp-224h]
  int v736; // [esp+54Ch] [ebp-220h]
  int v737; // [esp+550h] [ebp-21Ch]
  int v738; // [esp+554h] [ebp-218h]
  int v739; // [esp+558h] [ebp-214h]
  int v740; // [esp+55Ch] [ebp-210h]
  int v741; // [esp+560h] [ebp-20Ch]
  int v742; // [esp+564h] [ebp-208h]
  int v743; // [esp+568h] [ebp-204h]
  __int16 v744; // [esp+56Ch] [ebp-200h] BYREF
  int v745; // [esp+570h] [ebp-1FCh] BYREF
  int v746; // [esp+574h] [ebp-1F8h]
  __int64 v747; // [esp+578h] [ebp-1F4h]
  int v748; // [esp+580h] [ebp-1ECh]
  __int64 v749; // [esp+584h] [ebp-1E8h]
  int v750; // [esp+58Ch] [ebp-1E0h]
  __int64 v751; // [esp+590h] [ebp-1DCh]
  char v752; // [esp+59Bh] [ebp-1D1h]
  int v753; // [esp+59Ch] [ebp-1D0h]
  __int64 v754; // [esp+5A0h] [ebp-1CCh]
  int v755; // [esp+5A8h] [ebp-1C4h]
  __int64 v756; // [esp+5ACh] [ebp-1C0h]
  char v757; // [esp+5B7h] [ebp-1B5h]
  __int16 v758; // [esp+5B8h] [ebp-1B4h]
  __int16 v759; // [esp+5BCh] [ebp-1B0h]
  int v760; // [esp+5C0h] [ebp-1ACh]
  __int64 v761; // [esp+5C4h] [ebp-1A8h]
  int v762; // [esp+5CCh] [ebp-1A0h]
  __int64 v763; // [esp+5D0h] [ebp-19Ch]
  char v764; // [esp+5DBh] [ebp-191h]
  __int16 v765; // [esp+5DCh] [ebp-190h]
  __int16 v766[4]; // [esp+5E0h] [ebp-18Ch] BYREF
  int v767; // [esp+5E8h] [ebp-184h] BYREF
  __int16 v768[4]; // [esp+5ECh] [ebp-180h] BYREF
  int v769; // [esp+5F4h] [ebp-178h] BYREF
  int v770; // [esp+5F8h] [ebp-174h] BYREF
  __int16 v771[4]; // [esp+5FCh] [ebp-170h] BYREF
  __int16 v772[4]; // [esp+604h] [ebp-168h] BYREF
  __int16 v773[4]; // [esp+60Ch] [ebp-160h] BYREF
  __int16 v774[4]; // [esp+614h] [ebp-158h] BYREF
  int v775; // [esp+61Ch] [ebp-150h] BYREF
  __int16 v776[4]; // [esp+620h] [ebp-14Ch] BYREF
  __int16 v777; // [esp+628h] [ebp-144h]
  _WORD v778[18]; // [esp+62Ch] [ebp-140h] BYREF
  __int16 n; // [esp+650h] [ebp-11Ch]
  __int16 v780; // [esp+654h] [ebp-118h]
  __int16 v781; // [esp+658h] [ebp-114h]
  __int16 ii; // [esp+65Ch] [ebp-110h]
  _BYTE v783[8]; // [esp+660h] [ebp-10Ch] BYREF
  int v784; // [esp+668h] [ebp-104h]
  int v785; // [esp+66Ch] [ebp-100h]
  char v786[16]; // [esp+670h] [ebp-FCh] BYREF
  char v787[8]; // [esp+680h] [ebp-ECh] BYREF
  __int16 v788; // [esp+68Ch] [ebp-E0h]
  __int16 v789; // [esp+690h] [ebp-DCh]
  __int16 m; // [esp+694h] [ebp-D8h]
  __int16 v791; // [esp+698h] [ebp-D4h]
  int v792; // [esp+69Ch] [ebp-D0h]
  int v793; // [esp+6A0h] [ebp-CCh]
  _DWORD **v794; // [esp+6A4h] [ebp-C8h]
  int k; // [esp+6A8h] [ebp-C4h]
  int v796[3]; // [esp+6ACh] [ebp-C0h] BYREF
  int v797; // [esp+6B8h] [ebp-B4h]
  int v798; // [esp+6BCh] [ebp-B0h]
  __int64 v799; // [esp+6C0h] [ebp-ACh]
  __int16 v800; // [esp+6C8h] [ebp-A4h]
  __int16 v801; // [esp+6CCh] [ebp-A0h]
  __int16 j; // [esp+6D0h] [ebp-9Ch]
  __int16 v803; // [esp+6D4h] [ebp-98h]
  int v804; // [esp+6D8h] [ebp-94h]
  __int64 v805; // [esp+6DCh] [ebp-90h]
  int v806; // [esp+6E4h] [ebp-88h]
  __int64 v807; // [esp+6E8h] [ebp-84h]
  __int16 v808; // [esp+6F0h] [ebp-7Ch]
  char v809; // [esp+6F7h] [ebp-75h]
  __int16 v810; // [esp+6F8h] [ebp-74h]
  __int16 v811; // [esp+6FCh] [ebp-70h]
  __int16 i; // [esp+700h] [ebp-6Ch]
  __int16 v813; // [esp+704h] [ebp-68h]
  int v814; // [esp+708h] [ebp-64h] BYREF
  __int16 v815[4]; // [esp+70Ch] [ebp-60h] BYREF
  int v816; // [esp+714h] [ebp-58h]
  int v817; // [esp+718h] [ebp-54h]
  __int64 v818; // [esp+71Ch] [ebp-50h]
  unsigned int v819; // [esp+724h] [ebp-48h]
  unsigned int v820; // [esp+728h] [ebp-44h]
  unsigned int v821; // [esp+72Ch] [ebp-40h]
  __int16 v822[4]; // [esp+730h] [ebp-3Ch] BYREF
  int v823; // [esp+738h] [ebp-34h] BYREF
  int v824; // [esp+73Ch] [ebp-30h] BYREF
  __int16 v825[4]; // [esp+740h] [ebp-2Ch] BYREF
  int v826; // [esp+748h] [ebp-24h] BYREF
  int v827; // [esp+74Ch] [ebp-20h]
  __int16 v828; // [esp+750h] [ebp-1Ch]
  _BYTE v829[8]; // [esp+754h] [ebp-18h] BYREF
  __int16 *v830; // [esp+75Ch] [ebp-10h]
  int v831; // [esp+768h] [ebp-4h]

  v598 = (int)this;
  v600 = 0;
  v599 = 0;
  if ( (dword_793150 & 1) == 0 )
  {
    dword_793150 |= 1u;
    sub_4A20D0(&dword_79314C);
    atexit(sub_6B1B00);
    v831 = -1;
  }
  if ( (dword_793150 & 2) == 0 )
  {
    dword_793150 |= 2u;
    sub_4A20D0(&dword_793148);
    atexit(sub_6B1AF0);
    v831 = -1;
  }
  v830 = *(__int16 **)(*(_DWORD *)(v598 + 12) + 4);
  sub_5FC3A0(a2);
  result = *(_DWORD *)(v598 + 20);
  v597 = result;
  switch ( result )
  {
    case 0:
      if ( (int)dword_793070 < 2
        || sub_47E190((_DWORD *)dword_791364) == 1 && (int)dword_793070 > 7
        || sub_47E190((_DWORD *)dword_791364) == 7 && (int)dword_793070 > 7 )
      {
        goto LABEL_7;
      }
      if ( sub_47E190((_DWORD *)dword_791364) == 1 )
      {
        dword_793078 = 2;
      }
      else if ( sub_47E190((_DWORD *)dword_791364) == 2 )
      {
        dword_793078 = 1;
      }
      else if ( sub_47E190((_DWORD *)dword_791364) == 7 )
      {
        dword_793078 = 7;
      }
      for ( word_793144 = 0; ; ++word_793144 )
      {
        v3 = word_793144;
        if ( v3 >= sub_47F950() )
          break;
        for ( word_793140 = 0; ; ++word_793140 )
        {
          v4 = word_793140;
          if ( v4 >= sub_47F950() )
            break;
          v5 = (_DWORD *)sub_47E390(word_793144);
          if ( sub_4C6CB0(v5) )
          {
            v6 = (Concurrency::details::SchedulerProxy *)sub_47E390(word_793140);
            if ( Concurrency::details::SchedulerProxy::GetQueueLength(v6) )
            {
              if ( sub_47E190((_DWORD *)dword_791364) != 1
                || sub_47E280((_DWORD *)dword_791364)
                || sub_47D770((_DWORD *)dword_791364) )
              {
                if ( sub_47E190((_DWORD *)dword_791364) == 1 )
                {
                  LOWORD(v474) = (_WORD)dword_793070;
                  LOWORD(v473) = word_793140;
                  v8 = (_DWORD *)sub_47E390(word_793144);
                  sub_4D9270(v8, v473, v474);
                }
                else if ( sub_47E190((_DWORD *)dword_791364) == 2 )
                {
                  LOWORD(v474) = (_WORD)dword_793070;
                  LOWORD(v473) = word_793140;
                  v9 = (_DWORD *)sub_47E390(word_793144);
                  sub_4EC290(v9, v473, v474);
                }
                else if ( sub_47E190((_DWORD *)dword_791364) == 7 )
                {
                  LOWORD(v474) = (_WORD)dword_793070;
                  LOWORD(v473) = word_793140;
                  v10 = (_DWORD *)sub_47E390(word_793144);
                  sub_4F3200(v10, v473, v474);
                }
              }
              else
              {
                LOWORD(v474) = (_WORD)dword_793070;
                LOWORD(v473) = word_793140;
                v7 = (_DWORD *)sub_47E390(word_793144);
                sub_4D6EE0(v7, v473, v474);
              }
              v11 = (_BYTE *)sub_47E390(word_793144);
              sub_4C6ED0(v11, 0);
              v12 = (_DWORD *)sub_47E390(word_793144);
              v13 = sub_4C6E70(v12);
              if ( v13 > sub_62FBF0(100) )
              {
                v14 = (_BYTE *)sub_47E390(word_793144);
                sub_4C6ED0(v14, 1);
              }
            }
          }
        }
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 1);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 1:
      for ( dword_79313C = 0; dword_79313C < sub_47F950(); ++dword_79313C )
      {
        v15 = (_DWORD *)sub_47E390(dword_79313C);
        if ( sub_4C6CB0(v15) == 2 || byte_791360 )
        {
          if ( sub_47E190((_DWORD *)dword_791364) == 7 )
          {
            v16 = (ATL::CAtlWinModule *)sub_47E390(dword_79313C);
            ATL::CAtlWinModule::~CAtlWinModule(v16);
          }
          else
          {
            v17 = sub_47E390(dword_79313C);
            sub_4C76E0(v17);
            v474 = (int)v829;
            v18 = (CRecentFileList **)sub_47E390(dword_79313C);
            sub_4C8700(v18, (__int16 *)v474);
            v831 = 2;
            v474 = 3;
            v733 = &v472;
            v596 = sub_484320(&v472, (int)v829);
            v595 = v596;
            LOBYTE(v831) = 3;
            v19 = (CRecentFileList **)sub_47E390(dword_79313C);
            LOBYTE(v831) = 2;
            sub_4C88A0(v19, v472, v473, v474);
            v831 = -1;
            sub_484470(v829);
          }
        }
      }
      if ( sub_47E190((_DWORD *)dword_791364) == 7 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 3);
      else
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 14);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 28))(v598, 30);
    case 2:
      *(_DWORD *)(dword_791364 + 1040) = 0;
      for ( dword_793138 = 0; dword_793138 < sub_47F950(); ++dword_793138 )
      {
        v20 = (_DWORD **)sub_47E390(dword_793138);
        sub_4DC490(v20);
      }
      byte_793032 = 0;
      if ( byte_793030 )
        goto LABEL_57;
      sub_4A2100(
        &dword_79314C,
        (_BYTE *)dword_7913CC,
        (_BYTE *)dword_7913C8,
        (unsigned __int8 *)&byte_7913FF,
        (unsigned __int8 *)&byte_7913FF,
        (unsigned __int8 *)&byte_7913FF,
        (unsigned __int8 *)&byte_7913FF);
      dword_793134 = -1;
      v21 = sub_47BBC0((_DWORD *)dword_791364);
      sub_47E400((_DWORD *)dword_791364, v21);
      do
      {
        sub_47E440((_DWORD *)dword_791364);
        v22 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v22) == 1 )
        {
          v23 = (CRecentFileList **)sub_47E3B0((void *)dword_791364);
          v594 = sub_4C8300(v23, v732);
          v593 = v594;
          v831 = 4;
          v592 = sub_485940(v594, &v731, 1, 1, 1, 1, 0, 0, 0);
          dword_793148 = *v592;
          ATL::CComCriticalSection::~CComCriticalSection(&v731);
          v831 = -1;
          sub_484470(v732);
          if ( sub_4A2550((unsigned __int8 *)&dword_793148, (unsigned __int8 *)&dword_79314C) )
          {
            dword_79314C = dword_793148;
            dword_793134 = sub_47E420((_DWORD *)dword_791364);
          }
        }
        v24 = sub_47E420((_DWORD *)dword_791364);
      }
      while ( v24 != sub_47BBC0((_DWORD *)dword_791364) );
      if ( dword_793134 < 0 )
        sub_5E9F20((char)"nBestShowingIndex >= 0", "..\\Casino\\PokerStudScript.cpp", 882);
      sub_47E400((_DWORD *)dword_791364, dword_793134);
      LOWORD(v474) = word_7205D8 + 1;
      v25 = (Concurrency::details::VirtualProcessor *)sub_47E3B0((void *)dword_791364);
      ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v25);
      sub_4F5530((__int16 *)(dword_791364 + 56), ExecutingContext, v474);
      dword_793034 = sub_517770();
      sub_47E500();
      if ( dword_793034 < 0 )
        sub_5E9F20((char)"nNextPlayer >= 0", "..\\Casino\\PokerStudScript.cpp", 897);
      v27 = sub_47E490(
              (Concurrency::details::VirtualProcessor **)dword_791364,
              (struct Concurrency::IExecutionContext *)dword_793034);
      sub_47E400((_DWORD *)dword_791364, v27);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 4);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 3:
      *(_DWORD *)(dword_791364 + 1040) = 0;
      for ( dword_793138 = 0; dword_793138 < sub_47F950(); ++dword_793138 )
      {
        v28 = (_DWORD **)sub_47E390(dword_793138);
        sub_4DC490(v28);
      }
      byte_793032 = 0;
      if ( byte_793030 )
      {
LABEL_57:
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 13);
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 28))(v598, 30);
      }
      else
      {
        if ( sub_47D770((_DWORD *)dword_791364) == 4 )
        {
          sub_5025C0();
        }
        else if ( sub_47E190((_DWORD *)dword_791364) == 2 )
        {
          sub_502CF0();
        }
        if ( sub_47E190((_DWORD *)dword_791364) == 7 )
        {
          v29 = sub_47BBC0((_DWORD *)dword_791364);
          sub_47E400((_DWORD *)dword_791364, v29);
          do
          {
            sub_47E440((_DWORD *)dword_791364);
            v30 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
          }
          while ( Concurrency::details::SchedulerProxy::GetQueueLength(v30) != 1 );
        }
        else
        {
          sub_4A2100(
            &dword_79314C,
            (_BYTE *)dword_791390,
            &byte_7913FF,
            (unsigned __int8 *)&byte_7913FF,
            (unsigned __int8 *)&byte_7913FF,
            (unsigned __int8 *)&byte_7913FF,
            (unsigned __int8 *)&byte_7913FF);
          dword_793134 = -1;
          v31 = sub_47BBC0((_DWORD *)dword_791364);
          sub_47E400((_DWORD *)dword_791364, v31);
          do
          {
            sub_47E440((_DWORD *)dword_791364);
            v32 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
            if ( Concurrency::details::SchedulerProxy::GetQueueLength(v32) == 1 )
            {
              if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
              {
                v33 = (CRecentFileList **)sub_47E3B0((void *)dword_791364);
                v591 = sub_4C84A0(v33, v730);
                v590 = v591;
                v831 = 5;
                v589 = sub_485940(v591, &v729, 1, 1, 1, 1, 0, 0, 0);
                dword_793148 = *v589;
                ATL::CComCriticalSection::~CComCriticalSection(&v729);
                v831 = -1;
                sub_484470(v730);
              }
              else
              {
                v34 = (CRecentFileList **)sub_47E3B0((void *)dword_791364);
                v588 = sub_4C8300(v34, v728);
                v587 = v588;
                v831 = 6;
                v586 = sub_485940(v588, &v727, 1, 1, 1, 1, 0, 0, 0);
                dword_793148 = *v586;
                ATL::CComCriticalSection::~CComCriticalSection(&v727);
                v831 = -1;
                sub_484470(v728);
              }
              if ( sub_4A2440((unsigned __int8 *)&dword_793148, (unsigned __int8 *)&dword_79314C) )
              {
                dword_79314C = dword_793148;
                dword_793134 = sub_47E420((_DWORD *)dword_791364);
              }
            }
            v35 = sub_47E420((_DWORD *)dword_791364);
          }
          while ( v35 != sub_47BBC0((_DWORD *)dword_791364) );
          if ( dword_793134 < 0 )
            sub_5E9F20((char)"nBestShowingIndex >= 0", "..\\Casino\\PokerStudScript.cpp", 966);
          sub_47E400((_DWORD *)dword_791364, dword_793134);
        }
        LOWORD(v474) = word_7205D8;
        v36 = (Concurrency::details::VirtualProcessor *)sub_47E3B0((void *)dword_791364);
        v37 = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v36);
        sub_4F5530((__int16 *)(dword_791364 + 56), v37, v474);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 4);
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
      }
    case 4:
      v38 = (_DWORD *)sub_47E3B0((void *)dword_791364);
      if ( sub_4C6CB0(v38) != 2 || *(_BYTE *)(dword_791364 + 200) )
      {
        v39 = (_DWORD **)sub_47E3B0((void *)dword_791364);
        sub_4DC4D0(v39, 99, 0);
      }
      *(_BYTE *)(dword_791364 + 232) = 1;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 5);
      v40 = (_DWORD *)sub_47E3B0((void *)dword_791364);
      if ( sub_4C6CB0(v40) == 2 )
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
      v41 = sub_47CBA0();
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 28))(v598, v41);
    case 5:
      if ( byte_793109 )
      {
        byte_793109 = 0;
        dword_793130 = 5;
      }
      else
      {
        dword_793130 = sub_517A30();
      }
      if ( dword_793130 == 5 )
      {
        v828 = 0;
        switch ( dword_793100 )
        {
          case 5:
            v828 = 0;
            break;
          case 2:
            v828 = 2;
            break;
          case 1:
            v828 = 1;
            break;
          case 4:
            v828 = 2;
            break;
          case 3:
            v828 = 1;
            break;
          default:
            if ( dword_793100 )
              sub_5E9F20((char)"0", "..\\Casino\\PokerStudScript.cpp", 1023);
            else
              v828 = 3;
            break;
        }
        if ( sub_47D6B0((_DWORD *)dword_791364) )
        {
          if ( sub_4F6640((_BYTE *)(dword_791364 + 56))
            || (v46 = sub_4F67D0((__int16 *)(dword_791364 + 56)),
                v47 = (_DWORD *)sub_47E3B0((void *)dword_791364),
                v48 = sub_4C6A70(v47),
                v46 < v48 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364)) )
          {
            sub_467FE0(*(_DWORD *)(dword_791EB8 + 156), -1, 0, 0, v828);
          }
          else
          {
            sub_467FE0(*(_DWORD *)(dword_791EB8 + 156), 0, 0, 0, v828);
          }
        }
        else
        {
          v42 = (__int16 *)(3 - (sub_47E190((_DWORD *)dword_791364) != 1));
          if ( (__int16 *)dword_793078 == v42 )
          {
            LOWORD(v43) = v828;
            v474 = (int)v43;
            v44 = sub_517310();
            sub_467FE0(*(_DWORD *)(dword_791EB8 + 156), v44, 1, 0, v474);
          }
          else
          {
            LOWORD(v42) = v828;
            v474 = (int)v42;
            v45 = sub_517310();
            sub_467FE0(*(_DWORD *)(dword_791EB8 + 156), v45, 0, 0, v474);
          }
        }
        v49 = (_DWORD **)sub_47E3B0((void *)dword_791364);
        sub_4DC490(v49);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 8);
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
      }
      else
      {
        if ( sub_47D6B0((_DWORD *)dword_791364) == 1 && (dword_793130 == 2 || dword_793130 == 4) )
        {
          v50 = (int *)sub_47E3B0((void *)dword_791364);
          dword_79305C = sub_4C7970(v50);
        }
        v51 = (_DWORD **)sub_47E3B0((void *)dword_791364);
        sub_4DC490(v51);
        if ( dword_793130 == 2 && sub_47D6B0((_DWORD *)dword_791364) == 1 )
        {
          v52 = (_DWORD *)sub_47E3B0((void *)dword_791364);
          v53 = sub_4C6A70(v52);
          v827 = v53 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
          if ( v827 < (int)CMDIChildWndEx::GetTabbedPane((CMDIChildWndEx *)dword_791364) )
            dword_793130 = 1;
        }
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 9);
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
      }
    case 6:
      if ( !CMFCBaseTabCtrl::IsAutoColor(*(CMFCBaseTabCtrl **)(dword_791EB8 + 156)) )
        goto LABEL_222;
      if ( CMFCBaseTabCtrl::IsAutoColor(*(CMFCBaseTabCtrl **)(dword_791EB8 + 156)) == 2 )
      {
        if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
          dword_793130 = 2;
        else
          dword_793130 = 4;
        if ( sub_47D6B0((_DWORD *)dword_791364) == 1 )
        {
          TabbedPane = CMDIChildWndEx::GetTabbedPane((CMDIChildWndEx *)dword_791364);
          v821 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * (_DWORD)TabbedPane;
          if ( (unsigned __int8)sub_516DD0() )
            v82 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
          else
            v82 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
          v819 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v82;
          v820 = 0;
          if ( sub_47D6B0((_DWORD *)dword_791364) == 1 && (dword_793100 == 2 || dword_793100 == 4) )
          {
            v83 = (int *)sub_47E3B0((void *)dword_791364);
            v84 = sub_4C7970(v83);
            v820 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v84;
          }
          if ( sub_4F6690((_BYTE *)(dword_791364 + 56)) && !sub_4F66E0(dword_791364 + 56) )
            sub_5E9F20((char)"pokerGame->thePot.IsRaisePossible()", "..\\Casino\\PokerStudScript.cpp", 1300);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 7);
          return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
        }
      }
      else if ( CMFCBaseTabCtrl::IsAutoColor(*(CMFCBaseTabCtrl **)(dword_791EB8 + 156)) == 1 )
      {
        if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
          dword_793130 = 1;
        else
          dword_793130 = 3;
      }
      else
      {
        if ( CMFCBaseTabCtrl::IsAutoColor(*(CMFCBaseTabCtrl **)(dword_791EB8 + 156)) != 3 )
        {
LABEL_222:
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 6);
          return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
        }
        dword_793130 = 0;
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 10);
      v473 = dword_793130;
      v85 = (_DWORD *)sub_47E3B0((void *)dword_791364);
      return sub_4CC890(v85, v473, v598);
    case 8:
      if ( !sub_47E280((_DWORD *)dword_791364) )
      {
        sub_484300(v825);
        v831 = 7;
        if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
        {
          v54 = (CRecentFileList **)sub_47E3B0((void *)dword_791364);
          v585 = sub_4C80B0(v54, v726);
          v584 = v585;
          LOBYTE(v831) = 8;
          sub_484490(v825, v585);
          LOBYTE(v831) = 7;
          sub_484470(v726);
        }
        else if ( sub_47D6F0((_DWORD *)dword_791364) == 2 )
        {
          v55 = (CRecentFileList **)sub_47E3B0((void *)dword_791364);
          v583 = sub_4C8210(v55, v725);
          v582 = v583;
          LOBYTE(v831) = 9;
          sub_484490(v825, v583);
          LOBYTE(v831) = 7;
          sub_484470(v725);
        }
        else
        {
          v56 = (CRecentFileList **)sub_47E3B0((void *)dword_791364);
          v581 = sub_4C7C40(v56, v724);
          v580 = v581;
          LOBYTE(v831) = 10;
          sub_484490(v825, v581);
          LOBYTE(v831) = 7;
          sub_484470(v724);
        }
        sub_485940(v825, &v826, 1, 1, 1, 1, 0, 0, 0);
        LOBYTE(v831) = 11;
        LOBYTE(v474) = *sub_4A2160(&v826, &v723);
        v57 = (_DWORD **)sub_47E3B0((void *)dword_791364);
        sub_4DA4D0(v57, v474);
        if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
        {
          if ( dword_793078 == 3 )
          {
            if ( ++word_79312C > 3 )
              word_79312C = 1;
            switch ( word_79312C )
            {
              case 1:
                v58 = sub_630F40("SID_POKER_3AND9WILD");
                (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                  *(_DWORD *)(dword_791364 + 220),
                  v58);
                (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(dword_791364 + 224) + 180))(
                  *(_DWORD *)(dword_791364 + 224),
                  &Source);
                break;
              case 2:
                v59 = sub_630F40("SID_POKER_3REQUIRESMATCHOFPOT");
                (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                  *(_DWORD *)(dword_791364 + 220),
                  v59);
                (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(dword_791364 + 224) + 180))(
                  *(_DWORD *)(dword_791364 + 224),
                  &Source);
                break;
              case 3:
                v60 = sub_630F40("SID_POKER_4RECEIVESANOTHERCARD");
                (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                  *(_DWORD *)(dword_791364 + 220),
                  v60);
                (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(dword_791364 + 224) + 180))(
                  *(_DWORD *)(dword_791364 + 224),
                  &Source);
                break;
              default:
                sub_5E9F20((char)"0", "..\\Casino\\PokerStudScript.cpp", 1114);
                break;
            }
            goto LABEL_184;
          }
          goto LABEL_183;
        }
        if ( sub_47D6F0((_DWORD *)dword_791364) == 2 )
        {
          if ( dword_793078 == 3 )
          {
            if ( ++word_793128 > 3 )
              word_793128 = 1;
            switch ( word_793128 )
            {
              case 1:
                v61 = sub_630F40("SID_POKER_HIGHSPADESPLITSPOT");
                (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                  *(_DWORD *)(dword_791364 + 220),
                  v61);
                v62 = sub_630F40("SID_POKER_QOFSPADESFORCESREDEAL");
                (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
                  *(_DWORD *)(dword_791364 + 224),
                  v62);
                break;
              case 2:
                v63 = sub_630F40("SID_POKER_HIGHSPADESPLITSPOT");
                (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                  *(_DWORD *)(dword_791364 + 220),
                  v63);
                v64 = sub_630F40("SID_POKER_QOFSPADESINTHEHOLEISWILD");
                (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
                  *(_DWORD *)(dword_791364 + 224),
                  v64);
                break;
              case 3:
                v65 = sub_630F40("SID_POKER_QOFSPADESFORCESREDEAL");
                (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                  *(_DWORD *)(dword_791364 + 220),
                  v65);
                v66 = sub_630F40("SID_POKER_QOFSPADESINTHEHOLEISWILD");
                (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
                  *(_DWORD *)(dword_791364 + 224),
                  v66);
                break;
              default:
                sub_5E9F20((char)"0", "..\\Casino\\PokerStudScript.cpp", 1146);
                break;
            }
            goto LABEL_184;
          }
          goto LABEL_183;
        }
        if ( sub_47D770((_DWORD *)dword_791364) == 4 )
        {
          if ( dword_793078 == 3 )
          {
            v67 = sub_630F40("SID_POKER_HIGHSPADEINTHEHOLESPLITSPOT");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v67);
            v68 = sub_630F40("SID_POKER_HIGHHANDSHOWINGOPENS");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v68);
            goto LABEL_184;
          }
        }
        else
        {
          if ( sub_47D770((_DWORD *)dword_791364) != 2 )
          {
            if ( sub_47E190((_DWORD *)dword_791364) == 2 )
            {
              if ( dword_793078 == 2 )
              {
                v71 = sub_630F40("SID_POKER_HIGHHANDSHOWINGOPENS");
                (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                  *(_DWORD *)(dword_791364 + 220),
                  v71);
              }
              else
              {
                (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(dword_791364 + 220) + 180))(
                  *(_DWORD *)(dword_791364 + 220),
                  &Source);
              }
              (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(dword_791364 + 224) + 180))(
                *(_DWORD *)(dword_791364 + 224),
                &Source);
              goto LABEL_184;
            }
            if ( dword_793078 == 3 )
            {
              if ( sub_47D6B0((_DWORD *)dword_791364) )
                v72 = sub_630F40("SID_POKER_HIGHHANDSHOWINGOPENS");
              else
                v72 = sub_630F40("SID_POKER_WORSTCARDSHOWINGBLINDOPEN");
              (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                *(_DWORD *)(dword_791364 + 220),
                v72);
              (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(dword_791364 + 224) + 180))(
                *(_DWORD *)(dword_791364 + 224),
                &Source);
              goto LABEL_184;
            }
            if ( dword_793078 != 4 || sub_47D6B0((_DWORD *)dword_791364) )
              goto LABEL_183;
            v73 = sub_630F40("SID_POKER_HIGHHANDSHOWINGOPENS");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v73);
            (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              &Source);
LABEL_184:
            ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)dword_791364);
            LOBYTE(v831) = 7;
            ATL::CComCriticalSection::~CComCriticalSection(&v826);
            v831 = -1;
            sub_484470(v825);
            goto LABEL_197;
          }
          if ( dword_793078 == 3 )
          {
            v69 = sub_630F40("SID_POKER_QOFSPADESFORCESREDEAL");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v69);
            v70 = sub_630F40("SID_POKER_QOFSPADESINTHEHOLESPLITSPOT");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v70);
            goto LABEL_184;
          }
        }
LABEL_183:
        (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(dword_791364 + 220) + 180))(
          *(_DWORD *)(dword_791364 + 220),
          &Source);
        (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(dword_791364 + 224) + 180))(
          *(_DWORD *)(dword_791364 + 224),
          &Source);
        goto LABEL_184;
      }
      if ( sub_47E280((_DWORD *)dword_791364) != 2 )
        sub_5E9F20((char)"pokerGame->GetHighlowType() == HIGHLOW", "..\\Casino\\PokerStudScript.cpp", 1224);
      v74 = (CRecentFileList **)sub_47E3B0((void *)dword_791364);
      sub_4C7C40(v74, v822);
      v831 = 12;
      sub_485940(v822, &v824, 1, 1, 1, 1, 0, 0, 0);
      LOBYTE(v831) = 13;
      sub_485940(v822, &v823, 0, 1, 1, 0, 0, 0, 0);
      LOBYTE(v831) = 14;
      LOBYTE(v474) = *sub_4A2160(&v824, &v722);
      v75 = (_DWORD **)sub_47E3B0((void *)dword_791364);
      sub_4DA4D0(v75, v474);
      LOWORD(v474) = v823;
      v76 = (_DWORD **)sub_47E3B0((void *)dword_791364);
      sub_4DB070(v76, v474);
      if ( dword_793078 == 3 )
      {
        if ( sub_47D6B0((_DWORD *)dword_791364) )
          v77 = sub_630F40("SID_POKER_HIGHHANDSHOWINGOPENS");
        else
          v77 = sub_630F40("SID_POKER_WORSTCARDSHOWINGBLINDOPEN");
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
          *(_DWORD *)(dword_791364 + 220),
          v77);
        v78 = sub_630F40("SID_POKER_BESTLOWHAND");
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
          *(_DWORD *)(dword_791364 + 224),
          v78);
      }
      else if ( dword_793078 != 4 || sub_47D6B0((_DWORD *)dword_791364) )
      {
        (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(dword_791364 + 220) + 180))(
          *(_DWORD *)(dword_791364 + 220),
          &Source);
        (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(dword_791364 + 224) + 180))(
          *(_DWORD *)(dword_791364 + 224),
          &Source);
      }
      else
      {
        v79 = sub_630F40("SID_POKER_HIGHHANDSHOWINGOPENS");
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
          *(_DWORD *)(dword_791364 + 220),
          v79);
        v80 = sub_630F40("SID_POKER_BESTLOWHAND");
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
          *(_DWORD *)(dword_791364 + 224),
          v80);
      }
      ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)dword_791364);
      LOBYTE(v831) = 13;
      ATL::CComCriticalSection::~CComCriticalSection(&v823);
      LOBYTE(v831) = 12;
      ATL::CComCriticalSection::~CComCriticalSection(&v824);
      v831 = -1;
      sub_484470(v822);
LABEL_197:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 6);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 9:
      switch ( dword_793130 )
      {
        case 1:
          dword_793064 = 2;
          break;
        case 2:
          dword_793034 = sub_5170A0(1, 0);
          break;
        case 3:
          dword_793034 = sub_516F40(1);
          break;
        case 4:
          dword_793034 = sub_517430(1, 0);
          break;
        default:
          if ( dword_793130 )
            sub_5E9F20((char)"0", "..\\Casino\\PokerStudScript.cpp", 1436);
          else
            dword_793064 = 1;
          break;
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 10);
      v92 = (_DWORD *)sub_47E3B0((void *)dword_791364);
      if ( sub_4C6CB0(v92) != 1 || !dword_793064 )
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
      switch ( dword_793064 )
      {
        case 1:
          v93 = sub_4F6840(dword_791364 + 56);
          v94 = sub_62FBF0(2 * (_DWORD)dword_793070);
          v95 = v94 + sub_62FBF0(2 * (_DWORD)dword_793070) + 5;
          if ( v93 <= CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364) * v95 )
          {
            if ( dword_793078 != 2 * (sub_47E190((_DWORD *)dword_791364) != 2) + 5
              || sub_47E190((_DWORD *)dword_791364) == 7 )
            {
              v98 = (_DWORD *)sub_47E3B0((void *)dword_791364);
              return sub_4CC980(v98, (int)v830);
            }
            else
            {
              v97 = (_DWORD *)sub_47E3B0((void *)dword_791364);
              return sub_4CC9A0(v97, (int)v830);
            }
          }
          else
          {
            v96 = (_DWORD *)sub_47E3B0((void *)dword_791364);
            return sub_4CC9C0(v96, (int)v830);
          }
        case 2:
          v99 = (_DWORD *)sub_47E3B0((void *)dword_791364);
          return sub_4CC9E0(v99, (int)v830);
        case 3:
          if ( dword_793078 != 2 * (sub_47E190((_DWORD *)dword_791364) != 2) + 5
            || sub_47E190((_DWORD *)dword_791364) == 7 )
          {
            if ( sub_47E280((_DWORD *)dword_791364) != 2 )
              goto LABEL_274;
            if ( sub_47E190((_DWORD *)dword_791364) == 7 )
              goto LABEL_274;
            if ( sub_47D6F0((_DWORD *)dword_791364) )
              goto LABEL_274;
            if ( dword_793078 < (sub_47E190((_DWORD *)dword_791364) != 2) + 3 )
              goto LABEL_274;
            sub_4A20D0(&v718);
            v579 = v101;
            v578 = v101;
            v831 = 15;
            v102 = (CRecentFileList **)sub_47E3B0((void *)dword_791364);
            v577 = sub_4C8300(v102, v720);
            v831 = 16;
            v576 = (unsigned __int8 *)sub_485940(v577, &v719, 1, 1, 1, 1, 0, 0, 0);
            v831 = 17;
            v600 |= 7u;
            v103 = (unsigned __int8 *)sub_4A2100(
                                        v578,
                                        (_BYTE *)dword_791390,
                                        (_BYTE *)dword_791410,
                                        (unsigned __int8 *)&byte_7913FF,
                                        (unsigned __int8 *)&byte_7913FF,
                                        (unsigned __int8 *)&byte_7913FF,
                                        (unsigned __int8 *)&byte_7913FF);
            if ( !sub_4A2570(v576, v103) )
LABEL_274:
              v575 = 0;
            else
              v575 = 1;
            v721 = v575;
            v831 = 16;
            if ( (v600 & 4) != 0 )
            {
              v600 &= ~4u;
              ATL::CComCriticalSection::~CComCriticalSection(&v719);
            }
            v831 = 15;
            if ( (v600 & 2) != 0 )
            {
              v600 &= ~2u;
              sub_484470(v720);
            }
            v831 = -1;
            if ( (v600 & 1) != 0 )
            {
              v600 &= ~1u;
              ATL::CComCriticalSection::~CComCriticalSection(&v718);
            }
            v474 = (int)v830;
            if ( v721 )
            {
              v104 = (_DWORD *)sub_47E3B0((void *)dword_791364);
              return sub_4CCF60(v104, v474);
            }
            else
            {
              v105 = (_DWORD *)sub_47E3B0((void *)dword_791364);
              return sub_4CCAE0(v105, v474);
            }
          }
          else
          {
            v100 = (_DWORD *)sub_47E3B0((void *)dword_791364);
            return sub_4CD130(v100, (int)v830);
          }
        case 4:
          if ( dword_793078 != 2 * (sub_47E190((_DWORD *)dword_791364) != 2) + 5
            || sub_47E190((_DWORD *)dword_791364) == 7 )
          {
            sub_47E3B0((void *)dword_791364);
            return sub_4CCA60((int)v830);
          }
          else
          {
            sub_47E3B0((void *)dword_791364);
            return sub_4CCAB0((int)v830);
          }
        case 5:
          if ( dword_793078 > (sub_47E190((_DWORD *)dword_791364) != 2) + 4 )
            goto LABEL_295;
          if ( sub_47E190((_DWORD *)dword_791364) == 7 )
            goto LABEL_295;
          if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
            goto LABEL_295;
          sub_4A20D0(&v714);
          v574 = v106;
          v573 = v106;
          v831 = 18;
          v107 = (CRecentFileList **)sub_47E3B0((void *)dword_791364);
          v572 = sub_4C8300(v107, v716);
          v831 = 19;
          v571 = (unsigned __int8 *)sub_485940(v572, &v715, 1, 1, 1, 1, 0, 0, 0);
          v831 = 20;
          v600 |= 0x38u;
          v108 = (unsigned __int8 *)sub_4A2100(
                                      v573,
                                      (_BYTE *)dword_7913B0,
                                      (_BYTE *)dword_791400,
                                      (unsigned __int8 *)&byte_7913FF,
                                      (unsigned __int8 *)&byte_7913FF,
                                      (unsigned __int8 *)&byte_7913FF,
                                      (unsigned __int8 *)&byte_7913FF);
          if ( !sub_4A24D0(v571, v108) )
LABEL_295:
            v570 = 0;
          else
            v570 = 1;
          v717 = v570;
          v831 = 19;
          if ( (v600 & 0x20) != 0 )
          {
            v600 &= ~0x20u;
            ATL::CComCriticalSection::~CComCriticalSection(&v715);
          }
          v831 = 18;
          if ( (v600 & 0x10) != 0 )
          {
            v600 &= ~0x10u;
            sub_484470(v716);
          }
          v831 = -1;
          if ( (v600 & 8) != 0 )
          {
            v600 &= ~8u;
            ATL::CComCriticalSection::~CComCriticalSection(&v714);
          }
          if ( v717 )
          {
            v474 = (int)v830;
            v109 = (_DWORD *)sub_47E3B0((void *)dword_791364);
            return sub_4CD0D0(v109, v474);
          }
          else
          {
            if ( dword_793078 <= (sub_47E190((_DWORD *)dword_791364) != 2) + 4 )
              goto LABEL_309;
            if ( sub_47E190((_DWORD *)dword_791364) == 7 )
              goto LABEL_309;
            if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
              goto LABEL_309;
            v110 = (CRecentFileList **)sub_47E3B0((void *)dword_791364);
            v569 = sub_4C8300(v110, v712);
            v831 = 21;
            v568 = sub_485940(v569, &v711, 1, 1, 1, 1, 0, 0, 0);
            v831 = 22;
            v600 |= 0xC0u;
            v474 = dword_791380;
            v111 = sub_4A2160(v568, &v710);
            if ( !sub_4A1F00(v111, (unsigned __int8 *)v474) )
LABEL_309:
              v567 = 0;
            else
              v567 = 1;
            v713 = v567;
            v831 = 21;
            if ( (v600 & 0x80) != 0 )
            {
              v600 &= ~0x80u;
              ATL::CComCriticalSection::~CComCriticalSection(&v711);
            }
            v831 = -1;
            if ( (v600 & 0x40) != 0 )
            {
              v600 &= ~0x40u;
              sub_484470(v712);
            }
            if ( v713 )
            {
              v474 = (int)v830;
              v112 = (_DWORD *)sub_47E3B0((void *)dword_791364);
              return sub_4CD0D0(v112, v474);
            }
            else
            {
              if ( dword_793078 < 5
                || sub_47CE60((_DWORD *)dword_791364) != 4 && sub_47CE60((_DWORD *)dword_791364) != 11 )
              {
                goto LABEL_322;
              }
              v113 = (CRecentFileList **)sub_47E3B0((void *)dword_791364);
              v566 = sub_4C8300(v113, v708);
              v831 = 23;
              v565 = sub_485940(v566, &v707, 1, 1, 1, 1, 0, 0, 0);
              v831 = 24;
              v600 |= 0x300u;
              v474 = dword_791390;
              v114 = sub_4A2160(v565, &v706);
              if ( !sub_4A1E10(v114, (unsigned __int8 *)v474) )
                goto LABEL_322;
              v115 = (CRecentFileList **)sub_47E3B0((void *)dword_791364);
              v564 = sub_4C8300(v115, v705);
              v831 = 25;
              v563 = sub_485940(v564, &v704, 0, 1, 1, 1, 0, 0, 0);
              v831 = 26;
              v600 |= 0xC00u;
              v474 = dword_7913F8;
              v116 = sub_4A21B0(v563, &v703);
              if ( sub_4A20A0(v116, (unsigned __int8 *)v474) )
                v562 = 1;
              else
LABEL_322:
                v562 = 0;
              v709 = v562;
              v831 = 25;
              if ( (v600 & 0x800) != 0 )
              {
                v600 &= ~0x800u;
                ATL::CComCriticalSection::~CComCriticalSection(&v704);
              }
              v831 = 24;
              if ( (v600 & 0x400) != 0 )
              {
                v600 &= ~0x400u;
                sub_484470(v705);
              }
              v831 = 23;
              if ( (v600 & 0x200) != 0 )
              {
                v600 &= ~0x200u;
                ATL::CComCriticalSection::~CComCriticalSection(&v707);
              }
              v831 = -1;
              if ( (v600 & 0x100) != 0 )
              {
                v600 &= ~0x100u;
                sub_484470(v708);
              }
              if ( v709 )
              {
                v474 = (int)v830;
                v117 = (_DWORD *)sub_47E3B0((void *)dword_791364);
                return sub_4CD0D0(v117, v474);
              }
              else
              {
                v560 = sub_47E190((_DWORD *)dword_791364) != 7
                    && sub_47D6F0((_DWORD *)dword_791364) != 1
                    && (v118 = (CRecentFileList **)sub_47E3B0((void *)dword_791364),
                        v561 = sub_4C8300(v118, v701),
                        v831 = 27,
                        v600 |= 0x1000u,
                        sub_484BF0(v561) >= 4);
                v702 = v560;
                v831 = -1;
                if ( (v600 & 0x1000) != 0 )
                {
                  v600 &= ~0x1000u;
                  sub_484470(v701);
                }
                if ( v702 )
                {
                  v474 = (int)v830;
                  v119 = (_DWORD *)sub_47E3B0((void *)dword_791364);
                  return sub_4CD0D0(v119, v474);
                }
                else
                {
                  v557 = sub_47CE60((_DWORD *)dword_791364) == 18
                      && (v559 = sub_464130(&v698, (_BYTE *)dword_7907A4, (_BYTE *)dword_79076C),
                          v831 = 28,
                          v120 = (CRecentFileList **)sub_47E3B0((void *)dword_791364),
                          v558 = sub_4C8300(v120, v699),
                          v831 = 29,
                          v600 |= 0x6000u,
                          sub_484BA0(v558, v559));
                  v700 = v557;
                  v831 = 28;
                  if ( (v600 & 0x4000) != 0 )
                  {
                    v600 &= ~0x4000u;
                    sub_484470(v699);
                  }
                  v831 = -1;
                  if ( (v600 & 0x2000) != 0 )
                  {
                    v600 &= ~0x2000u;
                    ATL::CComCriticalSection::~CComCriticalSection(&v698);
                  }
                  if ( v700 )
                  {
                    v474 = (int)v830;
                    v121 = (_DWORD *)sub_47E3B0((void *)dword_791364);
                    return sub_4CD0D0(v121, v474);
                  }
                  else
                  {
                    if ( sub_47E280((_DWORD *)dword_791364) )
                      goto LABEL_358;
                    if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
                      goto LABEL_358;
                    if ( dword_793078 < (sub_47E190((_DWORD *)dword_791364) != 2) + 3 )
                      goto LABEL_358;
                    sub_4A20D0(&v694);
                    v556 = v122;
                    v555 = v122;
                    v831 = 30;
                    v123 = (CRecentFileList **)sub_47E3B0((void *)dword_791364);
                    v554 = sub_4C8300(v123, v696);
                    v831 = 31;
                    v553 = (unsigned __int8 *)sub_485940(v554, &v695, 1, 1, 1, 1, 0, 0, 0);
                    v831 = 32;
                    v600 |= 0x38000u;
                    v124 = (unsigned __int8 *)sub_4A2100(
                                                v555,
                                                (_BYTE *)dword_791390,
                                                (_BYTE *)dword_79138C,
                                                (unsigned __int8 *)&byte_7913FF,
                                                (unsigned __int8 *)&byte_7913FF,
                                                (unsigned __int8 *)&byte_7913FF,
                                                (unsigned __int8 *)&byte_7913FF);
                    if ( !sub_4A2570(v553, v124)
                      || (v125 = (CRecentFileList **)sub_47E3B0((void *)dword_791364),
                          v552 = sub_4C8300(v125, v693),
                          v831 = 33,
                          v600 |= 0x40000u,
                          sub_484BF0(v552) >= 4) )
                    {
LABEL_358:
                      v551 = 0;
                    }
                    else
                    {
                      v551 = 1;
                    }
                    v697 = v551;
                    v831 = 32;
                    if ( (v600 & 0x40000) != 0 )
                    {
                      v600 &= ~0x40000u;
                      sub_484470(v693);
                    }
                    v831 = 31;
                    if ( (v600 & 0x20000) != 0 )
                    {
                      v600 &= ~0x20000u;
                      ATL::CComCriticalSection::~CComCriticalSection(&v695);
                    }
                    v831 = 30;
                    if ( (v600 & 0x10000) != 0 )
                    {
                      v600 &= ~0x10000u;
                      sub_484470(v696);
                    }
                    v831 = -1;
                    if ( (v600 & 0x8000) != 0 )
                    {
                      v600 &= ~0x8000u;
                      ATL::CComCriticalSection::~CComCriticalSection(&v694);
                    }
                    if ( v697 )
                    {
                      v474 = (int)v830;
                      v126 = (_DWORD *)sub_47E3B0((void *)dword_791364);
                      return sub_4CD0F0(v126, v474);
                    }
                    else
                    {
                      if ( sub_47E280((_DWORD *)dword_791364) != 2 )
                        goto LABEL_375;
                      if ( sub_47E190((_DWORD *)dword_791364) == 7 )
                        goto LABEL_375;
                      if ( sub_47D6F0((_DWORD *)dword_791364) )
                        goto LABEL_375;
                      if ( dword_793078 < (sub_47E190((_DWORD *)dword_791364) != 2) + 3 )
                        goto LABEL_375;
                      sub_4A20D0(&v689);
                      v550 = v127;
                      v549 = v127;
                      v831 = 34;
                      v128 = (CRecentFileList **)sub_47E3B0((void *)dword_791364);
                      v548 = sub_4C8300(v128, v691);
                      v831 = 35;
                      v547 = (unsigned __int8 *)sub_485940(v548, &v690, 0, 1, 1, 1, 0, 0, 0);
                      v831 = 36;
                      v600 |= 0x380000u;
                      v129 = (unsigned __int8 *)sub_4A2100(
                                                  v549,
                                                  (_BYTE *)dword_791390,
                                                  (_BYTE *)dword_791410,
                                                  (unsigned __int8 *)&byte_7913FF,
                                                  (unsigned __int8 *)&byte_7913FF,
                                                  (unsigned __int8 *)&byte_7913FF,
                                                  (unsigned __int8 *)&byte_7913FF);
                      if ( !sub_4A2570(v547, v129) )
LABEL_375:
                        v546 = 0;
                      else
                        v546 = 1;
                      v692 = v546;
                      v831 = 35;
                      if ( (v600 & 0x200000) != 0 )
                      {
                        v600 &= ~0x200000u;
                        ATL::CComCriticalSection::~CComCriticalSection(&v690);
                      }
                      v831 = 34;
                      if ( (v600 & 0x100000) != 0 )
                      {
                        v600 &= ~0x100000u;
                        sub_484470(v691);
                      }
                      v831 = -1;
                      if ( (v600 & 0x80000) != 0 )
                      {
                        v600 &= ~0x80000u;
                        ATL::CComCriticalSection::~CComCriticalSection(&v689);
                      }
                      if ( v692 )
                      {
                        v474 = (int)v830;
                        v130 = (_DWORD *)sub_47E3B0((void *)dword_791364);
                        return sub_4CCFA0(v130, v474);
                      }
                      else if ( dword_793078 != 2 * (sub_47E190((_DWORD *)dword_791364) != 2) + 5
                             || sub_47E190((_DWORD *)dword_791364) == 7 )
                      {
                        v474 = (int)v830;
                        v132 = (_DWORD *)sub_47E3B0((void *)dword_791364);
                        return sub_4CCA00(v132, v474);
                      }
                      else
                      {
                        v474 = (int)v830;
                        v131 = (_DWORD *)sub_47E3B0((void *)dword_791364);
                        return sub_4CCA20(v131, v474);
                      }
                    }
                  }
                }
              }
            }
          }
        case 6:
          v133 = (_DWORD *)sub_47E3B0((void *)dword_791364);
          return sub_4CCA90(v133, (int)v830);
        default:
          return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
      }
    case 10:
      v86 = (_DWORD **)sub_47E3B0((void *)dword_791364);
      sub_4DA890(v86);
      v87 = (_DWORD **)sub_47E3B0((void *)dword_791364);
      sub_4DB610(v87);
      sub_47EC50((_DWORD **)dword_791364);
      switch ( dword_793130 )
      {
        case 1:
          v88 = (_DWORD **)sub_47E3B0((void *)dword_791364);
          sub_4DC4D0(v88, 5, 0);
          dword_793034 = sub_4F5760((__int16 *)(dword_791364 + 56));
          break;
        case 2:
          if ( sub_47D6B0((_DWORD *)dword_791364) == 1 )
            dword_793034 = sub_5170A0(0, dword_79305C);
          else
            dword_793034 = sub_5170A0(0, 0);
LABEL_231:
          sub_47E500();
          break;
        case 3:
          dword_793034 = sub_516F40(0);
          sub_47E500();
          break;
        case 4:
          if ( sub_47D6B0((_DWORD *)dword_791364) == 1 )
            dword_793034 = sub_517430(0, dword_79305C);
          else
            dword_793034 = sub_517430(0, 0);
          goto LABEL_231;
        default:
          if ( dword_793130 )
          {
            sub_5E9F20((char)"0", "..\\Casino\\PokerStudScript.cpp", 1419);
          }
          else
          {
            v89 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
            Concurrency::details::SchedulerProxy::SetQueueLength(v89, 3u);
            v90 = (CRecentFileList **)sub_47E3B0((void *)dword_791364);
            sub_4C7230(v90);
            v91 = (_DWORD **)sub_47E3B0((void *)dword_791364);
            sub_4DC4D0(v91, 4, 0);
            dword_793034 = sub_4F62E0((__int16 *)(dword_791364 + 56));
            --dword_793058;
          }
          break;
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 11);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 28))(v598, 20);
    case 11:
      *(_BYTE *)(dword_791364 + 232) = 0;
      switch ( dword_793034 )
      {
        case -1:
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 13);
          break;
        case -2:
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 54);
          break;
        case -3:
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 12);
          break;
        default:
          v134 = sub_47E490(
                   (Concurrency::details::VirtualProcessor **)dword_791364,
                   (struct Concurrency::IExecutionContext *)dword_793034);
          sub_47E400((_DWORD *)dword_791364, v134);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 4);
          break;
      }
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 12:
      if ( sub_4F6420(dword_791364 + 56) > 0 )
      {
        v135 = sub_4F6420(dword_791364 + 56);
        v474 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v135;
        v136 = sub_4F64B0(dword_791364 + 56);
        v137 = (_DWORD *)sub_47E3D0(v136);
        sub_4C6B80(v137, v474);
        v138 = sub_4F64B0(dword_791364 + 56);
        v139 = (ATL::CComCriticalSection *)sub_47E3D0(v138);
        ATL::CComCriticalSection::~CComCriticalSection(v139);
        ATL::CAtlWinModule::~CAtlWinModule((ATL::CAtlWinModule *)dword_791364);
        v140 = sub_4F6840(dword_791364 + 56);
        sub_47EC90((__int16 *)dword_791364, v140);
        v141 = sub_4F64B0(dword_791364 + 56);
        v817 = *(_DWORD *)(sub_47E3D0(v141) + 4);
        v142 = sub_4F6420(dword_791364 + 56);
        v143 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
        v688 = sub_64C8A0(v143 * v142, 0);
        v818 = v688;
        sub_5E7E40(v817, 7, v688, HIDWORD(v688));
      }
      byte_793030 = 1;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 13);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 28))(v598, 4);
    case 13:
      *(_DWORD *)(dword_791364 + 1040) = 0;
      if ( sub_47E190((_DWORD *)dword_791364) == 1 )
      {
        if ( dword_793078 == 7 )
        {
LABEL_404:
          byte_793031 = 1;
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 51);
          return sub_5FC490(1);
        }
      }
      else
      {
        if ( sub_47E190((_DWORD *)dword_791364) != 2 )
        {
          if ( sub_47E190((_DWORD *)dword_791364) == 7 )
          {
            switch ( dword_793078 )
            {
              case 7:
                (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 34);
                break;
              case 8:
                (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 40);
                break;
              case 4:
                (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 46);
                break;
              default:
                (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 44);
                break;
            }
          }
          else
          {
            sub_5E9F20((char)"0", "..\\Casino\\PokerStudScript.cpp", 1602);
          }
          return sub_5FC490(1);
        }
        if ( dword_793078 == 5 )
          goto LABEL_404;
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 14);
      return sub_5FC490(1);
    case 14:
      byte_79310A = 0;
      for ( dword_793138 = 0; dword_793138 < sub_47F950(); ++dword_793138 )
      {
        v144 = (_DWORD **)sub_47E390(dword_793138);
        sub_4DC490(v144);
      }
      ++dword_793078;
      v145 = sub_47BBC0((_DWORD *)dword_791364);
      sub_47E400((_DWORD *)dword_791364, v145);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 15);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 15:
      if ( !byte_793108 )
        sub_47E440((_DWORD *)dword_791364);
      v146 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v146) == 1
        || (v147 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364),
            Concurrency::details::SchedulerProxy::GetQueueLength(v147) == 2) )
      {
        v816 = 0;
        if ( dword_793078 < 7 )
          v816 = sub_47D730((_DWORD *)dword_791364);
        if ( dword_793078 != 7
          || (v148 = (_DWORD *)sub_47E3B0((void *)dword_791364), sub_4C6CB0(v148) == 2)
          || byte_791360 )
        {
          if ( byte_793108 )
          {
            v149 = (Concurrency::details::VirtualProcessor *)sub_47E3B0((void *)dword_791364);
            dword_793060 = sub_47B010(dword_791364, v149, 1, 1, v598, 0, v816, 1);
          }
          else
          {
            v150 = (Concurrency::details::VirtualProcessor *)sub_47E3B0((void *)dword_791364);
            dword_793060 = sub_47B010(dword_791364, v150, 1, 1, v598, 0, v816, 0);
          }
        }
        else if ( dword_793078 == 7 )
        {
          if ( byte_793108 )
          {
            v151 = (Concurrency::details::VirtualProcessor *)sub_47E3B0((void *)dword_791364);
            dword_793060 = sub_47B010(dword_791364, v151, 1, 0, v598, 1, v816, 1);
          }
          else
          {
            v152 = (Concurrency::details::VirtualProcessor *)sub_47E3B0((void *)dword_791364);
            dword_793060 = sub_47B010(dword_791364, v152, 1, 0, v598, 1, v816, 0);
          }
        }
        else if ( byte_793108 )
        {
          v153 = (Concurrency::details::VirtualProcessor *)sub_47E3B0((void *)dword_791364);
          dword_793060 = sub_47B010(dword_791364, v153, 1, 0, v598, 0, v816, 1);
        }
        else
        {
          v154 = (Concurrency::details::VirtualProcessor *)sub_47E3B0((void *)dword_791364);
          dword_793060 = sub_47B010(dword_791364, v154, 1, 0, v598, 0, v816, 0);
        }
        byte_793108 = 0;
      }
      else
      {
        dword_793060 = 0;
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
      }
      if ( dword_793060 == 2 )
      {
        byte_793108 = 1;
        v155 = (_DWORD *)sub_47E3B0((void *)dword_791364);
        if ( sub_4C6CB0(v155) == 1 )
          return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 16);
        else
          return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 15);
      }
      else if ( dword_793060 == 1
             && !byte_793030
             && (v156 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364),
                 Concurrency::details::SchedulerProxy::GetQueueLength(v156) == 1) )
      {
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 20);
      }
      else if ( dword_793060 == 4 )
      {
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 25);
      }
      else if ( dword_793060 == 3 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 27);
        return sub_5FC490(5);
      }
      else
      {
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 17);
      }
    case 16:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 15);
      sub_47E3B0((void *)dword_791364);
      return sub_4CD250((int)v830);
    case 17:
      v157 = sub_47E420((_DWORD *)dword_791364);
      if ( v157 == sub_47BBC0((_DWORD *)dword_791364) )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 19);
      else
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 15);
      v158 = (_DWORD *)sub_47E3B0((void *)dword_791364);
      if ( (sub_4C6CB0(v158) == 2 || byte_791360) && dword_793078 == 7 )
      {
        v159 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v159) == 1
          || (v160 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364),
              Concurrency::details::SchedulerProxy::GetQueueLength(v160) == 2) )
        {
          v161 = (CRecentFileList **)sub_47E3B0((void *)dword_791364);
          sub_4C8700(v161, v815);
          v831 = 37;
          v474 = 3;
          v687 = &v472;
          v545 = sub_484320(&v472, (int)v815);
          v544 = v545;
          LOBYTE(v831) = 38;
          v162 = (CRecentFileList **)sub_47E3B0((void *)dword_791364);
          LOBYTE(v831) = 37;
          sub_4C88A0(v162, v472, v473, v474);
          v831 = -1;
          sub_484470(v815);
        }
      }
      if ( !byte_79310A
        && dword_793078 == 4 - (sub_47E190((_DWORD *)dword_791364) != 1)
        && !sub_47E280((_DWORD *)dword_791364)
        && sub_47D6F0((_DWORD *)dword_791364) != 1 )
      {
        v474 = (int)v686;
        v163 = (CRecentFileList **)sub_47E3B0((void *)dword_791364);
        v543 = sub_4C8300(v163, (__int16 *)v474);
        v542 = v543;
        v831 = 39;
        sub_485940(v543, &v814, 1, 1, 1, 1, 0, 0, 0);
        LOBYTE(v831) = 41;
        sub_484470(v686);
        v474 = dword_7913B0;
        v164 = sub_4A2160(&v814, &v685);
        if ( sub_4A1E10(v164, (unsigned __int8 *)v474) )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 18);
        v831 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v814);
      }
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 18:
      byte_79310A = 1;
      v165 = sub_47E420((_DWORD *)dword_791364);
      if ( v165 == sub_47BBC0((_DWORD *)dword_791364) )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 19);
      else
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 15);
      v166 = (_DWORD *)sub_47E3B0((void *)dword_791364);
      if ( sub_4C6CB0(v166) == 1 )
      {
        v167 = (_DWORD *)sub_47E3B0((void *)dword_791364);
        return sub_4CD090(v167, (int)v830);
      }
      v813 = 0;
      for ( i = 0; i < sub_47F950(); ++i )
      {
        v168 = (_DWORD *)sub_47E390(i);
        if ( sub_4C6CB0(v168) == 1 )
        {
          v169 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v169) == 1 )
            ++v813;
        }
      }
      if ( !v813 )
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
      v811 = sub_62FBF0(v813);
      v810 = 0;
      i = 0;
      while ( 2 )
      {
        if ( i >= sub_47F950() )
          goto LABEL_496;
        v170 = (_DWORD *)sub_47E390(i);
        if ( sub_4C6CB0(v170) != 1 )
          goto LABEL_488;
        v171 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v171) != 1 )
          goto LABEL_488;
        if ( v810 != v811 )
        {
          ++v810;
LABEL_488:
          ++i;
          continue;
        }
        break;
      }
      v172 = (_DWORD *)sub_47E390(i);
      sub_4CD0B0(v172, (int)v830);
LABEL_496:
      if ( v810 != v811 )
        sub_5E9F20((char)"shWhineIndex == shTheWhiner", "..\\Casino\\PokerStudScript.cpp", 1755);
      result = sub_47F950();
      if ( i >= result )
        return sub_5E9F20(
                 (char)"shTempIndex<pokerGame->GetNumberOfPlayersAtTable()",
                 "..\\Casino\\PokerStudScript.cpp",
                 1756);
      return result;
    case 19:
      if ( dword_793078 != 3 - (sub_47E190((_DWORD *)dword_791364) != 1) || sub_47D6B0((_DWORD *)dword_791364) )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 3);
      else
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 2);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 20:
      v173 = (_DWORD *)sub_47E3B0((void *)dword_791364);
      if ( sub_4C6CB0(v173) == 1 )
      {
        v809 = sub_5095B0(dword_793078);
        sub_47E3B0((void *)dword_791364);
        if ( v809 )
        {
          sub_4CD1F0((int)v830);
          return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 23);
        }
        else
        {
          sub_4CD220((int)v830);
          return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 22);
        }
      }
      else
      {
        v174 = (_DWORD *)sub_47E3B0((void *)dword_791364);
        if ( sub_4C6CB0(v174) == 2 )
        {
          v808 = 0;
          if ( *(_BYTE *)(dword_791364 + 200) )
          {
            if ( sub_5095B0(dword_793078) )
              v808 = 1;
            else
              v808 = 2;
          }
LABEL_515:
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 21);
          return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
        }
        else
        {
          return sub_5E9F20((char)"0", "..\\Casino\\PokerStudScript.cpp", 1802);
        }
      }
    case 21:
      goto LABEL_515;
    case 22:
      if ( sub_4F9110(dword_791364 + 56) < 2 )
        sub_5E9F20((char)"pokerGame->thePot.ActivePlayersLeft() >= 2", "..\\Casino\\PokerStudScript.cpp", 1816);
      v175 = (Concurrency::details::VirtualProcessor *)sub_47E3B0((void *)dword_791364);
      v176 = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v175);
      sub_4F5530((__int16 *)(dword_791364 + 56), v176, 3);
      v177 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
      Concurrency::details::SchedulerProxy::SetQueueLength(v177, 3u);
      v178 = (CRecentFileList **)sub_47E3B0((void *)dword_791364);
      sub_4C7230(v178);
      v179 = (_DWORD **)sub_47E3B0((void *)dword_791364);
      sub_4DC4D0(v179, 4, 0);
      dword_793034 = sub_4F62E0((__int16 *)(dword_791364 + 56));
      --dword_793058;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 24);
      switch ( dword_793034 )
      {
        case -1:
          sub_5E9F20((char)"0", "..\\Casino\\PokerStudScript.cpp", 1826);
          break;
        case -2:
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 54);
          break;
        case -3:
          if ( sub_4F6420(dword_791364 + 56) > 0 )
          {
            v180 = sub_4F6420(dword_791364 + 56);
            v474 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v180;
            v181 = sub_4F64B0(dword_791364 + 56);
            v182 = (_DWORD *)sub_47E3D0(v181);
            sub_4C6B80(v182, v474);
            v183 = sub_4F64B0(dword_791364 + 56);
            v184 = (ATL::CComCriticalSection *)sub_47E3D0(v183);
            ATL::CComCriticalSection::~CComCriticalSection(v184);
            sub_47EC90((__int16 *)dword_791364, 0);
            v185 = sub_4F64B0(dword_791364 + 56);
            v806 = *(_DWORD *)(sub_47E3D0(v185) + 4);
            v186 = sub_4F6420(dword_791364 + 56);
            v187 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
            v684 = sub_64C8A0(v187 * v186, 0);
            v807 = v684;
            sub_5E7E40(v806, 7, v684, HIDWORD(v684));
          }
          byte_793030 = 1;
          break;
        default:
          while ( dword_793034 >= 0 )
            dword_793034 = sub_4F5760((__int16 *)(dword_791364 + 56));
          if ( dword_793034 != -1 )
            sub_5E9F20((char)"nNextPlayer == PokerPot::ENDOFROUND", "..\\Casino\\PokerStudScript.cpp", 1850);
          break;
      }
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 28))(v598, 45);
    case 23:
      dword_793034 = sub_5178C0(0);
      sub_47E500();
      if ( dword_793034 == -3 )
      {
        if ( sub_4F6420(dword_791364 + 56) > 0 )
        {
          v188 = sub_4F6420(dword_791364 + 56);
          v474 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v188;
          v189 = sub_4F64B0(dword_791364 + 56);
          v190 = (_DWORD *)sub_47E3D0(v189);
          sub_4C6B80(v190, v474);
          v191 = sub_4F64B0(dword_791364 + 56);
          v192 = (ATL::CComCriticalSection *)sub_47E3D0(v191);
          ATL::CComCriticalSection::~CComCriticalSection(v192);
          sub_47EC90((__int16 *)dword_791364, 0);
          v193 = sub_4F64B0(dword_791364 + 56);
          v804 = *(_DWORD *)(sub_47E3D0(v193) + 4);
          v194 = sub_4F6420(dword_791364 + 56);
          v195 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
          v683 = sub_64C8A0(v195 * v194, 0);
          v805 = v683;
          sub_5E7E40(v804, 7, v683, HIDWORD(v683));
        }
        byte_793030 = 1;
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 24);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 28))(v598, 45);
    case 24:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 17);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 28))(v598, 30);
    case 25:
      v803 = 0;
      for ( j = 0; j < sub_47F950(); ++j )
      {
        v196 = (_DWORD *)sub_47E390(j);
        if ( sub_4C6CB0(v196) == 1 )
        {
          v197 = (Concurrency::details::SchedulerProxy *)sub_47E390(j);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v197) == 1 )
            ++v803;
        }
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 26);
      if ( v803 )
      {
        v801 = sub_62FBF0(v803);
        v800 = 0;
        for ( j = 0; ; ++j )
        {
          if ( j >= sub_47F950() )
            goto LABEL_558;
          v199 = (_DWORD *)sub_47E390(j);
          if ( sub_4C6CB0(v199) == 1 )
          {
            v200 = (Concurrency::details::SchedulerProxy *)sub_47E390(j);
            if ( Concurrency::details::SchedulerProxy::GetQueueLength(v200) == 1 )
            {
              if ( v800 == v801 )
              {
                sub_47E390(j);
                sub_4CD2E0((int)v830);
LABEL_558:
                if ( v800 != v801 )
                  sub_5E9F20((char)"shWhineIndex == shTheWhiner", "..\\Casino\\PokerStudScript.cpp", 1921);
                result = sub_47F950();
                if ( j >= result )
                  return sub_5E9F20(
                           (char)"shTempIndex<pokerGame->GetNumberOfPlayersAtTable()",
                           "..\\Casino\\PokerStudScript.cpp",
                           1922);
                return result;
              }
              ++v800;
            }
          }
        }
      }
      if ( (int)sub_637810(4) >= 3 || (int)sub_637810(4) < 0 )
        return sub_5FC490(3);
      v198 = sub_637810(4);
      return sub_5FC490(v198);
    case 26:
      sub_5FC490(3);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 27);
    case 27:
      if ( sub_4F9110(dword_791364 + 56) < 1 )
        sub_5E9F20((char)"pokerGame->thePot.ActivePlayersLeft() >= 1", "..\\Casino\\PokerStudScript.cpp", 1933);
      if ( sub_4F91A0(dword_791364 + 56) < 2 )
        sub_5E9F20((char)"pokerGame->thePot.TotalPlayersLeft() >= 2", "..\\Casino\\PokerStudScript.cpp", 1934);
      sub_47E540((ATL::CAtlWinModule *)dword_791364, 0);
      for ( dword_793138 = 0; dword_793138 < sub_47F950(); ++dword_793138 )
      {
        word_792DE8[dword_793138] = -1;
        word_792990[dword_793138] = -1;
      }
      dword_793124 = 0;
      dword_793120 = 0;
      sub_4F4C80((_BYTE *)(dword_791364 + 56));
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 28);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 28:
      sub_4654D0(*(CRecentFileList **)(dword_791364 + 48));
      v201 = sub_47BBC0((_DWORD *)dword_791364);
      sub_47E400((_DWORD *)dword_791364, v201);
      if ( sub_4F9110(dword_791364 + 56) >= 2 )
      {
        do
        {
          sub_47E440((_DWORD *)dword_791364);
          v204 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
        }
        while ( Concurrency::details::SchedulerProxy::GetQueueLength(v204) != 1 );
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 29);
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
      }
      do
      {
        do
        {
          sub_47E440((_DWORD *)dword_791364);
          v202 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
        }
        while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v202) );
        v203 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
      }
      while ( Concurrency::details::SchedulerProxy::GetQueueLength(v203) == 3 );
      goto LABEL_585;
    case 29:
      v205 = (Concurrency::details::VirtualProcessor *)sub_47E3B0((void *)dword_791364);
      LOWORD(v474) = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v205);
      v206 = sub_47BC60((_DWORD *)dword_791364);
      sub_4F5110((__int16 *)(dword_791364 + 56), v206, v474);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 30);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 30:
      dword_793034 = sub_516E20();
      sub_47E500();
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 31);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 28))(v598, 15);
    case 31:
      if ( dword_793034 == -1 )
      {
        v207 = sub_47BBC0((_DWORD *)dword_791364);
        sub_47E400((_DWORD *)dword_791364, v207);
        do
        {
          do
          {
            sub_47E440((_DWORD *)dword_791364);
            v208 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
          }
          while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v208) );
          v209 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
        }
        while ( Concurrency::details::SchedulerProxy::GetQueueLength(v209) == 3 );
LABEL_585:
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 32);
      }
      else if ( dword_793034 == -3 )
      {
        v210 = sub_47BBC0((_DWORD *)dword_791364);
        sub_47E400((_DWORD *)dword_791364, v210);
        do
        {
          do
          {
            sub_47E440((_DWORD *)dword_791364);
            v211 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
          }
          while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v211) );
          v212 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
        }
        while ( Concurrency::details::SchedulerProxy::GetQueueLength(v212) == 3 );
        if ( sub_4F6420(dword_791364 + 56) > 0 )
        {
          v213 = sub_4F6420(dword_791364 + 56);
          v474 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v213;
          v214 = sub_4F64B0(dword_791364 + 56);
          v215 = (_DWORD *)sub_47E3D0(v214);
          sub_4C6B80(v215, v474);
          v216 = sub_4F64B0(dword_791364 + 56);
          v217 = (ATL::CComCriticalSection *)sub_47E3D0(v216);
          ATL::CComCriticalSection::~CComCriticalSection(v217);
          sub_47EC90((__int16 *)dword_791364, 0);
          v218 = sub_4F64B0(dword_791364 + 56);
          v798 = *(_DWORD *)(sub_47E3D0(v218) + 4);
          v219 = sub_4F6420(dword_791364 + 56);
          v220 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
          v682 = sub_64C8A0(v220 * v219, 0);
          v799 = v682;
          sub_5E7E40(v798, 7, v682, HIDWORD(v682));
        }
        byte_793030 = 1;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 32);
      }
      else
      {
        v221 = sub_47E490(
                 (Concurrency::details::VirtualProcessor **)dword_791364,
                 (struct Concurrency::IExecutionContext *)dword_793034);
        sub_47E400((_DWORD *)dword_791364, v221);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 30);
      }
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 32:
      v222 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v222) != 1 )
      {
        v223 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v223) != 2 )
          sub_5E9F20(
            (char)"(pokerGame->GetCurrentPokerPlayer()->GetPlayerStatus() == ACTIVE) || (pokerGame->GetCurrentPokerPlayer"
                  "()->GetPlayerStatus() == ALLIN)",
            "..\\Casino\\PokerStudScript.cpp",
            2041);
      }
      v224 = (Concurrency::details::VirtualProcessor *)sub_47E3B0((void *)dword_791364);
      sub_47B010(dword_791364, v224, 1, 0, v598, 0, 0, 0);
      do
      {
        do
        {
          sub_47E440((_DWORD *)dword_791364);
          v225 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
        }
        while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v225) );
        v226 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
      }
      while ( Concurrency::details::SchedulerProxy::GetQueueLength(v226) == 3 );
      ++dword_793124;
      if ( dword_793124 == sub_4F91A0(dword_791364 + 56) )
      {
        dword_793124 = 0;
        ++dword_793120;
      }
      if ( dword_793120 >= 2 - (sub_47E190((_DWORD *)dword_791364) != 1) )
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 33);
      else
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 32);
    case 33:
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 4))(v598, 0);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 34:
      if ( sub_4F91A0(dword_791364 + 56) < 2 )
        sub_5E9F20((char)"pokerGame->thePot.TotalPlayersLeft() >= 2", "..\\Casino\\PokerStudScript.cpp", 2070);
      for ( dword_793138 = 0; dword_793138 < sub_47F950(); ++dword_793138 )
        dword_793038[dword_793138] = -1;
      for ( dword_793074 = 0; dword_793074 < sub_47F950(); ++dword_793074 )
      {
        v227 = (Concurrency::details::SchedulerProxy *)sub_47E390(dword_793074);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v227) )
        {
          v228 = (Concurrency::details::SchedulerProxy *)sub_47E390(dword_793074);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v228) != 3 )
          {
            v797 = dword_793074;
            while ( 1 )
            {
              if ( ++v797 == sub_47F950() )
                v797 = 0;
              v229 = (Concurrency::details::SchedulerProxy *)sub_47E390(v797);
              if ( Concurrency::details::SchedulerProxy::GetQueueLength(v229) )
              {
                v230 = (Concurrency::details::SchedulerProxy *)sub_47E390(v797);
                if ( Concurrency::details::SchedulerProxy::GetQueueLength(v230) != 3 )
                  break;
              }
            }
            if ( dword_793074 == v797 )
              sub_5E9F20((char)"nTrashPassIndex != nNextIndex", "..\\Casino\\PokerStudScript.cpp", 2090);
            dword_793038[dword_793074] = v797;
          }
        }
      }
      dword_793074 = 0;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 35);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 35:
      if ( dword_793038[dword_793074] == -1 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 37);
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
      }
      else
      {
        v231 = (_DWORD *)sub_47E390(dword_793074);
        if ( sub_4C6CB0(v231) == 2 )
        {
          if ( *(_BYTE *)(dword_791364 + 200) )
            sub_50C7A0(dword_793074, v796);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 36);
          return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
        }
        else
        {
          v232 = (_DWORD *)sub_47E390(dword_793074);
          if ( sub_4C6CB0(v232) == 1 )
          {
            sub_50C7A0(dword_793074, &dword_7930A0[3 * dword_793074]);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 37);
            return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
          }
          else
          {
            return sub_5E9F20((char)"0", "..\\Casino\\PokerStudScript.cpp", 2127);
          }
        }
      }
    case 37:
      ++dword_793074;
      if ( dword_793074 == sub_47F950() )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 38);
      else
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 35);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 38:
      for ( dword_793074 = 0; dword_793074 < sub_47F950(); ++dword_793074 )
      {
        if ( dword_793038[dword_793074] != -1 )
        {
          if ( dword_7930A8[3 * dword_793074] >= dword_7930A4[3 * dword_793074] )
            sub_5E9F20(
              (char)"nTrashPassCardIndex[nTrashPassIndex][2] < nTrashPassCardIndex[nTrashPassIndex][1]",
              "..\\Casino\\PokerStudScript.cpp",
              2171);
          if ( dword_7930A4[3 * dword_793074] >= dword_7930A0[3 * dword_793074] )
            sub_5E9F20(
              (char)"nTrashPassCardIndex[nTrashPassIndex][1] < nTrashPassCardIndex[nTrashPassIndex][0]",
              "..\\Casino\\PokerStudScript.cpp",
              2172);
          for ( k = 0; k < 3; ++k )
          {
            v792 = *(_DWORD *)(sub_47E390(dword_793074) + 8);
            v793 = *(_DWORD *)(sub_47E390(dword_793038[dword_793074]) + 8);
            v794 = (_DWORD **)sub_60CA40(dword_7930A0[3 * dword_793074 + k]);
            sub_463DB0(v794, 0);
            sub_60C890(v794);
            sub_60C840(v794);
          }
        }
      }
      for ( dword_793074 = 0; dword_793074 < sub_47F950(); ++dword_793074 )
      {
        if ( dword_793038[dword_793074] != -1 )
        {
          v233 = (_DWORD *)sub_47E390(dword_793074);
          if ( sub_4C6CB0(v233) == 2 || byte_791360 )
          {
            v234 = sub_47E390(dword_793074);
            sub_4C7820(v234, 1);
            v235 = (ATL::CAtlWinModule *)sub_47E390(dword_793074);
            ATL::CAtlWinModule::~CAtlWinModule(v235);
          }
          else
          {
            v236 = sub_47E390(dword_793074);
            sub_4C7820(v236, 0);
          }
        }
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 39);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 39:
      v791 = 0;
      for ( m = 0; m < sub_47F950(); ++m )
      {
        v237 = (_DWORD *)sub_47E390(m);
        if ( sub_4C6CB0(v237) == 1 )
        {
          v238 = (Concurrency::details::SchedulerProxy *)sub_47E390(m);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v238) == 1
            || (v239 = (Concurrency::details::SchedulerProxy *)sub_47E390(m),
                Concurrency::details::SchedulerProxy::GetQueueLength(v239) == 2) )
          {
            ++v791;
          }
        }
      }
      dword_793078 = 8;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 3);
      if ( v791 )
      {
        v789 = sub_62FBF0(v791);
        v788 = 0;
        for ( m = 0; ; ++m )
        {
          if ( m >= sub_47F950() )
            goto LABEL_681;
          v241 = (_DWORD *)sub_47E390(m);
          if ( sub_4C6CB0(v241) == 1 )
          {
            v242 = (Concurrency::details::SchedulerProxy *)sub_47E390(m);
            if ( Concurrency::details::SchedulerProxy::GetQueueLength(v242) == 1
              || (v243 = (Concurrency::details::SchedulerProxy *)sub_47E390(m),
                  Concurrency::details::SchedulerProxy::GetQueueLength(v243) == 2) )
            {
              if ( v788 == v789 )
              {
                sub_47E390(m);
                sub_4CD370((int)v830);
LABEL_681:
                if ( v788 != v789 )
                  sub_5E9F20((char)"shWhineIndex == shTheWhiner", "..\\Casino\\PokerStudScript.cpp", 2246);
                result = sub_47F950();
                if ( m >= result )
                  return sub_5E9F20(
                           (char)"shTempIndex<pokerGame->GetNumberOfPlayersAtTable()",
                           "..\\Casino\\PokerStudScript.cpp",
                           2247);
                return result;
              }
              ++v788;
            }
          }
        }
      }
      if ( (int)sub_637810(4) >= 3 || (int)sub_637810(4) < 0 )
        return sub_5FC490(4);
LABEL_669:
      v240 = sub_637810(4);
      return sub_5FC490(v240 + 1);
    case 40:
      dword_793074 = sub_47BBC0((_DWORD *)dword_791364) + 1;
      if ( dword_793074 == sub_47F950() )
        dword_793074 = 0;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 41);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 41:
      v244 = (Concurrency::details::SchedulerProxy *)sub_47E390(dword_793074);
      if ( !Concurrency::details::SchedulerProxy::GetQueueLength(v244)
        || (v245 = (Concurrency::details::SchedulerProxy *)sub_47E390(dword_793074),
            Concurrency::details::SchedulerProxy::GetQueueLength(v245) == 3) )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 43);
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
      }
      v246 = (_DWORD *)sub_47E390(dword_793074);
      if ( sub_4C6CB0(v246) != 2 )
      {
        v247 = (_DWORD *)sub_47E390(dword_793074);
        result = sub_4C6CB0(v247);
        if ( result != 1 )
          return result;
        sub_50C830(dword_793074, (int)v783, (int)v778);
        v781 = 0;
        v780 = 0;
        while ( v781 < 2 )
        {
          if ( v780 >= 7 )
            sub_5E9F20((char)"shIndex < 7", "..\\Casino\\PokerStudScript.cpp", 2294);
          if ( v783[v780] )
          {
            v474 = 6 - v780;
            sub_47E390(dword_793074);
            v248 = sub_60CA40(v474);
            *(&v784 + v781++) = v248;
          }
          ++v780;
        }
        for ( n = 0; ; ++n )
        {
          if ( n >= 5 )
          {
            (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v784 + 8) + 112))(*(_DWORD *)(v784 + 8));
            v474 = v784;
            sub_47E390(dword_793074);
            sub_60C890(v474);
            (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v785 + 8) + 112))(*(_DWORD *)(v785 + 8));
            v474 = v785;
            sub_47E390(dword_793074);
            sub_60C890(v474);
            for ( n = 0; n < 5; ++n )
            {
              v474 = *(_DWORD *)&v778[2 * n + 8];
              sub_47E390(dword_793074);
              sub_60C890(v474);
              v474 = *(_DWORD *)&v778[2 * n + 8];
              sub_47E390(dword_793074);
              sub_60C7D0(v474);
            }
            if ( byte_791360 )
            {
              v250 = sub_47E390(dword_793074);
              sub_4C7820(v250, 1);
            }
            else
            {
              v251 = sub_47E390(dword_793074);
              sub_4C7820(v251, 0);
            }
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 43);
            return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
          }
          for ( ii = 0; ; ++ii )
          {
            if ( ii >= 7 )
              goto LABEL_711;
            if ( (__int16)v778[ii] == n )
              break;
          }
          v474 = 6 - ii;
          sub_47E390(dword_793074);
          v249 = sub_60CA40(v474);
          *(_DWORD *)&v778[2 * n + 8] = v249;
LABEL_711:
          if ( ii >= 7 )
            sub_5E9F20((char)"shCardIndex<7", "..\\Casino\\PokerStudScript.cpp", 2317);
        }
      }
      if ( *(_BYTE *)(dword_791364 + 200) )
        sub_50C830(dword_793074, (int)v787, (int)v786);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 42);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 42:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 42);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 43:
      if ( dword_793074 == sub_47BBC0((_DWORD *)dword_791364) )
      {
        dword_793078 = 0;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 44);
      }
      else
      {
        ++dword_793074;
        if ( dword_793074 == sub_47F950() )
          dword_793074 = 0;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 41);
      }
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 44:
      for ( dword_793138 = 0; dword_793138 < sub_47F950(); ++dword_793138 )
      {
        v252 = (_DWORD **)sub_47E390(dword_793138);
        sub_4DC490(v252);
      }
      ++dword_793078;
      v253 = sub_47BBC0((_DWORD *)dword_791364);
      sub_47E400((_DWORD *)dword_791364, v253);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 45);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 45:
      sub_47E440((_DWORD *)dword_791364);
      v254 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
      if ( (Concurrency::details::SchedulerProxy::GetQueueLength(v254) == 1
         || (v255 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364),
             Concurrency::details::SchedulerProxy::GetQueueLength(v255) == 2))
        && (v256 = (_DWORD *)sub_47E3B0((void *)dword_791364), sub_4C6CB0(v256) != 2)
        && !byte_791360 )
      {
        v474 = 5 - dword_793078;
        sub_47E3B0((void *)dword_791364);
        v257 = sub_60CA40(v474);
        sub_463D40(v257);
        v258 = sub_47E3B0((void *)dword_791364);
        sub_4C7820(v258, 1);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 28))(v598, 15);
      }
      else
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
      }
      v259 = sub_47E420((_DWORD *)dword_791364);
      if ( v259 != sub_47BBC0((_DWORD *)dword_791364) )
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 45);
      if ( dword_793078 == 5 )
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 51);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 3);
    case 46:
      if ( sub_47E280((_DWORD *)dword_791364) != 2 )
        sub_5E9F20((char)"pokerGame->GetHighlowType() == HIGHLOW", "..\\Casino\\PokerStudScript.cpp", 2460);
      if ( sub_47D7F0((_DWORD *)dword_791364) != 2 )
        sub_5E9F20((char)"pokerGame->GetHighlowRules() == DECLARE", "..\\Casino\\PokerStudScript.cpp", 2461);
      dword_79306C = 0;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 47);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 47:
      v260 = (Concurrency::details::SchedulerProxy *)sub_47E390(dword_79306C);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v260) != 3
        && (v261 = (Concurrency::details::SchedulerProxy *)sub_47E390(dword_79306C),
            Concurrency::details::SchedulerProxy::GetQueueLength(v261))
        && (v262 = (_DWORD *)sub_47E390(dword_79306C), sub_4C6CB0(v262) == 2) )
      {
        v777 = 1;
        if ( *(_BYTE *)(dword_791364 + 200) && !sub_50C970(dword_79306C) )
          v777 = 2;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 48);
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
      }
      else
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 49);
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
      }
    case 49:
      ++dword_79306C;
      if ( dword_79306C >= sub_47F950() )
      {
        dword_79306C = 0;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 50);
      }
      else
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 47);
      }
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 50:
      v263 = (Concurrency::details::SchedulerProxy *)sub_47E390(dword_79306C);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v263) != 3 )
      {
        v264 = (Concurrency::details::SchedulerProxy *)sub_47E390(dword_79306C);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v264) )
        {
          v265 = (_DWORD *)sub_47E390(dword_79306C);
          if ( sub_4C6CB0(v265) == 1 )
          {
            if ( sub_50C970(dword_79306C) )
              dword_79307C[dword_79306C] = 1;
            else
              dword_79307C[dword_79306C] = 2;
          }
        }
      }
      ++dword_79306C;
      if ( dword_79306C >= sub_47F950() )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 44);
      else
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 50);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 51:
      for ( dword_793138 = 0; dword_793138 < sub_47F950(); ++dword_793138 )
      {
        v266 = (_DWORD **)sub_47E390(dword_793138);
        sub_4DC490(v266);
      }
      if ( sub_4F6C80((_BYTE *)(dword_791364 + 56)) )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 52);
      else
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 55);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 52:
      if ( sub_4F6E70(dword_791364 + 56) == -1 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 53);
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 28))(v598, 10);
      }
      else
      {
        v267 = sub_4F6E70(dword_791364 + 56);
        v268 = (Concurrency::details::SchedulerProxy *)sub_47E3D0(v267);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v268) == 3 )
          sub_5E9F20(
            (char)"pokerGame->GetPokerPlayerWithPotIndex( pokerGame->thePot.GetShowdownPlayer() )->GetPlayerStatus() != FOLDED",
            "..\\Casino\\PokerStudScript.cpp",
            2565);
        v269 = sub_4F6E70(dword_791364 + 56);
        v270 = (Concurrency::details::SchedulerProxy *)sub_47E3D0(v269);
        if ( !Concurrency::details::SchedulerProxy::GetQueueLength(v270) )
          sub_5E9F20(
            (char)"pokerGame->GetPokerPlayerWithPotIndex( pokerGame->thePot.GetShowdownPlayer() )->GetPlayerStatus() != NOTPLAYING",
            "..\\Casino\\PokerStudScript.cpp",
            2566);
        word_79311C = sub_4F6E70(dword_791364 + 56);
        for ( word_793118 = 0; ; ++word_793118 )
        {
          v271 = word_793118;
          if ( v271 >= sub_47F950() )
            break;
          v272 = (_DWORD *)sub_47E390(word_793118);
          if ( sub_4C6CB0(v272) )
          {
            if ( sub_47E190((_DWORD *)dword_791364) != 1
              || sub_47E280((_DWORD *)dword_791364)
              || sub_47D770((_DWORD *)dword_791364) )
            {
              if ( sub_47E190((_DWORD *)dword_791364) == 1 )
              {
                LOWORD(v474) = (_WORD)dword_793070;
                LOWORD(v473) = sub_47E490(
                                 (Concurrency::details::VirtualProcessor **)dword_791364,
                                 (struct Concurrency::IExecutionContext *)word_79311C);
                v274 = (_DWORD *)sub_47E390(word_793118);
                sub_4D9830(v274, v473, v474);
              }
              else if ( sub_47E190((_DWORD *)dword_791364) == 2 )
              {
                LOWORD(v474) = (_WORD)dword_793070;
                LOWORD(v473) = sub_47E490(
                                 (Concurrency::details::VirtualProcessor **)dword_791364,
                                 (struct Concurrency::IExecutionContext *)word_79311C);
                v275 = (_DWORD *)sub_47E390(word_793118);
                sub_4EC850(v275, v473, v474);
              }
              else if ( sub_47E190((_DWORD *)dword_791364) == 7 )
              {
                LOWORD(v474) = (_WORD)dword_793070;
                LOWORD(v473) = sub_47E490(
                                 (Concurrency::details::VirtualProcessor **)dword_791364,
                                 (struct Concurrency::IExecutionContext *)word_79311C);
                v276 = (_DWORD *)sub_47E390(word_793118);
                sub_4F37C0(v276, v473, v474);
              }
            }
            else
            {
              LOWORD(v474) = (_WORD)dword_793070;
              LOWORD(v473) = sub_47E490(
                               (Concurrency::details::VirtualProcessor **)dword_791364,
                               (struct Concurrency::IExecutionContext *)word_79311C);
              v273 = (_DWORD *)sub_47E390(word_793118);
              sub_4D74A0(v273, v473, v474);
            }
          }
        }
        if ( sub_47E190((_DWORD *)dword_791364) == 7 )
        {
          if ( sub_47E190((_DWORD *)dword_791364) == 7 )
          {
            v765 = sub_4F6E70(dword_791364 + 56);
            if ( sub_47E280((_DWORD *)dword_791364) != 2 )
              sub_5E9F20((char)"pokerGame->GetHighlowType() == HIGHLOW", "..\\Casino\\PokerStudScript.cpp", 2649);
            if ( sub_47D7F0((_DWORD *)dword_791364) != 2 )
              sub_5E9F20((char)"pokerGame->GetHighlowRules() == DECLARE", "..\\Casino\\PokerStudScript.cpp", 2650);
            if ( !dword_79307C[sub_47E490(
                                 (Concurrency::details::VirtualProcessor **)dword_791364,
                                 (struct Concurrency::IExecutionContext *)v765)] )
              sub_5E9F20(
                (char)"declPlayerDeclaration[pokerGame->GetPlayerWithPotIndex(shPlayerIndex)] != PokerPot::CARDSSPEAK",
                "..\\Casino\\PokerStudScript.cpp",
                2651);
            if ( dword_79307C[sub_47E490(
                                (Concurrency::details::VirtualProcessor **)dword_791364,
                                (struct Concurrency::IExecutionContext *)v765)] == 3 )
              sub_5E9F20(
                (char)"declPlayerDeclaration[pokerGame->GetPlayerWithPotIndex(shPlayerIndex)] != PokerPot::DECLAREHIGHLOW",
                "..\\Casino\\PokerStudScript.cpp",
                2652);
            v290 = sub_47E490(
                     (Concurrency::details::VirtualProcessor **)dword_791364,
                     (struct Concurrency::IExecutionContext *)v765);
            v291 = (CRecentFileList **)sub_47E390(v290);
            sub_4C7C40(v291, v766);
            v831 = 58;
            sub_4A20D0(&v767);
            LOBYTE(v831) = 59;
            if ( dword_79307C[sub_47E490(
                                (Concurrency::details::VirtualProcessor **)dword_791364,
                                (struct Concurrency::IExecutionContext *)v765)] == 1 )
            {
              v527 = sub_485940(v766, v673, 1, 1, 1, 1, 0, 0, 0);
              v767 = *v527;
              ATL::CComCriticalSection::~CComCriticalSection(v673);
              LOBYTE(v474) = *sub_4A2160(&v767, &v672);
              v292 = (_DWORD **)sub_47E3D0(v765);
              sub_4DA4D0(v292, v474);
            }
            else
            {
              if ( dword_79307C[sub_47E490(
                                  (Concurrency::details::VirtualProcessor **)dword_791364,
                                  (struct Concurrency::IExecutionContext *)v765)] != 2 )
                sub_5E9F20(
                  (char)"declPlayerDeclaration[pokerGame->GetPlayerWithPotIndex(shPlayerIndex)] == PokerPot::DECLARELOW",
                  "..\\Casino\\PokerStudScript.cpp",
                  2662);
              v526 = sub_485940(v766, &v671, 0, 1, 1, 0, 0, 0, 0);
              v767 = *v526;
              ATL::CComCriticalSection::~CComCriticalSection(&v671);
              LOWORD(v474) = v767;
              v293 = (_DWORD **)sub_47E3D0(v765);
              sub_4DB070(v293, v474);
            }
            v294 = sub_47E490(
                     (Concurrency::details::VirtualProcessor **)dword_791364,
                     (struct Concurrency::IExecutionContext *)v765);
            sub_4F7220(dword_791364 + 56, v765, v767, v767, dword_79307C[v294]);
            LOBYTE(v831) = 58;
            ATL::CComCriticalSection::~CComCriticalSection(&v767);
            v831 = -1;
            sub_484470(v766);
          }
          else
          {
            sub_5E9F20((char)"0", "..\\Casino\\PokerStudScript.cpp", 2669);
          }
        }
        else
        {
          if ( sub_47E280((_DWORD *)dword_791364) )
          {
            if ( sub_47E280((_DWORD *)dword_791364) != 2 )
              sub_5E9F20((char)"pokerGame->GetHighlowType() == HIGHLOW", "..\\Casino\\PokerStudScript.cpp", 2634);
            v284 = (CRecentFileList **)sub_47E3D0(word_79311C);
            sub_4C7C40(v284, v768);
            v831 = 53;
            sub_485940(v768, &v770, 1, 1, 1, 1, 0, 0, 0);
            LOBYTE(v831) = 54;
            sub_485940(v768, &v769, 0, 1, 1, 0, 0, 0, 0);
            LOBYTE(v831) = 55;
            LOBYTE(v474) = *sub_4A2160(&v770, &v674);
            v285 = (_DWORD **)sub_47E3D0(word_79311C);
            sub_4DA4D0(v285, v474);
            LOWORD(v474) = v769;
            v286 = (_DWORD **)sub_47E3D0(word_79311C);
            sub_4DB070(v286, v474);
            sub_4F7220(dword_791364 + 56, word_79311C, v770, v769, 0);
            LOBYTE(v831) = 54;
            ATL::CComCriticalSection::~CComCriticalSection(&v769);
            LOBYTE(v831) = 53;
            ATL::CComCriticalSection::~CComCriticalSection(&v770);
            v831 = -1;
            sub_484470(v768);
          }
          else
          {
            sub_484300(v774);
            v831 = 42;
            if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
            {
              v277 = (CRecentFileList **)sub_47E3D0(word_79311C);
              v541 = sub_4C80B0(v277, v681);
              v540 = v541;
              LOBYTE(v831) = 43;
              sub_484490(v774, v541);
              LOBYTE(v831) = 42;
              sub_484470(v681);
            }
            else if ( sub_47D6F0((_DWORD *)dword_791364) == 2 )
            {
              v278 = (CRecentFileList **)sub_47E3D0(word_79311C);
              v539 = sub_4C8210(v278, v680);
              v538 = v539;
              LOBYTE(v831) = 44;
              sub_484490(v774, v539);
              LOBYTE(v831) = 42;
              sub_484470(v680);
            }
            else
            {
              v279 = (CRecentFileList **)sub_47E3D0(word_79311C);
              v537 = sub_4C7C40(v279, v679);
              v536 = v537;
              LOBYTE(v831) = 45;
              sub_484490(v774, v537);
              LOBYTE(v831) = 42;
              sub_484470(v679);
            }
            sub_485940(v774, &v775, 1, 1, 1, 1, 0, 0, 0);
            LOBYTE(v831) = 46;
            LOBYTE(v474) = *sub_4A2160(&v775, &v678);
            v280 = (_DWORD **)sub_47E3D0(word_79311C);
            sub_4DA4D0(v280, v474);
            if ( sub_47D770((_DWORD *)dword_791364) )
            {
              if ( sub_47D770((_DWORD *)dword_791364) == 3 )
              {
                v281 = (CRecentFileList **)sub_47E3D0(word_79311C);
                sub_4C7C40(v281, v773);
                LOBYTE(v831) = 47;
                v535 = sub_48CCD0(v773, &v677);
                v534 = v535;
                LOBYTE(v831) = 48;
                sub_4F7220(dword_791364 + 56, word_79311C, v775, *v535, 0);
                LOBYTE(v831) = 47;
                ATL::CComCriticalSection::~CComCriticalSection(&v677);
                LOBYTE(v831) = 46;
                sub_484470(v773);
              }
              else if ( sub_47D770((_DWORD *)dword_791364) == 4 )
              {
                v282 = (CRecentFileList **)sub_47E3D0(word_79311C);
                sub_4C8700(v282, v772);
                LOBYTE(v831) = 49;
                v533 = sub_48CCD0(v772, &v676);
                v532 = v533;
                LOBYTE(v831) = 50;
                sub_4F7220(dword_791364 + 56, word_79311C, v775, *v533, 0);
                LOBYTE(v831) = 49;
                ATL::CComCriticalSection::~CComCriticalSection(&v676);
                LOBYTE(v831) = 46;
                sub_484470(v772);
              }
              else if ( sub_47D770((_DWORD *)dword_791364) == 2 )
              {
                v283 = (CRecentFileList **)sub_47E3D0(word_79311C);
                sub_4C7C40(v283, v771);
                LOBYTE(v831) = 51;
                v531 = sub_48D1C0(v771, &v675);
                v530 = v531;
                LOBYTE(v831) = 52;
                sub_4F7220(dword_791364 + 56, word_79311C, v775, *v531, 0);
                LOBYTE(v831) = 51;
                ATL::CComCriticalSection::~CComCriticalSection(&v675);
                LOBYTE(v831) = 46;
                sub_484470(v771);
              }
              else
              {
                sub_5E9F20((char)"0", "..\\Casino\\PokerStudScript.cpp", 2629);
              }
            }
            else
            {
              sub_4F7050(dword_791364 + 56, word_79311C, v775);
            }
            LOBYTE(v831) = 42;
            ATL::CComCriticalSection::~CComCriticalSection(&v775);
            v831 = -1;
            sub_484470(v774);
          }
          v287 = (CRecentFileList **)sub_47E3D0(word_79311C);
          sub_4C8700(v287, v776);
          v831 = 56;
          v288 = sub_47E3D0(word_79311C);
          sub_4C76E0(v288);
          v474 = 3;
          v673[1] = &v472;
          v529 = sub_484320(&v472, (int)v776);
          v528 = v529;
          LOBYTE(v831) = 57;
          v289 = (CRecentFileList **)sub_47E3D0(word_79311C);
          LOBYTE(v831) = 56;
          sub_4C88A0(v289, v472, v473, v474);
          v831 = -1;
          sub_484470(v776);
        }
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 52);
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 28))(v598, 30);
      }
    case 53:
      if ( sub_47E280((_DWORD *)dword_791364) != 2 && !sub_47D770((_DWORD *)dword_791364) )
      {
        word_793114 = sub_4F73D0(dword_791364 + 56, 1);
        if ( word_793114 == -4 )
        {
          v764 = 1;
          while ( 1 )
          {
            word_793114 = sub_4F7AE0(dword_791364 + 56);
            if ( word_793114 == -1 )
              break;
            v295 = sub_4F78A0(dword_791364 + 56, word_793114);
            v474 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v295;
            v296 = (_DWORD *)sub_47E3D0(word_793114);
            sub_4C6B80(v296, v474);
            v297 = (ATL::CComCriticalSection *)sub_47E3D0(word_793114);
            ATL::CComCriticalSection::~CComCriticalSection(v297);
            v298 = sub_47E3D0(word_793114);
            sub_4DA360(v298);
            v762 = *(_DWORD *)(sub_47E3D0(word_793114) + 4);
            v299 = sub_4F78A0(dword_791364 + 56, word_793114);
            v300 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
            v670 = sub_64C8A0(v300 * v299, 0);
            v763 = v670;
            sub_5E7E40(v762, 7, v670, HIDWORD(v670));
            if ( v764 )
            {
              v301 = (_DWORD *)sub_47E3D0(word_793114);
              if ( sub_4C6CB0(v301) == 1 )
              {
                dword_793064 = 12;
                dword_793068 = sub_47E490(
                                 (Concurrency::details::VirtualProcessor **)dword_791364,
                                 (struct Concurrency::IExecutionContext *)word_793114);
                v764 = 0;
              }
              else
              {
                dword_793064 = 0;
              }
            }
            else
            {
              v302 = (_DWORD *)sub_47E3D0(word_793114);
              if ( sub_4C6CB0(v302) == 1 && !sub_62FBF0(2) )
                dword_793068 = sub_47E490(
                                 (Concurrency::details::VirtualProcessor **)dword_791364,
                                 (struct Concurrency::IExecutionContext *)word_793114);
            }
          }
        }
        else
        {
          if ( word_793114 < 0 )
            sub_5E9F20((char)"shWinner >= 0", "..\\Casino\\PokerStudScript.cpp", 2716);
          v303 = sub_4F78A0(dword_791364 + 56, word_793114);
          v474 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v303;
          v304 = (_DWORD *)sub_47E3D0(word_793114);
          sub_4C6B80(v304, v474);
          v305 = (ATL::CComCriticalSection *)sub_47E3D0(word_793114);
          ATL::CComCriticalSection::~CComCriticalSection(v305);
          v306 = sub_47E3D0(word_793114);
          sub_4DA360(v306);
          v760 = *(_DWORD *)(sub_47E3D0(word_793114) + 4);
          v307 = sub_4F78A0(dword_791364 + 56, word_793114);
          v308 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
          v669 = sub_64C8A0(v308 * v307, 0);
          v761 = v669;
          sub_5E7E40(v760, 7, v669, HIDWORD(v669));
          if ( byte_793031
            && (v309 = sub_4F78A0(dword_791364 + 56, word_793114),
                v310 = sub_62FBF0(2 * (_DWORD)dword_793070),
                v311 = v310 + sub_62FBF0(2 * (_DWORD)dword_793070) + 5,
                v309 > CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364) * v311) )
          {
            dword_793064 = 10;
          }
          else if ( byte_793031
                 && (v312 = sub_4F78A0(dword_791364 + 56, word_793114),
                     v313 = sub_62FBF0((int)dword_793070 / 4),
                     v314 = v313 + sub_62FBF0((int)dword_793070 / 4) + 3,
                     v312 < CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364) * v314) )
          {
            dword_793064 = 9;
          }
          else
          {
            dword_793064 = 7;
          }
          dword_793068 = sub_47E490(
                           (Concurrency::details::VirtualProcessor **)dword_791364,
                           (struct Concurrency::IExecutionContext *)word_793114);
        }
        goto LABEL_950;
      }
      if ( sub_47D7F0((_DWORD *)dword_791364) == 1 )
      {
        sub_4A20D0(&v668);
        v525 = v315;
        v524 = v315;
        v831 = 60;
        v316 = (int *)sub_4A2100(
                        v315,
                        (_BYTE *)dword_791390,
                        (_BYTE *)dword_7913F4,
                        (unsigned __int8 *)&byte_7913FF,
                        (unsigned __int8 *)&byte_7913FF,
                        (unsigned __int8 *)&byte_7913FF,
                        (unsigned __int8 *)&byte_7913FF);
        sub_4F7BD0(dword_791364 + 56, *v316);
        v831 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v668);
      }
      else if ( sub_47D770((_DWORD *)dword_791364) )
      {
        sub_4A20D0(&v667);
        v523 = v317;
        v522 = v317;
        v831 = 61;
        v318 = (int *)sub_4A2100(
                        v317,
                        (_BYTE *)dword_7913B0,
                        (_BYTE *)dword_7913B4,
                        (unsigned __int8 *)&byte_7913FF,
                        (unsigned __int8 *)&byte_7913FF,
                        (unsigned __int8 *)&byte_7913FF,
                        (unsigned __int8 *)&byte_7913FF);
        sub_4F7BD0(dword_791364 + 56, *v318);
        v831 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v667);
      }
      else
      {
        sub_4A20D0(&v666);
        v521 = v319;
        v520 = v319;
        v831 = 62;
        v320 = (int *)sub_4A2100(
                        v319,
                        (_BYTE *)dword_7913CC,
                        (_BYTE *)dword_7913C8,
                        (unsigned __int8 *)&byte_7913FF,
                        (unsigned __int8 *)&byte_7913FF,
                        (unsigned __int8 *)&byte_7913FF,
                        (unsigned __int8 *)&byte_7913FF);
        sub_4F7BD0(dword_791364 + 56, *v320);
        v831 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v666);
      }
      v759 = sub_4F8C30(dword_791364 + 56, 1);
      v758 = sub_4F8C30(dword_791364 + 56, 0);
      if ( v759 == -5 && v758 == -5 )
        sub_5E9F20(
          (char)"(shHighWinner!=PokerPot::NOWINNER) || (shLowWinner!=PokerPot::NOWINNER)",
          "..\\Casino\\PokerStudScript.cpp",
          2752);
      if ( v759 == -4 )
      {
        v757 = 1;
        while ( 1 )
        {
          v759 = sub_4F8D90(dword_791364 + 56, 1);
          if ( v759 == -1 )
            break;
          v321 = sub_4F79B0(dword_791364 + 56, v759, 1);
          v474 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v321;
          v322 = (_DWORD *)sub_47E3D0(v759);
          sub_4C6B80(v322, v474);
          v323 = (ATL::CComCriticalSection *)sub_47E3D0(v759);
          ATL::CComCriticalSection::~CComCriticalSection(v323);
          v324 = sub_47E3D0(v759);
          sub_4DA470(v324);
          v755 = *(_DWORD *)(sub_47E3D0(v759) + 4);
          v325 = sub_4F79B0(dword_791364 + 56, v759, 1);
          v326 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
          v665 = sub_64C8A0(v326 * v325, 0);
          v756 = v665;
          sub_5E7E40(v755, 7, v665, HIDWORD(v665));
          if ( v758 == -5 )
          {
            if ( v757 )
            {
              v327 = (_DWORD *)sub_47E3D0(v759);
              if ( sub_4C6CB0(v327) == 1 )
              {
                dword_793064 = 12;
                dword_793068 = sub_47E490(
                                 (Concurrency::details::VirtualProcessor **)dword_791364,
                                 (struct Concurrency::IExecutionContext *)v759);
                v757 = 0;
              }
              else
              {
                dword_793064 = 0;
              }
            }
            else
            {
              v328 = (_DWORD *)sub_47E3D0(v759);
              if ( sub_4C6CB0(v328) == 1 && !sub_62FBF0(2) )
                dword_793068 = sub_47E490(
                                 (Concurrency::details::VirtualProcessor **)dword_791364,
                                 (struct Concurrency::IExecutionContext *)v759);
            }
          }
          else
          {
            dword_793064 = 0;
          }
        }
        goto LABEL_915;
      }
      if ( v759 == -5 )
        goto LABEL_915;
      if ( v759 < 0 )
        sub_5E9F20((char)"shHighWinner >= 0", "..\\Casino\\PokerStudScript.cpp", 2803);
      v329 = sub_4F79B0(dword_791364 + 56, v759, 1);
      v474 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v329;
      v330 = (_DWORD *)sub_47E3D0(v759);
      sub_4C6B80(v330, v474);
      v331 = (ATL::CComCriticalSection *)sub_47E3D0(v759);
      ATL::CComCriticalSection::~CComCriticalSection(v331);
      v332 = sub_47E3D0(v759);
      sub_4DA470(v332);
      v753 = *(_DWORD *)(sub_47E3D0(v759) + 4);
      v333 = sub_4F79B0(dword_791364 + 56, v759, 1);
      v334 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      v664 = sub_64C8A0(v334 * v333, 0);
      v754 = v664;
      sub_5E7E40(v753, 7, v664, HIDWORD(v664));
      if ( v758 == -5 )
      {
        if ( byte_793031
          && (v335 = sub_4F79B0(dword_791364 + 56, v759, 1),
              v336 = sub_62FBF0(2 * (_DWORD)dword_793070),
              v337 = v336 + sub_62FBF0(2 * (_DWORD)dword_793070) + 5,
              v335 > CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364) * v337) )
        {
          dword_793064 = 10;
        }
        else if ( byte_793031
               && (v338 = sub_4F79B0(dword_791364 + 56, v759, 1),
                   v339 = sub_62FBF0((int)dword_793070 / 4),
                   v340 = v339 + sub_62FBF0((int)dword_793070 / 4) + 3,
                   v338 < CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364) * v340) )
        {
          dword_793064 = 9;
        }
        else
        {
          dword_793064 = 7;
        }
LABEL_904:
        dword_793068 = sub_47E490(
                         (Concurrency::details::VirtualProcessor **)dword_791364,
                         (struct Concurrency::IExecutionContext *)v759);
        goto LABEL_915;
      }
      if ( v758 == -4 )
      {
        dword_793064 = 0;
      }
      else
      {
        if ( v758 == v759 )
        {
          if ( sub_47D770((_DWORD *)dword_791364)
            && (v341 = sub_47E490(
                         (Concurrency::details::VirtualProcessor **)dword_791364,
                         (struct Concurrency::IExecutionContext *)v758),
                v342 = (_DWORD *)sub_47E390(v341),
                sub_4C6CB0(v342) == 1) )
          {
            dword_793064 = 14;
          }
          else
          {
            dword_793064 = 13;
          }
          goto LABEL_904;
        }
        v343 = (_DWORD *)sub_47E3D0(v759);
        if ( sub_4C6CB0(v343) == 1 )
        {
          v344 = (_DWORD *)sub_47E3D0(v758);
          if ( sub_4C6CB0(v344) == 1 )
          {
            if ( sub_47D770((_DWORD *)dword_791364) && sub_62FBF0(3) )
            {
              dword_793064 = 16;
              dword_793068 = sub_47E490(
                               (Concurrency::details::VirtualProcessor **)dword_791364,
                               (struct Concurrency::IExecutionContext *)v758);
              goto LABEL_915;
            }
            dword_793064 = 15;
            if ( !sub_62FBF0(2) )
              goto LABEL_904;
            goto LABEL_912;
          }
        }
        v345 = (_DWORD *)sub_47E3D0(v759);
        if ( sub_4C6CB0(v345) == 1 )
        {
          dword_793064 = 15;
          dword_793068 = sub_47E490(
                           (Concurrency::details::VirtualProcessor **)dword_791364,
                           (struct Concurrency::IExecutionContext *)v759);
          goto LABEL_915;
        }
        v346 = (_DWORD *)sub_47E3D0(v758);
        if ( sub_4C6CB0(v346) == 1 )
        {
          if ( sub_47D770((_DWORD *)dword_791364) )
            dword_793064 = 16;
          else
            dword_793064 = 15;
LABEL_912:
          dword_793068 = sub_47E490(
                           (Concurrency::details::VirtualProcessor **)dword_791364,
                           (struct Concurrency::IExecutionContext *)v758);
          goto LABEL_915;
        }
        dword_793064 = 0;
      }
LABEL_915:
      if ( v758 == -4 )
      {
        v752 = 1;
        while ( 1 )
        {
          v758 = sub_4F8D90(dword_791364 + 56, 0);
          if ( v758 == -1 )
            break;
          v347 = sub_4F79B0(dword_791364 + 56, v758, 0);
          v474 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v347;
          v348 = (_DWORD *)sub_47E3D0(v758);
          sub_4C6B80(v348, v474);
          v349 = (ATL::CComCriticalSection *)sub_47E3D0(v758);
          ATL::CComCriticalSection::~CComCriticalSection(v349);
          v750 = *(_DWORD *)(sub_47E3D0(v758) + 4);
          v350 = sub_4F79B0(dword_791364 + 56, v758, 0);
          v351 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
          v663 = sub_64C8A0(v351 * v350, 0);
          v751 = v663;
          sub_5E7E40(v750, 7, v663, HIDWORD(v663));
          if ( sub_47D770((_DWORD *)dword_791364) == 3
            || sub_47D770((_DWORD *)dword_791364) == 4
            || sub_47D770((_DWORD *)dword_791364) == 2 )
          {
            v352 = sub_47E3D0(v758);
            sub_4DA3C0(v352, 3);
          }
          else
          {
            v353 = sub_47E3D0(v758);
            sub_4DA3C0(v353, 0);
          }
          if ( v759 == -5 )
          {
            if ( v752 )
            {
              v354 = (_DWORD *)sub_47E3D0(v758);
              if ( sub_4C6CB0(v354) == 1 )
              {
                dword_793064 = 12;
                dword_793068 = sub_47E490(
                                 (Concurrency::details::VirtualProcessor **)dword_791364,
                                 (struct Concurrency::IExecutionContext *)v758);
                v752 = 0;
              }
              else
              {
                dword_793064 = 0;
              }
            }
            else
            {
              v355 = (_DWORD *)sub_47E3D0(v758);
              if ( sub_4C6CB0(v355) == 1 && !sub_62FBF0(2) )
                dword_793068 = sub_47E490(
                                 (Concurrency::details::VirtualProcessor **)dword_791364,
                                 (struct Concurrency::IExecutionContext *)v758);
            }
          }
        }
      }
      else if ( v758 != -5 )
      {
        if ( v758 < 0 )
          sub_5E9F20((char)"shLowWinner >= 0", "..\\Casino\\PokerStudScript.cpp", 2929);
        v356 = sub_4F79B0(dword_791364 + 56, v758, 0);
        v474 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v356;
        v357 = (_DWORD *)sub_47E3D0(v758);
        sub_4C6B80(v357, v474);
        v358 = (ATL::CComCriticalSection *)sub_47E3D0(v758);
        ATL::CComCriticalSection::~CComCriticalSection(v358);
        if ( sub_47D770((_DWORD *)dword_791364) == 3
          || sub_47D770((_DWORD *)dword_791364) == 4
          || sub_47D770((_DWORD *)dword_791364) == 2 )
        {
          v359 = sub_47E3D0(v758);
          sub_4DA3C0(v359, 3);
        }
        else
        {
          v360 = sub_47E3D0(v758);
          sub_4DA3C0(v360, 0);
        }
        v748 = *(_DWORD *)(sub_47E3D0(v758) + 4);
        v361 = sub_4F79B0(dword_791364 + 56, v758, 0);
        v362 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
        v662 = sub_64C8A0(v362 * v361, 0);
        v749 = v662;
        sub_5E7E40(v748, 7, v662, HIDWORD(v662));
        if ( v759 == -5 )
        {
          if ( byte_793031
            && (v363 = sub_4F79B0(dword_791364 + 56, v758, 0),
                v364 = sub_62FBF0(2 * (_DWORD)dword_793070),
                v365 = v364 + sub_62FBF0(2 * (_DWORD)dword_793070) + 5,
                v363 > CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364) * v365) )
          {
            dword_793064 = 10;
          }
          else if ( byte_793031
                 && (v366 = sub_4F79B0(dword_791364 + 56, v758, 0),
                     v367 = sub_62FBF0((int)dword_793070 / 4),
                     v368 = v367 + sub_62FBF0((int)dword_793070 / 4) + 3,
                     v366 < CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364) * v368) )
          {
            dword_793064 = 9;
          }
          else
          {
            dword_793064 = 7;
          }
          dword_793068 = sub_47E490(
                           (Concurrency::details::VirtualProcessor **)dword_791364,
                           (struct Concurrency::IExecutionContext *)v758);
        }
      }
LABEL_950:
      byte_793031 = 0;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 51);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 28))(v598, 30);
    case 54:
      word_793114 = sub_4F6540((_BYTE *)(dword_791364 + 56));
      v369 = sub_47E490(
               (Concurrency::details::VirtualProcessor **)dword_791364,
               (struct Concurrency::IExecutionContext *)word_793114);
      v370 = sub_47E390(v369);
      sub_4DA360(v370);
      for ( word_793118 = 0; ; ++word_793118 )
      {
        v371 = word_793118;
        if ( v371 >= sub_47F950() )
          break;
        v372 = (_DWORD *)sub_47E390(word_793118);
        if ( sub_4C6CB0(v372) )
        {
          if ( sub_47E190((_DWORD *)dword_791364) != 1 || sub_47E280((_DWORD *)dword_791364) )
          {
            if ( sub_47E190((_DWORD *)dword_791364) == 1 && sub_47E280((_DWORD *)dword_791364) == 2 )
            {
              LOWORD(v474) = (_WORD)dword_793070;
              LOWORD(v473) = sub_47E490(
                               (Concurrency::details::VirtualProcessor **)dword_791364,
                               (struct Concurrency::IExecutionContext *)word_793114);
              v374 = (_DWORD *)sub_47E390(word_793118);
              sub_4D9550(v374, v473, v474);
            }
            else if ( sub_47E190((_DWORD *)dword_791364) == 2 )
            {
              LOWORD(v474) = (_WORD)dword_793070;
              LOWORD(v473) = sub_47E490(
                               (Concurrency::details::VirtualProcessor **)dword_791364,
                               (struct Concurrency::IExecutionContext *)word_793114);
              v375 = (_DWORD *)sub_47E390(word_793118);
              sub_4EC570(v375, v473, v474);
            }
            else if ( sub_47E190((_DWORD *)dword_791364) == 7 )
            {
              LOWORD(v474) = (_WORD)dword_793070;
              LOWORD(v473) = sub_47E490(
                               (Concurrency::details::VirtualProcessor **)dword_791364,
                               (struct Concurrency::IExecutionContext *)word_793114);
              v376 = (_DWORD *)sub_47E390(word_793118);
              sub_4F34E0(v376, v473, v474);
            }
          }
          else
          {
            LOWORD(v474) = (_WORD)dword_793070;
            LOWORD(v473) = sub_47E490(
                             (Concurrency::details::VirtualProcessor **)dword_791364,
                             (struct Concurrency::IExecutionContext *)word_793114);
            v373 = (_DWORD *)sub_47E390(word_793118);
            sub_4D71C0(v373, v473, v474);
          }
        }
      }
      v377 = sub_4F6840(dword_791364 + 56);
      v474 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v377;
      v378 = (_DWORD *)sub_47E3D0(word_793114);
      sub_4C6B80(v378, v474);
      v379 = (ATL::CComCriticalSection *)sub_47E3D0(word_793114);
      ATL::CComCriticalSection::~CComCriticalSection(v379);
      v746 = *(_DWORD *)(sub_47E3D0(word_793114) + 4);
      v380 = sub_4F6840(dword_791364 + 56);
      v381 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      v661 = sub_64C8A0(v381 * v380, 0);
      v747 = v661;
      sub_5E7E40(v746, 7, v661, HIDWORD(v661));
      v382 = sub_4F6840(dword_791364 + 56);
      v383 = sub_62FBF0(2 * (_DWORD)dword_793070);
      v384 = v383 + sub_62FBF0(2 * (_DWORD)dword_793070) + 5;
      if ( v382 <= CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364) * v384 )
      {
        v385 = sub_4F6840(dword_791364 + 56);
        v386 = sub_62FBF0((int)dword_793070 / 4);
        v387 = v386 + sub_62FBF0((int)dword_793070 / 4) + 3;
        if ( v385 >= CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364) * v387 )
          dword_793064 = 11;
        else
          dword_793064 = 9;
      }
      else
      {
        dword_793064 = 10;
      }
      dword_793068 = sub_47E490(
                       (Concurrency::details::VirtualProcessor **)dword_791364,
                       (struct Concurrency::IExecutionContext *)word_793114);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 55);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 28))(v598, 45);
    case 55:
      if ( !(unsigned __int8)sub_5DA7B0(dword_791EB8) )
        goto LABEL_989;
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_791EB8 + 724))(dword_791EB8);
      dword_79309C = sub_483C30((int *)dword_791364, word_79310C, &dword_793110);
      if ( dword_79309C >= 0 )
      {
        ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)dword_791364);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 56);
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
      }
      v388 = (_DWORD *)sub_47E390(dword_793068);
      if ( sub_4C6CB0(v388) == 1
        && (dword_793064 == 7
         || dword_793064 == 9
         || dword_793064 == 10
         || dword_793064 == 11
         || dword_793064 == 12
         || dword_793064 == 13
         || dword_793064 == 14
         || dword_793064 == 15
         || dword_793064 == 16) )
      {
        sub_483A70(dword_793068, &v744, &v745);
        if ( v744 == 1 && v745 < 0 && !sub_62FBF0(2) )
          dword_793064 = 8;
      }
LABEL_989:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 57);
      if ( !dword_793064 )
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 28))(v598, 1);
      if ( dword_793064 == 8 )
      {
        v474 = (int)v830;
        v389 = (_DWORD *)sub_47E390(dword_793068);
        return sub_4CD3A0(v389, v474);
      }
      v390 = (_DWORD *)sub_47E390(dword_793068);
      if ( sub_4C6CB0(v390) == 1 )
      {
        switch ( dword_793064 )
        {
          case 7:
            v391 = (CRecentFileList **)sub_47E390(dword_793068);
            v519 = sub_4C7C40(v391, v659);
            v831 = 63;
            v518 = sub_485940(v519, &v658, 1, 1, 1, 1, 0, 0, 0);
            v831 = 64;
            v600 |= (unsigned int)&unk_800000 | 0x400000;
            v474 = dword_7913D4;
            v392 = sub_4A2160(v518, &v657);
            v517 = sub_4A1F00(v392, (unsigned __int8 *)v474)
                && !sub_62FBF0(2)
                && sub_47E190((_DWORD *)dword_791364) != 7
                && !sub_47D6F0((_DWORD *)dword_791364);
            v660 = v517;
            v831 = 63;
            if ( ((unsigned int)&unk_800000 & v600) != 0 )
            {
              v600 &= ~0x800000u;
              ATL::CComCriticalSection::~CComCriticalSection(&v658);
            }
            v831 = -1;
            if ( (v600 & 0x400000) != 0 )
            {
              v600 &= ~0x400000u;
              sub_484470(v659);
            }
            v474 = (int)v830;
            if ( v660 )
            {
              v393 = (_DWORD *)sub_47E390(dword_793068);
              return sub_4CCBA0(v393, v474);
            }
            else
            {
              v394 = (_DWORD *)sub_47E390(dword_793068);
              return sub_4CCB20(v394, v474);
            }
          case 10:
            v395 = (CRecentFileList **)sub_47E390(dword_793068);
            v516 = sub_4C7C40(v395, v655);
            v831 = 65;
            v515 = sub_485940(v516, &v654, 1, 1, 1, 1, 0, 0, 0);
            v831 = 66;
            v600 |= (unsigned int)&unk_1000000 | 0x2000000;
            v474 = dword_7913D4;
            v396 = sub_4A2160(v515, &v653);
            v514 = sub_4A1F00(v396, (unsigned __int8 *)v474)
                && !sub_62FBF0(2)
                && sub_47E190((_DWORD *)dword_791364) != 7
                && !sub_47D6F0((_DWORD *)dword_791364);
            v656 = v514;
            v831 = 65;
            if ( (v600 & 0x2000000) != 0 )
            {
              v600 &= ~0x2000000u;
              ATL::CComCriticalSection::~CComCriticalSection(&v654);
            }
            v831 = -1;
            if ( ((unsigned int)&unk_1000000 & v600) != 0 )
            {
              v600 &= ~0x1000000u;
              sub_484470(v655);
            }
            v474 = (int)v830;
            if ( v656 )
            {
              v397 = (_DWORD *)sub_47E390(dword_793068);
              return sub_4CCBA0(v397, v474);
            }
            else
            {
              v398 = (_DWORD *)sub_47E390(dword_793068);
              return sub_4CCC20(v398, v474);
            }
          case 9:
            v399 = (CRecentFileList **)sub_47E390(dword_793068);
            v513 = sub_4C7C40(v399, v651);
            v831 = 67;
            v512 = sub_485940(v513, &v650, 1, 1, 1, 1, 0, 0, 0);
            v831 = 68;
            v600 |= 0xC000000u;
            v474 = dword_7913D4;
            v400 = sub_4A2160(v512, &v649);
            v511 = sub_4A1F00(v400, (unsigned __int8 *)v474)
                && !sub_62FBF0(2)
                && sub_47E190((_DWORD *)dword_791364) != 7
                && !sub_47D6F0((_DWORD *)dword_791364);
            v652 = v511;
            v831 = 67;
            if ( (v600 & 0x8000000) != 0 )
            {
              v600 &= ~0x8000000u;
              ATL::CComCriticalSection::~CComCriticalSection(&v650);
            }
            v831 = -1;
            if ( (v600 & 0x4000000) != 0 )
            {
              v600 &= ~0x4000000u;
              sub_484470(v651);
            }
            v474 = (int)v830;
            if ( v652 )
            {
              v401 = (_DWORD *)sub_47E390(dword_793068);
              return sub_4CCBA0(v401, v474);
            }
            else
            {
              v402 = (_DWORD *)sub_47E390(dword_793068);
              return sub_4CCBE0(v402, v474);
            }
          case 11:
            v474 = (int)v830;
            v403 = (_DWORD *)sub_47E390(dword_793068);
            return sub_4CCB60(v403, v474);
          case 12:
            v474 = (int)v830;
            v404 = (_DWORD *)sub_47E390(dword_793068);
            return sub_4CCDE0(v404, v474);
          case 15:
            v474 = (int)v830;
            v405 = (_DWORD *)sub_47E390(dword_793068);
            return sub_4CCF80(v405, v474);
          case 16:
            v474 = (int)v830;
            sub_47E390(dword_793068);
            return sub_4CD280(v474);
          case 13:
            v474 = (int)v830;
            v406 = (_DWORD *)sub_47E390(dword_793068);
            return sub_4CCFC0(v406, v474);
          case 14:
            v474 = (int)v830;
            sub_47E390(dword_793068);
            return sub_4CD2B0(v474);
        }
      }
      else
      {
        v407 = (_DWORD *)sub_47E390(dword_793068);
        if ( sub_4C6CB0(v407) == 2 )
        {
          v736 = 0;
          v737 = 0;
          for ( word_793118 = 0; ; ++word_793118 )
          {
            v408 = word_793118;
            if ( v408 >= sub_47F950() )
              break;
            v409 = (_DWORD *)sub_47E390(word_793118);
            if ( sub_4C6CB0(v409) == 1 )
            {
              ++v737;
              v410 = (Concurrency::details::SchedulerProxy *)sub_47E390(word_793118);
              if ( Concurrency::details::SchedulerProxy::GetQueueLength(v410) == 1 )
                ++v736;
            }
          }
          v738 = sub_62FBF0(v736) + 1;
          v742 = 0;
          v740 = 0;
          while ( v742 < sub_47F950() && v740 < v738 )
          {
            v411 = (_DWORD *)sub_47E390(v742);
            if ( sub_4C6CB0(v411) == 1 )
            {
              v412 = (Concurrency::details::SchedulerProxy *)sub_47E390(v742);
              if ( Concurrency::details::SchedulerProxy::GetQueueLength(v412) == 1 )
              {
                if ( ++v740 < v738 )
                  ++v742;
              }
              else
              {
                ++v742;
              }
            }
            else
            {
              ++v742;
            }
          }
          if ( v742 >= sub_47F950() )
          {
            v741 = -1;
          }
          else
          {
            v741 = v742;
            v735 = sub_47E390(v742);
            if ( v735 && *(_DWORD *)(sub_5DCB00(*(_DWORD *)(v735 + 4)) + 12) != -1 )
              v741 = -1;
          }
          v743 = sub_62FBF0(v737) + 1;
          v742 = 0;
          v740 = 0;
          while ( v742 < sub_47F950() && v740 < v743 )
          {
            v413 = (_DWORD *)sub_47E390(v742);
            if ( sub_4C6CB0(v413) == 1 )
            {
              if ( ++v740 < v743 )
                ++v742;
            }
            else
            {
              ++v742;
            }
          }
          v739 = 0;
          if ( v742 >= sub_47F950() )
            dword_793064 = 0;
          else
            v739 = v742;
          switch ( dword_793064 )
          {
            case 7:
              v414 = (CRecentFileList **)sub_47E390(dword_793068);
              v510 = sub_4C7C40(v414, v647);
              v831 = 69;
              v509 = sub_485940(v510, &v646, 1, 1, 1, 1, 0, 0, 0);
              v831 = 70;
              v600 |= 0x30000000u;
              v474 = dword_7913A0;
              v415 = sub_4A2160(v509, &v645);
              v508 = sub_4A1F00(v415, (unsigned __int8 *)v474)
                  && sub_47E190((_DWORD *)dword_791364) != 7
                  && !sub_47D6F0((_DWORD *)dword_791364);
              v648 = v508;
              v831 = 69;
              if ( (v600 & 0x20000000) != 0 )
              {
                v600 &= ~0x20000000u;
                ATL::CComCriticalSection::~CComCriticalSection(&v646);
              }
              v831 = -1;
              if ( (v600 & 0x10000000) != 0 )
              {
                v600 &= ~0x10000000u;
                sub_484470(v647);
              }
              if ( v648 )
              {
                if ( v741 < 0 )
                {
                  v474 = (int)v830;
                  v424 = (_DWORD *)sub_47E390(v739);
                  return sub_4CCCE0(v424, v474);
                }
                else
                {
                  v416 = (CRecentFileList **)sub_47E390(v741);
                  v507 = sub_4C7C40(v416, v643);
                  v831 = 71;
                  v506 = sub_485940(v507, &v642, 1, 1, 1, 1, 0, 0, 0);
                  v831 = 72;
                  v600 |= 0xC0000000;
                  v474 = dword_7913D4;
                  v417 = sub_4A2160(v506, &v641);
                  v505 = sub_4A1F00(v417, (unsigned __int8 *)v474) && !sub_62FBF0(2);
                  v644 = v505;
                  v831 = 71;
                  v600 &= ~0x80000000;
                  ATL::CComCriticalSection::~CComCriticalSection(&v642);
                  v831 = -1;
                  if ( (v600 & 0x40000000) != 0 )
                  {
                    v600 &= ~0x40000000u;
                    sub_484470(v643);
                  }
                  if ( v644 )
                  {
                    v474 = (int)v830;
                    v418 = (_DWORD *)sub_47E390(v741);
                    return sub_4CCE00(v418, v474);
                  }
                  else
                  {
                    v419 = (CRecentFileList **)sub_47E390(v741);
                    v504 = sub_4C7C40(v419, v639);
                    v831 = 73;
                    v503 = sub_485940(v504, &v638, 1, 1, 1, 1, 0, 0, 0);
                    v831 = 74;
                    v599 |= 3u;
                    v474 = dword_791390;
                    v420 = sub_4A2160(v503, &v637);
                    v502 = sub_4A1E10(v420, (unsigned __int8 *)v474) && !sub_62FBF0(2);
                    v640 = v502;
                    v831 = 73;
                    if ( (v599 & 2) != 0 )
                    {
                      v599 &= ~2u;
                      ATL::CComCriticalSection::~CComCriticalSection(&v638);
                    }
                    v831 = -1;
                    if ( (v599 & 1) != 0 )
                    {
                      v599 &= ~1u;
                      sub_484470(v639);
                    }
                    if ( v640 )
                    {
                      v474 = (int)v830;
                      v421 = (_DWORD *)sub_47E390(v741);
                      return sub_4CCE40(v421, v474);
                    }
                    else if ( sub_62FBF0(3) )
                    {
                      v474 = (int)v830;
                      v423 = (_DWORD *)sub_47E390(v741);
                      return sub_4CCCE0(v423, v474);
                    }
                    else
                    {
                      v474 = (int)v830;
                      v422 = (_DWORD *)sub_47E390(v741);
                      return sub_4CCDA0(v422, v474);
                    }
                  }
                }
              }
              else if ( v741 < 0 )
              {
                v474 = (int)v830;
                v433 = (_DWORD *)sub_47E390(v739);
                return sub_4CCC60(v433, v474);
              }
              else
              {
                v425 = (CRecentFileList **)sub_47E390(v741);
                v501 = sub_4C7C40(v425, v635);
                v831 = 75;
                v500 = sub_485940(v501, &v634, 1, 1, 1, 1, 0, 0, 0);
                v831 = 76;
                v599 |= 0xCu;
                v474 = dword_7913D4;
                v426 = sub_4A2160(v500, &v633);
                v499 = sub_4A1F00(v426, (unsigned __int8 *)v474)
                    && !sub_62FBF0(2)
                    && sub_47E190((_DWORD *)dword_791364) != 7
                    && !sub_47D6F0((_DWORD *)dword_791364);
                v636 = v499;
                v831 = 75;
                if ( (v599 & 8) != 0 )
                {
                  v599 &= ~8u;
                  ATL::CComCriticalSection::~CComCriticalSection(&v634);
                }
                v831 = -1;
                if ( (v599 & 4) != 0 )
                {
                  v599 &= ~4u;
                  sub_484470(v635);
                }
                if ( v636 )
                {
                  v474 = (int)v830;
                  v427 = (_DWORD *)sub_47E390(v741);
                  return sub_4CCE00(v427, v474);
                }
                else
                {
                  v428 = (CRecentFileList **)sub_47E390(v741);
                  v498 = sub_4C7C40(v428, v631);
                  v831 = 77;
                  v497 = sub_485940(v498, &v630, 1, 1, 1, 1, 0, 0, 0);
                  v831 = 78;
                  v599 |= 0x30u;
                  v474 = dword_791390;
                  v429 = sub_4A2160(v497, &v629);
                  v496 = sub_4A1E10(v429, (unsigned __int8 *)v474)
                      && !sub_62FBF0(2)
                      && sub_47E190((_DWORD *)dword_791364) != 7
                      && !sub_47D6F0((_DWORD *)dword_791364);
                  v632 = v496;
                  v831 = 77;
                  if ( (v599 & 0x20) != 0 )
                  {
                    v599 &= ~0x20u;
                    ATL::CComCriticalSection::~CComCriticalSection(&v630);
                  }
                  v831 = -1;
                  if ( (v599 & 0x10) != 0 )
                  {
                    v599 &= ~0x10u;
                    sub_484470(v631);
                  }
                  if ( v632 )
                  {
                    v474 = (int)v830;
                    v430 = (_DWORD *)sub_47E390(v741);
                    return sub_4CCE40(v430, v474);
                  }
                  else if ( sub_62FBF0(3) )
                  {
                    v474 = (int)v830;
                    v432 = (_DWORD *)sub_47E390(v741);
                    return sub_4CCC60(v432, v474);
                  }
                  else
                  {
                    v474 = (int)v830;
                    v431 = (_DWORD *)sub_47E390(v741);
                    return sub_4CCDA0(v431, v474);
                  }
                }
              }
            case 10:
              v434 = (CRecentFileList **)sub_47E390(dword_793068);
              v495 = sub_4C7C40(v434, v627);
              v831 = 79;
              v494 = sub_485940(v495, &v626, 1, 1, 1, 1, 0, 0, 0);
              v831 = 80;
              v599 |= 0xC0u;
              v474 = dword_7913A0;
              v435 = sub_4A2160(v494, &v625);
              v493 = sub_4A1F00(v435, (unsigned __int8 *)v474)
                  && sub_47E190((_DWORD *)dword_791364) != 7
                  && !sub_47D6F0((_DWORD *)dword_791364);
              v628 = v493;
              v831 = 79;
              if ( (v599 & 0x80) != 0 )
              {
                v599 &= ~0x80u;
                ATL::CComCriticalSection::~CComCriticalSection(&v626);
              }
              v831 = -1;
              if ( (v599 & 0x40) != 0 )
              {
                v599 &= ~0x40u;
                sub_484470(v627);
              }
              if ( v628 )
              {
                if ( v741 < 0 )
                {
                  v474 = (int)v830;
                  v444 = (_DWORD *)sub_47E390(v739);
                  return sub_4CCCE0(v444, v474);
                }
                else
                {
                  v436 = (CRecentFileList **)sub_47E390(v741);
                  v492 = sub_4C7C40(v436, v623);
                  v831 = 81;
                  v491 = sub_485940(v492, &v622, 1, 1, 1, 1, 0, 0, 0);
                  v831 = 82;
                  v599 |= 0x300u;
                  v474 = dword_7913D4;
                  v437 = sub_4A2160(v491, &v621);
                  v490 = sub_4A1F00(v437, (unsigned __int8 *)v474) && !sub_62FBF0(2);
                  v624 = v490;
                  v831 = 81;
                  if ( (v599 & 0x200) != 0 )
                  {
                    v599 &= ~0x200u;
                    ATL::CComCriticalSection::~CComCriticalSection(&v622);
                  }
                  v831 = -1;
                  if ( (v599 & 0x100) != 0 )
                  {
                    v599 &= ~0x100u;
                    sub_484470(v623);
                  }
                  if ( v624 )
                  {
                    v474 = (int)v830;
                    v438 = (_DWORD *)sub_47E390(v741);
                    return sub_4CCE00(v438, v474);
                  }
                  else
                  {
                    v439 = (CRecentFileList **)sub_47E390(v741);
                    v489 = sub_4C7C40(v439, v619);
                    v831 = 83;
                    v488 = sub_485940(v489, &v618, 1, 1, 1, 1, 0, 0, 0);
                    v831 = 84;
                    v599 |= 0xC00u;
                    v474 = dword_791390;
                    v440 = sub_4A2160(v488, &v617);
                    v487 = sub_4A1E10(v440, (unsigned __int8 *)v474) && !sub_62FBF0(2);
                    v620 = v487;
                    v831 = 83;
                    if ( (v599 & 0x800) != 0 )
                    {
                      v599 &= ~0x800u;
                      ATL::CComCriticalSection::~CComCriticalSection(&v618);
                    }
                    v831 = -1;
                    if ( (v599 & 0x400) != 0 )
                    {
                      v599 &= ~0x400u;
                      sub_484470(v619);
                    }
                    if ( v620 )
                    {
                      v474 = (int)v830;
                      v441 = (_DWORD *)sub_47E390(v741);
                      return sub_4CCE40(v441, v474);
                    }
                    else if ( sub_62FBF0(3) )
                    {
                      v474 = (int)v830;
                      v443 = (_DWORD *)sub_47E390(v741);
                      return sub_4CCCE0(v443, v474);
                    }
                    else
                    {
                      v474 = (int)v830;
                      v442 = (_DWORD *)sub_47E390(v741);
                      return sub_4CCDA0(v442, v474);
                    }
                  }
                }
              }
              else if ( v741 < 0 )
              {
                v474 = (int)v830;
                v453 = (_DWORD *)sub_47E390(v739);
                return sub_4CCD60(v453, v474);
              }
              else
              {
                v445 = (CRecentFileList **)sub_47E390(v741);
                v486 = sub_4C7C40(v445, v615);
                v831 = 85;
                v485 = sub_485940(v486, &v614, 1, 1, 1, 1, 0, 0, 0);
                v831 = 86;
                v599 |= 0x3000u;
                v474 = dword_7913D4;
                v446 = sub_4A2160(v485, &v613);
                v484 = sub_4A1F00(v446, (unsigned __int8 *)v474)
                    && !sub_62FBF0(2)
                    && sub_47E190((_DWORD *)dword_791364) != 7
                    && !sub_47D6F0((_DWORD *)dword_791364);
                v616 = v484;
                v831 = 85;
                if ( (v599 & 0x2000) != 0 )
                {
                  v599 &= ~0x2000u;
                  ATL::CComCriticalSection::~CComCriticalSection(&v614);
                }
                v831 = -1;
                if ( (v599 & 0x1000) != 0 )
                {
                  v599 &= ~0x1000u;
                  sub_484470(v615);
                }
                if ( v616 )
                {
                  v474 = (int)v830;
                  v447 = (_DWORD *)sub_47E390(v741);
                  return sub_4CCE00(v447, v474);
                }
                else
                {
                  v448 = (CRecentFileList **)sub_47E390(v741);
                  v483 = sub_4C7C40(v448, v611);
                  v831 = 87;
                  v482 = sub_485940(v483, &v610, 1, 1, 1, 1, 0, 0, 0);
                  v831 = 88;
                  v599 |= 0xC000u;
                  v474 = dword_791390;
                  v449 = sub_4A2160(v482, &v609);
                  v481 = sub_4A1E10(v449, (unsigned __int8 *)v474)
                      && !sub_62FBF0(2)
                      && sub_47E190((_DWORD *)dword_791364) != 7
                      && !sub_47D6F0((_DWORD *)dword_791364);
                  v612 = v481;
                  v831 = 87;
                  if ( (v599 & 0x8000) != 0 )
                  {
                    v599 &= ~0x8000u;
                    ATL::CComCriticalSection::~CComCriticalSection(&v610);
                  }
                  v831 = -1;
                  if ( (v599 & 0x4000) != 0 )
                  {
                    v599 &= ~0x4000u;
                    sub_484470(v611);
                  }
                  if ( v612 )
                  {
                    v474 = (int)v830;
                    v450 = (_DWORD *)sub_47E390(v741);
                    return sub_4CCE40(v450, v474);
                  }
                  else if ( sub_62FBF0(3) )
                  {
                    v474 = (int)v830;
                    v452 = (_DWORD *)sub_47E390(v741);
                    return sub_4CCD60(v452, v474);
                  }
                  else
                  {
                    v474 = (int)v830;
                    v451 = (_DWORD *)sub_47E390(v741);
                    return sub_4CCDA0(v451, v474);
                  }
                }
              }
            case 9:
              if ( v741 < 0 )
              {
                v474 = (int)v830;
                v462 = (_DWORD *)sub_47E390(v739);
                return sub_4CCD20(v462, v474);
              }
              else
              {
                v454 = (CRecentFileList **)sub_47E390(v741);
                v480 = sub_4C7C40(v454, v607);
                v831 = 89;
                v479 = sub_485940(v480, &v606, 1, 1, 1, 1, 0, 0, 0);
                v831 = 90;
                v599 |= 0x30000u;
                v474 = dword_7913D4;
                v455 = sub_4A2160(v479, &v605);
                v478 = sub_4A1F00(v455, (unsigned __int8 *)v474)
                    && !sub_62FBF0(2)
                    && sub_47E190((_DWORD *)dword_791364) != 7
                    && !sub_47D6F0((_DWORD *)dword_791364);
                v608 = v478;
                v831 = 89;
                if ( (v599 & 0x20000) != 0 )
                {
                  v599 &= ~0x20000u;
                  ATL::CComCriticalSection::~CComCriticalSection(&v606);
                }
                v831 = -1;
                if ( (v599 & 0x10000) != 0 )
                {
                  v599 &= ~0x10000u;
                  sub_484470(v607);
                }
                if ( v608 )
                {
                  v474 = (int)v830;
                  v456 = (_DWORD *)sub_47E390(v741);
                  return sub_4CCE00(v456, v474);
                }
                else
                {
                  v457 = (CRecentFileList **)sub_47E390(v741);
                  v477 = sub_4C7C40(v457, v603);
                  v831 = 91;
                  v476 = sub_485940(v477, &v602, 1, 1, 1, 1, 0, 0, 0);
                  v831 = 92;
                  v599 |= 0xC0000u;
                  v474 = dword_791390;
                  v458 = sub_4A2160(v476, &v601);
                  v475 = sub_4A1E10(v458, (unsigned __int8 *)v474)
                      && !sub_62FBF0(2)
                      && sub_47E190((_DWORD *)dword_791364) != 7
                      && !sub_47D6F0((_DWORD *)dword_791364);
                  v604 = v475;
                  v831 = 91;
                  if ( (v599 & 0x80000) != 0 )
                  {
                    v599 &= ~0x80000u;
                    ATL::CComCriticalSection::~CComCriticalSection(&v602);
                  }
                  v831 = -1;
                  if ( (v599 & 0x40000) != 0 )
                  {
                    v599 &= ~0x40000u;
                    sub_484470(v603);
                  }
                  if ( v604 )
                  {
                    v474 = (int)v830;
                    v459 = (_DWORD *)sub_47E390(v741);
                    return sub_4CCE40(v459, v474);
                  }
                  else if ( sub_62FBF0(3) )
                  {
                    v474 = (int)v830;
                    v461 = (_DWORD *)sub_47E390(v741);
                    return sub_4CCD20(v461, v474);
                  }
                  else
                  {
                    v474 = (int)v830;
                    v460 = (_DWORD *)sub_47E390(v741);
                    return sub_4CCDA0(v460, v474);
                  }
                }
              }
            case 11:
              v474 = (int)v830;
              v463 = (_DWORD *)sub_47E390(v739);
              return sub_4CCCA0(v463, v474);
            case 13:
              v474 = (int)v830;
              if ( v741 < 0 )
                v464 = (_DWORD *)sub_47E390(v739);
              else
                v464 = (_DWORD *)sub_47E390(v741);
              return sub_4CCFE0(v464, v474);
          }
        }
      }
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v598 + 28))(v598, 1);
    case 56:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 57);
      v465 = (_DWORD *)sub_47E390(dword_79309C);
      if ( sub_4C6CB0(v465) == 2 )
      {
        for ( jj = dword_79309C; ; jj = sub_62FBF0(v467) )
        {
          v466 = (_DWORD *)sub_47E390(jj);
          if ( sub_4C6CB0(v466) == 1 )
            break;
          v467 = sub_47F950();
        }
        if ( sub_62FBF0(1) )
        {
          v469 = (_DWORD *)sub_47E390(jj);
          return sub_4CD190(v469, (int)v830);
        }
        else
        {
          v468 = (_DWORD *)sub_47E390(jj);
          return sub_4CD1B0(v468, (int)v830);
        }
      }
      else if ( sub_62FBF0(3) == 10 )
      {
        v470 = (_DWORD *)sub_47E390(dword_79309C);
        return sub_4CD1D0(v470, (int)v830);
      }
      else
      {
        v471 = (_DWORD *)sub_47E390(dword_79309C);
        return sub_4CD170(v471, (int)v830);
      }
    case 57:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 58);
      if ( (int)sub_637810(4) >= 3 || (int)sub_637810(4) < 0 )
        return sub_5FC490(3);
      goto LABEL_669;
    case 58:
    case 59:
LABEL_7:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v598 + 4))(v598, 60);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v598 + 28))(v598, 0);
    case 60:
      ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)dword_791364);
      sub_47AA30((_BYTE *)dword_791364);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v598 + 12) + 28))(*(_DWORD *)(v598 + 12), 0);
      return sub_5FC420(0);
    default:
      return result;
  }
}


//======================================================================
// sub_516DD0
// entry 00516dd0  size 79  status ok
//======================================================================

bool sub_516DD0()
{
  if ( sub_47E190((_DWORD *)dword_791364) == 7 )
    return dword_793078 < 7;
  else
    return dword_793078 >= 5 - (sub_47E190((_DWORD *)dword_791364) != 1);
}


//======================================================================
// sub_516E20
// entry 00516e20  size 279  status ok
//======================================================================

int sub_516E20()
{
  int v0; // esi
  int v1; // esi
  int v3; // [esp+4h] [ebp-Ch]
  Concurrency::details::SchedulerProxy *v4; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  v4 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
  v0 = sub_4C6A70(v4);
  dword_793104 = v0 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  if ( dword_793104 > sub_47BC60((_DWORD *)dword_791364) )
  {
    v1 = sub_47BC60((_DWORD *)dword_791364);
    v5 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v1;
    sub_4C6C10(v4, v5);
    ATL::CComCriticalSection::~CComCriticalSection(v4);
    v3 = sub_4F52A0(dword_791364 + 56);
  }
  else
  {
    v5 = dword_793104 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
    sub_4C6C10(v4, v5);
    ATL::CComCriticalSection::~CComCriticalSection(v4);
    sub_4DC4D0((_DWORD **)v4, 9, 0);
    Concurrency::details::SchedulerProxy::SetQueueLength(v4, 2u);
    v3 = sub_4F53C0(dword_791364 + 56, dword_793104);
  }
  sub_47EC90((__int16 *)dword_791364, v5);
  return v3;
}


//======================================================================
// sub_516F40
// entry 00516f40  size 341  status ok
//======================================================================

int __cdecl sub_516F40(char a1)
{
  int v1; // esi
  int v2; // esi
  int v4; // [esp+4h] [ebp-Ch]
  Concurrency::details::SchedulerProxy *v5; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]
  int v7; // [esp+Ch] [ebp-4h]

  v4 = -99;
  v5 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
  v1 = sub_4C6A70(v5);
  dword_793104 = v1 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  if ( dword_793104 > sub_4F67D0((__int16 *)(dword_791364 + 56)) )
  {
    if ( !a1 )
    {
      v2 = sub_4F67D0((__int16 *)(dword_791364 + 56));
      v7 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v2;
      sub_4C6C10(v5, v7);
      ATL::CComCriticalSection::~CComCriticalSection(v5);
      sub_4DC4D0((_DWORD **)v5, 3, 0);
      v4 = sub_4F5CD0((__int16 *)(dword_791364 + 56));
      sub_47EC90((__int16 *)dword_791364, v7);
    }
    dword_793064 = 3;
  }
  else
  {
    if ( !a1 )
    {
      v6 = dword_793104 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      sub_4C6C10(v5, v6);
      ATL::CComCriticalSection::~CComCriticalSection(v5);
      sub_4DC4D0((_DWORD **)v5, 9, 0);
      Concurrency::details::SchedulerProxy::SetQueueLength(v5, 2u);
      v4 = sub_4F5E80((__int16 *)(dword_791364 + 56), dword_793104);
      sub_47EC90((__int16 *)dword_791364, v6);
    }
    dword_793064 = 6;
  }
  return v4;
}


//======================================================================
// sub_5170A0
// entry 005170a0  size 615  status ok
//======================================================================

int __cdecl sub_5170A0(char a1, int a2)
{
  char *v2; // eax
  int v3; // esi
  int v5; // [esp+Ch] [ebp-10h]
  int v6; // [esp+10h] [ebp-Ch]
  int v7; // [esp+10h] [ebp-Ch]
  Concurrency::details::SchedulerProxy *v8; // [esp+14h] [ebp-8h]
  int v9; // [esp+18h] [ebp-4h]

  v5 = -99;
  v8 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
  if ( *(_BYTE *)(dword_7947E0 + 20276)
    && v8 == (Concurrency::details::SchedulerProxy *)sub_4798C0((void *)dword_791364) )
  {
    v2 = (char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(dword_791EB8 + 156) + 516) + 184))(*(_DWORD *)(*(_DWORD *)(dword_791EB8 + 156) + 516));
    v9 = sub_64CAB0(v2);
  }
  else if ( a2 <= 0 )
  {
    if ( sub_516DD0() )
      v9 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
    else
      v9 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
  }
  else
  {
    v9 = a2;
  }
  if ( v9 >= *(_DWORD *)(dword_791364 + 1040) )
  {
    if ( v9 > *(_DWORD *)(dword_791364 + 1040) )
      *(_DWORD *)(dword_791364 + 1040) = v9;
  }
  else
  {
    v9 = *(_DWORD *)(dword_791364 + 1040);
  }
  v3 = sub_4C6A70(v8);
  dword_793104 = v3 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  if ( dword_793104 > v9 )
  {
    if ( !a1 )
    {
      v7 = v9 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      sub_4C6C10(v8, v7);
      ATL::CComCriticalSection::~CComCriticalSection(v8);
      if ( dword_793078 != 3 - (sub_47E190((_DWORD *)dword_791364) != 1) || sub_47D6B0((_DWORD *)dword_791364) )
        sub_4DC4D0((_DWORD **)v8, 1, v7);
      else
        sub_4DC4D0((_DWORD **)v8, 2, v7);
      v5 = sub_4F58C0((__int16 *)(dword_791364 + 56), v9);
      sub_47EC90((__int16 *)dword_791364, v7);
    }
    dword_793064 = 4;
  }
  else
  {
    if ( !a1 )
    {
      v6 = dword_793104 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      sub_4C6C10(v8, v6);
      ATL::CComCriticalSection::~CComCriticalSection(v8);
      sub_4DC4D0((_DWORD **)v8, 9, 0);
      Concurrency::details::SchedulerProxy::SetQueueLength(v8, 2u);
      v5 = sub_4F5A80((__int16 *)(dword_791364 + 56), dword_793104);
      sub_47EC90((__int16 *)dword_791364, v6);
    }
    dword_793064 = 6;
  }
  return v5;
}


//======================================================================
// sub_517310
// entry 00517310  size 276  status ok
//======================================================================

unsigned int sub_517310()
{
  int v0; // esi
  int v1; // esi
  _DWORD *v2; // eax
  int v3; // esi
  signed int v5; // [esp+4h] [ebp-8h]
  int v6; // [esp+8h] [ebp-4h]

  if ( sub_516DD0() )
  {
    if ( byte_793032 )
    {
      v0 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
      v6 = v0 - (_DWORD)CAtlTraceProcess::Base((CAtlTraceProcess *)dword_791364);
    }
    else
    {
      v6 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
    }
  }
  else if ( byte_793032 )
  {
    v1 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
    v6 = v1 - (_DWORD)CAtlTraceProcess::Base((CAtlTraceProcess *)dword_791364);
  }
  else
  {
    v6 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
  }
  v2 = (_DWORD *)sub_47E3B0((void *)dword_791364);
  v3 = sub_4C6A70(v2);
  dword_793104 = v3 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  dword_793104 -= sub_4F67D0((__int16 *)(dword_791364 + 56));
  if ( dword_793104 > v6 )
    return v6 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  v5 = dword_793104 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  if ( v5 < 0 )
    return 0;
  return v5;
}


//======================================================================
// sub_517430
// entry 00517430  size 820  status ok
//======================================================================

int __cdecl sub_517430(char a1, int a2)
{
  char *v2; // eax
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int v7; // esi
  int v8; // eax
  int v9; // esi
  unsigned int v10; // eax
  int v11; // [esp+Ch] [ebp-10h]
  int v12; // [esp+10h] [ebp-Ch]
  Concurrency::details::SchedulerProxy *v13; // [esp+14h] [ebp-8h]
  int v14; // [esp+18h] [ebp-4h]
  int v15; // [esp+18h] [ebp-4h]

  v12 = -99;
  v13 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
  if ( *(_BYTE *)(dword_7947E0 + 20276)
    && v13 == (Concurrency::details::SchedulerProxy *)sub_4798C0((void *)dword_791364) )
  {
    v2 = (char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(dword_791EB8 + 156) + 516) + 184))(*(_DWORD *)(*(_DWORD *)(dword_791EB8 + 156) + 516));
    v11 = sub_64CAB0(v2);
  }
  else if ( a2 <= 0 )
  {
    if ( sub_516DD0() )
    {
      if ( byte_793032 )
      {
        v3 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
        v11 = v3 - (_DWORD)CAtlTraceProcess::Base((CAtlTraceProcess *)dword_791364);
        byte_793032 = 0;
      }
      else
      {
        v11 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
      }
    }
    else if ( byte_793032 )
    {
      v4 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
      v11 = v4 - (_DWORD)CAtlTraceProcess::Base((CAtlTraceProcess *)dword_791364);
      byte_793032 = 0;
    }
    else
    {
      v11 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
    }
  }
  else
  {
    v11 = a2;
  }
  if ( v11 >= *(_DWORD *)(dword_791364 + 1040) )
  {
    if ( v11 > *(_DWORD *)(dword_791364 + 1040) )
      *(_DWORD *)(dword_791364 + 1040) = v11;
  }
  else
  {
    v11 = *(_DWORD *)(dword_791364 + 1040);
  }
  v5 = sub_4C6A70(v13);
  dword_793104 = v5 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  if ( dword_793104 <= sub_4F67D0((__int16 *)(dword_791364 + 56)) )
    return sub_516F40(a1);
  if ( dword_793104 > v11 + sub_4F67D0((__int16 *)(dword_791364 + 56)) )
  {
    if ( !a1 )
    {
      v9 = v11 + sub_4F67D0((__int16 *)(dword_791364 + 56));
      v15 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v9;
      sub_4C6C10(v13, v15);
      ATL::CComCriticalSection::~CComCriticalSection(v13);
      v10 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      sub_4DC4D0((_DWORD **)v13, 2, v11 * v10);
      v12 = sub_4F6020((__int16 *)(dword_791364 + 56), v11);
      sub_47EC90((__int16 *)dword_791364, v15);
    }
    dword_793064 = 5;
  }
  else
  {
    if ( a2 > 0 )
    {
      v7 = dword_793104 - sub_4F67D0((__int16 *)(dword_791364 + 56));
      if ( v7 < (int)CMDIChildWndEx::GetTabbedPane((CMDIChildWndEx *)dword_791364) )
        return sub_516F40(a1);
    }
    if ( !a1 )
    {
      v14 = dword_793104 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      sub_4C6C10(v13, v14);
      ATL::CComCriticalSection::~CComCriticalSection(v13);
      sub_4DC4D0((_DWORD **)v13, 9, 0);
      Concurrency::details::SchedulerProxy::SetQueueLength(v13, 2u);
      v8 = sub_4F67D0((__int16 *)(dword_791364 + 56));
      v12 = sub_4F6210(dword_791364 + 56, dword_793104 - v8);
      sub_47EC90((__int16 *)dword_791364, v14);
    }
    dword_793064 = 6;
  }
  return v12;
}


//======================================================================
// sub_517770
// entry 00517770  size 334  status ok
//======================================================================

int sub_517770()
{
  int v0; // esi
  void *v1; // esi
  void *v2; // eax
  int v4; // [esp+4h] [ebp-Ch]
  Concurrency::details::SchedulerProxy *v5; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]
  int v7; // [esp+Ch] [ebp-4h]

  v5 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
  byte_793032 = 1;
  v0 = sub_4C6A70(v5);
  dword_793104 = v0 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  if ( dword_793104 > (int)CAtlTraceProcess::Base((CAtlTraceProcess *)dword_791364) )
  {
    v1 = CAtlTraceProcess::Base((CAtlTraceProcess *)dword_791364);
    v7 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * (_DWORD)v1;
    sub_4C6C10(v5, v7);
    ATL::CComCriticalSection::~CComCriticalSection(v5);
    sub_4DC4D0((_DWORD **)v5, 6, v7);
    v2 = CAtlTraceProcess::Base((CAtlTraceProcess *)dword_791364);
    v4 = sub_4F5C40(dword_791364 + 56, (int)v2, 1);
    sub_47EC90((__int16 *)dword_791364, v7);
    dword_793064 = 0;
  }
  else
  {
    v6 = dword_793104 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
    sub_4C6C10(v5, v6);
    ATL::CComCriticalSection::~CComCriticalSection(v5);
    sub_4DC4D0((_DWORD **)v5, 9, 0);
    Concurrency::details::SchedulerProxy::SetQueueLength(v5, 2u);
    v4 = sub_4F5A80((__int16 *)(dword_791364 + 56), dword_793104);
    sub_47EC90((__int16 *)dword_791364, v6);
    dword_793064 = 6;
  }
  return v4;
}


//======================================================================
// sub_5178C0
// entry 005178c0  size 368  status ok
//======================================================================

int __cdecl sub_5178C0(char a1)
{
  int v1; // esi
  __int16 ExecutingContext; // ax
  int v4; // [esp+4h] [ebp-10h]
  int v5; // [esp+8h] [ebp-Ch]
  Concurrency::details::SchedulerProxy *v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]
  int v8; // [esp+10h] [ebp-4h]

  v5 = -99;
  v4 = sub_4F6840(dword_791364 + 56);
  v6 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
  v1 = sub_4C6A70(v6);
  dword_793104 = v1 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  if ( dword_793104 > v4 )
  {
    if ( !a1 )
    {
      v8 = v4 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      sub_4C6C10(v6, v8);
      ATL::CComCriticalSection::~CComCriticalSection(v6);
      sub_4DC4D0((_DWORD **)v6, 10, 0);
      sub_4F4E20((__int16 *)(dword_791364 + 56), v4);
      v5 = -1;
      sub_47EC90((__int16 *)dword_791364, v8);
    }
    dword_793064 = 0;
  }
  else
  {
    if ( !a1 )
    {
      v7 = dword_793104 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      sub_4C6C10(v6, v7);
      ATL::CComCriticalSection::~CComCriticalSection(v6);
      sub_4DC4D0((_DWORD **)v6, 9, 0);
      Concurrency::details::SchedulerProxy::SetQueueLength(v6, 2u);
      sub_4F4E20((__int16 *)(dword_791364 + 56), dword_793104);
      ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v6);
      v5 = sub_4F4F80((__int16 *)(dword_791364 + 56), ExecutingContext);
      sub_47EC90((__int16 *)dword_791364, v7);
    }
    dword_793064 = 6;
  }
  return v5;
}


//======================================================================
// sub_517A30
// entry 00517a30  size 1377  status ok
//======================================================================

int sub_517A30()
{
  void *v0; // eax
  struct CDockablePane *TabbedPane; // eax
  void *v3; // eax
  struct CDockablePane *v4; // eax
  struct CDockablePane *v5; // eax
  struct CDockablePane *v6; // eax
  int v7; // esi
  int v8; // [esp+4h] [ebp-3Ch]
  int v9; // [esp+8h] [ebp-38h]
  int v10; // [esp+Ch] [ebp-34h]
  int v11; // [esp+10h] [ebp-30h]
  int v12; // [esp+18h] [ebp-28h]
  int v13; // [esp+20h] [ebp-20h]
  int v14; // [esp+28h] [ebp-18h]
  int v15; // [esp+2Ch] [ebp-14h]
  int v16; // [esp+34h] [ebp-Ch]
  int v17; // [esp+38h] [ebp-8h]
  Concurrency::details::SchedulerProxy *v18; // [esp+3Ch] [ebp-4h]

  v18 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
  v17 = sub_47E190((_DWORD *)dword_791364);
  if ( sub_4C6CB0(v18) == 2 )
  {
    if ( Concurrency::details::SchedulerProxy::GetQueueLength(v18) != 1 )
      sub_5E9F20((char)"currentPokerPlayer->GetPlayerStatus() == ACTIVE", "..\\Casino\\PokerStudScript.cpp", 582);
    switch ( v17 )
    {
      case 1:
        if ( sub_47E280((_DWORD *)dword_791364) || sub_47D770((_DWORD *)dword_791364) )
        {
          CAtlTraceProcess::Base((CAtlTraceProcess *)dword_791364);
          dword_793100 = sub_502ED0(dword_793078, (int)dword_793070, (unsigned __int8 *)dword_793058);
        }
        else
        {
          v0 = CAtlTraceProcess::Base((CAtlTraceProcess *)dword_791364);
          dword_793100 = sub_4FE290(dword_793078, (int)dword_793070, (unsigned __int8 *)dword_793058, (int)v0);
        }
        break;
      case 2:
        CAtlTraceProcess::Base((CAtlTraceProcess *)dword_791364);
        dword_793100 = sub_50A190(dword_793078, (int)dword_793070, (unsigned __int8 *)dword_793058);
        break;
      case 7:
        dword_793100 = sub_50C6C0();
        break;
      default:
        sub_5E9F20((char)"0", "..\\Casino\\PokerStudScript.cpp", 600);
        break;
    }
    if ( sub_47D6B0((_DWORD *)dword_791364) == 1 && (dword_793100 == 2 || dword_793100 == 4) )
    {
      if ( sub_516DD0() )
        v11 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
      else
        v11 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
      TabbedPane = CMDIChildWndEx::GetTabbedPane((CMDIChildWndEx *)dword_791364);
      v16 = sub_4C79F0((__int16 *)v18, (int)TabbedPane, v11);
      unknown_libname_516(v16);
    }
    return 5;
  }
  else if ( sub_4C6CB0(v18) == 1 )
  {
    if ( Concurrency::details::SchedulerProxy::GetQueueLength(v18) != 1 )
      sub_5E9F20((char)"currentPokerPlayer->GetPlayerStatus() == ACTIVE", "..\\Casino\\PokerStudScript.cpp", 614);
    v15 = 0;
    switch ( v17 )
    {
      case 1:
        if ( sub_47E280((_DWORD *)dword_791364) || sub_47D770((_DWORD *)dword_791364) )
        {
          CAtlTraceProcess::Base((CAtlTraceProcess *)dword_791364);
          v15 = sub_502ED0(dword_793078, (int)dword_793070, (unsigned __int8 *)dword_793058);
        }
        else
        {
          v3 = CAtlTraceProcess::Base((CAtlTraceProcess *)dword_791364);
          v15 = sub_4FE290(dword_793078, (int)dword_793070, (unsigned __int8 *)dword_793058, (int)v3);
        }
        if ( sub_47D6B0((_DWORD *)dword_791364) == 1 && (v15 == 2 || v15 == 4) )
        {
          if ( sub_516DD0() )
            v10 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
          else
            v10 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
          v4 = CMDIChildWndEx::GetTabbedPane((CMDIChildWndEx *)dword_791364);
          v14 = sub_4C79F0((__int16 *)v18, (int)v4, v10);
          unknown_libname_516(v14);
        }
        break;
      case 2:
        CAtlTraceProcess::Base((CAtlTraceProcess *)dword_791364);
        v15 = sub_50A190(dword_793078, (int)dword_793070, (unsigned __int8 *)dword_793058);
        if ( sub_47D6B0((_DWORD *)dword_791364) == 1 && (v15 == 2 || v15 == 4) )
        {
          if ( sub_516DD0() )
            v9 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
          else
            v9 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
          v5 = CMDIChildWndEx::GetTabbedPane((CMDIChildWndEx *)dword_791364);
          v13 = sub_4C79F0((__int16 *)v18, (int)v5, v9);
          unknown_libname_516(v13);
        }
        break;
      case 7:
        v15 = sub_50C6C0();
        if ( sub_47D6B0((_DWORD *)dword_791364) == 1 && (v15 == 2 || v15 == 4) )
        {
          if ( sub_516DD0() )
            v8 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
          else
            v8 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
          v6 = CMDIChildWndEx::GetTabbedPane((CMDIChildWndEx *)dword_791364);
          v12 = sub_4C79F0((__int16 *)v18, (int)v6, v8);
          unknown_libname_516(v12);
        }
        break;
      default:
        sub_5E9F20((char)"0", "..\\Casino\\PokerStudScript.cpp", 657);
        break;
    }
    if ( !v15 && sub_4C6EB0(v18) )
    {
      if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
        v15 = 1;
      else
        v15 = 3;
    }
    if ( !v15 )
    {
      v7 = sub_4C6E30(v18);
      if ( v7 > sub_62FBF0(100) )
      {
        if ( sub_4F6640((_BYTE *)(dword_791364 + 56)) )
          return 1;
        else
          return 3;
      }
    }
    return v15;
  }
  else
  {
    if ( sub_4C6CB0(v18) == 3 )
      sub_5E9F20((char)"0", "..\\Casino\\PokerStudScript.cpp", 723);
    else
      sub_5E9F20((char)"0", "..\\Casino\\PokerStudScript.cpp", 726);
    return 0;
  }
}


//======================================================================
// sub_517FA0
// entry 00517fa0  size 2359  status ok
//======================================================================

int __thiscall sub_517FA0(_DWORD *this, int a2)
{
  int result; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v5; // esi
  Concurrency::details::SchedulerProxy *v6; // eax
  Concurrency::details::ContextBase *v7; // eax
  Concurrency::details::SchedulerProxy *v8; // eax
  Concurrency::details::ContextBase *v9; // eax
  Concurrency::details::SchedulerProxy *v10; // eax
  int v11; // eax
  Concurrency::details::SchedulerProxy *v12; // eax
  Concurrency::details::SchedulerProxy *v13; // eax
  _DWORD *v14; // eax
  Concurrency::details::SchedulerProxy *v15; // eax
  Concurrency::details::SchedulerProxy *v16; // eax
  Concurrency::details::ContextBase *v17; // eax
  Concurrency::details::VirtualProcessor *v18; // eax
  _DWORD *v19; // eax
  Concurrency::details::ContextBase *v20; // eax
  Concurrency::details::VirtualProcessor *v21; // eax
  int v22; // eax
  int v23; // eax
  Concurrency::details::SchedulerProxy *v24; // eax
  int v25; // eax
  Concurrency::details::SchedulerProxy *v26; // eax
  int v27; // esi
  __int16 v28; // ax
  _DWORD *v29; // eax
  __int16 v30; // ax
  ATL::CComCriticalSection *v31; // eax
  __int16 v32; // ax
  int v33; // esi
  unsigned int v34; // eax
  int v35; // eax
  Concurrency::details::SchedulerProxy *v36; // eax
  Concurrency::details::VirtualProcessor *v37; // eax
  Concurrency::details::SchedulerProxy *v38; // eax
  struct Concurrency::details::_TaskCollection *v39; // [esp-4h] [ebp-28h]
  struct Concurrency::details::_TaskCollection *v40; // [esp-4h] [ebp-28h]
  __int16 ExecutingContext; // [esp-4h] [ebp-28h]
  int v42; // [esp-4h] [ebp-28h]
  int v44; // [esp+14h] [ebp-10h]
  __int64 v45; // [esp+18h] [ebp-Ch]
  int v46; // [esp+20h] [ebp-4h]

  result = sub_5FC3A0(a2);
  switch ( *(this + 5) )
  {
    case 0:
      sub_47E540((ATL::CAtlWinModule *)dword_791364, 1);
      byte_793030 = 0;
      dword_793070 = 0;
      dword_793058 = 0;
      for ( dword_793158 = 0; dword_793158 < sub_47F950(); ++dword_793158 )
      {
        v3 = (_DWORD *)sub_47E390(dword_793158);
        if ( sub_4C6CB0(v3)
          && (v4 = (_DWORD *)sub_47E390(dword_793158),
              v5 = sub_4C6A70(v4),
              v5 >= (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364)) )
        {
          word_792DE8[dword_793158] = -1;
          word_792990[dword_793158] = -1;
          v6 = (Concurrency::details::SchedulerProxy *)sub_47E390(dword_793158);
          Concurrency::details::SchedulerProxy::SetQueueLength(v6, 1u);
          v39 = dword_793070;
          v7 = (Concurrency::details::ContextBase *)sub_47E390(dword_793158);
          Concurrency::details::ContextBase::SetIndirectAlias(v7, v39);
          dword_793070 = (struct Concurrency::details::_TaskCollection *)((char *)dword_793070 + 1);
        }
        else
        {
          v8 = (Concurrency::details::SchedulerProxy *)sub_47E390(dword_793158);
          Concurrency::details::SchedulerProxy::SetQueueLength(v8, 0);
          v9 = (Concurrency::details::ContextBase *)sub_47E390(dword_793158);
          Concurrency::details::ContextBase::SetIndirectAlias(
            v9,
            (struct Concurrency::details::_TaskCollection *)0xFFFFFFFF);
        }
      }
      if ( (int)dword_793070 >= 2 )
      {
        sub_47E860(dword_791364);
        if ( sub_47E170() != 23 )
        {
          if ( *(_DWORD *)(dword_791364 + 212) == -1 )
          {
            if ( *(_DWORD *)(dword_791364 + 208) == -1 )
              *(_DWORD *)(dword_791364 + 212) = *(_DWORD *)(dword_791364 + 216);
            else
              *(_DWORD *)(dword_791364 + 212) = sub_47BBC0((_DWORD *)dword_791364);
          }
          do
          {
            ++*(_DWORD *)(dword_791364 + 212);
            if ( *(_DWORD *)(dword_791364 + 212) > sub_47F950() - 1 )
              *(_DWORD *)(dword_791364 + 212) = 0;
            v10 = (Concurrency::details::SchedulerProxy *)sub_47E390(*(_DWORD *)(dword_791364 + 212));
          }
          while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v10) );
          while ( sub_47BBC0((_DWORD *)dword_791364) != *(_DWORD *)(dword_791364 + 212) )
            sub_47BAC0((_DWORD *)dword_791364);
        }
        sub_47ECF0(dword_791364);
        dword_793154 = 0;
        v11 = sub_47BBC0((_DWORD *)dword_791364);
        sub_47E400((_DWORD *)dword_791364, v11);
        do
        {
          sub_47E440((_DWORD *)dword_791364);
          v12 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
        }
        while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v12) );
        while ( sub_47E190((_DWORD *)dword_791364) == 1 && (int)dword_793070 > 7
             || sub_47E190((_DWORD *)dword_791364) == 7 && (int)dword_793070 > 7 )
        {
          v46 = sub_47BBC0((_DWORD *)dword_791364) - 1;
          if ( v46 < 0 )
            v46 = sub_47F950() - 1;
          while ( 1 )
          {
            v13 = (Concurrency::details::SchedulerProxy *)sub_47E390(v46);
            if ( Concurrency::details::SchedulerProxy::GetQueueLength(v13) )
            {
              v14 = (_DWORD *)sub_47E390(v46);
              if ( sub_4C6CB0(v14) != 2 )
                break;
            }
            if ( --v46 < 0 )
              v46 = sub_47F950() - 1;
          }
          v15 = (Concurrency::details::SchedulerProxy *)sub_47E390(v46);
          Concurrency::details::SchedulerProxy::SetQueueLength(v15, 0);
          dword_793070 = (struct Concurrency::details::_TaskCollection *)((char *)dword_793070 - 1);
        }
        dword_793070 = 0;
        dword_793058 = 0;
        for ( dword_793158 = 0; dword_793158 < sub_47F950(); ++dword_793158 )
        {
          v16 = (Concurrency::details::SchedulerProxy *)sub_47E390(dword_793158);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v16) == 1 )
          {
            v40 = dword_793070;
            v17 = (Concurrency::details::ContextBase *)sub_47E390(dword_793158);
            Concurrency::details::ContextBase::SetIndirectAlias(v17, v40);
            v18 = (Concurrency::details::VirtualProcessor *)sub_47E390(dword_793158);
            sub_4C9160(v18);
            v19 = (_DWORD *)sub_47E390(dword_793158);
            sub_4DD760(v19);
            dword_793070 = (struct Concurrency::details::_TaskCollection *)((char *)dword_793070 + 1);
            ++dword_793058;
          }
          else
          {
            v20 = (Concurrency::details::ContextBase *)sub_47E390(dword_793158);
            Concurrency::details::ContextBase::SetIndirectAlias(
              v20,
              (struct Concurrency::details::_TaskCollection *)0xFFFFFFFF);
          }
        }
        *(this + 8) = 0;
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
        result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 7);
        result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      }
      break;
    case 1:
      sub_4654D0(*(CRecentFileList **)(dword_791364 + 48));
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 2);
      result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      break;
    case 2:
      sub_4F4320((__int16 *)(dword_791364 + 56), (__int16)dword_793070);
      sub_47EC90((__int16 *)dword_791364, 0);
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 3);
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      goto LABEL_44;
    case 3:
LABEL_44:
      v21 = (Concurrency::details::VirtualProcessor *)sub_47E3B0((void *)dword_791364);
      ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v21);
      v22 = sub_47BC60((_DWORD *)dword_791364);
      sub_4F5110((__int16 *)(dword_791364 + 56), v22, ExecutingContext);
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 4);
      result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      break;
    case 4:
      dword_793034 = sub_516E20();
      sub_47E500();
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 5);
      result = (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 15);
      break;
    case 5:
      if ( dword_793034 == -1 )
      {
        v23 = sub_47BBC0((_DWORD *)dword_791364);
        sub_47E400((_DWORD *)dword_791364, v23);
        do
        {
          sub_47E440((_DWORD *)dword_791364);
          v24 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
        }
        while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v24) );
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 6);
      }
      else if ( dword_793034 == -3 )
      {
        v25 = sub_47BBC0((_DWORD *)dword_791364);
        sub_47E400((_DWORD *)dword_791364, v25);
        do
        {
          sub_47E440((_DWORD *)dword_791364);
          v26 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
        }
        while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v26) );
        if ( sub_4F6420(dword_791364 + 56) > 0 )
        {
          v27 = sub_4F6420(dword_791364 + 56);
          v42 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v27;
          v28 = sub_4F64B0(dword_791364 + 56);
          v29 = (_DWORD *)sub_47E3D0(v28);
          sub_4C6B80(v29, v42);
          v30 = sub_4F64B0(dword_791364 + 56);
          v31 = (ATL::CComCriticalSection *)sub_47E3D0(v30);
          ATL::CComCriticalSection::~CComCriticalSection(v31);
          sub_47EC90((__int16 *)dword_791364, 0);
          v32 = sub_4F64B0(dword_791364 + 56);
          v44 = *(_DWORD *)(sub_47E3D0(v32) + 4);
          v33 = sub_4F6420(dword_791364 + 56);
          v34 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
          v45 = sub_64C8A0(v34 * v33, 0);
          sub_5E7E40(v44, 7, v45, HIDWORD(v45));
        }
        byte_793030 = 1;
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 6);
      }
      else
      {
        v35 = sub_47E490(
                (Concurrency::details::VirtualProcessor **)dword_791364,
                (struct Concurrency::IExecutionContext *)dword_793034);
        sub_47E400((_DWORD *)dword_791364, v35);
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 4);
      }
      result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      break;
    case 6:
      v36 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
      if ( !Concurrency::details::SchedulerProxy::GetQueueLength(v36) )
        sub_5E9F20(
          (char)"pokerGame->GetCurrentPokerPlayer()->GetPlayerStatus() != NOTPLAYING",
          "..\\Casino\\PokerStudScript.cpp",
          3675);
      v37 = (Concurrency::details::VirtualProcessor *)sub_47E3B0((void *)dword_791364);
      sub_47B010(dword_791364, v37, 1, 0, (int)this, 0, 0, 0);
      do
      {
        sub_47E440((_DWORD *)dword_791364);
        v38 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
      }
      while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v38) );
      if ( (struct Concurrency::details::_TaskCollection *)++*(this + 8) == dword_793070 )
      {
        *(this + 8) = 0;
        ++dword_793154;
      }
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 7);
      result = sub_47E190((_DWORD *)dword_791364);
      if ( result == 1 )
      {
        if ( dword_793154 < 2 )
          result = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, 6);
      }
      else
      {
        result = sub_47E190((_DWORD *)dword_791364);
        if ( result == 2 )
        {
          if ( dword_793154 < 1 )
            result = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, 6);
        }
        else
        {
          result = sub_47E190((_DWORD *)dword_791364);
          if ( result == 7 && dword_793154 < 7 )
            result = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, 6);
        }
      }
      break;
    case 7:
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 3) + 28))(*(this + 3), 0);
      result = sub_5FC420(0);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_518900
// entry 00518900  size 119  status ok
//======================================================================

_DWORD *__thiscall sub_518900(_DWORD *this, char a2, int a3)
{
  sub_5F71F0(a2, a3);
  *this = &ViewGroup::`vftable';
  *(this + 117) = 0;
  *(this + 118) = 0;
  *(this + 119) = 0;
  *(this + 111) = 0;
  *(this + 112) = 0;
  *(this + 114) = 0;
  return this;
}


//======================================================================
// sub_518980
// entry 00518980  size 311  status ok
//======================================================================

int __thiscall sub_518980(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&ViewGroup::`vftable';
  if ( *(this + 111) )
  {
    (***(this + 111))(*(this + 111), 1);
    *(this + 111) = 0;
  }
  if ( *(this + 112) )
  {
    (***(this + 112))(*(this + 112), 1);
    *(this + 112) = 0;
  }
  if ( *(this + 114) )
  {
    (***(this + 114))(*(this + 114), 1);
    *(this + 114) = 0;
  }
  return sub_5F7260();
}


//======================================================================
// sub_518AC0
// entry 00518ac0  size 3553  status ok
//======================================================================

int __thiscall sub_518AC0(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // esi
  __int64 v5; // rax
  int v6; // esi
  int v7; // eax
  int v8; // esi
  __int64 v9; // rax
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // esi
  __int64 v14; // rax
  int v15; // esi
  int v16; // eax
  int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // esi
  __int64 v21; // rax
  int v22; // esi
  int v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // eax
  int v27; // esi
  __int64 v28; // rax
  int v29; // esi
  int v30; // eax
  int v31; // esi
  int v32; // eax
  int v33; // esi
  int v34; // eax
  int v35; // esi
  int v36; // eax
  int v37; // esi
  int v38; // eax
  int v39; // [esp-4h] [ebp-8Ch]
  int v40; // [esp-4h] [ebp-8Ch]
  int v41; // [esp-4h] [ebp-8Ch]
  int v42; // [esp-4h] [ebp-8Ch]
  int v43; // [esp-4h] [ebp-8Ch]
  int v44; // [esp+8h] [ebp-80h]
  int v45; // [esp+Ch] [ebp-7Ch]
  int v46; // [esp+10h] [ebp-78h]
  int v47; // [esp+14h] [ebp-74h]
  int v48; // [esp+18h] [ebp-70h]
  int v49; // [esp+1Ch] [ebp-6Ch]
  int v50; // [esp+20h] [ebp-68h]
  int v51; // [esp+24h] [ebp-64h]
  int v52; // [esp+28h] [ebp-60h]

  result = a2;
  switch ( a2 )
  {
    case 1:
      if ( operator new(0x1E4u) )
        v52 = sub_519AE0(this);
      else
        v52 = 0;
      *(this + 111) = v52;
      *(_DWORD *)(*(this + 111) + 4) = this;
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 111) + 64))(*(this + 111));
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 111) + 200))(*(this + 111), 3200229);
      v3 = sub_630F40("SID_GENERIC_OK");
      (*(void (__thiscall **)(_DWORD, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)*(this + 111) + 220))(
        *(this + 111),
        v3,
        72,
        75,
        74,
        -1,
        0,
        0);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 111) + 112))(*(this + 111));
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 111) + 204))(*(this + 111));
      sub_6026F0(13);
      sub_602740(32);
      sub_519900(*(this + 111), 1);
      v4 = *(this + 67) - *(this + 65);
      v39 = v4 - sub_5F5590(*(this + 111)) - 38;
      v5 = *(this + 68) - *(this + 66);
      v6 = ((int)v5 - HIDWORD(v5)) >> 1;
      v7 = sub_5F5550(*(this + 111));
      result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 111) + 68))(
                 *(this + 111),
                 v6 - v7 / 2,
                 v39);
      break;
    case 2:
      if ( operator new(0x1E8u) )
        v51 = sub_519BC0(this);
      else
        v51 = 0;
      *(this + 114) = v51;
      *(_DWORD *)(*(this + 114) + 4) = this;
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 114) + 64))(*(this + 114));
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 114) + 200))(*(this + 114), 8305);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 114) + 112))(*(this + 114));
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 114) + 204))(*(this + 114));
      sub_6026F0(63);
      sub_519900(*(this + 114), 1);
      v8 = *(this + 67) - *(this + 65);
      v40 = v8 - sub_5F5590(*(this + 114)) - 38;
      v9 = *(this + 68) - *(this + 66);
      v10 = ((int)v9 - HIDWORD(v9)) >> 1;
      v11 = sub_5F5550(*(this + 114));
      result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 114) + 68))(
                 *(this + 114),
                 v10 - v11 / 2,
                 v40);
      break;
    case 3:
      if ( operator new(0x1E4u) )
        v50 = sub_519AE0(this);
      else
        v50 = 0;
      *(this + 111) = v50;
      *(_DWORD *)(*(this + 111) + 4) = this;
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 111) + 64))(*(this + 111));
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 111) + 200))(*(this + 111), 3200222);
      sub_6023D0(4, 5, 6, 7);
      v12 = sub_630F40("SID_GENERIC_OK");
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 111) + 224))(*(this + 111), v12);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 111) + 112))(*(this + 111));
      sub_6026F0(13);
      sub_602740(32);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 111) + 204))(*(this + 111));
      if ( operator new(0x1E4u) )
        v49 = sub_519B50(this);
      else
        v49 = 0;
      *(this + 112) = v49;
      *(_DWORD *)(*(this + 112) + 4) = this;
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 112) + 64))(*(this + 112));
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 112) + 200))(*(this + 112), 8303);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 112) + 112))(*(this + 112));
      sub_6026F0(27);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 112) + 204))(*(this + 112));
      sub_519900(*(this + 111), 1);
      sub_519900(*(this + 112), 1);
      v13 = *(this + 67) - *(this + 65);
      v41 = v13 - sub_5F5590(*(this + 111)) - 38;
      v14 = *(this + 68) - *(this + 66);
      v15 = ((int)v14 - HIDWORD(v14)) >> 1;
      v16 = sub_5F5550(*(this + 111));
      (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 111) + 68))(*(this + 111), v15 - v16 - 2, v41);
      v17 = *(this + 67) - *(this + 65);
      v18 = sub_5F5590(*(this + 112));
      result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 112) + 68))(
                 *(this + 112),
                 (*(this + 68) - *(this + 66)) / 2 + 3,
                 v17 - v18 - 38);
      break;
    case 4:
      if ( operator new(0x1E4u) )
        v48 = sub_519AE0(this);
      else
        v48 = 0;
      *(this + 111) = v48;
      *(_DWORD *)(*(this + 111) + 4) = this;
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 111) + 64))(*(this + 111));
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 111) + 200))(*(this + 111), 3200222);
      sub_6023D0(4, 5, 6, 7);
      v19 = sub_630F40("SID_GENERIC_OK");
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 111) + 224))(*(this + 111), v19);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 111) + 112))(*(this + 111));
      sub_6026F0(13);
      sub_602740(32);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 111) + 204))(*(this + 111));
      if ( operator new(0x1E8u) )
        v47 = sub_519BC0(this);
      else
        v47 = 0;
      *(this + 114) = v47;
      *(_DWORD *)(*(this + 114) + 4) = this;
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 114) + 64))(*(this + 114));
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 114) + 200))(*(this + 114), 8305);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 114) + 112))(*(this + 114));
      sub_6026F0(63);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 114) + 204))(*(this + 114));
      sub_519900(*(this + 111), 1);
      sub_519900(*(this + 114), 1);
      v20 = *(this + 67) - *(this + 65);
      v42 = v20 - sub_5F5590(*(this + 111)) - 38;
      v21 = *(this + 68) - *(this + 66);
      v22 = ((int)v21 - HIDWORD(v21)) >> 1;
      v23 = sub_5F5550(*(this + 111));
      (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 111) + 68))(*(this + 111), v22 - v23 - 2, v42);
      v24 = *(this + 67) - *(this + 65);
      v25 = sub_5F5590(*(this + 114));
      result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 114) + 68))(
                 *(this + 114),
                 (*(this + 68) - *(this + 66)) / 2 + 3,
                 v24 - v25 - 38);
      break;
    case 5:
      if ( operator new(0x1E4u) )
        v46 = sub_519AE0(this);
      else
        v46 = 0;
      *(this + 111) = v46;
      *(_DWORD *)(*(this + 111) + 4) = this;
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 111) + 64))(*(this + 111));
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 111) + 200))(*(this + 111), 3200222);
      sub_6023D0(4, 5, 6, 7);
      v26 = sub_630F40("SID_GENERIC_OK");
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 111) + 224))(*(this + 111), v26);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 111) + 112))(*(this + 111));
      sub_6026F0(13);
      sub_602740(32);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 111) + 204))(*(this + 111));
      if ( operator new(0x1E4u) )
        v45 = sub_519B50(this);
      else
        v45 = 0;
      *(this + 112) = v45;
      *(_DWORD *)(*(this + 112) + 4) = this;
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 112) + 64))(*(this + 112));
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 112) + 200))(*(this + 112), 8303);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 112) + 112))(*(this + 112));
      sub_6026F0(27);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 112) + 204))(*(this + 112));
      if ( operator new(0x1E8u) )
        v44 = sub_519BC0(this);
      else
        v44 = 0;
      *(this + 114) = v44;
      *(_DWORD *)(*(this + 114) + 4) = this;
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 114) + 64))(*(this + 114));
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 114) + 200))(*(this + 114), 8305);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 114) + 112))(*(this + 114));
      sub_6026F0(63);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 114) + 204))(*(this + 114));
      sub_519900(*(this + 111), 1);
      sub_519900(*(this + 112), 1);
      sub_519900(*(this + 114), 1);
      v27 = *(this + 67) - *(this + 65);
      v43 = v27 - sub_5F5590(*(this + 112)) - 38;
      v28 = *(this + 68) - *(this + 66);
      v29 = ((int)v28 - HIDWORD(v28)) >> 1;
      v30 = sub_5F5550(*(this + 112));
      (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 112) + 68))(*(this + 112), v29 - v30 / 2, v43);
      v31 = *(this + 67) - *(this + 65);
      v32 = sub_5F5590(*(this + 111));
      v33 = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 112) + 76))(*(this + 112), v31 - v32 - 9);
      v34 = sub_5F5550(*(this + 111));
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 111) + 68))(*(this + 111), v33 - v34 - 5);
      v35 = *(this + 67) - *(this + 65);
      v36 = sub_5F5590(*(this + 114));
      v37 = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 112) + 76))(*(this + 112), v35 - v36 - 38);
      v38 = sub_5F5550(*(this + 112));
      result = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 114) + 68))(*(this + 114), v37 + v38 + 5);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_5198C0
// entry 005198c0  size 63  status ok
//======================================================================

int __stdcall sub_5198C0(int a1, int a2)
{
  return sub_5F8420(
           *(_DWORD *)(*(_DWORD *)(dword_7960D8 + 16) + 72) + a1,
           *(_DWORD *)(*(_DWORD *)(dword_7960D8 + 16) + 76) + a2);
}


//======================================================================
// sub_519900
// entry 00519900  size 86  status ok
//======================================================================

int __thiscall sub_519900(void *this, _DWORD *a2, char a3)
{
  a2[1] = this;
  (*(void (__thiscall **)(_DWORD *, int))(*a2 + 108))(a2, 10);
  (*(void (__thiscall **)(_DWORD *))(*a2 + 64))(a2);
  if ( a3 )
    return (*(int (__thiscall **)(_DWORD *))(*a2 + 116))(a2);
  else
    return (*(int (__thiscall **)(_DWORD *))(*a2 + 112))(a2);
}


//======================================================================
// sub_519960
// entry 00519960  size 86  status ok
//======================================================================

int __thiscall sub_519960(void *this, _DWORD *a2, char a3)
{
  a2[1] = this;
  (*(void (__thiscall **)(_DWORD *, int))(*a2 + 108))(a2, 10);
  (*(void (__thiscall **)(_DWORD *))(*a2 + 64))(a2);
  if ( a3 )
    return (*(int (__thiscall **)(_DWORD *))(*a2 + 116))(a2);
  else
    return (*(int (__thiscall **)(_DWORD *))(*a2 + 112))(a2);
}


//======================================================================
// sub_5199C0
// entry 005199c0  size 86  status ok
//======================================================================

int __thiscall sub_5199C0(void *this, _DWORD *a2, char a3)
{
  a2[1] = this;
  (*(void (__thiscall **)(_DWORD *, int))(*a2 + 108))(a2, 10);
  (*(void (__thiscall **)(_DWORD *))(*a2 + 64))(a2);
  if ( a3 )
    return (*(int (__thiscall **)(_DWORD *))(*a2 + 116))(a2);
  else
    return (*(int (__thiscall **)(_DWORD *))(*a2 + 112))(a2);
}


//======================================================================
// sub_519A40
// entry 00519a40  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_519A40(_DWORD *this, int a2)
{
  *(this + 119) = a2;
  return this;
}


//======================================================================
// sub_519A60
// entry 00519a60  size 32  status ok
//======================================================================

int __thiscall sub_519A60(_DWORD *this)
{
  sub_519A40(this, 32700);
  return sub_5F87D0(this);
}


//======================================================================
// sub_519A80
// entry 00519a80  size 32  status ok
//======================================================================

int __thiscall sub_519A80(_DWORD *this)
{
  sub_519A40(this, 32701);
  return sub_5F87D0(this);
}


//======================================================================
// sub_519AA0
// entry 00519aa0  size 54  status ok
//======================================================================

_DWORD *__thiscall sub_519AA0(_DWORD *this)
{
  if ( *(this + 113) )
    sub_60CCE0(*(this + 113));
  return sub_519A40(this, 32702);
}


//======================================================================
// sub_519AE0
// entry 00519ae0  size 45  status ok
//======================================================================

_DWORD *__thiscall sub_519AE0(void *this, int a2)
{
  _DWORD *v3; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *v3 = &GroupViewOKButton::`vftable';
  v3[120] = a2;
  return v3;
}


//======================================================================
// sub_519B10
// entry 00519b10  size 49  status ok
//======================================================================

int __thiscall sub_519B10(_DWORD **this)
{
  sub_57AE30(dword_793578);
  return (*(int (__thiscall **)(_DWORD))(**(this + 120) + 64))(*(this + 120));
}


//======================================================================
// sub_519B50
// entry 00519b50  size 45  status ok
//======================================================================

_DWORD *__thiscall sub_519B50(void *this, int a2)
{
  _DWORD *v3; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *v3 = &GroupViewCancelButton::`vftable';
  v3[120] = a2;
  return v3;
}


//======================================================================
// sub_519B80
// entry 00519b80  size 49  status ok
//======================================================================

int __thiscall sub_519B80(_DWORD **this)
{
  sub_57AE30(dword_793578);
  return (*(int (__thiscall **)(_DWORD))(**(this + 120) + 68))(*(this + 120));
}


//======================================================================
// sub_519BC0
// entry 00519bc0  size 58  status ok
//======================================================================

_DWORD *__thiscall sub_519BC0(void *this, int a2)
{
  _DWORD *v3; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *v3 = &GroupViewHelpButton::`vftable';
  v3[121] = a2;
  v3[119] = 0;
  return v3;
}


//======================================================================
// sub_519C00
// entry 00519c00  size 60  status ok
//======================================================================

int __thiscall sub_519C00(_DWORD *this)
{
  *(_DWORD *)(*(this + 121) + 452) = *(this + 119);
  return (*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)*(this + 121) + 72))(*(this + 121), this);
}


//======================================================================
// sub_519C80
// entry 00519c80  size 192  status ok
//======================================================================

int __cdecl sub_519C80(unsigned int a1, int a2, char *a3)
{
  int v4; // [esp+8h] [ebp-Ch]

  if ( a1 >= 8 )
    sub_5E9F20((char)"(0<=tournament) && (tournament<POKERTOURN_NUM_TOURNAMENTS)", "..\\Casino\\PokerTourn.cpp", 515);
  if ( a2 < 1 || a2 > 3 )
    sub_5E9F20((char)"(1<=strategy) && (strategy<=3)", "..\\Casino\\PokerTourn.cpp", 516);
  if ( a1 == 4 )
  {
    v4 = *(_DWORD *)(dword_791364 + 252);
    if ( v4 == 1 )
    {
      a1 = 2;
    }
    else if ( v4 == 2 )
    {
      a1 = 7;
    }
    else
    {
      a1 = 0;
    }
  }
  qmemcpy(a3, (char *)&unk_7213E8 + 128 * a1 + 32 * a2, 0x20u);
  return 32 * a2;
}


//======================================================================
// sub_519E10
// entry 00519e10  size 35  status ok
//======================================================================

int sub_519E10()
{
  int result; // eax

  if ( dword_79315C )
  {
    result = sub_5F8990(dword_79315C);
    dword_79315C = 0;
  }
  return result;
}


//======================================================================
// sub_519E40
// entry 00519e40  size 73  status ok
//======================================================================

int __cdecl sub_519E40(int a1, int a2, int a3)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 7; ++i )
  {
    *(_DWORD *)(a3 + 4 * i) = dword_7208DC[96 * a1 + 7 * a2 + i];
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_51A020
// entry 0051a020  size 35  status ok
//======================================================================

_DWORD *__thiscall sub_51A020(_DWORD *this)
{
  sub_5F71F0(1, 0);
  *this = &PokerTournamentStatisticsDialog::`vftable';
  return this;
}


//======================================================================
// sub_51A070
// entry 0051a070  size 810  status ok
//======================================================================

int __thiscall sub_51A070(CMFCTabCtrl *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [esp+0h] [ebp-24h]
  int v12; // [esp+4h] [ebp-20h]
  int v13; // [esp+8h] [ebp-1Ch]
  int v14; // [esp+Ch] [ebp-18h]
  int i; // [esp+1Ch] [ebp-8h]
  int v17; // [esp+20h] [ebp-4h]
  int v18; // [esp+20h] [ebp-4h]

  sub_5F83D0(3205106, 0);
  CMFCTabCtrl::HideInactiveWindow(this, 20);
  v1 = sub_630F40("SID_POKERTOURNAMENT_STATISTICS");
  sub_5FA5B0(0, 0, v1, 73, 500, 25, 5, 3, 2, 17, -1);
  v2 = sub_630F40("SID_POKERTOURNAMENT_TOURNAMENTS");
  sub_5FA5B0(0, 1, v2, 31, 99, 35, 136, 27, 1, 32, -1);
  v3 = sub_630F40("SID_POKERTOURNAMENT_PLAYED");
  sub_5FA5B0(0, 2, v3, 31, 99, 35, 136, 43, 1, 32, -1);
  v4 = sub_630F40("SID_POKERTOURNAMENT_PERCENTWON");
  sub_5FA5B0(0, 3, v4, 31, 74, 35, 236, 27, 1, 48, -1);
  v5 = sub_630F40("SID_POKERTOURNAMENT_PERCENT_HANDSWON");
  sub_5FA5B0(0, 4, v5, 31, 99, 35, 311, 27, 1, 48, -1);
  v6 = sub_630F40("SID_POKERTOURNAMENT_PRIZEMONEY");
  sub_5FA5B0(0, 5, v6, 31, 99, 35, 411, 27, 1, 48, -1);
  v17 = 6;
  for ( i = 0; i < 8; ++i )
  {
    v7 = sub_630F40(off_721838[i]);
    sub_5FA5B0(0, v17, v7, 31, 126, 24, 9, 25 * i + 63, 1, 16, -1);
    v18 = v17 + 1;
    *((_DWORD *)this + sub_51A3A0(i) + 111) = v18;
    v14 = v18;
    sub_5FA5B0(0, v18, "0", 31, 100, 24, 136, 25 * i + 63, 1, 48, -1);
    v13 = v18 + 1;
    sub_5FA5B0(0, v18 + 1, "0", 31, 77, 24, 236, 25 * i + 63, 1, 48, -1);
    v12 = v18 + 2;
    sub_5FA5B0(0, v18 + 2, "0", 31, 100, 24, 311, 25 * i + 63, 1, 48, -1);
    v11 = v18 + 3;
    sub_5FA5B0(0, v18 + 3, "0", 31, 100, 24, 411, 25 * i + 63, 1, 48, -1);
    v17 = v18 + 4;
  }
  v8 = sub_630F40("SID_GENERIC_OK");
  sub_5F9DE0(0, 0, 3200229, 424, 276, 2, v8, 72, 75, 74, -1, 13);
  v9 = sub_630F40("SID_POKERTOURNAMENT_CLEAR");
  sub_5F9DE0(0, 1, 3200222, 17, 276, 2, v9, 72, 75, 74, -1, 0);
  return sub_51A460(this, v11, v12, v13, v14);
}


//======================================================================
// sub_51A3A0
// entry 0051a3a0  size 23  status ok
//======================================================================

int __stdcall sub_51A3A0(int a1)
{
  return dword_721858[a1];
}


//======================================================================
// sub_51A3C0
// entry 0051a3c0  size 152  status ok
//======================================================================

int __thiscall sub_51A3C0(_BYTE *this, int a2)
{
  const CHAR *v2; // eax
  int result; // eax
  const CHAR *v4; // [esp-8h] [ebp-14h]

  if ( a2 != 1 )
    return sub_519E10();
  v4 = (const CHAR *)sub_630F40("SID_POKERTOURNAMENT_CLEAR_STATISTICS_TITLE");
  v2 = (const CHAR *)sub_630F40("SID_POKERTOURNAMENT_CLEAR_MESSAGE");
  result = sub_62FF10(v2, v4, 1u);
  if ( result == 1 )
  {
    o_2_a_10C_s_6___5();
    sub_519E10();
    if ( *(this + 508) )
      return sub_47FB90((void *)dword_791364, 3);
    else
      return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 3200001, -1);
  }
  return result;
}


//======================================================================
// sub_51A460
// entry 0051a460  size 584  status ok
//======================================================================

int __thiscall sub_51A460(_DWORD *this)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-A0h]
  int v3; // [esp+4h] [ebp-9Ch]
  int v4; // [esp+8h] [ebp-98h]
  int v5; // [esp+Ch] [ebp-94h]
  int v7; // [esp+14h] [ebp-8Ch]
  char Buffer[108]; // [esp+18h] [ebp-88h] BYREF
  int *v9; // [esp+88h] [ebp-18h]
  int v10; // [esp+8Ch] [ebp-14h]
  int v11; // [esp+90h] [ebp-10h]
  int i; // [esp+94h] [ebp-Ch]
  int v13; // [esp+98h] [ebp-8h]
  int v14; // [esp+9Ch] [ebp-4h]

  v14 = 0;
  result = sub_520D60();
  v13 = result;
  for ( i = 0; i < 16; ++i )
  {
    v9 = (int *)(v13 + 1672 * i + 4);
    v7 = *(this + i + 111);
    sprintf(Buffer, "%d", *(_DWORD *)(v13 + 1672 * i + 996));
    v5 = sub_5FB550(v7);
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)v5 + 180))(v5, Buffer);
    if ( v9[248] <= 0 )
      v14 = 0;
    else
      v14 = (int)((double)v9[249] / (double)v9[248] * 100.0);
    sprintf(Buffer, "%d", v14);
    v4 = sub_5FB550(v7 + 1);
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)v4 + 180))(v4, Buffer);
    if ( v9[251] <= 0 )
      v14 = 0;
    else
      v14 = (int)((double)v9[250] / (double)v9[251] * 100.0);
    sprintf(Buffer, "%d", v14);
    v3 = sub_5FB550(v7 + 2);
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)v3 + 180))(v3, Buffer);
    v10 = v9[252];
    v11 = 0;
    sub_64C8D0(v10, 0, Buffer, 1, 1, 1);
    v2 = sub_5FB550(v7 + 3);
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)v2 + 180))(v2, Buffer);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_51A6B0
// entry 0051a6b0  size 106  status ok
//======================================================================

_DWORD *__thiscall sub_51A6B0(_DWORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  sub_5F71F0(1, 0);
  *this = &PokerTournamentWinnerDialog::`vftable';
  *(this + 111) = 0;
  for ( i = 0; i < 7; ++i )
    *(this + i + 112) = 0;
  *(this + 120) = 0;
  return this;
}


//======================================================================
// sub_51A720
// entry 0051a720  size 161  status ok
//======================================================================

int __thiscall sub_51A720(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&PokerTournamentWinnerDialog::`vftable';
  if ( *(this + 111) )
  {
    (***(this + 111))(*(this + 111), 1);
    *(this + 111) = 0;
  }
  return sub_5F7260();
}


//======================================================================
// sub_51A7F0
// entry 0051a7f0  size 50  status ok
//======================================================================

_DWORD *__thiscall sub_51A7F0(_DWORD *this, int a2, int a3)
{
  sub_519E40(a2, a3, (int)(this + 112));
  *(this + 119) = a3;
  return this;
}


//======================================================================
// sub_51A830
// entry 0051a830  size 1129  status ok
//======================================================================

int __thiscall sub_51A830(int *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v13; // [esp-1Ch] [ebp-ACh]
  int v14; // [esp-1Ch] [ebp-ACh]
  int v15; // [esp-1Ch] [ebp-ACh]
  int v16; // [esp-1Ch] [ebp-ACh]
  int v17; // [esp-1Ch] [ebp-ACh]
  int v18; // [esp-18h] [ebp-A8h]
  int v19; // [esp-18h] [ebp-A8h]
  int v20; // [esp-18h] [ebp-A8h]
  int v21; // [esp-18h] [ebp-A8h]
  int v22; // [esp-18h] [ebp-A8h]
  int v23; // [esp-14h] [ebp-A4h]
  int v24; // [esp-14h] [ebp-A4h]
  int v25; // [esp-14h] [ebp-A4h]
  int v26; // [esp-14h] [ebp-A4h]
  int v27; // [esp-14h] [ebp-A4h]
  int v28; // [esp-10h] [ebp-A0h]
  int v29; // [esp-10h] [ebp-A0h]
  int v30; // [esp-10h] [ebp-A0h]
  int v31; // [esp-10h] [ebp-A0h]
  int v32; // [esp-10h] [ebp-A0h]
  int v34; // [esp+0h] [ebp-90h]
  int v35; // [esp+4h] [ebp-8Ch]
  char Buffer[104]; // [esp+8h] [ebp-88h] BYREF
  int v37; // [esp+74h] [ebp-1Ch]
  int v38; // [esp+78h] [ebp-18h]
  int v39; // [esp+7Ch] [ebp-14h]
  int v40; // [esp+80h] [ebp-10h]
  int v41; // [esp+84h] [ebp-Ch]
  int i; // [esp+88h] [ebp-8h]
  int v43; // [esp+8Ch] [ebp-4h]

  sub_5F83D0(3205107, 0);
  CMFCTabCtrl::HideInactiveWindow((CMFCTabCtrl *)this, 20);
  v1 = sub_630F40("SID_POKERTOURNAMENT_ENDOFTOURNAMENT");
  sub_5FA5B0(0, 0, v1, 73, 256, 25, 5, 3, 2, 17, -1);
  v2 = sub_630F40("SID_POKERTOURNAMENT_WINNER_COLON");
  sub_5FA5B0(0, 0, v2, 31, 128, 26, 16, 44, 1, 5, -1);
  sub_6311E0(*(this + 112), Buffer);
  sub_5FA5B0(0, 2, Buffer, 31, 128, 26, 20, 95, 1, 5, -1);
  v3 = sub_630F40("SID_POKERTOURNAMENT_PLACE");
  sub_5FA5B0(0, 3, v3, 31, 58, 24, 110, 109, 1, 48, -1);
  v43 = 58;
  v40 = 24;
  v38 = 110;
  v41 = 25;
  v39 = 134;
  v4 = sub_630F40("SID_POKERTOURNAMENT_2ND");
  sub_5FA5B0(0, 4, v4, 31, 58, 24, 110, 134, 1, 48, -1);
  v39 += v41;
  v28 = v39;
  v23 = v38;
  v18 = v40;
  v13 = v43;
  v5 = sub_630F40("SID_POKERTOURNAMENT_3RD");
  sub_5FA5B0(0, 5, v5, 31, v13, v18, v23, v28, 1, 48, -1);
  v39 += v41;
  v29 = v39;
  v24 = v38;
  v19 = v40;
  v14 = v43;
  v6 = sub_630F40("SID_POKERTOURNAMENT_4TH");
  sub_5FA5B0(0, 6, v6, 31, v14, v19, v24, v29, 1, 48, -1);
  v39 += v41;
  v30 = v39;
  v25 = v38;
  v20 = v40;
  v15 = v43;
  v7 = sub_630F40("SID_POKERTOURNAMENT_5TH");
  sub_5FA5B0(0, 7, v7, 31, v15, v20, v25, v30, 1, 48, -1);
  v39 += v41;
  v31 = v39;
  v26 = v38;
  v21 = v40;
  v16 = v43;
  v8 = sub_630F40("SID_POKERTOURNAMENT_6TH");
  sub_5FA5B0(0, 8, v8, 31, v16, v21, v26, v31, 1, 48, -1);
  v39 += v41;
  v32 = v39;
  v27 = v38;
  v22 = v40;
  v17 = v43;
  v9 = sub_630F40("SID_POKERTOURNAMENT_7TH");
  sub_5FA5B0(0, 9, v9, 31, v17, v22, v27, v32, 1, 48, -1);
  v39 += v41;
  v10 = sub_630F40("SID_POKERTOURNAMENT_PRIZE");
  sub_5FA5B0(0, 10, v10, 31, 89, 24, 169, 109, 1, 48, -1);
  v43 = 89;
  v40 = 24;
  v38 = 169;
  v41 = 25;
  v39 = 134;
  v35 = 1;
  v37 = 11;
  while ( v37 < 17 )
  {
    sub_6311E0(*(this + v35 + 112), Buffer);
    sub_5FA5B0(0, v37, Buffer, 31, v43, v40, v38, v39, 1, 48, -1);
    v39 += v41;
    ++v37;
    ++v35;
  }
  sub_5FA5B0(0, 17, &Source, 72, 128, 26, 20, 65, 1, 5, -1);
  for ( i = 1; i < 7; ++i )
    sub_5FA5B0(0, i + 17, &Source, 31, 99, 24, 14, 25 * (i - 1) + 134, 1, 16, -1);
  v11 = sub_630F40("SID_GENERIC_OK");
  sub_5F9DE0(0, 0, 3200229, 176, 295, 2, v11, 72, 75, 74, -1, 13);
  sub_51ACA0(this, v35);
  return sub_51AE40(v34);
}


//======================================================================
// sub_51ACA0
// entry 0051aca0  size 413  status ok
//======================================================================

int __thiscall sub_51ACA0(_DWORD *this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-28h]
  int v3; // [esp+8h] [ebp-24h]
  void *v5; // [esp+18h] [ebp-14h]

  result = (int)this;
  if ( !*(this + 111) )
  {
    v5 = operator new(0x184u);
    if ( v5 )
      v3 = sub_5F5BF0(v5);
    else
      v3 = 0;
    *(this + 111) = v3;
    *(_DWORD *)(*(this + 111) + 4) = this;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 111) + 64))(*(this + 111));
    sub_5EAF00(dword_7218CC[*(this + 119)]);
    (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 111) + 68))(
      *(this + 111),
      202 - dword_7218A4[2 * *(this + 119)],
      40 - dword_7218A8[2 * *(this + 119)]);
    *(_DWORD *)(*(this + 111) + 376) = 5;
    if ( operator new(0x1Cu) )
      v2 = sub_600A70(0);
    else
      v2 = 0;
    sub_5F5D50(v2);
    return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 111) + 116))(*(this + 111));
  }
  return result;
}


//======================================================================
// sub_51AE40
// entry 0051ae40  size 311  status ok
//======================================================================

void sub_51AE40()
{
  LONG *v0; // eax
  int v1; // [esp+0h] [ebp-118h]
  char Buffer[256]; // [esp+8h] [ebp-110h] BYREF
  int i; // [esp+10Ch] [ebp-Ch]
  int v4; // [esp+110h] [ebp-8h]
  _DWORD *v5; // [esp+114h] [ebp-4h]

  v4 = 0;
  for ( i = 0; i < 6; ++i )
  {
    if ( *(_DWORD *)(*(_DWORD *)(dword_791EB8 + 164) + 4 * i + 996) != -1 )
      ++v4;
  }
  if ( v4 < 6 )
    sub_47FFE0();
  for ( i = 6; i >= 0; --i )
  {
    if ( *(_DWORD *)(*(_DWORD *)(dword_791EB8 + 164) + 4 * i + 996) != -1 )
    {
      v5 = (_DWORD *)sub_47E390(*(_DWORD *)(*(_DWORD *)(dword_791EB8 + 164) + 4 * i + 996));
      v0 = sub_4C6150(v5);
      sprintf(Buffer, "%s", (const char *)v0);
      v1 = sub_5FB550(23 - i);
      (*(void (__thiscall **)(int, char *))(*(_DWORD *)v1 + 180))(v1, Buffer);
    }
  }
}


//======================================================================
// sub_51AF80
// entry 0051af80  size 56  status ok
//======================================================================

int __thiscall sub_51AF80(int *this, int a2)
{
  sub_4FCC80((_DWORD *)dword_791EB8);
  sub_480130((_DWORD *)dword_791364);
  return sub_47FB90((void *)dword_791364, *(this + 120));
}


//======================================================================
// sub_51AFC0
// entry 0051afc0  size 61  status ok
//======================================================================

_DWORD *__thiscall sub_51AFC0(_DWORD *this)
{
  sub_5F71F0(1, 0);
  *this = &PokerNewTournamentDialog::`vftable';
  *(this + 111) = -1;
  *(this + 112) = 0;
  return this;
}


//======================================================================
// sub_51B020
// entry 0051b020  size 35  status ok
//======================================================================

int __thiscall sub_51B020(void *this)
{
  int v1; // eax

  v1 = sub_51C580(this, this);
  return sub_630F40(off_721908[v1]);
}


//======================================================================
// sub_51B050
// entry 0051b050  size 4074  status ok
//======================================================================

int __thiscall sub_51B050(_BYTE *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  const char *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v33; // [esp-10h] [ebp-120h]
  int v34; // [esp-10h] [ebp-120h]
  int v35; // [esp-10h] [ebp-120h]
  int v36; // [esp-10h] [ebp-120h]
  int v37; // [esp-10h] [ebp-120h]
  int v38; // [esp-10h] [ebp-120h]
  int v39; // [esp-10h] [ebp-120h]
  int v40; // [esp-10h] [ebp-120h]
  int v41; // [esp-10h] [ebp-120h]
  int v42; // [esp-10h] [ebp-120h]
  int v43; // [esp-10h] [ebp-120h]
  int v44; // [esp-10h] [ebp-120h]
  int v45; // [esp-10h] [ebp-120h]
  int v46; // [esp-10h] [ebp-120h]
  int v47; // [esp-10h] [ebp-120h]
  int v48; // [esp-10h] [ebp-120h]
  int v49; // [esp-10h] [ebp-120h]
  int v50; // [esp-10h] [ebp-120h]
  int v51; // [esp-10h] [ebp-120h]
  int v52; // [esp-4h] [ebp-114h]
  char Buffer[256]; // [esp+8h] [ebp-108h] BYREF
  int v55; // [esp+10Ch] [ebp-4h]

  sub_5F83D0(3205103, 0);
  *(this + 440) = 1;
  v55 = 20;
  v1 = sub_630F40("SID_GENERIC_OK");
  sub_5F9DE0(0, 0, 3200229, 396, 437, 2, v1, 72, 75, 74, -1, 13);
  v2 = sub_630F40("SID_GENERIC_HELP");
  sub_5F9DE0(0, 1, 3200222, 40, 437, 2, v2, 72, 75, 74, -1, 0);
  v3 = sub_630F40("SID_GENERIC_CANCEL");
  sub_5F9DE0(0, 2, 3200222, 516, 437, 2, v3, 72, 75, 74, -1, 27);
  sub_5F9DE0(0, 3, 1023, 162, 45, 1, &Source, -1, -1, -1, -1, 0);
  sub_5F9DE0(0, 4, 1024, 232, 45, 1, &Source, -1, -1, -1, -1, 0);
  sub_5F9DE0(0, 5, 1025, 304, 45, 1, &Source, -1, -1, -1, -1, 0);
  sub_5F9DE0(0, 6, 1026, 380, 45, 1, &Source, -1, -1, -1, -1, 0);
  sub_5F9DE0(0, 7, 1027, 456, 45, 1, &Source, -1, -1, -1, -1, 0);
  sub_5F9CE0(0, 10, 3205100, 24, 138, 1, 0, 255, 0);
  sub_5F9CE0(0, 11, 3205102, 27, 46, 1, 0, 255, 0);
  sub_5F9CE0(0, 12, 3205102, 27, 90, 1, 0, 255, 0);
  sub_5F9CE0(0, 13, 3205102, 27, 425, 1, 0, 255, 0);
  v4 = sub_630F40("SID_POKERTOURNAMENT_ENTRYFEE_COLON");
  sub_5FA5B0(0, 0, v4, 73, 150, 25, 59, 60, 1, 5, -1);
  v5 = sub_630F40("SID_POKERTOURNAMENT_CLICKONCHIP");
  sub_5FA5B0(0, 1, v5, 73, 640, 25, 0, 106, 1, 32, -1);
  v52 = sub_51B020(this);
  v6 = (const char *)sub_630F40("SID_POKERTOURNAMENT_NEWTOURNAMENT_FORMAT");
  sprintf(Buffer, v6, v52);
  sub_5FA5B0(0, 2, Buffer, 73, 640, 25, 0, 14, 1, 32, -1);
  sprintf(Buffer, "Tournament Grand Prize: $30,000");
  sub_5FA5B0(0, 3, Buffer, 73, 640, 25, 0, v55 + 362, 1, 32, -1);
  sprintf(Buffer, a2ndPlace10000);
  sub_5FA5B0(0, 4, Buffer, 73, 640, 25, 0, v55 + 382, 1, 32, -1);
  v33 = v55 + 120;
  v7 = sub_630F40("SID_POKERTOURNAMENT_ROUND1");
  sub_5FA5B0(0, 20, v7, 72, 166, 20, 45, v33, 5, 48, -1);
  v55 -= 10;
  sub_5FA5B0(0, 21, "7 Card Stud", 31, 166, 20, 45, v55 + 158, 5, 32, -1);
  v34 = v55 + 178;
  v8 = sub_630F40("SID_POKERTOURNAMENT_14HANDS");
  sub_5FA5B0(0, 22, v8, 31, 166, 20, 45, v34, 5, 32, -1);
  v55 -= 10;
  v35 = v55 + 208;
  v9 = sub_630F40("SID_POKERTOURNAMENT_BETLIMITS");
  sub_5FA5B0(0, 23, v9, 31, 166, 20, 45, v35, 5, 32, -1);
  v36 = v55 + 228;
  v10 = sub_630F40("SID_POKERTOURNAMENT_HAND");
  sub_5FA5B0(0, 24, v10, 31, 55, 20, 45, v36, 5, 32, -1);
  v37 = v55 + 228;
  v11 = sub_630F40("SID_POKERTOURNAMENT_EARLY");
  sub_5FA5B0(0, 25, v11, 31, 55, 20, 101, v37, 5, 32, -1);
  v38 = v55 + 228;
  v12 = sub_630F40("SID_POKERTOURNAMENT_LATE");
  sub_5FA5B0(0, 26, v12, 31, 55, 20, 156, v38, 5, 32, -1);
  sub_5FA5B0(0, 27, "H1", 31, 55, 20, 45, v55 + 248, 5, 32, -1);
  sub_5FA5B0(0, 28, "E1", 31, 55, 20, 101, v55 + 248, 5, 32, -1);
  sub_5FA5B0(0, 29, "L1", 31, 55, 20, 156, v55 + 248, 5, 32, -1);
  sub_5FA5B0(0, 30, "H2", 31, 55, 20, 45, v55 + 268, 5, 32, -1);
  sub_5FA5B0(0, 31, "E2", 31, 55, 20, 101, v55 + 268, 5, 32, -1);
  sub_5FA5B0(0, 32, "L2", 31, 55, 20, 156, v55 + 268, 5, 32, -1);
  v55 = 27;
  v13 = sub_630F40("SID_POKERTOURNAMENT_TOP3PLAYERS");
  sub_5FA5B0(0, 33, v13, 31, 166, 20, 45, 330, 5, 32, -1);
  v39 = v55 + 323;
  v14 = sub_630F40("SID_POKERTOURNAMENT_ADVANCE");
  sub_5FA5B0(0, 34, v14, 31, 166, 20, 45, v39, 5, 32, -1);
  v55 = 20;
  v15 = sub_630F40("SID_POKERTOURNAMENT_ROUND2");
  sub_5FA5B0(0, 40, v15, 72, 166, 20, 238, 140, 5, 48, -1);
  v55 -= 10;
  sub_5FA5B0(0, 41, "7 Card Stud", 31, 166, 20, 238, v55 + 158, 5, 32, -1);
  v40 = v55 + 178;
  v16 = sub_630F40("SID_POKERTOURNAMENT_28HANDS");
  sub_5FA5B0(0, 42, v16, 31, 166, 20, 238, v40, 5, 32, -1);
  v55 -= 10;
  v41 = v55 + 208;
  v17 = sub_630F40("SID_POKERTOURNAMENT_BETLIMITS");
  sub_5FA5B0(0, 43, v17, 31, 166, 20, 238, v41, 5, 32, -1);
  v42 = v55 + 228;
  v18 = sub_630F40("SID_POKERTOURNAMENT_HAND");
  sub_5FA5B0(0, 44, v18, 31, 55, 20, 238, v42, 5, 32, -1);
  v43 = v55 + 228;
  v19 = sub_630F40("SID_POKERTOURNAMENT_EARLY");
  sub_5FA5B0(0, 45, v19, 31, 55, 20, 294, v43, 5, 32, -1);
  v44 = v55 + 228;
  v20 = sub_630F40("SID_POKERTOURNAMENT_LATE");
  sub_5FA5B0(0, 46, v20, 31, 55, 20, 349, v44, 5, 32, -1);
  sub_5FA5B0(0, 47, "H2_1", 31, 55, 20, 238, v55 + 248, 5, 32, -1);
  sub_5FA5B0(0, 48, "E2_1", 31, 55, 20, 294, v55 + 248, 5, 32, -1);
  sub_5FA5B0(0, 49, "L2_1", 31, 55, 20, 349, v55 + 248, 5, 32, -1);
  sub_5FA5B0(0, 50, "H2_2", 31, 55, 20, 238, v55 + 268, 5, 32, -1);
  sub_5FA5B0(0, 51, "E2_2", 31, 55, 20, 294, v55 + 268, 5, 32, -1);
  sub_5FA5B0(0, 52, "L2_2", 31, 55, 20, 349, v55 + 268, 5, 32, -1);
  sub_5FA5B0(0, 53, "H2_3", 31, 55, 20, 238, v55 + 288, 5, 32, -1);
  sub_5FA5B0(0, 54, "E2_3", 31, 55, 20, 294, v55 + 288, 5, 32, -1);
  sub_5FA5B0(0, 55, "L2_3", 31, 55, 20, 349, v55 + 288, 5, 32, -1);
  sub_5FA5B0(0, 56, "H2_4", 31, 55, 20, 238, v55 + 308, 5, 32, -1);
  sub_5FA5B0(0, 57, "E2_4", 31, 55, 20, 294, v55 + 308, 5, 32, -1);
  sub_5FA5B0(0, 58, "L2_4", 31, 55, 20, 349, v55 + 308, 5, 32, -1);
  v55 = 27;
  v21 = sub_630F40("SID_POKERTOURNAMENT_TOP2PLAYERS");
  sub_5FA5B0(0, 59, v21, 31, 166, 20, 238, 330, 5, 32, -1);
  v45 = v55 + 323;
  v22 = sub_630F40("SID_POKERTOURNAMENT_ADVANCE");
  sub_5FA5B0(0, 60, v22, 31, 166, 20, 238, v45, 5, 32, -1);
  v55 = 20;
  v23 = sub_630F40("SID_POKERTOURNAMENT_ROUND3");
  sub_5FA5B0(0, 70, v23, 72, 166, 20, 430, 140, 5, 48, -1);
  v55 -= 10;
  sub_5FA5B0(0, 71, "7 Card Stud", 31, 166, 20, 430, v55 + 158, 5, 32, -1);
  v46 = v55 + 178;
  v24 = sub_630F40("SID_POKERTOURNAMENT_LASTPLAYERSTANDINGWINS");
  sub_5FA5B0(0, 72, v24, 31, 210, 20, 405, v46, 5, 32, -1);
  v55 -= 10;
  v47 = v55 + 208;
  v25 = sub_630F40("SID_POKERTOURNAMENT_BETLIMITS");
  sub_5FA5B0(0, 73, v25, 31, 166, 20, 430, v47, 5, 32, -1);
  v48 = v55 + 228;
  v26 = sub_630F40("SID_POKERTOURNAMENT_HAND");
  sub_5FA5B0(0, 74, v26, 31, 55, 20, 430, v48, 5, 32, -1);
  v49 = v55 + 228;
  v27 = sub_630F40("SID_POKERTOURNAMENT_EARLY");
  sub_5FA5B0(0, 75, v27, 31, 55, 20, 486, v49, 5, 32, -1);
  v50 = v55 + 228;
  v28 = sub_630F40("SID_POKERTOURNAMENT_LATE");
  sub_5FA5B0(0, 76, v28, 31, 55, 20, 541, v50, 5, 32, -1);
  sub_5FA5B0(0, 77, "H3_1", 31, 55, 20, 430, v55 + 248, 5, 32, -1);
  sub_5FA5B0(0, 78, "E3_1", 31, 55, 20, 486, v55 + 248, 5, 32, -1);
  sub_5FA5B0(0, 79, "L3_1", 31, 55, 20, 541, v55 + 248, 5, 32, -1);
  sub_5FA5B0(0, 80, "H3_2", 31, 55, 20, 430, v55 + 268, 5, 32, -1);
  sub_5FA5B0(0, 81, "E3_2", 31, 55, 20, 486, v55 + 268, 5, 32, -1);
  sub_5FA5B0(0, 82, "L3_2", 31, 55, 20, 541, v55 + 268, 5, 32, -1);
  sub_5FA5B0(0, 83, "H3_3", 31, 55, 20, 430, v55 + 288, 5, 32, -1);
  sub_5FA5B0(0, 84, "E3_3", 31, 55, 20, 486, v55 + 288, 5, 32, -1);
  sub_5FA5B0(0, 85, "L3_3", 31, 55, 20, 541, v55 + 288, 5, 32, -1);
  sub_5FA5B0(0, 86, "H3_4", 31, 55, 20, 430, v55 + 308, 5, 32, -1);
  sub_5FA5B0(0, 87, "E3_4", 31, 55, 20, 486, v55 + 308, 5, 32, -1);
  sub_5FA5B0(0, 88, "L3_4", 31, 55, 20, 541, v55 + 308, 5, 32, -1);
  v55 = 27;
  v29 = sub_630F40("SID_POKERTOURNAMENT_BETSINCREASEEVERY");
  sub_5FA5B0(0, 89, v29, 31, 200, 20, 405, 330, 5, 32, -1);
  v51 = v55 + 323;
  v30 = sub_630F40("SID_POKERTOURNAMENT_7HANDS");
  sub_5FA5B0(0, 90, v30, 31, 200, 20, 405, v51, 5, 32, -1);
  v55 = 20;
  sub_5F9CE0(0, 9, 3205104, 126, 23, 1, 0, 255, 0);
  v31 = sub_5FB2B0(9);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v31 + 112))(v31, v31);
  sub_51C700(0);
  return sub_51C040(this);
}


//======================================================================
// sub_51C040
// entry 0051c040  size 67  status ok
//======================================================================

int __thiscall sub_51C040(void *this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 1; i <= 3; ++i )
    sub_51C090(i);
  sub_51C410(this);
  return sub_51C5C0(this);
}


//======================================================================
// sub_51C090
// entry 0051c090  size 621  status ok
//======================================================================

int __thiscall sub_51C090(_DWORD *this, int a2)
{
  const char *v2; // eax
  const char *v3; // eax
  const char *v4; // eax
  int v5; // eax
  int result; // eax
  int v8; // [esp+Ch] [ebp-58h]
  int v9; // [esp+Ch] [ebp-58h]
  int v10; // [esp+Ch] [ebp-58h]
  char *v11; // [esp+10h] [ebp-54h]
  int v12; // [esp+18h] [ebp-4Ch]
  int v13; // [esp+1Ch] [ebp-48h]
  int v14; // [esp+1Ch] [ebp-48h]
  int v15; // [esp+1Ch] [ebp-48h]
  char Buffer[52]; // [esp+20h] [ebp-44h] BYREF
  char *v17; // [esp+58h] [ebp-Ch]
  int v18; // [esp+5Ch] [ebp-8h]
  const char **v19; // [esp+60h] [ebp-4h]

  v11 = (&off_721924)[a2];
  v12 = sub_51C580(this);
  v18 = 0;
  v19 = (const char **)&(&off_7207E8)[96 * v12];
  v17 = (char *)&unk_7207EC + 384 * v12 + 48 * *(this + 112) + 16 * a2 - 16;
  if ( v12 == 4 )
  {
    switch ( a2 )
    {
      case 1:
        v2 = (const char *)sub_630F40("SID_POKERTOURNAMENT_OMAHAHOLDEMHILO");
        sprintf(Buffer, v2);
        break;
      case 2:
        v3 = (const char *)sub_630F40("SID_POKERTOURNAMENT_7CARDSTUD");
        sprintf(Buffer, v3);
        break;
      case 3:
        v4 = (const char *)sub_630F40("SID_POKERTOURNAMENT_TEXASHOLDEM");
        sprintf(Buffer, v4);
        break;
    }
  }
  else
  {
    sprintf(Buffer, "%s", *v19);
  }
  v5 = sub_5FB550(v11 + 1);
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)v5 + 180))(v5, Buffer);
  v18 = 7;
  v8 = *((_DWORD *)v17 + 1);
  sub_51C300(1, 7, v8, 2 * v8, v11, 7);
  v13 = v18 + 1;
  v18 += 7;
  v9 = *((_DWORD *)v17 + 2) + v8;
  result = sub_51C300(v13, v18, v9, 2 * v9, v11, 10);
  if ( a2 != 1 )
  {
    v14 = v18 + 1;
    v18 += 7;
    v10 = *((_DWORD *)v17 + 2) + v9;
    sub_51C300(v14, v18, v10, 2 * v10, v11, 13);
    v15 = v18 + 1;
    if ( a2 == 2 )
      v18 += 7;
    else
      v18 = 100;
    return sub_51C300(v15, v18, *((_DWORD *)v17 + 2) + v10, 2 * (*((_DWORD *)v17 + 2) + v10), v11, 16);
  }
  return result;
}


//======================================================================
// sub_51C300
// entry 0051c300  size 257  status ok
//======================================================================

int __stdcall sub_51C300(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // [esp+0h] [ebp-48h]
  int v8; // [esp+4h] [ebp-44h]
  int v9; // [esp+8h] [ebp-40h]
  char Buffer[52]; // [esp+10h] [ebp-38h] BYREF

  if ( a2 >= 100 )
    sprintf(Buffer, "%d-", a1);
  else
    sprintf(Buffer, "%d-%d", a1, a2);
  v9 = sub_5FB550(a6 + a5);
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)v9 + 180))(v9, Buffer);
  sprintf(Buffer, off_6BB590, a3);
  v8 = sub_5FB550(a5 + a6 + 1);
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)v8 + 180))(v8, Buffer);
  sprintf(Buffer, off_6BB590, a4);
  v7 = sub_5FB550(a5 + a6 + 2);
  return (*(int (__thiscall **)(int, char *))(*(_DWORD *)v7 + 180))(v7, Buffer);
}


//======================================================================
// sub_51C410
// entry 0051c410  size 358  status ok
//======================================================================

int __thiscall sub_51C410(_DWORD *this)
{
  const char *v1; // eax
  const char *v2; // eax
  int v3; // eax
  int v5; // [esp+4h] [ebp-E4h]
  char v7[52]; // [esp+Ch] [ebp-DCh] BYREF
  char Buffer[108]; // [esp+40h] [ebp-A8h] BYREF
  char v9[52]; // [esp+ACh] [ebp-3Ch] BYREF
  char **v10; // [esp+E4h] [ebp-4h]

  v10 = &(&off_7207E8)[96 * sub_51C580(this)];
  sub_6311E0((int)v10[7 * *(this + 112) + 61], v7);
  v1 = (const char *)sub_630F40("SID_POKERTOURNAMENT_GRANDPRIZE_FORMAT");
  sprintf(Buffer, v1, v7);
  v5 = sub_5FB550(3);
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)v5 + 180))(v5, Buffer);
  sub_6311E0((int)v10[7 * *(this + 112) + 62], v7);
  sub_6311E0((int)v10[7 * *(this + 112) + 63], v9);
  v2 = (const char *)sub_630F40("SID_POKERTOURNAMENT_2ND3RDPRIZE_FORMAT");
  sprintf(Buffer, v2, v7, v9);
  v3 = sub_5FB550(4);
  return (*(int (__thiscall **)(int, char *))(*(_DWORD *)v3 + 180))(v3, Buffer);
}


//======================================================================
// sub_51C580
// entry 0051c580  size 63  status ok
//======================================================================

int __thiscall sub_51C580(_DWORD *this)
{
  if ( *(this + 111) != -1 )
    return *(this + 111);
  sub_5E9F20((char)"false", "..\\Casino\\PokerTournDialog.cpp", 623);
  return 0;
}


//======================================================================
// sub_51C5C0
// entry 0051c5c0  size 319  status ok
//======================================================================

int __thiscall sub_51C5C0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // [esp+4h] [ebp-20h]
  int v9; // [esp+8h] [ebp-1Ch]
  int v10; // [esp+Ch] [ebp-18h]
  int v11; // [esp+10h] [ebp-14h]
  int v12; // [esp+14h] [ebp-10h]
  int v14; // [esp+1Ch] [ebp-8h]
  int v15; // [esp+20h] [ebp-4h]

  v1 = sub_5DCB00(0);
  v14 = sub_5D5A50(v1);
  v15 = dword_7207D4[*(this + 112)];
  if ( v15 != 50000 || (v2 = sub_51C580(this), (unsigned __int8)sub_51F610(v2)) )
  {
    if ( v14 >= v15 )
    {
      v8 = sub_5FB550(1);
      v6 = sub_630F40("SID_POKERTOURNAMENT_CLICKONCHIP");
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 180))(v8, v6);
      v7 = sub_5FB300(0);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 204))(v7, v7);
    }
    else
    {
      v10 = sub_5FB300(0);
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 208))(v10);
      v9 = sub_5FB550(1);
      v5 = sub_630F40("SID_POKERTOURNAMENT_NOTENOUGHMONEY");
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 180))(v9, v5);
    }
  }
  else
  {
    v12 = sub_5FB300(0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 208))(v12);
    v11 = sub_5FB550(1);
    v3 = sub_630F40("SID_POKERTOURNAMENT_MUSTWINLOWERFIRST");
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v11 + 180))(v11, v3);
  }
}


//======================================================================
// sub_51C700
// entry 0051c700  size 78  status ok
//======================================================================

int __stdcall sub_51C700(int a1)
{
  int v1; // eax
  int v3; // [esp+4h] [ebp-8h]

  v3 = sub_5FB2B0(9);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 72))(v3, dword_721934[a1]);
  v1 = sub_5FB2B0(9);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 116))(v1, v1);
}


//======================================================================
// sub_51C750
// entry 0051c750  size 167  status ok
//======================================================================

int __thiscall sub_51C750(int *this, int a2)
{
  int result; // eax

  result = a2;
  switch ( a2 )
  {
    case 0:
      result = sub_51C860(this);
      break;
    case 1:
      result = sub_60CCE0(1);
      break;
    case 2:
      result = sub_51CAB0(this);
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        3205114,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      *(this + 112) = a2 - 3;
      sub_51C700(*(this + 112));
      result = sub_51C040(this);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_51C820
// entry 0051c820  size 58  status ok
//======================================================================

int __stdcall sub_51C820(unsigned int a1)
{
  if ( a1 > 4 )
    sub_5E9F20((char)"(0<=entryFeeIndex) && (entryFeeIndex<=4)", "..\\Casino\\PokerTournDialog.cpp", 686);
  return dword_721948[a1];
}


//======================================================================
// sub_51C860
// entry 0051c860  size 321  status ok
//======================================================================

unsigned int __thiscall sub_51C860(unsigned int *this)
{
  unsigned int result; // eax
  unsigned int v3; // [esp+4h] [ebp-8h]

  sub_5F87D0(this);
  result = sub_51C580(this);
  v3 = result;
  if ( result < 8 )
  {
    sub_5E2F90(dword_7947E0);
    *(_DWORD *)(dword_7947E0 + 20220) = v3;
    *(_DWORD *)(dword_7947E0 + 20224) = *(this + 112);
    *(_BYTE *)(dword_7947E0 + 20228) = 1;
    *(_DWORD *)(dword_7947E0 + 20204) = sub_51C820(*(this + 112));
    *(_DWORD *)(dword_7947E0 + 20208) = 200;
    *(_BYTE *)(dword_7947E0 + 20201) = 1;
    *(_DWORD *)(dword_7947E0 + 20248) = sub_51C9B0(dword_7217E8[v3]);
    *(_DWORD *)(dword_7947E0 + 20260) = sub_51C9B0(dword_7217E8[v3]);
    *(_BYTE *)(dword_7947E0 + 20202) = 0;
    *(_DWORD *)(dword_7947E0 + 20236) = sub_51CA40(3205010);
    result = (*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 11, -1);
    if ( !(_BYTE)result )
      return sub_5E3130(dword_7947E0);
  }
  return result;
}


//======================================================================
// sub_51C9B0
// entry 0051c9b0  size 105  status ok
//======================================================================

int __stdcall sub_51C9B0(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 3205002:
      result = 0;
      break;
    case 3205003:
      result = 1;
      break;
    case 3205004:
      result = 2;
      break;
    case 3205005:
      result = 3;
      break;
    case 3205006:
      result = 4;
      break;
    case 3205007:
      result = 5;
      break;
    case 3205008:
      result = 6;
      break;
    case 3205009:
      result = 2;
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_51CA40
// entry 0051ca40  size 82  status ok
//======================================================================

int __stdcall sub_51CA40(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 3205010:
      result = 5;
      break;
    case 3205011:
      result = 25;
      break;
    case 3205012:
      result = 250;
      break;
    case 3205013:
      result = 1000;
      break;
    default:
      result = 5;
      break;
  }
  return result;
}


//======================================================================
// sub_51CAB0
// entry 0051cab0  size 22  status ok
//======================================================================

int __thiscall sub_51CAB0(void *this)
{
  return sub_520100(dword_793160, this);
}


//======================================================================
// sub_51CAD0
// entry 0051cad0  size 106  status ok
//======================================================================

_DWORD *__thiscall sub_51CAD0(_DWORD *this)
{
  sub_5F71F0(0, 0);
  *this = &PokerTournamentStatusDialog::`vftable';
  sub_5F83D0(3205113, 0);
  return this;
}


//======================================================================
// sub_51CB60
// entry 0051cb60  size 55  status ok
//======================================================================

int __thiscall sub_51CB60(void *this)
{
  sub_5FA5B0(0, 0, &Source, 73, 262, 31, 5, 5, 1, 5, -1);
  return sub_51CBA0(this);
}


//======================================================================
// sub_51CBA0
// entry 0051cba0  size 192  status ok
//======================================================================

int sub_51CBA0()
{
  const char *v0; // eax
  const char *v1; // eax
  int v3; // [esp-8h] [ebp-4Ch]
  int v4; // [esp-4h] [ebp-48h]
  int v5; // [esp+4h] [ebp-40h]
  int v6; // [esp+8h] [ebp-3Ch]
  char Buffer[52]; // [esp+Ch] [ebp-38h] BYREF

  v5 = *(_DWORD *)(dword_791364 + 252);
  v6 = 0;
  if ( v5 == 1 )
  {
    v6 = 14;
  }
  else if ( v5 == 2 )
  {
    v6 = 28;
  }
  if ( v6 )
  {
    v3 = sub_480EE0((int *)dword_791364);
    v0 = (const char *)sub_630F40("SID_POKERTOURNAMENT_STATUS_FORMAT");
    sprintf(Buffer, v0, v5, v3, v6);
  }
  else
  {
    v4 = sub_480EE0((int *)dword_791364);
    v1 = (const char *)sub_630F40("SID_POKERTOURNAMENT_STATUS_ROUND3_FORMAT");
    sprintf(Buffer, v1, v5, v4);
  }
  return sub_51CC60(Buffer);
}


//======================================================================
// sub_51CC60
// entry 0051cc60  size 27  status ok
//======================================================================

int __stdcall sub_51CC60(int a1)
{
  return sub_5FB5A0(0, a1);
}


//======================================================================
// sub_51CC80
// entry 0051cc80  size 48  status ok
//======================================================================

_DWORD *__thiscall sub_51CC80(_DWORD *this)
{
  sub_5F71F0(1, 0);
  *this = &PokerTournamentInProgressDialog::`vftable';
  *(this + 111) = -1;
  return this;
}


//======================================================================
// sub_51CCD0
// entry 0051ccd0  size 35  status ok
//======================================================================

int __thiscall sub_51CCD0(void *this)
{
  int v1; // eax

  v1 = sub_51E5F0(this, this);
  return sub_630F40(off_7219B8[v1]);
}


//======================================================================
// sub_51CD00
// entry 0051cd00  size 4740  status ok
//======================================================================

int __thiscall sub_51CD00(int this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  const char *v10; // eax
  const char *v11; // eax
  const char *v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v39; // [esp-10h] [ebp-168h]
  int v40; // [esp-10h] [ebp-168h]
  int v41; // [esp-10h] [ebp-168h]
  int v42; // [esp-10h] [ebp-168h]
  int v43; // [esp-10h] [ebp-168h]
  int v44; // [esp-10h] [ebp-168h]
  int v45; // [esp-10h] [ebp-168h]
  int v46; // [esp-10h] [ebp-168h]
  int v47; // [esp-10h] [ebp-168h]
  int v48; // [esp-10h] [ebp-168h]
  int v49; // [esp-10h] [ebp-168h]
  int v50; // [esp-10h] [ebp-168h]
  int v51; // [esp-10h] [ebp-168h]
  int v52; // [esp-10h] [ebp-168h]
  int v53; // [esp-10h] [ebp-168h]
  int v54; // [esp-10h] [ebp-168h]
  int v55; // [esp-10h] [ebp-168h]
  int v56; // [esp-10h] [ebp-168h]
  int v57; // [esp-10h] [ebp-168h]
  int v58; // [esp-8h] [ebp-160h]
  int v59; // [esp-4h] [ebp-15Ch]
  int v60; // [esp-4h] [ebp-15Ch]
  char Buffer[260]; // [esp+18h] [ebp-140h] BYREF
  int v63; // [esp+11Ch] [ebp-3Ch]
  char v64[52]; // [esp+120h] [ebp-38h] BYREF

  v63 = 20;
  if ( *(_BYTE *)(this + 448) )
  {
    *(_DWORD *)(this + 452) = *(_DWORD *)(dword_791364 + 248);
    *(_DWORD *)(this + 456) = *(_DWORD *)(dword_791364 + 252);
    *(_DWORD *)(this + 460) = sub_480EE0((int *)dword_791364);
    *(_DWORD *)(this + 464) = sub_47A510((void *)dword_791364);
  }
  else
  {
    v1 = sub_51E5F0(this);
    *(_DWORD *)(this + 452) = sub_520690(v1);
    v2 = sub_51E5F0(this);
    *(_DWORD *)(this + 456) = sub_5206B0(v2);
    v3 = sub_51E5F0(this);
    *(_DWORD *)(this + 460) = sub_5206D0(v3);
    v4 = sub_51E5F0(this);
    *(_DWORD *)(this + 464) = sub_520710(v4);
  }
  sub_5F83D0(3205103, 0);
  *(_BYTE *)(this + 440) = 1;
  v5 = sub_630F40("SID_GENERIC_OK");
  sub_5F9DE0(0, 0, 3200229, 396, v63 + 417, 2, v5, 72, 75, 74, -1, 13);
  v6 = sub_630F40("SID_GENERIC_HELP");
  sub_5F9DE0(0, 1, 3200222, 40, v63 + 417, 2, v6, 72, 75, 74, -1, 0);
  if ( !*(_BYTE *)(this + 448) )
  {
    v7 = sub_630F40("SID_GENERIC_CANCEL");
    sub_5F9DE0(0, 2, 3200222, 516, v63 + 417, 2, v7, 72, 75, 74, -1, 27);
  }
  if ( *(_BYTE *)(this + 448) && !sub_480F80((int *)dword_791364) )
  {
    v8 = sub_630F40("SID_POKERTOURNAMENT_FORFEIT");
    sub_5F9DE0(0, 8, 3200222, 210, v63 + 417, 2, v8, 72, 75, 74, -1, 0);
  }
  sub_5F9DE0(0, 3, 1023, 162, v63 + 25, 1, &Source, -1, -1, -1, -1, 0);
  sub_5F9DE0(0, 4, 1024, 232, v63 + 25, 1, &Source, -1, -1, -1, -1, 0);
  sub_5F9DE0(0, 5, 1025, 304, v63 + 25, 1, &Source, -1, -1, -1, -1, 0);
  sub_5F9DE0(0, 6, 1026, 380, v63 + 25, 1, &Source, -1, -1, -1, -1, 0);
  sub_5F9DE0(0, 7, 1027, 456, v63 + 25, 1, &Source, -1, -1, -1, -1, 0);
  sub_5F9CE0(0, 10, 3205100, 24, v63 + 118, 1, 0, 255, 0);
  sub_5F9CE0(0, 11, 3205102, 27, v63 + 26, 1, 0, 255, 0);
  sub_5F9CE0(0, 12, 3205102, 27, v63 + 70, 1, 0, 255, 0);
  sub_5F9CE0(0, 13, 3205102, 27, v63 + 405, 1, 0, 255, 0);
  sub_5F9CE0(0, 14, 3205101, 24, v63 + 118, 10, 0, 255, 0);
  sub_5F9CE0(0, 15, 3205105, 45, v63 + 248, 10, 0, 255, 0);
  v9 = sub_630F40("SID_POKERTOURNAMENT_ENTRYFEE_COLON");
  sub_5FA5B0(0, 0, v9, 73, 150, 25, 59, v63 + 40, 1, 5, -1);
  sub_6311E0(*(_DWORD *)(this + 464), v64);
  v10 = (const char *)sub_630F40("SID_POKERTOURNAMENT_BANK_FORMAT");
  sprintf(Buffer, v10, v64);
  sub_5FA5B0(0, 1, Buffer, 73, 640, 25, 0, v63 + 76, 1, 32, -1);
  v59 = *(_DWORD *)(this + 460);
  v58 = *(_DWORD *)(this + 456);
  v11 = (const char *)sub_630F40("SID_POKERTOURNAMENT_CURRENTROUND_CURRENTHAND_FORMAT");
  sprintf(Buffer, v11, v58, v59);
  sub_5FA5B0(0, 1, Buffer, 73, 640, 25, 0, v63 + 96, 1, 32, -1);
  v60 = sub_51CCD0((void *)this);
  v12 = (const char *)sub_630F40("SID_POKERTOURNAMENT_GAMEINPROGRESS_FORMAT");
  sprintf(Buffer, v12, v60);
  sub_5FA5B0(0, 2, Buffer, 73, 640, 25, 0, 14, 1, 32, -1);
  sprintf(Buffer, "Tournament Grand Prize: $30,000");
  sub_5FA5B0(0, 3, Buffer, 73, 640, 25, 0, v63 + 362, 1, 32, -1);
  sprintf(Buffer, a2ndPlace10000);
  sub_5FA5B0(0, 4, Buffer, 73, 640, 25, 0, v63 + 382, 1, 32, -1);
  v39 = v63 + 120;
  v13 = sub_630F40("SID_POKERTOURNAMENT_ROUND1");
  sub_5FA5B0(0, 20, v13, 72, 166, 20, 45, v39, 5, 48, -1);
  v63 -= 10;
  sub_5FA5B0(0, 21, "7 Card Stud", 31, 166, 20, 45, v63 + 158, 5, 32, -1);
  v40 = v63 + 178;
  v14 = sub_630F40("SID_POKERTOURNAMENT_14HANDS");
  sub_5FA5B0(0, 22, v14, 31, 166, 20, 45, v40, 5, 32, -1);
  v63 -= 10;
  v41 = v63 + 208;
  v15 = sub_630F40("SID_POKERTOURNAMENT_BETLIMITS");
  sub_5FA5B0(0, 23, v15, 31, 166, 20, 45, v41, 5, 32, -1);
  v42 = v63 + 228;
  v16 = sub_630F40("SID_POKERTOURNAMENT_HAND");
  sub_5FA5B0(0, 24, v16, 31, 55, 20, 45, v42, 5, 32, -1);
  v43 = v63 + 228;
  v17 = sub_630F40("SID_POKERTOURNAMENT_EARLY");
  sub_5FA5B0(0, 25, v17, 31, 55, 20, 101, v43, 5, 32, -1);
  v44 = v63 + 228;
  v18 = sub_630F40("SID_POKERTOURNAMENT_LATE");
  sub_5FA5B0(0, 26, v18, 31, 55, 20, 156, v44, 5, 32, -1);
  sub_5FA5B0(0, 27, "H1", 31, 55, 20, 45, v63 + 248, 5, 32, -1);
  sub_5FA5B0(0, 28, "E1", 31, 55, 20, 101, v63 + 248, 5, 32, -1);
  sub_5FA5B0(0, 29, "L1", 31, 55, 20, 156, v63 + 248, 5, 32, -1);
  sub_5FA5B0(0, 30, "H2", 31, 55, 20, 45, v63 + 268, 5, 32, -1);
  sub_5FA5B0(0, 31, "E2", 31, 55, 20, 101, v63 + 268, 5, 32, -1);
  sub_5FA5B0(0, 32, "L2", 31, 55, 20, 156, v63 + 268, 5, 32, -1);
  v63 = 27;
  v19 = sub_630F40("SID_POKERTOURNAMENT_TOP3PLAYERS");
  sub_5FA5B0(0, 33, v19, 31, 166, 20, 45, 330, 5, 32, -1);
  v45 = v63 + 323;
  v20 = sub_630F40("SID_POKERTOURNAMENT_ADVANCE");
  sub_5FA5B0(0, 34, v20, 31, 166, 20, 45, v45, 5, 32, -1);
  v63 = 20;
  v21 = sub_630F40("SID_POKERTOURNAMENT_ROUND2");
  sub_5FA5B0(0, 40, v21, 72, 166, 20, 238, 140, 5, 48, -1);
  v63 -= 10;
  sub_5FA5B0(0, 41, "7 Card Stud", 31, 166, 20, 238, v63 + 158, 5, 32, -1);
  v46 = v63 + 178;
  v22 = sub_630F40("SID_POKERTOURNAMENT_28HANDS");
  sub_5FA5B0(0, 42, v22, 31, 166, 20, 238, v46, 5, 32, -1);
  v63 -= 10;
  v47 = v63 + 208;
  v23 = sub_630F40("SID_POKERTOURNAMENT_BETLIMITS");
  sub_5FA5B0(0, 43, v23, 31, 166, 20, 238, v47, 5, 32, -1);
  v48 = v63 + 228;
  v24 = sub_630F40("SID_POKERTOURNAMENT_HAND");
  sub_5FA5B0(0, 44, v24, 31, 55, 20, 238, v48, 5, 32, -1);
  v49 = v63 + 228;
  v25 = sub_630F40("SID_POKERTOURNAMENT_EARLY");
  sub_5FA5B0(0, 45, v25, 31, 55, 20, 294, v49, 5, 32, -1);
  v50 = v63 + 228;
  v26 = sub_630F40("SID_POKERTOURNAMENT_LATE");
  sub_5FA5B0(0, 46, v26, 31, 55, 20, 349, v50, 5, 32, -1);
  sub_5FA5B0(0, 47, &unk_6C2590, 31, 55, 20, 238, v63 + 248, 5, 32, -1);
  sub_5FA5B0(0, 48, &unk_6C258C, 31, 55, 20, 294, v63 + 248, 5, 32, -1);
  sub_5FA5B0(0, 49, &unk_6C2588, 31, 55, 20, 349, v63 + 248, 5, 32, -1);
  sub_5FA5B0(0, 50, &unk_6C2584, 31, 55, 20, 238, v63 + 268, 5, 32, -1);
  sub_5FA5B0(0, 51, &unk_6C2580, 31, 55, 20, 294, v63 + 268, 5, 32, -1);
  sub_5FA5B0(0, 52, &unk_6C257C, 31, 55, 20, 349, v63 + 268, 5, 32, -1);
  sub_5FA5B0(0, 53, "H2_3", 31, 55, 20, 238, v63 + 288, 5, 32, -1);
  sub_5FA5B0(0, 54, "E2_3", 31, 55, 20, 294, v63 + 288, 5, 32, -1);
  sub_5FA5B0(0, 55, "L2_3", 31, 55, 20, 349, v63 + 288, 5, 32, -1);
  sub_5FA5B0(0, 56, "H2_4", 31, 55, 20, 238, v63 + 308, 5, 32, -1);
  sub_5FA5B0(0, 57, "E2_4", 31, 55, 20, 294, v63 + 308, 5, 32, -1);
  sub_5FA5B0(0, 58, "L2_4", 31, 55, 20, 349, v63 + 308, 5, 32, -1);
  v63 = 27;
  v27 = sub_630F40("SID_POKERTOURNAMENT_TOP2PLAYERS");
  sub_5FA5B0(0, 59, v27, 31, 166, 20, 238, 330, 5, 32, -1);
  v51 = v63 + 323;
  v28 = sub_630F40("SID_POKERTOURNAMENT_ADVANCE");
  sub_5FA5B0(0, 60, v28, 31, 166, 20, 238, v51, 5, 32, -1);
  v63 = 20;
  v29 = sub_630F40("SID_POKERTOURNAMENT_ROUND3");
  sub_5FA5B0(0, 70, v29, 72, 166, 20, 430, 140, 5, 48, -1);
  v63 -= 10;
  sub_5FA5B0(0, 71, "7 Card Stud", 31, 166, 20, 430, v63 + 158, 5, 32, -1);
  v52 = v63 + 178;
  v30 = sub_630F40("SID_POKERTOURNAMENT_LASTPLAYERSTANDINGWINS");
  sub_5FA5B0(0, 72, v30, 31, 210, 20, 405, v52, 5, 32, -1);
  v63 -= 10;
  v53 = v63 + 208;
  v31 = sub_630F40("SID_POKERTOURNAMENT_BETLIMITS");
  sub_5FA5B0(0, 73, v31, 31, 166, 20, 430, v53, 5, 32, -1);
  v54 = v63 + 228;
  v32 = sub_630F40("SID_POKERTOURNAMENT_HAND");
  sub_5FA5B0(0, 74, v32, 31, 55, 20, 430, v54, 5, 32, -1);
  v55 = v63 + 228;
  v33 = sub_630F40("SID_POKERTOURNAMENT_EARLY");
  sub_5FA5B0(0, 75, v33, 31, 55, 20, 486, v55, 5, 32, -1);
  v56 = v63 + 228;
  v34 = sub_630F40("SID_POKERTOURNAMENT_LATE");
  sub_5FA5B0(0, 76, v34, 31, 55, 20, 541, v56, 5, 32, -1);
  sub_5FA5B0(0, 77, &unk_6C2578, 31, 55, 20, 430, v63 + 248, 5, 32, -1);
  sub_5FA5B0(0, 78, &unk_6C2574, 31, 55, 20, 486, v63 + 248, 5, 32, -1);
  sub_5FA5B0(0, 79, &unk_6C2570, 31, 55, 20, 541, v63 + 248, 5, 32, -1);
  sub_5FA5B0(0, 80, &unk_6C256C, 31, 55, 20, 430, v63 + 268, 5, 32, -1);
  sub_5FA5B0(0, 81, &unk_6C2568, 31, 55, 20, 486, v63 + 268, 5, 32, -1);
  sub_5FA5B0(0, 82, &unk_6C2564, 31, 55, 20, 541, v63 + 268, 5, 32, -1);
  sub_5FA5B0(0, 83, "H3_3", 31, 55, 20, 430, v63 + 288, 5, 32, -1);
  sub_5FA5B0(0, 84, "E3_3", 31, 55, 20, 486, v63 + 288, 5, 32, -1);
  sub_5FA5B0(0, 85, "L3_3", 31, 55, 20, 541, v63 + 288, 5, 32, -1);
  sub_5FA5B0(0, 86, "H3_4", 31, 55, 20, 430, v63 + 308, 5, 32, -1);
  sub_5FA5B0(0, 87, "E3_4", 31, 55, 20, 486, v63 + 308, 5, 32, -1);
  sub_5FA5B0(0, 88, "L3_4", 31, 55, 20, 541, v63 + 308, 5, 32, -1);
  v63 = 27;
  v35 = sub_630F40("SID_POKERTOURNAMENT_BETSINCREASEEVERY");
  sub_5FA5B0(0, 89, v35, 31, 200, 20, 405, 330, 5, 32, -1);
  v57 = v63 + 323;
  v36 = sub_630F40("SID_POKERTOURNAMENT_7HANDS");
  sub_5FA5B0(0, 90, v36, 31, 200, 20, 405, v57, 5, 32, -1);
  v63 = 20;
  sub_5F9CE0(0, 9, 3205104, 126, 23, 1, 0, 255, 0);
  v37 = sub_5FB2B0(9);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v37 + 112))(v37, v37);
  sub_51E630(*(_DWORD *)(this + 452));
  return sub_51DF90(this);
}


//======================================================================
// sub_51DF90
// entry 0051df90  size 363  status ok
//======================================================================

int __thiscall sub_51DF90(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-24h]
  int v3; // [esp+4h] [ebp-20h]
  int v4; // [esp+8h] [ebp-1Ch]
  int v5; // [esp+Ch] [ebp-18h]
  char *v7; // [esp+14h] [ebp-10h]
  int i; // [esp+18h] [ebp-Ch]
  int j; // [esp+18h] [ebp-Ch]
  char *v10; // [esp+20h] [ebp-4h]

  v7 = off_7219D0[2 * *(this + 114)];
  v10 = (&off_7219D4)[2 * *(this + 114)];
  if ( (int)*(this + 115) < 22 )
  {
    if ( (int)*(this + 115) < 15 )
    {
      if ( (int)*(this + 115) >= 8 )
        v10 += 20;
    }
    else
    {
      v10 += 40;
    }
  }
  else
  {
    v10 += 60;
  }
  for ( i = 1; i <= 3; ++i )
    sub_51E100(i);
  sub_51E480(this);
  for ( j = 3; j < 8; ++j )
  {
    v5 = sub_5FB300(j);
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 208))(v5);
  }
  v4 = sub_5FB300(*(this + 113) + 3);
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 204))(v4);
  v3 = sub_5FB2B0(14);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 176))(v3, *(this + 114) - 1);
  sub_5FB2B0(15);
  sub_5EB5D0(100);
  v2 = sub_5FB2B0(15);
  return (*(int (__thiscall **)(int, char *, char *))(*(_DWORD *)v2 + 68))(v2, v7, v10);
}


//======================================================================
// sub_51E100
// entry 0051e100  size 621  status ok
//======================================================================

int __thiscall sub_51E100(_DWORD *this, int a2)
{
  const char *v2; // eax
  const char *v3; // eax
  const char *v4; // eax
  int v5; // eax
  int result; // eax
  int v8; // [esp+Ch] [ebp-58h]
  int v9; // [esp+Ch] [ebp-58h]
  int v10; // [esp+Ch] [ebp-58h]
  int v11; // [esp+10h] [ebp-54h]
  int v12; // [esp+18h] [ebp-4Ch]
  int v13; // [esp+1Ch] [ebp-48h]
  int v14; // [esp+1Ch] [ebp-48h]
  int v15; // [esp+1Ch] [ebp-48h]
  char Buffer[52]; // [esp+20h] [ebp-44h] BYREF
  char *v17; // [esp+58h] [ebp-Ch]
  int v18; // [esp+5Ch] [ebp-8h]
  const char **v19; // [esp+60h] [ebp-4h]

  v11 = dword_7219EC[a2];
  v12 = sub_51E5F0(this);
  v18 = 0;
  v19 = (const char **)&(&off_7207E8)[96 * v12];
  v17 = (char *)&unk_7207EC + 384 * v12 + 48 * *(this + 113) + 16 * a2 - 16;
  if ( v12 == 4 )
  {
    switch ( a2 )
    {
      case 1:
        v2 = (const char *)sub_630F40("SID_POKER_OMAHAHOLDEMHILO");
        sprintf(Buffer, v2);
        break;
      case 2:
        v3 = (const char *)sub_630F40("SID_POKERTOURNAMENT_7CARDSTUD");
        sprintf(Buffer, v3);
        break;
      case 3:
        v4 = (const char *)sub_630F40("SID_POKERTOURNAMENT_TEXASHOLDEM");
        sprintf(Buffer, v4);
        break;
    }
  }
  else
  {
    sprintf(Buffer, "%s", *v19);
  }
  v5 = sub_5FB550(v11 + 1);
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)v5 + 180))(v5, Buffer);
  v18 = 7;
  v8 = *((_DWORD *)v17 + 1);
  sub_51E370(1, 7, v8, 2 * v8, v11, 7);
  v13 = v18 + 1;
  v18 += 7;
  v9 = *((_DWORD *)v17 + 2) + v8;
  result = sub_51E370(v13, v18, v9, 2 * v9, v11, 10);
  if ( a2 != 1 )
  {
    v14 = v18 + 1;
    v18 += 7;
    v10 = *((_DWORD *)v17 + 2) + v9;
    sub_51E370(v14, v18, v10, 2 * v10, v11, 13);
    v15 = v18 + 1;
    if ( a2 == 2 )
      v18 += 7;
    else
      v18 = 100;
    return sub_51E370(v15, v18, *((_DWORD *)v17 + 2) + v10, 2 * (*((_DWORD *)v17 + 2) + v10), v11, 16);
  }
  return result;
}


//======================================================================
// sub_51E370
// entry 0051e370  size 257  status ok
//======================================================================

int __stdcall sub_51E370(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // [esp+0h] [ebp-48h]
  int v8; // [esp+4h] [ebp-44h]
  int v9; // [esp+8h] [ebp-40h]
  char Buffer[52]; // [esp+10h] [ebp-38h] BYREF

  if ( a2 >= 100 )
    sprintf(Buffer, "%d-", a1);
  else
    sprintf(Buffer, "%d-%d", a1, a2);
  v9 = sub_5FB550(a6 + a5);
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)v9 + 180))(v9, Buffer);
  sprintf(Buffer, off_6BB590, a3);
  v8 = sub_5FB550(a5 + a6 + 1);
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)v8 + 180))(v8, Buffer);
  sprintf(Buffer, off_6BB590, a4);
  v7 = sub_5FB550(a5 + a6 + 2);
  return (*(int (__thiscall **)(int, char *))(*(_DWORD *)v7 + 180))(v7, Buffer);
}


//======================================================================
// sub_51E480
// entry 0051e480  size 358  status ok
//======================================================================

int __thiscall sub_51E480(_DWORD *this)
{
  const char *v1; // eax
  const char *v2; // eax
  int v3; // eax
  int v5; // [esp+4h] [ebp-E4h]
  char v7[52]; // [esp+Ch] [ebp-DCh] BYREF
  char Buffer[108]; // [esp+40h] [ebp-A8h] BYREF
  char v9[52]; // [esp+ACh] [ebp-3Ch] BYREF
  char **v10; // [esp+E4h] [ebp-4h]

  v10 = &(&off_7207E8)[96 * sub_51E5F0(this)];
  sub_6311E0((int)v10[7 * *(this + 113) + 61], v7);
  v1 = (const char *)sub_630F40("SID_POKERTOURNAMENT_GRANDPRIZE_FORMAT");
  sprintf(Buffer, v1, v7);
  v5 = sub_5FB550(3);
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)v5 + 180))(v5, Buffer);
  sub_6311E0((int)v10[7 * *(this + 113) + 62], v7);
  sub_6311E0((int)v10[7 * *(this + 113) + 63], v9);
  v2 = (const char *)sub_630F40("SID_POKERTOURNAMENT_2ND3RDPRIZE_FORMAT");
  sprintf(Buffer, v2, v7, v9);
  v3 = sub_5FB550(4);
  return (*(int (__thiscall **)(int, char *))(*(_DWORD *)v3 + 180))(v3, Buffer);
}


//======================================================================
// sub_51E5F0
// entry 0051e5f0  size 63  status ok
//======================================================================

int __thiscall sub_51E5F0(_DWORD *this)
{
  if ( *(this + 111) != -1 )
    return *(this + 111);
  sub_5E9F20((char)"false", "..\\Casino\\PokerTournDialog.cpp", 1158);
  return 0;
}


//======================================================================
// sub_51E630
// entry 0051e630  size 78  status ok
//======================================================================

int __stdcall sub_51E630(int a1)
{
  int v1; // eax
  int v3; // [esp+4h] [ebp-8h]

  v3 = sub_5FB2B0(9);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 72))(v3, dword_7219FC[a1]);
  v1 = sub_5FB2B0(9);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 116))(v1, v1);
}


//======================================================================
// sub_51E680
// entry 0051e680  size 132  status ok
//======================================================================

int __thiscall sub_51E680(void *this, int a2)
{
  int result; // eax

  result = a2;
  switch ( a2 )
  {
    case 0:
      result = sub_51E730(this);
      break;
    case 1:
      result = sub_60CCE0(1);
      break;
    case 2:
      result = sub_51EB90(this);
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 3205114,
                 0,
                 0,
                 5,
                 1,
                 1.0,
                 0.5,
                 0);
      break;
    case 8:
      result = sub_51E8F0(this);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_51E730
// entry 0051e730  size 62  status ok
//======================================================================

int __thiscall sub_51E730(_BYTE *this)
{
  if ( *(this + 448) )
    return sub_4FC8E0((_DWORD *)dword_791EB8);
  sub_5F87D0(this);
  return sub_51E7B0(this);
}


//======================================================================
// sub_51E770
// entry 0051e770  size 58  status ok
//======================================================================

int __stdcall sub_51E770(unsigned int a1)
{
  if ( a1 > 4 )
    sub_5E9F20((char)"(0<=entryFeeIndex) && (entryFeeIndex<=4)", "..\\Casino\\PokerTournDialog.cpp", 1204);
  return dword_721A10[a1];
}


//======================================================================
// sub_51E7B0
// entry 0051e7b0  size 313  status ok
//======================================================================

unsigned int __thiscall sub_51E7B0(unsigned int *this)
{
  unsigned int result; // eax
  unsigned int v3; // [esp+4h] [ebp-8h]

  result = sub_51E5F0(this);
  v3 = result;
  if ( result < 8 )
  {
    sub_5E2F90(dword_7947E0);
    *(_DWORD *)(dword_7947E0 + 20220) = v3;
    *(_DWORD *)(dword_7947E0 + 20224) = *(this + 113);
    *(_BYTE *)(dword_7947E0 + 20228) = 1;
    *(_DWORD *)(dword_7947E0 + 20204) = sub_51E770(*(this + 113));
    *(_DWORD *)(dword_7947E0 + 20208) = 200;
    *(_BYTE *)(dword_7947E0 + 20201) = 1;
    *(_DWORD *)(dword_7947E0 + 20248) = sub_51EA70(dword_7217E8[v3]);
    *(_DWORD *)(dword_7947E0 + 20260) = sub_51EA70(dword_7217E8[v3]);
    *(_BYTE *)(dword_7947E0 + 20202) = 0;
    *(_DWORD *)(dword_7947E0 + 20236) = sub_51EB20(3205010);
    result = (*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 11, -1);
    if ( !(_BYTE)result )
      return sub_5E3130(dword_7947E0);
  }
  return result;
}


//======================================================================
// sub_51E8F0
// entry 0051e8f0  size 376  status ok
//======================================================================

int __thiscall sub_51E8F0(int this)
{
  int v1; // eax
  const char *v2; // eax
  const char *v3; // eax
  const CHAR *v4; // eax
  int result; // eax
  int v6; // [esp-4h] [ebp-11Ch]
  int v8; // [esp+Ch] [ebp-10Ch]
  char Buffer[260]; // [esp+10h] [ebp-108h] BYREF

  if ( *(_DWORD *)(this + 456) == 3 )
  {
    if ( *(_BYTE *)(this + 448) )
    {
      v8 = sub_4806F0((_DWORD *)dword_791364);
    }
    else
    {
      v1 = sub_51E5F0((_DWORD *)this);
      v8 = sub_520850(v1);
    }
    v6 = sub_520870(v8);
    v2 = (const char *)sub_630F40("SID_POKERTOURNAMENT_FORFEIT_MESSAGE_ROUND3_FORMAT");
    sprintf(Buffer, v2, v6);
  }
  else
  {
    v3 = (const char *)sub_630F40("SID_POKERTOURNAMENT_FORFEIT_MESSAGE_ROUND1OR2");
    strcpy(Buffer, v3);
  }
  v4 = (const CHAR *)sub_630F40("SID_POKERTOURNAMENT_FORFEIT");
  result = sub_62FF10(Buffer, v4, 1u);
  if ( result != 2 )
  {
    if ( *(_BYTE *)(this + 448) )
    {
      if ( *(_DWORD *)(this + 456) == 3 )
      {
        sub_4FC8E0((_DWORD *)dword_791EB8);
        return sub_4FCB30((CMultiPaneFrameWnd **)dword_791EB8, (HWND)3);
      }
      else
      {
        sub_4FC8E0((_DWORD *)dword_791EB8);
        return sub_47FB90((void *)dword_791364, 3);
      }
    }
    else
    {
      return sub_5E9F20((char)"0", "..\\Casino\\PokerTournDialog.cpp", 1265);
    }
  }
  return result;
}


//======================================================================
// sub_51EA70
// entry 0051ea70  size 142  status ok
//======================================================================

int __thiscall sub_51EA70(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // [esp+0h] [ebp-Ch]

  switch ( a2 )
  {
    case 3205002:
      result = 0;
      break;
    case 3205003:
      result = 1;
      break;
    case 3205004:
      result = 2;
      break;
    case 3205005:
      result = 3;
      break;
    case 3205006:
      result = 4;
      break;
    case 3205007:
      result = 5;
      break;
    case 3205008:
      result = 6;
      break;
    case 3205009:
      v3 = *(this + 114);
      if ( v3 == 2 )
      {
        result = 3;
      }
      else if ( v3 == 3 )
      {
        result = 0;
      }
      else
      {
        result = 2;
      }
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_51EB20
// entry 0051eb20  size 82  status ok
//======================================================================

int __stdcall sub_51EB20(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 3205010:
      result = 5;
      break;
    case 3205011:
      result = 25;
      break;
    case 3205012:
      result = 250;
      break;
    case 3205013:
      result = 1000;
      break;
    default:
      result = 5;
      break;
  }
  return result;
}


//======================================================================
// sub_51EB90
// entry 0051eb90  size 57  status ok
//======================================================================

int __thiscall sub_51EB90(_BYTE *this)
{
  if ( *(this + 448) )
    return sub_4FC8E0((_DWORD *)dword_791EB8);
  else
    return sub_520240(dword_793160, this);
}


//======================================================================
// sub_51EBD0
// entry 0051ebd0  size 61  status ok
//======================================================================

_DWORD *__thiscall sub_51EBD0(_DWORD *this)
{
  sub_5F71F0(1, 0);
  *this = &PokerTournamentEndRoundDialog::`vftable';
  *(this + 111) = -1;
  *(this + 139) = 0;
  return this;
}


//======================================================================
// sub_51EC30
// entry 0051ec30  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_51EC30(_DWORD *this, int a2)
{
  *(this + 111) = a2;
  return this;
}


//======================================================================
// sub_51EC50
// entry 0051ec50  size 37  status ok
//======================================================================

int __thiscall sub_51EC50(int this, char a2, int a3)
{
  *(_BYTE *)(this + 448) = a2;
  *(_DWORD *)(this + 452) = a3;
  return a3;
}


//======================================================================
// sub_51EC80
// entry 0051ec80  size 35  status ok
//======================================================================

char *__thiscall sub_51EC80(char *this, char *Source)
{
  return strcpy(this + 456, Source);
}


//======================================================================
// sub_51ECB0
// entry 0051ecb0  size 126  status ok
//======================================================================

int __thiscall sub_51ECB0(int *this, char *Source, int a3)
{
  int result; // eax

  if ( *(this + 139) >= 4 )
    sub_5E9F20((char)"nPlayersToAdvance < 4", "..\\Casino\\PokerTournDialog.cpp", 1361);
  strcpy((char *)this + 100 * *(this + 139) + 560, Source);
  *(this + *(this + 139) + 240) = a3;
  result = *(this + 139) + 1;
  *(this + 139) = result;
  return result;
}


//======================================================================
// sub_51ED30
// entry 0051ed30  size 716  status ok
//======================================================================

int __thiscall sub_51ED30(int this)
{
  const char *v1; // eax
  int v2; // eax
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  int v9; // [esp-4h] [ebp-114h]
  int v10; // [esp-4h] [ebp-114h]
  int v11; // [esp+0h] [ebp-110h]
  char Buffer[260]; // [esp+8h] [ebp-108h] BYREF

  sub_5F83D0(3200242, 0);
  CMFCTabCtrl::HideInactiveWindow((CMFCTabCtrl *)this, 20);
  v9 = *(_DWORD *)(this + 444);
  v1 = (const char *)sub_630F40("SID_POKERTOURNAMENT_ENDOFROUND_FORMAT");
  sprintf(Buffer, v1, v9);
  sub_5FA5B0(0, 0, Buffer, 73, 332, 25, 5, 3, 2, 48, -1);
  v2 = sub_630F40("SID_GENERIC_OK");
  sub_5F9DE0(0, 0, 3200229, 128, 220, 2, v2, 72, 75, 74, -1, 13);
  if ( *(_DWORD *)(this + 444) == 1 )
  {
    v3 = (const char *)sub_630F40("SID_POKERTOURNAMENT_3PLAYERSADVANCE_COLON");
    strcpy(Buffer, v3);
  }
  else if ( *(_DWORD *)(this + 444) == 2 )
  {
    v4 = (const char *)sub_630F40("SID_POKERTOURNAMENT_2PLAYERSADVANCE_COLON");
    strcpy(Buffer, v4);
  }
  sub_5FA5B0(0, 1, Buffer, 31, 290, 20, 20, 50, 1, 1, -1);
  if ( *(_BYTE *)(this + 448) )
  {
    if ( *(_DWORD *)(this + 452) == -1 )
    {
      if ( *(_DWORD *)(this + 444) == 1 )
        v11 = sub_630F40("SID_POKERTOURNAMENT_THREE");
      else
        v11 = sub_630F40("SID_POKERTOURNAMENT_TWO");
      v5 = (const char *)sub_630F40("SID_POKERTOURNAMENT_NOT_IN_TOP_FORMAT");
      sprintf(Buffer, v5, this + 456, v11);
      sub_5FA5B0(0, 2, Buffer, 31, 270, 20, 20, 165, 1, 1, -1);
    }
    else
    {
      v10 = *(_DWORD *)(this + 452);
      v6 = (const char *)sub_630F40("SID_POKERTOURNAMENT_ELIMINATED_AT_HAND_FORMAT");
      sprintf(Buffer, v6, this + 456, v10);
      sub_5FA5B0(0, 2, Buffer, 31, 290, 20, 20, 165, 1, 1, -1);
    }
    v7 = (const char *)sub_630F40("SID_POKERTOURNAMENT_ANDDOESNOTADVANCE");
    strcpy(Buffer, v7);
    sub_5FA5B0(0, 3, Buffer, 31, 290, 20, 20, 185, 1, 1, -1);
  }
  return sub_51F000(this);
}


//======================================================================
// sub_51F000
// entry 0051f000  size 266  status ok
//======================================================================

int __thiscall sub_51F000(const char *this)
{
  int result; // eax
  __int64 v3; // [esp+4h] [ebp-218h]
  char Destination[256]; // [esp+Ch] [ebp-210h] BYREF
  char Buffer[260]; // [esp+10Ch] [ebp-110h] BYREF
  int i; // [esp+214h] [ebp-8h]
  int v7; // [esp+218h] [ebp-4h]

  v7 = 2;
  for ( i = 0; i < *((_DWORD *)this + 139); ++i )
  {
    v3 = sub_64C8A0(*((_DWORD *)this + i + 240), 0);
    sub_64C8D0(v3, SHIDWORD(v3), Destination, 1, 1, 1);
    sprintf(Buffer, "%s: %s", this + 100 * i + 560, Destination);
    sub_5FA5B0(0, i + v7, Buffer, 31, 260, 27, 33, 25 * i + 80, 1, 1, -1);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_51F110
// entry 0051f110  size 40  status ok
//======================================================================

int __stdcall sub_51F110(int a1)
{
  int result; // eax

  result = a1;
  if ( !a1 )
    return sub_4FCAE0(dword_791EB8);
  return result;
}


//======================================================================
// sub_51F340
// entry 0051f340  size 209  status ok
//======================================================================

int __thiscall sub_51F340(_DWORD *this)
{
  int i; // [esp+14h] [ebp-10h]

  *this = &PokerTournamentRoom::`vftable';
  dword_793160 = 0;
  for ( i = 0; i < 6; ++i )
  {
    if ( *(this + i + 37) )
    {
      (**(void (__thiscall ***)(_DWORD, int))*(this + i + 37))(*(this + i + 37), 1);
      *(this + i + 37) = 0;
    }
  }
  return sub_5D7BD0();
}


//======================================================================
// sub_51F420
// entry 0051f420  size 92  status ok
//======================================================================

int __thiscall sub_51F420(ATL::CComCriticalSection *this, int a2)
{
  int result; // eax
  int v4; // [esp+0h] [ebp-4h]

  result = (int)this;
  if ( *((_DWORD *)this + 32) != a2 )
  {
    sub_5F1AD0(dword_721A74[a2]);
    ATL::CComCriticalSection::~CComCriticalSection(this);
    *((_DWORD *)this + 32) = a2;
    sub_51F860(this);
    sub_51FBE0(v4);
    return sub_51FD90(v4);
  }
  return result;
}


//======================================================================
// sub_51F480
// entry 0051f480  size 195  status ok
//======================================================================

int __thiscall sub_51F480(void *this)
{
  int result; // eax
  _DWORD *v2; // [esp+4h] [ebp-20h]
  _DWORD *v4; // [esp+Ch] [ebp-18h]

  sub_5D8230();
  v4 = operator new(0x20u);
  if ( v4 )
  {
    sub_5FC0D0(0);
    *v4 = &PokerTournamentRoomScript::`vftable';
    v2 = v4;
  }
  else
  {
    v2 = 0;
  }
  sub_5F1B70(v2);
  result = sub_51F550(*(_DWORD *)(dword_7947E0 + 20256));
  if ( result != -1 )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 20))(this, result);
  return result;
}


//======================================================================
// sub_51F550
// entry 0051f550  size 97  status ok
//======================================================================

int __stdcall sub_51F550(int a1)
{
  int result; // eax

  if ( a1 == -1 )
    return -1;
  switch ( a1 )
  {
    case 0:
      result = 0;
      break;
    case 1:
      result = 6;
      break;
    case 2:
      result = 2;
      break;
    case 3:
      result = 7;
      break;
    case 4:
      result = 1;
      break;
    case 5:
      result = 5;
      break;
    case 6:
      result = 3;
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_51F5D0
// entry 0051f5d0  size 56  status ok
//======================================================================

int __stdcall sub_51F5D0(int a1)
{
  if ( o_2_a_10C_s_6___3(a1) == -1 )
    return sub_520010(a1);
  else
    return sub_520140(a1);
}


//======================================================================
// sub_51F610
// entry 0051f610  size 70  status ok
//======================================================================

char __stdcall sub_51F610(int a1)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    if ( (unsigned __int8)sub_520770(a1, i) )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_51F660
// entry 0051f660  size 83  status ok
//======================================================================

int __stdcall sub_51F660(int a1)
{
  int i; // [esp+4h] [ebp-8h]
  int v3; // [esp+8h] [ebp-4h]

  v3 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( (unsigned __int8)sub_520770(a1, i) )
      ++v3;
  }
  return v3;
}


//======================================================================
// sub_51F6E0
// entry 0051f6e0  size 174  status ok
//======================================================================

int __thiscall sub_51F6E0(_DWORD **this)
{
  int v1; // eax
  int v3; // [esp+4h] [ebp-10h]
  int v5; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  v5 = sub_5FB2B0(13);
  if ( v5 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 112))(v5);
  for ( i = 0; i < 5; ++i )
    (*(void (__thiscall **)(_DWORD))(**(this + i + 37) + 112))(*(this + i + 37));
  v3 = sub_5FB2B0(14);
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 112))(v3);
  v1 = sub_5FB2B0(15);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 112))(v1, v1);
}


//======================================================================
// sub_51F790
// entry 0051f790  size 203  status ok
//======================================================================

int __thiscall sub_51F790(_DWORD **this, int a2)
{
  int v4; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v4 = sub_5FB2B0(13);
  if ( v4 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 176))(v4, a2);
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 116))(v4);
  }
  for ( i = 0; i < 5; ++i )
  {
    if ( (unsigned __int8)sub_520770(a2, i) )
      (*(void (__thiscall **)(_DWORD))(**(this + i + 37) + 116))(*(this + i + 37));
    else
      (*(void (__thiscall **)(_DWORD))(**(this + i + 37) + 112))(*(this + i + 37));
  }
  return sub_51FC80(a2);
}


//======================================================================
// sub_51F860
// entry 0051f860  size 890  status ok
//======================================================================

int __thiscall sub_51F860(_DWORD *this)
{
  _AFX_OLE_STATE *v2; // [esp+4h] [ebp-50h]
  int v3; // [esp+8h] [ebp-4Ch]
  int v4; // [esp+Ch] [ebp-48h]
  int v5; // [esp+10h] [ebp-44h]
  int v6; // [esp+14h] [ebp-40h]
  _AFX_OLE_STATE *v8; // [esp+1Ch] [ebp-38h]
  void *v9; // [esp+2Ch] [ebp-28h]
  Concurrency::details::FreeVirtualProcessorRoot *v10; // [esp+34h] [ebp-20h]
  int i; // [esp+3Ch] [ebp-18h]
  int j; // [esp+3Ch] [ebp-18h]

  for ( i = 0; i < 8; ++i )
  {
    if ( sub_51F660(i) == 5 )
      v6 = dword_721AD4[i];
    else
      v6 = dword_721AB4[i];
    v10 = (Concurrency::details::FreeVirtualProcessorRoot *)operator new(0x1E8u);
    if ( v10 )
      v5 = Concurrency::details::FreeVirtualProcessorRoot::FreeVirtualProcessorRoot(
             v10,
             0,
             (struct Concurrency::details::SchedulerNode *)0x30E7FA,
             0);
    else
      v5 = 0;
    sub_5F9DE0(v5, i, v6, 0, 0, 1, &Source, -1, -1, -1, -1, 0);
    sub_5FB300(i);
    sub_6023D0(0, 1, 0, 1);
    sub_5FB300(i);
    sub_5EB700(1);
    sub_5FB300(i);
    sub_5EB720(128);
  }
  for ( j = 0; j < 6; ++j )
  {
    if ( !*(this + j + 37) )
    {
      v9 = operator new(0x184u);
      if ( v9 )
        v4 = sub_5F5BF0(v9);
      else
        v4 = 0;
      *(this + j + 37) = v4;
      sub_5EAE80(dword_721AA0[j], 2, 0, 2, -1);
    }
    *(_DWORD *)(*(this + j + 37) + 376) = 5;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + j + 37) + 112))(*(this + j + 37));
    if ( operator new(0x1Cu) )
      v3 = sub_600A70(0);
    else
      v3 = 0;
    sub_5F5D50(v3);
  }
  sub_5F9CE0(0, 13, 3205024, 0, 0, 1, 0, 255, 0);
  v8 = (_AFX_OLE_STATE *)operator new(0x1DCu);
  if ( v8 )
    v2 = _AFX_OLE_STATE::_AFX_OLE_STATE(v8);
  else
    v2 = 0;
  sub_5F9DE0(v2, 16, 3205116, 0, 0, 1, &Source, -1, -1, -1, -1, 0);
  sub_5FB300(16);
  sub_6023D0(0, 1, 0, 1);
  sub_5FB300(16);
  sub_5EB700(1);
  sub_5FB300(16);
  return sub_5EB720(128);
}


//======================================================================
// sub_51FBE0
// entry 0051fbe0  size 152  status ok
//======================================================================

int sub_51FBE0()
{
  int v0; // eax
  int v2; // [esp+4h] [ebp-8h]

  sub_5F9CE0(0, 14, 3205022, 0, 0, 1, 0, 255, 0);
  sub_5F9CE0(0, 15, 3205023, 0, 0, 1, 0, 255, 0);
  v2 = sub_5FB2B0(14);
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 112))(v2);
  v0 = sub_5FB2B0(15);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v0 + 112))(v0, v0);
}


//======================================================================
// sub_51FC80
// entry 0051fc80  size 262  status ok
//======================================================================

int __stdcall sub_51FC80(int a1)
{
  int v2; // eax
  int v3; // [esp+4h] [ebp-1Ch]
  int v4; // [esp+8h] [ebp-18h]
  int v5; // [esp+Ch] [ebp-14h]
  int v6; // [esp+10h] [ebp-10h]
  int v7; // [esp+14h] [ebp-Ch]
  int v8; // [esp+1Ch] [ebp-4h]

  v8 = o_2_a_10C_s_6___3(a1);
  if ( v8 == -1 )
  {
    v7 = sub_5FB2B0(14);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 176))(v7, 5);
    v6 = sub_5FB2B0(14);
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 116))(v6);
  }
  else
  {
    v5 = sub_5FB2B0(14);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 176))(v5, v8);
    v4 = sub_5FB2B0(14);
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 116))(v4);
  }
  if ( sub_51F610(a1) )
  {
    v2 = sub_5FB2B0(15);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 112))(v2, v2);
  }
  else
  {
    v3 = sub_5FB2B0(15);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 116))(v3);
  }
}


//======================================================================
// sub_51FD90
// entry 0051fd90  size 266  status ok
//======================================================================

void sub_51FD90()
{
  int j; // [esp+Ch] [ebp-10h]
  int i; // [esp+10h] [ebp-Ch]
  int v2; // [esp+14h] [ebp-8h]
  int v3; // [esp+18h] [ebp-4h]

  v2 = 16;
  for ( i = 0; i < 8; ++i )
  {
    for ( j = 0; j < 4; ++j )
    {
      if ( (unsigned __int8)sub_520770(i, j) )
      {
        v3 = j + 4 * i;
        if ( sub_51F660(i) == 5 )
          sub_5F9CE0(0, v2++, dword_721B78[v3], 0, 0, 5, 0, 255, 0);
        else
          sub_5F9CE0(0, v2++, dword_721AF8[v3], 0, 0, 5, 0, 255, 0);
      }
    }
  }
}


//======================================================================
// sub_51FEB0
// entry 0051feb0  size 264  status ok
//======================================================================

int __stdcall sub_51FEB0(int a1, int a2)
{
  switch ( a2 )
  {
    case 100001:
      sub_5FE640(100006, 0);
      sub_5FE640(100009, 0);
      sub_5FE640(100007, 0);
      sub_5FE640(100008, 0);
      sub_5FE240(5017, -1, -1, 0);
      break;
    case 100035:
      sub_5FE640(-2, 0);
      sub_5FE640(-2, 0);
      sub_5FE640(100038, 0);
      sub_5FE640(100037, 0);
      break;
    case 100055:
      sub_5FE640(100058, 0);
      sub_5FE640(-2, 0);
      break;
    default:
      return sub_5D8670(a1, a2);
  }
  return sub_5D8670(a1, a2);
}


//======================================================================
// sub_520010
// entry 00520010  size 228  status ok
//======================================================================

int __thiscall sub_520010(_DWORD *this, int a2)
{
  _DWORD *v3; // [esp+4h] [ebp-20h]
  _DWORD *v5; // [esp+10h] [ebp-14h]

  if ( !*(this + 35) )
  {
    v5 = operator new(0x1C4u);
    if ( v5 )
      v3 = sub_51AFC0(v5);
    else
      v3 = 0;
    *(this + 35) = v3;
    *(_DWORD *)(*(this + 35) + 444) = a2;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 35) + 60))(*(this + 35));
    sub_5F7340(0, 0);
  }
  return sub_5F85D0(*(this + 35));
}


//======================================================================
// sub_520100
// entry 00520100  size 50  status ok
//======================================================================

int __thiscall sub_520100(_DWORD *this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 35) )
  {
    result = sub_5F8990(*(this + 35));
    *(this + 35) = 0;
  }
  return result;
}


//======================================================================
// sub_520140
// entry 00520140  size 250  status ok
//======================================================================

int __thiscall sub_520140(_DWORD *this, int a2)
{
  _DWORD *v3; // [esp+4h] [ebp-24h]
  _DWORD *v5; // [esp+14h] [ebp-14h]

  if ( !*(this + 36) )
  {
    v5 = operator new(0x1D4u);
    if ( v5 )
      v3 = sub_51CC80(v5);
    else
      v3 = 0;
    *(this + 36) = v3;
    *(_BYTE *)(*(this + 36) + 448) = 0;
    *(_DWORD *)(*(this + 36) + 444) = a2;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 36) + 60))(*(this + 36));
    sub_5F7340(0, 0);
  }
  return sub_5F85D0(*(this + 36));
}


//======================================================================
// sub_520240
// entry 00520240  size 50  status ok
//======================================================================

int __thiscall sub_520240(_DWORD *this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 36) )
  {
    result = sub_5F8990(*(this + 36));
    *(this + 36) = 0;
  }
  return result;
}


//======================================================================
// sub_520280
// entry 00520280  size 21  status ok
//======================================================================

void sub_520280()
{
  std::locale::facet::facet_Register(0);
}


//======================================================================
// sub_5202D0
// entry 005202d0  size 163  status ok
//======================================================================

int __thiscall sub_5202D0(pairNode *this, int a2)
{
  int v2; // eax
  int result; // eax
  int v4; // [esp+0h] [ebp-Ch]
  int i; // [esp+8h] [ebp-4h]

  if ( (*(unsigned __int8 (__thiscall **)(pairNode *, int))(*(_DWORD *)this + 132))(this, a2) )
  {
    v2 = pairNode::raw_length(this);
    sub_51F790((_DWORD **)dword_793160, v2);
  }
  else
  {
    for ( i = 0; i < 8; ++i )
    {
      v4 = sub_5FB300(i);
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 132))(v4, a2);
      if ( (_BYTE)result )
        return result;
    }
    sub_51F6E0((_DWORD **)dword_793160);
  }
  return sub_5F4D00(a2);
}


//======================================================================
// sub_5203C0
// entry 005203c0  size 116  status ok
//======================================================================

int __thiscall sub_5203C0(void *this, int a2)
{
  int v2; // eax

  if ( (*(unsigned __int8 (__thiscall **)(void *, int))(*(_DWORD *)this + 132))(this, a2)
    && (*(_DWORD *)(a2 + 28) & 8) != 0 )
  {
    *(_BYTE *)(a2 + 4) = 1;
    v2 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 600))(
           dword_162EE84,
           -1);
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 820))(
      dword_162EE84,
      v2);
  }
  return sub_5F4D00(a2);
}


//======================================================================
// sub_5204F0
// entry 005204f0  size 21  status ok
//======================================================================

char sub_5204F0()
{
  return *(_BYTE *)sub_520D60();
}


//======================================================================
// sub_520510
// entry 00520510  size 36  status ok
//======================================================================

int __cdecl sub_520510(char a1)
{
  _BYTE *v1; // eax

  v1 = (_BYTE *)sub_520D60();
  *v1 = a1;
  return sub_5209D0(v1);
}


//======================================================================
// sub_520690
// entry 00520690  size 29  status ok
//======================================================================

int __cdecl sub_520690(int a1)
{
  return *(_DWORD *)(o_2_a_10C_s_6___4(a1) + 4);
}


//======================================================================
// sub_5206B0
// entry 005206b0  size 29  status ok
//======================================================================

int __cdecl sub_5206B0(int a1)
{
  return *(_DWORD *)(o_2_a_10C_s_6___4(a1) + 36);
}


//======================================================================
// sub_5206D0
// entry 005206d0  size 50  status ok
//======================================================================

int __cdecl sub_5206D0(int a1)
{
  int v2; // [esp+4h] [ebp-4h]

  v2 = o_2_a_10C_s_6___4(a1);
  return *(_DWORD *)(v2 + 4 * sub_5206B0(a1) + 40);
}


//======================================================================
// sub_520710
// entry 00520710  size 29  status ok
//======================================================================

int __cdecl sub_520710(int a1)
{
  return *(_DWORD *)(o_2_a_10C_s_6___4(a1) + 32);
}


//======================================================================
// sub_520730
// entry 00520730  size 55  status ok
//======================================================================

int __cdecl sub_520730(int a1, int a2)
{
  void *Buffer; // [esp+4h] [ebp-4h]

  *(_BYTE *)(a2 + o_2_a_10C_s_6___4(a1) + 12) = 1;
  Buffer = (void *)sub_520D60();
  return sub_5209D0(Buffer);
}


//======================================================================
// sub_520770
// entry 00520770  size 32  status ok
//======================================================================

char __cdecl sub_520770(int a1, int a2)
{
  return *(_BYTE *)(a2 + o_2_a_10C_s_6___4(a1) + 12);
}


//======================================================================
// sub_520790
// entry 00520790  size 53  status ok
//======================================================================

int __cdecl sub_520790(int a1, int a2)
{
  void *Buffer; // [esp+4h] [ebp-4h]

  *(_DWORD *)o_2_a_10C_s_6___4(a1) = a2;
  Buffer = (void *)sub_520D60();
  return sub_5209D0(Buffer);
}


//======================================================================
// sub_520800
// entry 00520800  size 71  status ok
//======================================================================

int __cdecl sub_520800(int a1)
{
  int v2; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v2 = o_2_a_10C_s_6___4(a1);
  for ( i = 0; i < 7; ++i )
  {
    if ( *(_DWORD *)(v2 + 4 * i + 92) == -1 )
      return i;
  }
  return 0;
}


//======================================================================
// sub_520850
// entry 00520850  size 31  status ok
//======================================================================

int __cdecl sub_520850(int a1)
{
  return 7 - sub_520800(a1);
}


//======================================================================
// sub_520870
// entry 00520870  size 59  status ok
//======================================================================

int __cdecl sub_520870(int a1)
{
  if ( a1 < 1 || a1 > 7 )
    sub_5E9F20((char)"(1<=place) && (place<=7)", "..\\Casino\\pokerTournRoom.cpp", 719);
  return sub_630F40(*(_DWORD *)&aAvpokerexitbut[4 * a1 + 20]);
}


//======================================================================
// sub_5208B0
// entry 005208b0  size 288  status ok
//======================================================================

int __cdecl sub_5208B0(_BYTE *Buffer)
{
  const char *v1; // eax
  int result; // eax
  FILE *Stream; // [esp+0h] [ebp-410h]
  int i; // [esp+4h] [ebp-40Ch]
  char Destination[1028]; // [esp+8h] [ebp-408h] BYREF

  memset(Destination, 0, 1024);
  v1 = (const char *)sub_520C40();
  strcat(Destination, v1);
  Stream = (FILE *)sub_5EA9C0(Destination, "rb");
  if ( Stream )
  {
    fread(Buffer, 0x6884u, 1u, Stream);
    fclose(Stream);
    result = (unsigned __int8)sub_5204F0();
    if ( (unsigned __int8)result == 1 )
      return sub_520A80(Buffer);
  }
  else
  {
    memset(Buffer, 0, 0x6884u);
    *Buffer = 0;
    for ( i = 0; i < 16; ++i )
      *(_DWORD *)&Buffer[1672 * i + 4] = -1;
    return sub_5209D0(Buffer);
  }
  return result;
}


//======================================================================
// sub_5209D0
// entry 005209d0  size 173  status ok
//======================================================================

int __cdecl sub_5209D0(void *Buffer)
{
  const char *v1; // eax
  FILE *Stream; // [esp+0h] [ebp-40Ch]
  char Destination[1028]; // [esp+4h] [ebp-408h] BYREF

  memset(Destination, 0, 1024);
  v1 = (const char *)sub_520C40();
  strcat(Destination, v1);
  Stream = (FILE *)sub_5EA9C0(Destination, "wb");
  if ( Stream )
  {
    fwrite(Buffer, 0x6884u, 1u, Stream);
    fclose(Stream);
  }
  return sub_520B90(Buffer);
}


//======================================================================
// sub_520A80
// entry 00520a80  size 261  status ok
//======================================================================

int __cdecl sub_520A80(_BYTE *Buffer)
{
  const char *v1; // eax
  FILE *Stream; // [esp+0h] [ebp-410h]
  int i; // [esp+4h] [ebp-40Ch]
  char Destination[1028]; // [esp+8h] [ebp-408h] BYREF

  memset(Destination, 0, 1024);
  v1 = (const char *)sub_520CD0();
  strcat(Destination, v1);
  Stream = (FILE *)sub_5EA9C0(Destination, "rb");
  if ( Stream )
  {
    fread(Buffer, 0x6884u, 1u, Stream);
    return fclose(Stream);
  }
  else
  {
    memset(Buffer, 0, 0x6884u);
    *Buffer = 0;
    for ( i = 0; i < 16; ++i )
      *(_DWORD *)&Buffer[1672 * i + 4] = -1;
    return sub_5209D0(Buffer);
  }
}


//======================================================================
// sub_520B90
// entry 00520b90  size 161  status ok
//======================================================================

FILE *__cdecl sub_520B90(void *Buffer)
{
  const char *v1; // eax
  FILE *result; // eax
  FILE *Stream; // [esp+0h] [ebp-40Ch]
  char Destination[1028]; // [esp+4h] [ebp-408h] BYREF

  memset(Destination, 0, 1024);
  v1 = (const char *)sub_520CD0();
  strcat(Destination, v1);
  result = (FILE *)sub_5EA9C0(Destination, "wb");
  Stream = result;
  if ( result )
  {
    fwrite(Buffer, 0x6884u, 1u, result);
    return (FILE *)fclose(Stream);
  }
  return result;
}


//======================================================================
// sub_520C40
// entry 00520c40  size 143  status ok
//======================================================================

char *sub_520C40()
{
  int v0; // eax
  const char *v1; // eax
  char Destination[104]; // [esp+4h] [ebp-70h] BYREF
  int i; // [esp+70h] [ebp-4h]

  v0 = sub_6375B0(dword_162EE84);
  v1 = (const char *)sub_520E60(v0);
  strcpy(Destination, v1);
  for ( i = 0; i < 13; ++i )
  {
    if ( Destination[i] == 46 )
    {
      Destination[i] = 0;
      break;
    }
  }
  sprintf(Buffer, "%s%s", Destination, ".pok");
  return Buffer;
}


//======================================================================
// sub_520CD0
// entry 00520cd0  size 143  status ok
//======================================================================

char *sub_520CD0()
{
  int v0; // eax
  const char *v1; // eax
  char Destination[104]; // [esp+4h] [ebp-70h] BYREF
  int i; // [esp+70h] [ebp-4h]

  v0 = sub_6375B0(dword_162EE84);
  v1 = (const char *)sub_520E60(v0);
  strcpy(Destination, v1);
  for ( i = 0; i < 13; ++i )
  {
    if ( Destination[i] == 46 )
    {
      Destination[i] = 0;
      break;
    }
  }
  sprintf(byte_793268, "%s%s", Destination, ".bak");
  return byte_793268;
}


//======================================================================
// sub_520D60
// entry 00520d60  size 43  status ok
//======================================================================

int __cdecl sub_520D60()
{
  int v1; // [esp+0h] [ebp-8h]

  v1 = sub_6375B0(dword_162EE84);
  return sub_5D52E0(v1) + 3696;
}


//======================================================================
// sub_520E60
// entry 00520e60  size 68  status ok
//======================================================================

char *__thiscall sub_520E60(CImageDisplay *this)
{
  if ( !CImageDisplay::GetDisplayFormat(this)->rcSource.left )
    sub_5E9F20((char)"!IsEmpty()", "c:\\users\\justin\\desktop\\hoyle2008\\casinoshell\\player.h", 77);
  return (char *)this + 16;
}


//======================================================================
// sub_520EF0
// entry 00520ef0  size 1857  status ok
//======================================================================

int __thiscall sub_520EF0(void *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // esi
  int v6; // [esp+10h] [ebp-4Ch]
  int v7; // [esp+18h] [ebp-44h]
  _DWORD v8[4]; // [esp+1Ch] [ebp-40h]
  int j; // [esp+2Ch] [ebp-30h]
  _WORD v10[4]; // [esp+30h] [ebp-2Ch]
  int v11; // [esp+38h] [ebp-24h]
  char v12; // [esp+3Ch] [ebp-20h]
  _BYTE v13[11]; // [esp+3Dh] [ebp-1Fh]
  char v14[4]; // [esp+48h] [ebp-14h] BYREF
  int i; // [esp+50h] [ebp-Ch]
  int v16; // [esp+54h] [ebp-8h]
  int v17; // [esp+58h] [ebp-4h]

  v17 = sub_528000(dword_793374);
  v12 = 2;
  v13[0] = 0;
  v13[1] = 4;
  v13[2] = 0;
  v13[3] = 12;
  v13[4] = 0;
  v13[5] = 14;
  v13[6] = 0;
  v13[7] = 22;
  v13[8] = 0;
  v13[9] = 24;
  v13[10] = 0;
  strcpy(v14, " ");
  strcpy(&v14[2], "$");
  v10[0] = 152;
  v10[1] = 153;
  v10[2] = 154;
  v10[3] = 155;
  v8[0] = 2;
  v8[1] = 0;
  v8[2] = 1;
  v8[3] = 3;
  v16 = sub_521660(0);
  for ( i = 0; i < 5; ++i )
    *(_BYTE *)(dword_793374 + 40 * a2 + 3224 + 8 * i) = 0;
  if ( (int)sub_62FBF0(100) >= 10 )
  {
    switch ( *(_DWORD *)(v17 + 8) )
    {
      case 0x13:
        v11 = sub_62FBF0(100);
        if ( v11 >= 25 )
        {
          if ( v11 >= 50 )
          {
            result = sub_521A30(148, 0);
          }
          else
          {
            *(_BYTE *)(dword_793374 + 40 * a2 + 3224) = 1;
            result = sub_521A30(153, 0);
          }
        }
        else
        {
          *(_BYTE *)(dword_793374 + 40 * a2 + 3240) = 1;
          result = sub_521A30(152, 0);
        }
        break;
      case 0x14:
        sub_62FBF0(2);
        *(_BYTE *)(dword_793374 + 40 * a2 + 3256) = 1;
        *(_BYTE *)(dword_793374 + 40 * a2 + 3240) = 1;
        result = sub_521A30(152, 0);
        j = 0;
        while ( j < 4 )
        {
          result = sub_62FBF0(8);
          i = result;
          if ( !v13[result] )
          {
            sub_521A30(v13[i - 1], v16);
            result = i;
            v13[i] = 1;
            ++j;
          }
        }
        break;
      case 0x15:
        *(_BYTE *)(dword_793374 + 40 * a2 + 3256) = 1;
        if ( (int)sub_62FBF0(100) < 10 )
        {
          sub_521A30(0, v16);
          sub_521A30(37, v16);
        }
        if ( sub_62FBF0(1) )
        {
          result = sub_521A30(151, 0);
          for ( j = 0; j < 2; ++j )
          {
            i = sub_62FBF0(18) + 1;
            result = sub_521A30(i, v16);
          }
        }
        else
        {
          result = sub_521A30(156, 0);
          for ( j = 0; j < 2; ++j )
          {
            i = sub_62FBF0(18) + 19;
            result = sub_521A30(i, v16);
          }
        }
        break;
      case 0x16:
        *(_BYTE *)(dword_793374 + 40 * a2 + 3256) = 1;
        sub_521A30(0, v16);
        result = sub_521A30(37, v16);
        for ( i = 0; i < 4; ++i )
        {
          v3 = sub_62FBF0(11);
          result = sub_521A30(v3 + 99, 0);
        }
        break;
      case 0x17:
        sub_62FBF0(2);
        *(_BYTE *)(dword_793374 + 40 * a2 + 3256) = 1;
        *(_BYTE *)(dword_793374 + 40 * a2 + 3248) = 1;
        result = sub_521A30(155, 0);
        j = 0;
        while ( j < 4 )
        {
          i = sub_62FBF0(36) + 1;
          result = i % 2;
          if ( i % 2 )
          {
            sub_521A30(i, v16);
            result = ++j;
          }
        }
        break;
      case 0x18:
        sub_62FBF0(2);
        *(_BYTE *)(dword_793374 + 40 * a2 + 3256) = 1;
        *(_BYTE *)(dword_793374 + 40 * a2 + 3240) = 1;
        sub_521A30(152, 0);
        sub_521A30(6, v16);
        sub_521A30(16, v16);
        sub_521A30(26, v16);
        result = sub_521A30(36, v16);
        break;
      case 0x19:
        *(_BYTE *)(dword_793374 + 40 * a2 + 3256) = 1;
        i = sub_62FBF0(3);
        result = sub_521A30(i + 148, 0);
        for ( j = 0; j < 4; ++j )
        {
          v4 = sub_62FBF0(12);
          v6 = 3 * sub_62FBF0(12) + v4;
          result = sub_521A30(v6, v16);
        }
        break;
      case 0x1A:
        sub_62FBF0(2);
        *(_BYTE *)(dword_793374 + 40 * a2 + 3256) = 1;
        *(_BYTE *)(dword_793374 + 40 * a2 + 3240) = 1;
        result = sub_521A30(152, 0);
        j = 0;
        while ( j < 4 )
        {
          result = sub_62FBF0(36) + 1;
          i = result;
          if ( !(result % 2) )
          {
            result = sub_521A30(i, v16);
            ++j;
          }
        }
        break;
      case 0x1B:
        *(_BYTE *)(dword_793374 + 40 * a2 + 3232) = 1;
        *(_BYTE *)(dword_793374 + 40 * a2 + 3256) = 1;
        sub_521A30(154, 0);
        sub_521A30(0, v16);
        sub_521A30(37, v16);
        i = sub_62FBF0(3);
        result = sub_521A30(i + 148, 0);
        break;
      case 0x1C:
        *(_BYTE *)(dword_793374 + 40 * a2 + 3224) = 1;
        *(_BYTE *)(dword_793374 + 40 * a2 + 3256) = 1;
        sub_521A30(153, 0);
        i = sub_62FBF0(21) + 111;
        result = sub_521A30(i, 0);
        break;
      default:
        v7 = sub_521A10(this);
        result = sub_521A30(v7, 0);
        break;
    }
  }
  else
  {
    i = sub_62FBF0(4);
    sub_521A30((__int16)v10[i], 0);
    result = dword_793374 + 40 * a2 + 3224;
    *(_BYTE *)(result + 8 * v8[i]) = 1;
  }
  return result;
}


//======================================================================
// sub_521660
// entry 00521660  size 636  status ok
//======================================================================

int __stdcall sub_521660(int a1)
{
  int v2; // esi
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int v6; // eax
  double v9; // [esp+Ch] [ebp-48h]
  int v10; // [esp+14h] [ebp-40h]
  double v11; // [esp+18h] [ebp-3Ch]
  int v12; // [esp+24h] [ebp-30h]
  _BYTE v13[8]; // [esp+30h] [ebp-24h] BYREF
  int v14; // [esp+38h] [ebp-1Ch]
  int v15; // [esp+3Ch] [ebp-18h]
  int v16; // [esp+40h] [ebp-14h]
  int v17; // [esp+44h] [ebp-10h]
  int v18; // [esp+48h] [ebp-Ch]
  _DWORD *v19; // [esp+4Ch] [ebp-8h]
  int v20; // [esp+50h] [ebp-4h]

  v19 = (_DWORD *)sub_528000(dword_793374);
  v15 = 0;
  v16 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793370 + 688))(dword_793370);
  v18 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793370 + 692))(dword_793370);
  v14 = v19[298];
  v17 = *(_DWORD *)sub_5D5A90(v13);
  v20 = (*(int (__thiscall **)(_DWORD *))(*v19 + 24))(v19);
  if ( v17 >= v18 )
    v12 = v18;
  else
    v12 = v17;
  v18 = v12;
  v15 = v16;
  if ( v16 > v17 )
    return 0;
  switch ( sub_521900(a1) )
  {
    case 1:
    case 6:
    case 7:
      v3 = v20 * v16;
      v15 = v16 + v3 / (sub_62FBF0(10) + 1);
      break;
    case 8:
    case 9:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
      v2 = v20 * (v16 + v16 * sub_62FBF0(5));
      v15 = v20 * v16 * v14 + v2 / (sub_62FBF0(5) + 1);
      break;
    case 0xA:
      v4 = v20 * v16;
      v15 = 3 * (v16 + v4 / (sub_62FBF0(10) + 1));
      break;
    case 0xB:
      v5 = v20 * v16;
      v15 = 4 * (v16 + v5 / (sub_62FBF0(10) + 1));
      break;
    default:
      break;
  }
  if ( (unsigned __int8)sub_5283E0(dword_793374) )
    v15 *= sub_62FBF0(10) + 1;
  if ( (unsigned __int8)sub_528420(dword_793374) && (unsigned __int8)sub_528470(*(_DWORD *)(dword_793374 + 3384)) )
  {
    v11 = (double)v15;
    v6 = (int)(((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v19 + 28))(v19) * v11);
    if ( v18 >= v6 )
    {
      v9 = (double)v15;
      v10 = (int)(((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v19 + 28))(v19) * v9);
    }
    else
    {
      v10 = v18;
    }
    v15 = v10;
  }
  if ( v15 < v16 )
    return v16;
  if ( v15 >= v18 )
    return v18;
  else
    return v15;
}


//======================================================================
// sub_521900
// entry 00521900  size 272  status ok
//======================================================================

int __stdcall sub_521900(int a1)
{
  switch ( a1 )
  {
    case 0:
      return 6;
    case 37:
      return 7;
    case 157:
      return 9;
    case 133:
      return 12;
  }
  if ( a1 > 0 && a1 < 37 )
    return 1;
  if ( a1 > 37 && a1 < 99 )
    return 8;
  if ( a1 > 98 && a1 < 111 )
    return 10;
  if ( a1 > 110 && a1 < 133 )
    return 11;
  if ( a1 > 133 && a1 < 145 )
    return 13;
  if ( a1 > 144 && a1 < 151 )
    return 14;
  if ( a1 > 150 && a1 < 157 )
    return 15;
  sub_5E9F20((char)"false", "..\\Casino\\rouletteai.cpp", 365);
  return 0;
}


//======================================================================
// sub_521A10
// entry 00521a10  size 32  status ok
//======================================================================

int sub_521A10()
{
  return sub_62FBF0(161);
}


//======================================================================
// sub_521A30
// entry 00521a30  size 279  status ok
//======================================================================

int __thiscall sub_521A30(void *this, int a2, int a3)
{
  LONG *p_top; // [esp+4h] [ebp-2Ch]
  char v6[8]; // [esp+8h] [ebp-28h] BYREF
  __int64 v7; // [esp+10h] [ebp-20h]
  __int64 v8; // [esp+18h] [ebp-18h] BYREF
  int v9; // [esp+20h] [ebp-10h]
  int v10; // [esp+24h] [ebp-Ch]
  int v11; // [esp+28h] [ebp-8h]
  CImageDisplay *v12; // [esp+2Ch] [ebp-4h]

  v7 = sub_64C8A0(0, 0);
  v8 = v7;
  v12 = (CImageDisplay *)sub_528000(dword_793374);
  v9 = (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_793370 + 688))(dword_793370, this);
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793370 + 692))(dword_793370);
  v10 = *(_DWORD *)sub_5D5A90(v6);
  LODWORD(v8) = sub_521660(a2);
  if ( a3 && v10 > a3 && a3 < v11 && a3 > v9 )
    LODWORD(v8) = a3;
  p_top = &CImageDisplay::GetDisplayFormat(v12)->rcSource.top;
  sub_521900(a2);
  sub_62FDE0("%s: bets $%d.00 on %s [%d]\n", (char)p_top);
  return (*(int (__thiscall **)(_DWORD, __int64 *, _DWORD, int))(**(_DWORD **)(dword_793374 + 4 * a2 + 4) + 196))(
           *(_DWORD *)(dword_793374 + 4 * a2 + 4),
           &v8,
           0,
           1);
}


//======================================================================
// sub_521B80
// entry 00521b80  size 349  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_521B80(ATL::CCRTHeap *this)
{
  int v2; // [esp+4h] [ebp-20h]
  void *v4; // [esp+Ch] [ebp-18h]
  int i; // [esp+14h] [ebp-10h]
  int j; // [esp+14h] [ebp-10h]
  int k; // [esp+14h] [ebp-10h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RouletteDisplay::`vftable';
  *((_DWORD *)this + 197) = 2;
  *((_DWORD *)this + 2) = 0;
  v4 = operator new(0x190u);
  if ( v4 )
    v2 = sub_5F5F50(v4);
  else
    v2 = 0;
  *((_DWORD *)this + 3) = v2;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 198) = 0;
  for ( i = 0; i < 4; ++i )
    *((_DWORD *)this + i + 193) = 0;
  for ( j = 0; j < 26; ++j )
    *((_DWORD *)this + j + 6) = 0;
  for ( k = 0; k < 161; ++k )
    *((_DWORD *)this + k + 32) = 0;
  return this;
}


//======================================================================
// sub_521CE0
// entry 00521ce0  size 561  status ok
//======================================================================

void __thiscall sub_521CE0(CNoTrackObject *this)
{
  int i; // [esp+68h] [ebp-10h]
  int j; // [esp+68h] [ebp-10h]
  int k; // [esp+68h] [ebp-10h]

  *(_DWORD *)this = &RouletteDisplay::`vftable';
  if ( *((_DWORD *)this + 2) )
    (***((void (__thiscall ****)(_DWORD, int))this + 2))(*((_DWORD *)this + 2), 1);
  if ( *((_DWORD *)this + 3) )
    (***((void (__thiscall ****)(_DWORD, int))this + 3))(*((_DWORD *)this + 3), 1);
  if ( *((_DWORD *)this + 1) )
    (***((void (__thiscall ****)(_DWORD, int))this + 1))(*((_DWORD *)this + 1), 1);
  if ( *((_DWORD *)this + 4) )
    (***((void (__thiscall ****)(_DWORD, int))this + 4))(*((_DWORD *)this + 4), 1);
  if ( *((_DWORD *)this + 5) )
    (***((void (__thiscall ****)(_DWORD, int))this + 5))(*((_DWORD *)this + 5), 1);
  for ( i = 0; i < 4; ++i )
  {
    if ( *((_DWORD *)this + i + 193) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 193))(*((_DWORD *)this + i + 193), 1);
  }
  for ( j = 0; j < 26; ++j )
  {
    if ( *((_DWORD *)this + j + 6) )
      (***((void (__thiscall ****)(_DWORD, int))this + j + 6))(*((_DWORD *)this + j + 6), 1);
  }
  for ( k = 0; k < 161; ++k )
  {
    if ( *((_DWORD *)this + k + 32) )
      (***((void (__thiscall ****)(_DWORD, int))this + k + 32))(*((_DWORD *)this + k + 32), 1);
  }
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_521F20
// entry 00521f20  size 1595  status ok
//======================================================================

int __thiscall sub_521F20(_DWORD *this)
{
  int v1; // eax
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // [esp-8h] [ebp-90h]
  int v9; // [esp+0h] [ebp-88h]
  int v10; // [esp+4h] [ebp-84h]
  int v11; // [esp+4h] [ebp-84h]
  int v12; // [esp+8h] [ebp-80h]
  int v13; // [esp+Ch] [ebp-7Ch]
  int v14; // [esp+10h] [ebp-78h]
  int v15; // [esp+14h] [ebp-74h]
  int v16; // [esp+18h] [ebp-70h]
  int v17; // [esp+1Ch] [ebp-6Ch]
  _DWORD *v18; // [esp+20h] [ebp-68h]
  _DWORD *v19; // [esp+24h] [ebp-64h]
  void *v21; // [esp+2Ch] [ebp-5Ch]
  void *v22; // [esp+34h] [ebp-54h]
  void *v23; // [esp+3Ch] [ebp-4Ch]
  void *v24; // [esp+44h] [ebp-44h]
  void *v25; // [esp+4Ch] [ebp-3Ch]
  _DWORD *v26; // [esp+54h] [ebp-34h]
  _DWORD *v27; // [esp+5Ch] [ebp-2Ch]
  _DWORD v28[5]; // [esp+64h] [ebp-24h]
  int i; // [esp+78h] [ebp-10h]
  int v30; // [esp+84h] [ebp-4h]

  v28[0] = 0;
  v28[1] = 1;
  v28[2] = 5;
  v28[3] = 4;
  v1 = sub_630F40("SID_ROULETTE");
  sub_5F38B0(v1);
  sub_5F1AD0(110014);
  v27 = operator new(0x1A0u);
  v30 = 0;
  if ( v27 )
  {
    sub_5CD6A0(v27);
    *v27 = &RouletteDealer::`vftable';
    v19 = v27;
  }
  else
  {
    v19 = 0;
  }
  v30 = -1;
  *(this + 2) = v19;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 2) + 64))(*(this + 2));
  sub_523560(110019, 110018);
  sub_5EAE80(110017, 0, 0, 1001, -1);
  v26 = operator new(0x178u);
  v30 = 1;
  if ( v26 )
  {
    sub_5EAAF0(v26);
    *v26 = &RouletteWheelBackground::`vftable';
    v18 = v26;
  }
  else
  {
    v18 = 0;
  }
  v30 = -1;
  *(this + 1) = v18;
  if ( (unsigned __int8)sub_637630(dword_162EE84) && !byte_795F94 )
    sub_5EAF00(110010);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 1) + 108))(*(this + 1), 5000);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 1) + 64))(*(this + 1));
  v25 = operator new(0x184u);
  v30 = 2;
  if ( v25 )
    v17 = sub_5F5BF0(v25);
  else
    v17 = 0;
  v30 = -1;
  *(this + 4) = v17;
  if ( (unsigned __int8)sub_637630(dword_162EE84) && !byte_795F94 )
    sub_5EAF00(110001);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 4) + 108))(*(this + 4), 5001);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4) + 64))(*(this + 4));
  v24 = operator new(0x184u);
  v30 = 3;
  if ( v24 )
    v16 = sub_5F5BF0(v24);
  else
    v16 = 0;
  v30 = -1;
  *(this + 5) = v16;
  if ( (unsigned __int8)sub_637630(dword_162EE84) && !byte_795F94 )
    sub_5EAF00(110015);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 5) + 108))(*(this + 5), 5002);
  result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 5) + 64))(*(this + 5));
  for ( i = 0; i < 26; ++i )
  {
    v23 = operator new(0x178u);
    v30 = 4;
    if ( v23 )
    {
      sub_5EAAF0(v23);
      v15 = v3;
    }
    else
    {
      v15 = 0;
    }
    v30 = -1;
    *(this + i + 6) = v15;
    result = sub_5EAE80(110016, -3, -30, 3, -1);
  }
  for ( i = 0; i < 4; ++i )
  {
    v28[4] = sub_639110(i);
    sub_646380(100);
    sub_6464D0(0, 0);
    sub_5D9180(i, 0);
    sub_5DCB00(i);
    result = sub_5D66B0(v9, v10);
  }
  for ( i = 0; i < 4; ++i )
  {
    v22 = operator new(0x178u);
    v30 = 5;
    if ( v22 )
    {
      sub_5EAAF0(v22);
      v14 = v4;
    }
    else
    {
      v14 = 0;
    }
    v30 = -1;
    *(this + i + 193) = v14;
    v13 = *(_DWORD *)(*(_DWORD *)(sub_5DCB00(i) + 32) + 24);
    v12 = *(_DWORD *)(*(_DWORD *)(sub_5DCB00(i) + 32) + 24);
    v5 = sub_5DCB00(i);
    v8 = CMediaType::IsFixedSize(*(CMediaType **)(*(_DWORD *)(v5 + 32) + 24)) + 100;
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 84))(v13);
    v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v12 + 76))(v12, v6 - 7);
    sub_5EAE80(110013, v7 + 10, v8, -1, v9);
    v9 = 3 * v28[i];
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 193) + 176))(*(this + i + 193));
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 193) + 116))(*(this + i + 193));
    result = i + 1;
  }
  for ( i = 0; i < 161; ++i )
  {
    v21 = operator new(0xAE8u);
    v30 = 6;
    if ( v21 )
      v11 = sub_523890(v21);
    else
      v11 = 0;
    v30 = -1;
    *(this + i + 32) = v11;
    sub_5EAE80(110012, 0, 0, 2, i);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 32) + 176))(*(this + i + 32), i);
    sub_5EB5D0(0);
    CPane::SetExclusiveRowMode((CPane *)*(this + i + 32), *(_DWORD *)(dword_793374 + 4 * i + 4));
    result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 32) + 116))(*(this + i + 32));
  }
  return result;
}


//======================================================================
// sub_522560
// entry 00522560  size 240  status ok
//======================================================================

int __thiscall sub_522560(CMFCScanliner **this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  sub_522650(this);
  for ( i = 0; i < 4; ++i )
  {
    if ( (unsigned __int8)sub_528090(i)
      && (unsigned __int8)sub_5DA7B0(dword_793370)
      && CMFCScanliner::channels(*(this + 2))
      && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_793370 + 708))(dword_793370, i)
      && (unsigned __int8)sub_528100(i)
      && sub_528A60(dword_793374) != -1 )
    {
      sub_5226B0(this);
    }
  }
  result = sub_5DA7B0(dword_793370);
  if ( (_BYTE)result && !dword_163068C )
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_793370 + 752))(dword_793370);
  return result;
}


//======================================================================
// sub_522650
// entry 00522650  size 82  status ok
//======================================================================

int sub_522650()
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    sub_639110(i);
    sub_6464D0(0, 0);
    sub_5D9180(i, 0);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5226B0
// entry 005226b0  size 145  status ok
//======================================================================

int __thiscall sub_5226B0(void *this)
{
  int result; // eax
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  result = sub_5228D0(this);
  for ( i = 0; i < 161; ++i )
  {
    for ( j = 0; j < 4; ++j )
    {
      if ( *(_DWORD *)(dword_793374 + 3512) == -1 )
      {
        sub_522800(i, j, 0);
      }
      else if ( *(_DWORD *)(dword_793374 + 3512) == j )
      {
        sub_522800(i, j, 0);
      }
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_522750
// entry 00522750  size 171  status ok
//======================================================================

LONG sub_522750()
{
  LONG result; // eax
  CImageDisplay *v2; // [esp+8h] [ebp-Ch]

  result = sub_5F2BA0(3206002);
  if ( dword_793374 )
  {
    result = sub_528000(dword_793374);
    if ( result )
    {
      v2 = (CImageDisplay *)sub_528000(dword_793374);
      result = CImageDisplay::GetDisplayFormat(v2)->rcSource.left;
      if ( result == 2 || (result = (LONG)CImageDisplay::GetDisplayFormat(v2), *(_DWORD *)result == 3) )
      {
        result = (unsigned __int8)sub_528190(-1);
        if ( (_BYTE)result )
          return sub_5F2B20(3206002, 1);
      }
    }
  }
  return result;
}


//======================================================================
// sub_522800
// entry 00522800  size 73  status ok
//======================================================================

int __thiscall sub_522800(_DWORD **this, int a2, int a3, int a4)
{
  int result; // eax

  result = a2;
  if ( *(this + a2 + 32) )
    return (*(int (__thiscall **)(_DWORD, int, int))(**(this + a2 + 32) + 184))(*(this + a2 + 32), a3, a4);
  return result;
}


//======================================================================
// sub_522850
// entry 00522850  size 53  status ok
//======================================================================

int __thiscall sub_522850(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2;
  if ( *(this + a2 + 32) )
    return sub_5CC440(a3, 0);
  return result;
}


//======================================================================
// sub_522890
// entry 00522890  size 60  status ok
//======================================================================

int __thiscall sub_522890(_DWORD *this, int a2)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 161; ++i )
  {
    sub_522850(this, i, a2);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5228D0
// entry 005228d0  size 60  status ok
//======================================================================

int __thiscall sub_5228D0(_DWORD *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 161; ++i )
  {
    sub_5CC3E0(*(this + i + 32));
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_522910
// entry 00522910  size 146  status ok
//======================================================================

int sub_522910()
{
  _DWORD *v1; // [esp+4h] [ebp-1Ch]
  _DWORD *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x20u);
  if ( v2 )
  {
    sub_5FC0D0(0);
    *v2 = &SpinRouletteWheelScript::`vftable';
    v1 = v2;
  }
  else
  {
    v1 = 0;
  }
  return sub_5FC420(v1);
}


//======================================================================
// sub_5229B0
// entry 005229b0  size 746  status ok
//======================================================================

int __thiscall sub_5229B0(int this)
{
  CImageDisplay *v3; // [esp+4h] [ebp-A8h]
  int v4; // [esp+Ch] [ebp-A0h]
  int i; // [esp+10h] [ebp-9Ch]
  _DWORD v6[38]; // [esp+14h] [ebp-98h]

  v6[0] = 11;
  v6[1] = 7;
  v6[2] = 20;
  v6[3] = 32;
  v6[4] = 17;
  v6[5] = 5;
  v6[6] = 22;
  v6[7] = 34;
  v6[8] = 15;
  v6[9] = 3;
  v6[10] = 24;
  v6[11] = 36;
  v6[12] = 13;
  v6[13] = 1;
  v6[14] = 37;
  v6[15] = 27;
  v6[16] = 10;
  v6[17] = 25;
  v6[18] = 29;
  v6[19] = 12;
  v6[20] = 8;
  v6[21] = 19;
  v6[22] = 31;
  v6[23] = 18;
  v6[24] = 6;
  v6[25] = 21;
  v6[26] = 33;
  v6[27] = 16;
  v6[28] = 4;
  v6[29] = 23;
  v6[30] = 35;
  v6[31] = 14;
  v6[32] = 2;
  v6[33] = 0;
  v6[34] = 28;
  v6[35] = 9;
  v6[36] = 26;
  v6[37] = 30;
  v4 = *(_DWORD *)(this + 788) / 3;
  sub_609870(*(_DWORD *)(this + 792), 1);
  sub_528B60(v6[v4]);
  if ( (unsigned __int8)sub_5F54A0(*(_DWORD *)(this + 4)) || (unsigned __int8)sub_637630(dword_162EE84) && !byte_795F94 )
  {
    for ( i = 0; i < 4; ++i )
    {
      v3 = (CImageDisplay *)sub_5DCB00(i);
      if ( CImageDisplay::GetDisplayFormat(v3)->rcSource.left )
      {
        sub_5DCB00(i);
        sub_6464D0(0, 0);
      }
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 112))(*(_DWORD *)(this + 4));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 16) + 112))(*(_DWORD *)(this + 16));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 20) + 112))(*(_DWORD *)(this + 20));
    sub_5226B0((void *)this);
  }
  sub_5FC420(0);
  sub_5F5D50(0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 4))(*(_DWORD *)(dword_162EE80 + 4), 1);
  sub_528CA0(1);
  sub_522CA0(this);
  return sub_522DC0(this, v3);
}


//======================================================================
// sub_522CA0
// entry 00522ca0  size 276  status ok
//======================================================================

int __thiscall sub_522CA0(_DWORD **this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-Ch]
  int j; // [esp+4h] [ebp-Ch]
  int v5; // [esp+Ch] [ebp-4h]

  v5 = -352;
  for ( i = 0; i < 26; ++i )
  {
    if ( *(int *)(dword_793374 + 4 * i + 3396) > -1 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + i + 6) + 176))(
        *(this + i + 6),
        *(_DWORD *)(dword_793374 + 4 * i + 3396));
      if ( !(i % 13) )
        v5 += 17;
      (*(void (__thiscall **)(_DWORD, int, int))(**(this + i + 6) + 68))(*(this + i + 6), 25 * (i % 13) + 88, v5);
    }
    result = i + 1;
  }
  for ( j = 0; j < 26; ++j )
  {
    if ( *(int *)(dword_793374 + 4 * j + 3396) > -1 )
      (*(void (__thiscall **)(_DWORD))(**(this + j + 6) + 116))(*(this + j + 6));
    result = j + 1;
  }
  return result;
}


//======================================================================
// sub_522DC0
// entry 00522dc0  size 305  status ok
//======================================================================

int __thiscall sub_522DC0(_DWORD **this)
{
  int v1; // eax
  CInternetControl *v3; // [esp+4h] [ebp-30h]
  CInternetControl *v5; // [esp+Ch] [ebp-28h]
  int v6; // [esp+14h] [ebp-20h]
  int v7; // [esp+20h] [ebp-14h]
  void *v8; // [esp+24h] [ebp-10h]

  v6 = sub_528BD0(dword_793374);
  v7 = dword_721CD8[2 * v6] - 31;
  v8 = (void *)(dword_721CDC[2 * v6] - 35);
  v1 = sub_62FBF0(600);
  (*(void (__thiscall **)(_DWORD, int, int))(**(this + 3) + 68))(*(this + 3), v1, 450);
  (*(void (__thiscall **)(_DWORD))(**(this + 3) + 116))(*(this + 3));
  v5 = (CInternetControl *)operator new(0x44u);
  if ( v5 )
    v3 = CInternetControl::CInternetControl(v5, *(struct IUnknown **)(dword_162EE80 + 4), v7, v8);
  else
    v3 = 0;
  *((_DWORD *)v3 + 14) = 20;
  *((float *)v3 + 15) = 1.0 / (double)*((int *)v3 + 14);
  *((float *)v3 + 13) = 1.5;
  return sub_5F6050(v3);
}


//======================================================================
// sub_522F00
// entry 00522f00  size 357  status ok
//======================================================================

int __thiscall sub_522F00(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // [esp+4h] [ebp-28h]
  _DWORD *v6; // [esp+14h] [ebp-18h]
  int v7; // [esp+18h] [ebp-14h]
  int v8; // [esp+1Ch] [ebp-10h]

  v6 = *(_DWORD **)(*(this + a3 + 32) + 480 * a2 + 380);
  v8 = (*(int (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)*(this + a3 + 32) + 220))(*(this + a3 + 32), a2, 0) + 20;
  result = (*(int (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)*(this + a3 + 32) + 224))(*(this + a3 + 32), a2, 0)
         + 140;
  v7 = result;
  if ( v6 )
  {
    v6[97] = sub_637810(4);
    if ( v6[97] && (unsigned __int8)sub_637630(dword_162EE84) )
    {
      if ( operator new(0x2Cu) )
        v4 = sub_606E60(0, v8, v7, 0);
      else
        v4 = 0;
      return sub_5F6050(v4);
    }
    else
    {
      return (*(int (__thiscall **)(_DWORD *, int, int))(*v6 + 68))(v6, v8, v7);
    }
  }
  return result;
}


//======================================================================
// sub_523070
// entry 00523070  size 35  status ok
//======================================================================

int __stdcall sub_523070(int a1, int a2)
{
  return sub_523D50(a1);
}


//======================================================================
// sub_5230A0
// entry 005230a0  size 510  status ok
//======================================================================

int __thiscall sub_5230A0(_DWORD **this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-48h]
  int v3; // [esp+8h] [ebp-44h]
  int v4; // [esp+Ch] [ebp-40h]
  int v6; // [esp+14h] [ebp-38h]
  int v7; // [esp+1Ch] [ebp-30h]
  int j; // [esp+2Ch] [ebp-20h]
  _DWORD *v9; // [esp+30h] [ebp-1Ch]
  int v10; // [esp+34h] [ebp-18h]
  int i; // [esp+38h] [ebp-14h]
  int v12; // [esp+3Ch] [ebp-10h]

  result = (*(int (__thiscall **)(_DWORD))(**(this + 3) + 112))(*(this + 3));
  for ( i = 0; i < 161; ++i )
  {
    result = (int)this;
    if ( (*(this + i + 32))[696] )
    {
      result = sub_523E40(*(this + i + 32));
      for ( j = 0; j < 4; ++j )
      {
        result = (*(this + i + 32))[120 * j + 95];
        v9 = (_DWORD *)result;
        if ( result )
        {
          result = sub_5F54A0(result);
          if ( (_BYTE)result )
          {
            v7 = *(_DWORD *)(sub_5DCB00(j) + 32);
            v4 = unknown_libname_732(v7);
            v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 76))(v4);
            v6 = *(_DWORD *)(sub_5DCB00(j) + 32);
            v3 = unknown_libname_732(v6);
            v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 84))(v3);
            v9[97] = sub_637810(4);
            if ( v9[97] && (unsigned __int8)sub_637630(dword_162EE84) )
            {
              if ( operator new(0x2Cu) )
                v2 = sub_606E60(0, v12, v10, 0);
              else
                v2 = 0;
              result = sub_5F6050(v2);
            }
            else
            {
              result = (*(int (__thiscall **)(_DWORD *, int, int))(*v9 + 68))(v9, v12, v10);
            }
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_5232A0
// entry 005232a0  size 403  status ok
//======================================================================

int __stdcall sub_5232A0(int a1)
{
  const char *v1; // eax
  const char *v2; // eax
  int v3; // eax
  int v5; // [esp-Ch] [ebp-70h]
  int v6; // [esp+0h] [ebp-64h]
  int v7; // [esp+4h] [ebp-60h]
  int v8; // [esp+8h] [ebp-5Ch]
  char Buffer[32]; // [esp+18h] [ebp-4Ch] BYREF
  char Destination[32]; // [esp+38h] [ebp-2Ch] BYREF
  int v11; // [esp+5Ch] [ebp-8h] BYREF
  int v12; // [esp+60h] [ebp-4h]

  sub_5DCB00(a1);
  sub_5D6020(&v11);
  if ( v11 || v12 )
  {
    if ( v11 >= 0 )
      v8 = v11;
    else
      v8 = -v11;
    if ( v11 >= 0 )
      v7 = v12;
    else
      v7 = -v12;
    sub_64C8D0(v8, v7, Buffer, 1, 1, 1);
  }
  else
  {
    sub_6311E0(v11, Buffer);
  }
  if ( v11 )
  {
    if ( v11 <= 0 )
      v6 = sub_630F40("SID_ROULETTE_LOST");
    else
      v6 = sub_630F40("SID_ROULETTE_WON");
    v2 = (const char *)sub_630F40("SID_ROULETTE_JUST_FORMAT");
    sprintf(Destination, v2, v6);
  }
  else
  {
    v1 = (const char *)sub_630F40("SID_ROULETTE_NET_COLON");
    strcpy(Destination, v1);
  }
  if ( *(int *)(sub_5DCB00(a1) + 1228) <= 0 )
  {
    *(_DWORD *)(sub_5DCB00(a1) + 1192) = 0;
  }
  else
  {
    v3 = sub_5DCB00(a1);
    sub_5D7540(v3);
  }
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793370 + 4) + 4))(*(_DWORD *)(dword_793370 + 4), 1);
  v5 = *(_DWORD *)(dword_793370 + 4);
  sub_5DCB00(a1);
  return sub_5D67D0(v5, Destination, Buffer);
}


//======================================================================
// sub_523440
// entry 00523440  size 144  status ok
//======================================================================

char __thiscall sub_523440(_DWORD *this)
{
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 161; ++i )
  {
    for ( j = 0; j < 4; ++j )
    {
      if ( *(_DWORD *)(*(this + i + 32) + 480 * j + 380)
        && CMFCVisualManagerOffice2003::GetHighlightMenuItemColor(*(CMFCVisualManagerOffice2003 **)(*(this + i + 32)
                                                                                                  + 480 * j
                                                                                                  + 380)) )
      {
        return 1;
      }
    }
  }
  return 0;
}


//======================================================================
// sub_5234D0
// entry 005234d0  size 84  status ok
//======================================================================

int __thiscall sub_5234D0(CMFCScanliner *this, int a2)
{
  int result; // eax
  int v3; // [esp+0h] [ebp-8h]

  result = CMFCScanliner::channels(this);
  if ( !(_BYTE)result && !*(_BYTE *)(a2 + 4) )
  {
    result = a2;
    v3 = *(_DWORD *)(a2 + 24);
    if ( v3 == 1 || v3 == 4 )
    {
      *(_BYTE *)(a2 + 4) = 1;
      return sub_5229B0(dword_79337C);
    }
  }
  return result;
}


//======================================================================
// sub_523530
// entry 00523530  size 34  status ok
//======================================================================

int __thiscall sub_523530(void *this)
{
  sub_5F5CC0(this);
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 108))(this, 25);
}


//======================================================================
// sub_523560
// entry 00523560  size 37  status ok
//======================================================================

int __thiscall sub_523560(_DWORD *this, int a2, int a3)
{
  *(this + 102) = a2;
  *(this + 103) = a3;
  return a3;
}


//======================================================================
// sub_523590
// entry 00523590  size 293  status ok
//======================================================================

int __thiscall sub_523590(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-1Ch]

  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793370 + 4) + 4))(*(_DWORD *)(dword_793370 + 4), 1);
  if ( !(unsigned __int8)sub_637630(dword_162EE84) || byte_795F94 )
    return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 28))(
             *(_DWORD *)(dword_162EE80 + 4),
             0);
  *(this + 94) = 5;
  sub_5EAF00(*(this + 103));
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 176))(this, 0);
  if ( operator new(0x20u) )
    v2 = sub_6010A0(*(_DWORD *)(dword_793370 + 4));
  else
    v2 = 0;
  sub_5F5D50(v2);
  return (*(int (__thiscall **)(_DWORD *))(*this + 116))(this);
}


//======================================================================
// sub_5236C0
// entry 005236c0  size 315  status ok
//======================================================================

int __thiscall sub_5236C0(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-1Ch]

  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793370 + 4) + 4))(*(_DWORD *)(dword_793370 + 4), 1);
  if ( !(unsigned __int8)sub_528390(dword_793374) || !(unsigned __int8)sub_637630(dword_162EE84) || byte_795F94 )
    return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_793370 + 4) + 28))(
             *(_DWORD *)(dword_793370 + 4),
             0);
  *(this + 94) = 5;
  sub_5EAF00(*(this + 102));
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 176))(this, 0);
  if ( operator new(0x20u) )
    v2 = sub_6010A0(*(_DWORD *)(dword_793370 + 4));
  else
    v2 = 0;
  sub_5F5D50(v2);
  return (*(int (__thiscall **)(_DWORD *))(*this + 116))(this);
}


//======================================================================
// sub_523800
// entry 00523800  size 138  status ok
//======================================================================

int __thiscall sub_523800(CDrawImage *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  result = CDrawImage::UsingImageAllocator(this);
  if ( result == *((_DWORD *)this + 102) )
  {
    result = CMFCToolBarsCustomizeDialog::GetFlags(this);
    if ( result == 11 )
    {
      for ( i = 0; i < 161; ++i )
      {
        result = sub_528360(i);
        if ( (_BYTE)result )
          result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79337C + 4 * i + 128) + 196))(*(_DWORD *)(dword_79337C + 4 * i + 128));
      }
    }
  }
  return result;
}


//======================================================================
// sub_523890
// entry 00523890  size 44  status ok
//======================================================================

_DWORD *__thiscall sub_523890(_DWORD *this)
{
  sub_5CC1D0(this);
  *this = &RouletteBetArea::`vftable';
  *(this + 696) = 0;
  return this;
}


//======================================================================
// sub_5238C0
// entry 005238c0  size 149  status ok
//======================================================================

int __thiscall sub_5238C0(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&RouletteBetArea::`vftable';
  if ( *(this + 696) )
    (***(this + 696))(*(this + 696), 1);
  *(this + 696) = 0;
  return sub_5CC230();
}


//======================================================================
// sub_523960
// entry 00523960  size 16  status ok
//======================================================================

int sub_523960()
{
  return 110013;
}


//======================================================================
// sub_523970
// entry 00523970  size 28  status ok
//======================================================================

int __thiscall sub_523970(pairNode *this, int a2, int a3)
{
  return dword_721CD8[2 * pairNode::raw_length(this)];
}


//======================================================================
// sub_523990
// entry 00523990  size 28  status ok
//======================================================================

int __thiscall sub_523990(pairNode *this, int a2, int a3)
{
  return dword_721CDC[2 * pairNode::raw_length(this)];
}


//======================================================================
// sub_5239B0
// entry 005239b0  size 53  status ok
//======================================================================

int __stdcall sub_5239B0(int a1, int a2)
{
  _DWORD v3[4]; // [esp+4h] [ebp-10h]

  v3[0] = -3;
  v3[1] = 0;
  v3[2] = 3;
  v3[3] = 0;
  return v3[a1] - 10;
}


//======================================================================
// sub_5239F0
// entry 005239f0  size 53  status ok
//======================================================================

int __stdcall sub_5239F0(int a1, int a2)
{
  _DWORD v3[4]; // [esp+4h] [ebp-10h]

  v3[0] = 0;
  v3[1] = -3;
  v3[2] = 0;
  v3[3] = 3;
  return v3[a1] - 10;
}


//======================================================================
// sub_523A30
// entry 00523a30  size 40  status ok
//======================================================================

int __thiscall sub_523A30(void *this, int a2, int a3)
{
  return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 212))(this, a2, a3) + 10;
}


//======================================================================
// sub_523A60
// entry 00523a60  size 40  status ok
//======================================================================

int __thiscall sub_523A60(void *this, int a2, int a3)
{
  return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 216))(this, a2, a3) - 25;
}


//======================================================================
// sub_523A90
// entry 00523a90  size 700  status ok
//======================================================================

int __thiscall sub_523A90(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // [esp+0h] [ebp-3Ch]
  int v11; // [esp+0h] [ebp-3Ch]
  int v12; // [esp+8h] [ebp-34h]
  void *v14; // [esp+10h] [ebp-2Ch]
  _DWORD v15[4]; // [esp+18h] [ebp-24h]
  int v16; // [esp+28h] [ebp-14h] BYREF
  int v17; // [esp+38h] [ebp-4h]

  v15[0] = 0;
  v15[1] = 1;
  v15[2] = 5;
  v15[3] = 4;
  (*(void (__thiscall **)(_DWORD *, int *, int, int))(*this + 200))(this, &v16, a2, a3);
  sub_5CCC70(a2, a3);
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_793370 + 708))(dword_793370, a2);
  if ( !(_BYTE)result && v16 > 0 )
  {
    v14 = operator new(0x190u);
    v17 = 0;
    if ( v14 )
      v12 = sub_5F5F50(v14);
    else
      v12 = 0;
    v17 = -1;
    *(this + 120 * a2 + 30 * a3 + 95) = v12;
    v4 = (*(int (__thiscall **)(_DWORD *, int))(*this + 216))(this, a2);
    v5 = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 224))(this, a2, a3);
    v6 = (*(int (__thiscall **)(_DWORD *, int, int, int))(*this + 212))(this, a2, a3, v5 + v4);
    v7 = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 220))(this, a2, a3);
    v8 = (*(int (__thiscall **)(_DWORD *, int))(*this + 204))(this, v7 + v6);
    sub_5EAE80(v8, a3, a2 + 40, -1, v10);
    v9 = 3 * v15[a2];
    v11 = sub_62FBF0(3) + v9;
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 120 * a2 + 30 * a3 + 95) + 176))(
      *(this + 120 * a2 + 30 * a3 + 95),
      v11);
    sub_5EB700(1);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 120 * a2 + 30 * a3 + 95) + 108))(
      *(this + 120 * a2 + 30 * a3 + 95),
      5 - a2);
    return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 120 * a2 + 30 * a3 + 95) + 116))(*(this
                                                                                                + 120 * a2
                                                                                                + 30 * a3
                                                                                                + 95));
  }
  return result;
}


//======================================================================
// sub_523D50
// entry 00523d50  size 237  status ok
//======================================================================

int __thiscall sub_523D50(_DWORD **this, int a2)
{
  _DWORD *v2; // eax
  int v3; // eax
  int v4; // eax
  _DWORD *v6; // [esp+4h] [ebp-1Ch]
  void *v8; // [esp+Ch] [ebp-14h]

  if ( !*(this + 696) )
  {
    v8 = operator new(0x178u);
    if ( v8 )
    {
      sub_5EAAF0(v8);
      v6 = v2;
    }
    else
    {
      v6 = 0;
    }
    *(this + 696) = v6;
  }
  v3 = ((int (__thiscall *)(_DWORD **))(*this)[54])(this);
  v4 = ((int (__thiscall *)(_DWORD **, int, _DWORD, int))(*this)[53])(this, a2, 0, v3);
  sub_5EAE80(100010, v4, a2, 0, 10);
  return (*(int (__thiscall **)(_DWORD))(**(this + 696) + 116))(*(this + 696));
}


//======================================================================
// sub_523E40
// entry 00523e40  size 103  status ok
//======================================================================

int __thiscall sub_523E40(int *this)
{
  int result; // eax

  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 696) + 112))(*(this + 696));
  result = *(this + 696);
  if ( result )
    result = (**(int (__thiscall ***)(_DWORD, int))*(this + 696))(*(this + 696), 1);
  *(this + 696) = 0;
  return result;
}


//======================================================================
// sub_523EB0
// entry 00523eb0  size 870  status ok
//======================================================================

int __thiscall sub_523EB0(void *this)
{
  int result; // eax
  CImageDisplay *v3; // [esp+14h] [ebp-Ch]
  int i; // [esp+1Ch] [ebp-4h]

  result = unknown_libname_843(this);
  switch ( result )
  {
    case 0:
      dword_79336C = 0;
      for ( *(_DWORD *)(dword_79337C + 788) = sub_62FC30(0, 113);
            *(_DWORD *)(dword_79337C + 788) % 3 != 2;
            *(_DWORD *)(dword_79337C + 788) = sub_62FC30(0, 113) )
      {
        ;
      }
      *(int *)(dword_79337C + 788) %= 114;
      dword_793368 = *(_DWORD *)(dword_79337C + 788);
      if ( !(unsigned __int8)sub_637630(dword_162EE84) || byte_795F94 )
      {
        while ( dword_79336C < 113 )
        {
          ++dword_79336C;
          if ( ++dword_793368 > 113 )
            dword_793368 = 0;
        }
        return sub_5229B0(dword_79337C);
      }
      sub_62FBF0(10);
      sub_5228D0((_DWORD *)dword_79337C);
      for ( i = 0; i < 4; ++i )
      {
        v3 = (CImageDisplay *)sub_5DCB00(i);
        if ( CImageDisplay::GetDisplayFormat(v3)->rcSource.left )
        {
          sub_5DCB00(i);
          sub_646C20(1);
        }
      }
      sub_5EAF00(110010);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79337C + 4) + 116))(*(_DWORD *)(dword_79337C + 4));
      sub_5EAF00(110001);
      sub_5EAF00(110015);
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        101007,
        0,
        0,
        10,
        3,
        1.0,
        0.5,
        dword_79337C + 792);
LABEL_21:
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_79337C + 20) + 176))(
        *(_DWORD *)(dword_79337C + 20),
        dword_79336C);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79337C + 20) + 116))(*(_DWORD *)(dword_79337C + 20));
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_79337C + 16) + 176))(
        *(_DWORD *)(dword_79337C + 16),
        dword_793368);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79337C + 16) + 116))(*(_DWORD *)(dword_79337C + 16));
      return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, 2, 2);
    case 1:
      goto LABEL_21;
    case 2:
      if ( ++dword_79336C == 45 )
      {
        sub_5F44E0(101007, 1);
        (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
          dword_162EE84,
          101006,
          0,
          0,
          5,
          1,
          1.0,
          0.5,
          0);
      }
      if ( ++dword_793368 > 113 )
        dword_793368 = 0;
      if ( dword_79336C < 113 )
        return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, 1, 2);
      return sub_5229B0(dword_79337C);
  }
  return result;
}


//======================================================================
// sub_5243D0
// entry 005243d0  size 29  status ok
//======================================================================

int sub_5243D0()
{
  return sub_57AB80(7, &unk_7228E0);
}


//======================================================================
// sub_5243F0
// entry 005243f0  size 259  status ok
//======================================================================

int __thiscall sub_5243F0(_BYTE *this)
{
  int result; // eax
  int v2; // eax
  int v3; // [esp+0h] [ebp-10h]
  char v5; // [esp+Bh] [ebp-5h]
  int i; // [esp+Ch] [ebp-4h]

  v5 = 0;
  *(this + 4) = 0;
  *(this + 6) = 0;
  *(this + 5) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  sub_527E50(dword_793374);
  result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793370 + 4) + 4))(*(_DWORD *)(dword_793370 + 4), 1);
  for ( i = 0; i < 4; ++i )
  {
    result = sub_5DCB00(i);
    if ( *(_DWORD *)(result + 1180) )
    {
      v2 = sub_5DCB00(i);
      result = sub_5F54A0(*(_DWORD *)(v2 + 1180));
      if ( (_BYTE)result )
      {
        if ( v5 )
          v3 = 0;
        else
          v3 = *(_DWORD *)(dword_793370 + 4);
        sub_5DCB00(i);
        result = sub_5D6980(v3);
        v5 = 1;
      }
    }
  }
  if ( !v5 )
    return sub_524500(this);
  return result;
}


//======================================================================
// sub_524500
// entry 00524500  size 1264  status ok
//======================================================================

int __thiscall sub_524500(_BYTE *this)
{
  int result; // eax
  int v4; // [esp+Ch] [ebp-44h]
  int v5; // [esp+14h] [ebp-3Ch]
  int v6; // [esp+1Ch] [ebp-34h]
  int v7; // [esp+20h] [ebp-30h]
  CImageDisplay *v8; // [esp+24h] [ebp-2Ch]
  CImageDisplay *v9; // [esp+34h] [ebp-1Ch]
  int v10; // [esp+44h] [ebp-Ch]
  int v11; // [esp+4Ch] [ebp-4h]
  int v12; // [esp+4Ch] [ebp-4h]

  if ( sub_523440((_DWORD *)dword_79337C) )
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793370 + 4) + 8))(
             *(_DWORD *)(dword_793370 + 4),
             1,
             0);
  sub_522560((CMFCScanliner **)dword_79337C);
  if ( *(_DWORD *)(dword_793374 + 3504) != -1 )
    return sub_524EC0(this);
  if ( *(this + 4) )
  {
    v11 = sub_528880(dword_793374);
    if ( *((_BYTE *)dword_162EE84 + 37) && v11 != -1 )
    {
      v9 = (CImageDisplay *)sub_5DCB00(v11);
      if ( CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 3 )
      {
        *(_BYTE *)(sub_5DCB00(v11) + 1185) = 1;
        v11 = sub_528880(dword_793374);
      }
    }
    if ( v11 == -1 )
    {
      if ( (unsigned __int8)sub_528A40(dword_793374) )
      {
        *(_BYTE *)(dword_793374 + 3516) = 1;
        sub_5F2870(dword_162EE80);
        sub_528030(-1, 0);
        if ( *(this + 6) )
        {
          *(this + 6) = 0;
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79337C + 8) + 112))(*(_DWORD *)(dword_79337C + 8));
          return sub_522910();
        }
        else
        {
          *(this + 6) = 1;
          v7 = dword_793374;
          *(_DWORD *)(dword_793374 + 3504) = 4;
          *(_DWORD *)(v7 + 3508) = 4;
          return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793370 + 4) + 8))(
                   *(_DWORD *)(dword_793370 + 4),
                   1,
                   0);
        }
      }
      else if ( *(this + 7) )
      {
        v12 = sub_528A60(dword_793374);
        if ( v12 == -1 )
        {
          if ( *(_DWORD *)(dword_793374 + 3384) == -1 )
          {
            if ( *(this + 9) )
            {
              if ( !(unsigned __int8)sub_5DA7B0(dword_793370) || *(this + 10) )
              {
                if ( !(unsigned __int8)sub_5DA7B0(dword_793370) )
                  return sub_5243F0(this);
                if ( *(this + 11) )
                  return sub_5243F0(this);
                *(this + 11) = 1;
                result = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_793370 + 724))(dword_793370);
                if ( (_BYTE)result )
                  return sub_5243F0(this);
              }
              else
              {
                *(this + 10) = 1;
                v4 = dword_793374;
                *(_DWORD *)(dword_793374 + 3504) = 2;
                *(_DWORD *)(v4 + 3508) = -1;
                return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793370 + 4) + 8))(
                         *(_DWORD *)(dword_793370 + 4),
                         1,
                         0);
              }
            }
            else
            {
              *(this + 9) = 1;
              (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79337C + 8) + 112))(*(_DWORD *)(dword_79337C + 8));
              if ( *((_BYTE *)dword_162EE84 + 37) || !(unsigned __int8)sub_527D20(dword_793374) )
              {
                sub_5230A0((_DWORD **)dword_79337C);
                return sub_524500(dword_793378);
              }
              else
              {
                return sub_5DB8C0(-180, 170);
              }
            }
          }
          else if ( *(this + 8) )
          {
            sub_528030(-1, 0);
            return sub_5236C0(*(_DWORD **)(dword_79337C + 8));
          }
          else
          {
            *(this + 8) = 1;
            v5 = dword_793374;
            *(_DWORD *)(dword_793374 + 3504) = 1;
            *(_DWORD *)(v5 + 3508) = -1;
            return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793370 + 4) + 8))(
                     *(_DWORD *)(dword_793370 + 4),
                     1,
                     0);
          }
        }
        else
        {
          sub_528030(v12, 0);
          sub_524C20(v12);
          return sub_5232A0(v12);
        }
      }
      else
      {
        *(this + 7) = 1;
        v6 = dword_793374;
        *(_DWORD *)(dword_793374 + 3504) = 5;
        *(_DWORD *)(v6 + 3508) = 4;
        return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793370 + 4) + 8))(
                 *(_DWORD *)(dword_793370 + 4),
                 1,
                 0);
      }
    }
    else
    {
      v8 = (CImageDisplay *)sub_5DCB00(v11);
      if ( CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 3 )
      {
        sub_528030(v11, 1);
      }
      else
      {
        sub_528030(v11, 0);
      }
      return sub_5249F0(v11);
    }
  }
  else
  {
    *(this + 4) = 1;
    v10 = dword_793374;
    *(_DWORD *)(dword_793374 + 3504) = 3;
    *(_DWORD *)(v10 + 3508) = 4;
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793370 + 4) + 8))(
             *(_DWORD *)(dword_793370 + 4),
             1,
             0);
  }
  return result;
}


