//======================================================================
// sub_5B0720
// entry 005b0720  size 36  status ok
//======================================================================

int __thiscall sub_5B0720(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + 1) + 8))(*(this + 1), 1, 0);
}


//======================================================================
// sub_5B0750
// entry 005b0750  size 497  status ok
//======================================================================

int __thiscall sub_5B0750(_DWORD **this)
{
  _DWORD *v2; // [esp+4h] [ebp-4Ch]
  _AFX_OLE_STATE *v3; // [esp+8h] [ebp-48h]
  ATL::CCRTHeap *v4; // [esp+Ch] [ebp-44h]
  _AFX_OLE_STATE *v5; // [esp+10h] [ebp-40h]
  int v6; // [esp+14h] [ebp-3Ch]
  int v8; // [esp+18h] [ebp-38h]
  _DWORD *v9; // [esp+1Ch] [ebp-34h]
  _AFX_OLE_STATE *v10; // [esp+24h] [ebp-2Ch]
  ATL::CCRTHeap *v11; // [esp+2Ch] [ebp-24h]
  _AFX_OLE_STATE *v12; // [esp+34h] [ebp-1Ch]

  sub_5D8230();
  if ( operator new(0x67Cu) )
    v6 = sub_5B2FF0();
  else
    v6 = 0;
  dword_793604 = v6;
  sub_5B6190();
  v12 = (_AFX_OLE_STATE *)operator new(0x1Cu);
  if ( v12 )
    v5 = _AFX_OLE_STATE::_AFX_OLE_STATE(v12);
  else
    v5 = 0;
  dword_7935FC = (int)v5;
  sub_5AEB20(v5);
  v11 = (ATL::CCRTHeap *)operator new(0x68u);
  if ( v11 )
    v4 = sub_5A6C80(v11);
  else
    v4 = 0;
  dword_7935F8 = (int)v4;
  sub_5A7650((int)v4);
  v10 = (_AFX_OLE_STATE *)operator new(4u);
  if ( v10 )
    v3 = _AFX_OLE_STATE::_AFX_OLE_STATE(v10);
  else
    v3 = 0;
  dword_7935F4 = (int)v3;
  v9 = operator new(0x20u);
  if ( v9 )
  {
    sub_5FC0D0(0);
    *v9 = &off_6D01CC;
    v2 = v9;
  }
  else
  {
    v2 = 0;
  }
  sub_5F1B70(v2);
  (*(void (__thiscall **)(_DWORD))(**(this + 1) + 16))(*(this + 1));
  sub_5D85E0(v8);
  return sub_5AEF40((_BYTE *)dword_7935FC, 0);
}


//======================================================================
// sub_5B0950
// entry 005b0950  size 2840  status ok
//======================================================================

int __thiscall sub_5B0950(_BYTE *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // eax
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
  char *v27; // eax
  int v28; // eax
  int v29; // eax
  int result; // eax
  int v31; // [esp-8h] [ebp-12Ch]
  int v32; // [esp-8h] [ebp-12Ch]
  BOOL v33; // [esp-8h] [ebp-12Ch]
  int v34; // [esp-8h] [ebp-12Ch]
  int v35; // [esp+4h] [ebp-120h]
  int v36; // [esp+8h] [ebp-11Ch]
  int v37; // [esp+Ch] [ebp-118h]
  int v38; // [esp+10h] [ebp-114h]
  int v39; // [esp+14h] [ebp-110h]
  int v40; // [esp+18h] [ebp-10Ch]
  int v41; // [esp+1Ch] [ebp-108h]
  int v42; // [esp+20h] [ebp-104h]
  int v43; // [esp+24h] [ebp-100h]
  int v44; // [esp+28h] [ebp-FCh]
  int v45; // [esp+2Ch] [ebp-F8h]
  int v46; // [esp+30h] [ebp-F4h]
  int v47; // [esp+34h] [ebp-F0h]
  int v48; // [esp+38h] [ebp-ECh]
  int v49; // [esp+3Ch] [ebp-E8h]
  int v50; // [esp+40h] [ebp-E4h]
  int v51; // [esp+44h] [ebp-E0h]
  int v52; // [esp+48h] [ebp-DCh]
  int v53; // [esp+4Ch] [ebp-D8h]
  int v54; // [esp+50h] [ebp-D4h]
  int v55; // [esp+54h] [ebp-D0h]
  int v56; // [esp+58h] [ebp-CCh]
  _DWORD *v57; // [esp+5Ch] [ebp-C8h]
  _DWORD *v59; // [esp+64h] [ebp-C0h]
  int i; // [esp+6Ch] [ebp-B8h]
  _DWORD v61[21]; // [esp+70h] [ebp-B4h]
  _DWORD v62[8]; // [esp+C4h] [ebp-60h]
  _BYTE *v63; // [esp+E4h] [ebp-40h]
  int v64; // [esp+E8h] [ebp-3Ch]
  int v65; // [esp+ECh] [ebp-38h]
  int v66; // [esp+F0h] [ebp-34h]
  int v67; // [esp+F4h] [ebp-30h]
  int v68; // [esp+F8h] [ebp-2Ch]
  int v69; // [esp+FCh] [ebp-28h]
  int v70; // [esp+100h] [ebp-24h]
  int v71; // [esp+104h] [ebp-20h]
  int v72; // [esp+108h] [ebp-1Ch]
  int v73; // [esp+10Ch] [ebp-18h]
  int v74; // [esp+110h] [ebp-14h]
  int v75; // [esp+114h] [ebp-10h]
  int v76; // [esp+120h] [ebp-4h]

  v62[0] = "SID_ROYALMATCH_CHECKBOX_DOUBLEDOWN";
  v62[1] = "SID_ROYALMATCH_CHECKBOX_RESPLITACES";
  v62[2] = "SID_ROYALMATCH_CHECKBOX_INSURANCE";
  v62[3] = "SID_ROYALMATCH_CHECKBOX_DEALERHITS17";
  v62[4] = "SID_ROYALMATCH_CHECKBOX_DEALERVOICE";
  v62[5] = "SID_ROYALMATCH_CHECKBOX_SHOWHANDTOTALS";
  v62[6] = "SID_ROYALMATCH_CHECKBOX_CARDCOUNT";
  v62[7] = "SID_ROYALMATCH_CHECKBOX_CONTINUE";
  v61[0] = 270;
  v61[1] = 204;
  v61[2] = 270;
  v61[3] = 223;
  v61[4] = 270;
  v61[5] = 242;
  v61[6] = 270;
  v61[7] = 261;
  v61[8] = 270;
  v61[9] = 204;
  v61[10] = 270;
  v61[11] = 223;
  v61[12] = 270;
  v61[13] = 242;
  v61[14] = 270;
  v61[15] = 204;
  v61[16] = 270;
  v61[17] = 223;
  v61[18] = 270;
  v61[19] = 242;
  v64 = 20;
  v65 = 80;
  v66 = 20;
  v67 = 125;
  v68 = 20;
  v69 = 170;
  v70 = 20;
  v71 = 215;
  v72 = 20;
  v73 = 260;
  v74 = 0;
  v75 = 0;
  v5 = sub_630F40("SID_ROYALMATCH_RULES_COLON");
  v6 = sub_5FA5B0(0, -1, v5, 31, 100, 15, 20, 65, 1, 5, -1);
  sub_5FF5A0(v6);
  v7 = sub_5FAEE0(
         0,
         50,
         3200209,
         20,
         80,
         1,
         (struct Concurrency::details::SchedulerBase *)0x3154F0,
         1,
         &Source,
         31,
         69,
         66,
         -1);
  sub_5FF5A0(v7);
  v8 = sub_630F40("SID_ROYALMATCH_NUMBEROFDECKS_COLON");
  v9 = sub_5FA5B0(0, -1, v8, 31, 150, 15, 20, 110, 1, 5, -1);
  sub_5FF5A0(v9);
  v10 = sub_5FAEE0(
          0,
          51,
          3200209,
          20,
          125,
          1,
          (struct Concurrency::details::SchedulerBase *)0x3154F1,
          1,
          &Source,
          31,
          69,
          66,
          -1);
  sub_5FF5A0(v10);
  v11 = sub_630F40("SID_ROYALMATCH_DOUBLEDOWN_COLON");
  v12 = sub_5FA5B0(0, -1, v11, 31, 100, 15, 20, 155, 1, 5, -1);
  sub_5FF5A0(v12);
  v13 = sub_5FAEE0(
          0,
          52,
          3200209,
          20,
          170,
          1,
          (struct Concurrency::details::SchedulerBase *)0x3154F2,
          1,
          &Source,
          31,
          69,
          66,
          -1);
  sub_5FF5A0(v13);
  v14 = sub_630F40("SID_ROYALMATCH_SURRENDER_COLON");
  v15 = sub_5FA5B0(0, -1, v14, 31, 100, 15, 20, 200, 1, 5, -1);
  sub_5FF5A0(v15);
  v16 = sub_5FAEE0(
          0,
          53,
          3200209,
          20,
          215,
          1,
          (struct Concurrency::details::SchedulerBase *)0x3154F3,
          1,
          &Source,
          31,
          69,
          66,
          -1);
  sub_5FF5A0(v16);
  v17 = sub_630F40("SID_ROYALMATCH_SPLITTING_COLON");
  v18 = sub_5FA5B0(0, -1, v17, 31, 100, 15, 20, 245, 1, 5, -1);
  sub_5FF5A0(v18);
  v19 = sub_5FAEE0(
          0,
          54,
          3200209,
          20,
          260,
          1,
          (struct Concurrency::details::SchedulerBase *)0x3154F4,
          1,
          &Source,
          31,
          69,
          66,
          -1);
  sub_5FF5A0(v19);
  for ( i = 0; i < 8; ++i )
  {
    v20 = sub_630F40(v62[i]);
    v21 = sub_5F9EF0(0, i + 55, 3200201, v61[2 * i], 20 * i + 80, 1, v20, 31, 69, 66, -1, 20, 0);
    sub_5FF5A0(v21);
  }
  v22 = sub_630F40("SID_ROYALMATCH_SHUFFLE");
  v23 = sub_5FA5B0(0, -1, v22, 72, 212, 20, 17, 302, 2, 48, -1);
  sub_5FF5A0(v23);
  v24 = sub_5FA5B0(0, -1, &unk_6B4274, 31, 61, 15, 22, 343, 2, 17, -1);
  sub_5FF5A0(v24);
  v25 = sub_5FA5B0(0, -1, &unk_6B4270, 31, 100, 15, 126, 343, 2, 18, -1);
  sub_5FF5A0(v25);
  v26 = sub_5FAA90(0, 0, 3200211, 15, 300, 1, 3200212, 20, -2, 198, 1, 10, 80);
  sub_5FF5A0(v26);
  v27 = (char *)sub_630F40("SID_GENERIC_HELP");
  v28 = sub_5FA790(0, 10, v27, 72, 240, 84, 264, 280, 2, 120, 124, 161, 255, 255, 255, 0);
  sub_5FF5A0(v28);
  v59 = operator new(0x1D0u);
  v76 = 0;
  if ( v59 )
  {
    sub_5EC5A0(v59);
    *v59 = &RoyalMatchSettingsHelpText::`vftable';
    v57 = v59;
  }
  else
  {
    v57 = 0;
  }
  v76 = -1;
  v29 = sub_5FA5B0(v57, 50, &Source, 35, 230, 76, 270, 292, 3, 5, -1);
  sub_5FF5A0(v29);
  v63 = (_BYTE *)sub_6375D0(-1);
  v31 = (char)sub_5B4EA0(dword_793604);
  sub_5FB5E0(50);
  sub_605EF0(v31, 1);
  if ( (unsigned __int8)sub_5DA830(this) )
    v56 = *(_DWORD *)(dword_7947E0 + 20212) - 1;
  else
    v56 = (char)v63[9];
  sub_5FB5E0(51);
  sub_605EF0(v56, 1);
  v32 = (char)sub_5B4F20(dword_793604);
  sub_5FB5E0(52);
  sub_605EF0(v32, 1);
  v33 = (unsigned __int8)sub_5B6680(dword_793604) == 0;
  sub_5FB5E0(53);
  sub_605EF0(v33, 1);
  if ( (unsigned __int8)sub_5DA830(this) )
    v55 = 1;
  else
    v55 = (char)v63[10];
  sub_5FB5E0(54);
  sub_605EF0(v55, 1);
  if ( (unsigned __int8)sub_5B8540(dword_793604) )
  {
    v54 = sub_5FB350(55);
    (*(void (__thiscall **)(int))(*(_DWORD *)v54 + 244))(v54);
  }
  if ( (unsigned __int8)sub_5B8570(dword_793604) )
  {
    v53 = sub_5FB350(56);
    (*(void (__thiscall **)(int))(*(_DWORD *)v53 + 244))(v53);
  }
  if ( (unsigned __int8)sub_5B6630(dword_793604) )
  {
    v52 = sub_5FB350(57);
    (*(void (__thiscall **)(int))(*(_DWORD *)v52 + 244))(v52);
  }
  if ( (unsigned __int8)sub_5B3DC0(dword_793604) )
  {
    v51 = sub_5FB350(58);
    (*(void (__thiscall **)(int))(*(_DWORD *)v51 + 244))(v51);
  }
  if ( v63[4] )
  {
    v50 = sub_5FB350(59);
    (*(void (__thiscall **)(int))(*(_DWORD *)v50 + 244))(v50);
  }
  if ( v63[5] )
  {
    v49 = sub_5FB350(60);
    (*(void (__thiscall **)(int))(*(_DWORD *)v49 + 244))(v49);
  }
  if ( v63[6] )
  {
    v48 = sub_5FB350(61);
    (*(void (__thiscall **)(int))(*(_DWORD *)v48 + 244))(v48);
  }
  if ( v63[7] )
  {
    v47 = sub_5FB350(62);
    (*(void (__thiscall **)(int))(*(_DWORD *)v47 + 244))(v47);
  }
  if ( dword_7947B0 )
  {
    if ( (unsigned __int8)sub_5CDD60(dword_7947B0) )
    {
      v46 = sub_5FB350(62);
      (*(void (__thiscall **)(int))(*(_DWORD *)v46 + 248))(v46);
    }
    else
    {
      v45 = sub_5FB350(62);
      (*(void (__thiscall **)(int))(*(_DWORD *)v45 + 244))(v45);
    }
  }
  v34 = (char)sub_5B5C30(dword_793604);
  sub_5FB860(0);
  sub_605110(v34, 1);
  *(this + 124) = 0;
  result = (unsigned __int8)sub_5DA830(this);
  if ( (_BYTE)result )
  {
    v44 = sub_5FB5E0(50);
    (*(void (__thiscall **)(int))(*(_DWORD *)v44 + 208))(v44);
    v43 = sub_5FB5E0(51);
    (*(void (__thiscall **)(int))(*(_DWORD *)v43 + 208))(v43);
    v42 = sub_5FB5E0(52);
    (*(void (__thiscall **)(int))(*(_DWORD *)v42 + 208))(v42);
    v41 = sub_5FB5E0(53);
    (*(void (__thiscall **)(int))(*(_DWORD *)v41 + 208))(v41);
    v40 = sub_5FB5E0(54);
    (*(void (__thiscall **)(int))(*(_DWORD *)v40 + 208))(v40);
    v39 = sub_5FB350(55);
    (*(void (__thiscall **)(int))(*(_DWORD *)v39 + 208))(v39);
    v38 = sub_5FB350(56);
    (*(void (__thiscall **)(int))(*(_DWORD *)v38 + 208))(v38);
    v37 = sub_5FB350(57);
    (*(void (__thiscall **)(int))(*(_DWORD *)v37 + 208))(v37);
    v36 = sub_5FB350(58);
    (*(void (__thiscall **)(int))(*(_DWORD *)v36 + 208))(v36);
    v35 = sub_5FB860(0);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v35 + 180))(v35);
  }
  return result;
}


//======================================================================
// sub_5B1470
// entry 005b1470  size 22  status ok
//======================================================================

int __thiscall sub_5B1470(void *this)
{
  return sub_5B65F0(dword_793604, this);
}


//======================================================================
// sub_5B1490
// entry 005b1490  size 49  status ok
//======================================================================

int __thiscall sub_5B1490(void *this)
{
  int v1; // eax

  v1 = sub_5DF2E0(dword_7947E0);
  sub_5F1E60(3233001, v1, 100035);
  return sub_64E430(this);
}


//======================================================================
// sub_5B14D0
// entry 005b14d0  size 221  status ok
//======================================================================

int __stdcall sub_5B14D0(int a1, int a2)
{
  if ( a2 == 100001 )
  {
    sub_5FE640(100006, 0);
    sub_5FE640(100009, 0);
    sub_5FE640(100007, 0);
    sub_5FE640(100008, 0);
    if ( byte_795F95 )
      sub_5FE640(-2, 0);
    else
      sub_5FE240(5017, -1, -1, 0);
  }
  else if ( a2 == 100055 )
  {
    sub_5FE640(100058, 0);
    sub_5FE240(5009, -1, -1, 0);
    sub_5FE240(5019, -1, -1, 0);
  }
  return sub_5D8670(a1, a2);
}


//======================================================================
// sub_5B15B0
// entry 005b15b0  size 22  status ok
//======================================================================

int __thiscall sub_5B15B0(void *this)
{
  return sub_5B69B0(dword_793604, this);
}


//======================================================================
// sub_5B15D0
// entry 005b15d0  size 250  status ok
//======================================================================

int __stdcall sub_5B15D0(int a1)
{
  int v2; // [esp-8h] [ebp-2Ch]
  int v3; // [esp-8h] [ebp-2Ch]
  int v4; // [esp-4h] [ebp-28h]
  int v5; // [esp-4h] [ebp-28h]
  int v6; // [esp+4h] [ebp-20h]
  int v7; // [esp+8h] [ebp-1Ch]

  if ( *(_BYTE *)(sub_5DCB00(a1) + 1184) )
  {
    v7 = *(_DWORD *)(dword_793604 + 4 * a1 + 1408);
    v4 = *(_DWORD *)(v7 + 32 * a1 + 76);
    v2 = *(_DWORD *)(v7 + 32 * a1 + 72);
    sub_5DCB00(a1);
    sub_5D5CF0(v2, v4);
    v6 = *(_DWORD *)(dword_793604 + 4 * a1 + 1588);
    v5 = *(_DWORD *)(v6 + 32 * a1 + 76);
    v3 = *(_DWORD *)(v6 + 32 * a1 + 72);
    sub_5DCB00(a1);
    sub_5D5CF0(v3, v5);
  }
  sub_5CB9B0(*(_DWORD *)(dword_793604 + 4 * a1 + 1408));
  return sub_5CB9B0(*(_DWORD *)(dword_793604 + 4 * a1 + 1588));
}


//======================================================================
// sub_5B16D0
// entry 005b16d0  size 119  status ok
//======================================================================

int __stdcall sub_5B16D0(int a1)
{
  int v1; // eax
  int *v2; // eax
  int v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v8; // [esp-8h] [ebp-1Ch]
  int v9; // [esp-4h] [ebp-18h]
  _BYTE v10[8]; // [esp+Ch] [ebp-8h] BYREF

  v1 = sub_5DCB00(a1);
  v9 = *(_DWORD *)(v1 + 1224);
  v8 = *(_DWORD *)(v1 + 1220);
  sub_5B5FB0(a1);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = sub_5B5FB0(a1);
  *(_DWORD *)(v5 + 16) = v3;
  *(_DWORD *)(v5 + 20) = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_5B1750
// entry 005b1750  size 349  status ok
//======================================================================

LONG __stdcall sub_5B1750(CImageDisplay *a1, int a2, int a3, int a4)
{
  LONG result; // eax
  int *v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // eax
  int *v9; // eax
  int v10; // esi
  int v11; // edi
  int v12; // eax
  int *v13; // eax
  int v14; // esi
  int v15; // edi
  _BYTE v17[8]; // [esp+18h] [ebp-18h] BYREF
  _BYTE v18[8]; // [esp+20h] [ebp-10h] BYREF
  _BYTE v19[8]; // [esp+28h] [ebp-8h] BYREF

  result = CImageDisplay::GetDisplayFormat(a1)->rcSource.left;
  if ( result == 2 || (result = (LONG)CImageDisplay::GetDisplayFormat(a1), *(_DWORD *)result == 3) )
  {
    result = (unsigned __int8)sub_5DA830(dword_7947E4);
    if ( !(_BYTE)result && !*((_BYTE *)a1 + 1201) )
    {
      if ( *(int *)(dword_793604 + 1480) < 0 )
      {
        sub_5B5FB0(a2);
        v5 = (int *)sub_64C5C0(v19, a3, a4);
        v6 = *v5;
        v7 = v5[1];
        v8 = sub_5B5FB0(a2);
        *(_DWORD *)(v8 + 32) = v6;
        *(_DWORD *)(v8 + 36) = v7;
      }
      if ( !*(_DWORD *)(dword_793604 + 1480) )
      {
        sub_5B5FB0(a2);
        v9 = (int *)sub_64C5C0(v18, a3, a4);
        v10 = *v9;
        v11 = v9[1];
        v12 = sub_5B5FB0(a2);
        *(_DWORD *)(v12 + 48) = v10;
        *(_DWORD *)(v12 + 52) = v11;
      }
      result = dword_793604;
      if ( *(int *)(dword_793604 + 1480) > 0 )
      {
        sub_5B5FB0(a2);
        v13 = (int *)sub_64C5C0(v17, a3, a4);
        v14 = *v13;
        v15 = v13[1];
        result = sub_5B5FB0(a2);
        *(_DWORD *)(result + 40) = v14;
        *(_DWORD *)(result + 44) = v15;
      }
    }
  }
  return result;
}


//======================================================================
// sub_5B18B0
// entry 005b18b0  size 119  status ok
//======================================================================

int __stdcall sub_5B18B0(int a1)
{
  int v1; // eax
  int *v2; // eax
  int v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v8; // [esp-8h] [ebp-1Ch]
  int v9; // [esp-4h] [ebp-18h]
  _BYTE v10[8]; // [esp+Ch] [ebp-8h] BYREF

  v1 = sub_5DCB00(a1);
  v9 = *(_DWORD *)(v1 + 1240);
  v8 = *(_DWORD *)(v1 + 1236);
  sub_5B5FB0(a1);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = sub_5B5FB0(a1);
  *(_DWORD *)(v5 + 24) = v3;
  *(_DWORD *)(v5 + 28) = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_5B1930
// entry 005b1930  size 1138  status ok
//======================================================================

int __stdcall sub_5B1930(char a1)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-58h]
  int v3; // [esp+4h] [ebp-54h]
  int v4; // [esp+8h] [ebp-50h]
  int v5; // [esp+Ch] [ebp-4Ch]
  int v6; // [esp+10h] [ebp-48h]
  int v7; // [esp+14h] [ebp-44h]
  int v8; // [esp+18h] [ebp-40h]
  int v9; // [esp+1Ch] [ebp-3Ch]
  int v10; // [esp+20h] [ebp-38h]
  int v11; // [esp+24h] [ebp-34h]
  int v12; // [esp+28h] [ebp-30h]
  int v13; // [esp+2Ch] [ebp-2Ch]
  int v14; // [esp+30h] [ebp-28h]
  int v15; // [esp+34h] [ebp-24h]
  int v16; // [esp+38h] [ebp-20h]
  int v17; // [esp+3Ch] [ebp-1Ch]
  int v18; // [esp+40h] [ebp-18h]
  int v19; // [esp+44h] [ebp-14h]
  int v20; // [esp+48h] [ebp-10h]
  int v21; // [esp+4Ch] [ebp-Ch]

  result = a1;
  switch ( a1 )
  {
    case 0:
      sub_5FB5E0(51);
      sub_605EF0(3, 1);
      sub_5FB5E0(52);
      sub_605EF0(4, 1);
      sub_5FB5E0(53);
      sub_605EF0(0, 1);
      sub_5FB5E0(54);
      sub_605EF0(1, 1);
      v21 = sub_5FB350(55);
      (*(void (__thiscall **)(int))(*(_DWORD *)v21 + 244))(v21);
      v20 = sub_5FB350(56);
      (*(void (__thiscall **)(int))(*(_DWORD *)v20 + 248))(v20);
      v19 = sub_5FB350(57);
      (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 244))(v19);
      v18 = sub_5FB350(58);
      (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 248))(v18);
      v17 = sub_5FB5E0(50);
      result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v17 + 240))(v17, 3233013, 0);
      break;
    case 1:
      sub_5FB5E0(51);
      sub_605EF0(0, 1);
      sub_5FB5E0(52);
      sub_605EF0(4, 1);
      sub_5FB5E0(53);
      sub_605EF0(1, 1);
      sub_5FB5E0(54);
      sub_605EF0(1, 1);
      v16 = sub_5FB350(55);
      (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 248))(v16);
      v15 = sub_5FB350(56);
      (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 248))(v15);
      v14 = sub_5FB350(57);
      (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 244))(v14);
      v13 = sub_5FB350(58);
      (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 244))(v13);
      v12 = sub_5FB5E0(50);
      result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 240))(v12, 3233014, 0);
      break;
    case 2:
      sub_5FB5E0(51);
      sub_605EF0(3, 1);
      sub_5FB5E0(52);
      sub_605EF0(4, 1);
      sub_5FB5E0(53);
      sub_605EF0(1, 1);
      sub_5FB5E0(54);
      sub_605EF0(0, 1);
      v11 = sub_5FB350(55);
      (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 244))(v11);
      v10 = sub_5FB350(56);
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 248))(v10);
      v9 = sub_5FB350(57);
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 244))(v9);
      v8 = sub_5FB350(58);
      (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 248))(v8);
      v7 = sub_5FB5E0(50);
      result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7 + 240))(v7, 3233015, 0);
      break;
    case 3:
      sub_5FB5E0(51);
      sub_605EF0(0, 1);
      sub_5FB5E0(52);
      sub_605EF0(1, 1);
      sub_5FB5E0(53);
      sub_605EF0(1, 1);
      sub_5FB5E0(54);
      sub_605EF0(1, 1);
      v6 = sub_5FB350(55);
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 248))(v6);
      v5 = sub_5FB350(56);
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 248))(v5);
      v4 = sub_5FB350(57);
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 244))(v4);
      v3 = sub_5FB350(58);
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 244))(v3);
      v2 = sub_5FB5E0(50);
      result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v2 + 240))(v2, 3233016, 0);
      break;
    case 4:
      return result;
    default:
      result = sub_5E9F20((char)"false", "..\\Casino\\royalmatchroom.cpp", 682);
      break;
  }
  return result;
}


//======================================================================
// sub_5B1DC0
// entry 005b1dc0  size 195  status ok
//======================================================================

int __stdcall sub_5B1DC0(int a1, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // [esp+4h] [ebp-8h]

  if ( a4 == 51 || a4 == 52 || a4 == 53 || a4 == 54 )
  {
    v5 = sub_5FB5E0(50);
    return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v5 + 240))(v5, 3233017, 0);
  }
  else if ( a4 == 50 )
  {
    result = a3 - 3233013;
    switch ( a3 )
    {
      case 3233013:
        result = sub_5B1930(0);
        break;
      case 3233014:
        result = sub_5B1930(1);
        break;
      case 3233015:
        result = sub_5B1930(2);
        break;
      case 3233016:
        result = sub_5B1930(3);
        break;
      case 3233017:
        return result;
      default:
        result = sub_5E9F20((char)"false", "..\\Casino\\royalmatchroom.cpp", 715);
        break;
    }
  }
  return result;
}


//======================================================================
// sub_5B1EA0
// entry 005b1ea0  size 78  status ok
//======================================================================

void __stdcall sub_5B1EA0(int a1, int a2, int a3)
{
  int v3; // [esp+0h] [ebp-8h]

  if ( a3 == 55 || a3 == 56 || a3 == 57 || a3 == 58 )
  {
    v3 = sub_5FB5E0(50);
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v3 + 240))(v3, 3233017, 0);
  }
}


//======================================================================
// sub_5B1F00
// entry 005b1f00  size 122  status ok
//======================================================================

char __thiscall sub_5B1F00(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-8h]

  v2 = *(this + 5);
  if ( v2 == 1 )
    return sub_5AF1B0((_BYTE *)dword_7935FC);
  if ( v2 != 500 )
    return sub_5E9F20((char)"false", "..\\Casino\\royalmatchroom.cpp", 749);
  sub_5B6A60(dword_793604, 500);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
}


//======================================================================
// sub_5B1F80
// entry 005b1f80  size 1037  status ok
//======================================================================

void __thiscall sub_5B1F80(void *this, int a2)
{
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
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int i; // [esp+8h] [ebp-7Ch]
  int v18; // [esp+Ch] [ebp-78h]
  _DWORD v19[27]; // [esp+10h] [ebp-74h]
  int v20; // [esp+7Ch] [ebp-8h]
  int v21; // [esp+80h] [ebp-4h]

  if ( dword_163068C )
  {
    v18 = sub_5FB5E0(50);
    v19[0] = 0;
    v19[1] = sub_5FB5E0(51);
    v19[2] = 1;
    v19[3] = sub_5FB5E0(52);
    v19[4] = 2;
    v19[5] = sub_5FB5E0(53);
    v19[6] = 3;
    v19[7] = sub_5FB5E0(54);
    v19[8] = 4;
    v19[9] = sub_5FB350(55);
    v19[10] = 5;
    v19[11] = sub_5FB350(56);
    v19[12] = 6;
    v19[13] = sub_5FB350(57);
    v19[14] = 7;
    v19[15] = sub_5FB350(58);
    v19[16] = 8;
    v19[17] = sub_5FB350(59);
    v19[18] = 9;
    v19[19] = sub_5FB350(60);
    v19[20] = 10;
    v19[21] = sub_5FB350(61);
    v19[22] = 11;
    v19[23] = sub_5FB350(62);
    v19[24] = 12;
    v19[25] = *(_DWORD *)(sub_5FB860(0) + 76);
    v19[26] = 13;
    v20 = 14;
    v21 = -1;
    for ( i = 0; i < v20; ++i )
    {
      if ( v19[2 * i - 1]
        && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)v19[2 * i - 1] + 132))(v19[2 * i - 1], a2) )
      {
        v21 = v19[2 * i];
        break;
      }
    }
    if ( v21 == -1 )
    {
      if ( *(_DWORD *)(a2 + 24) == 3 )
        (*(void (__thiscall **)(void *, const char *))(*(_DWORD *)this + 180))(this, &Source);
    }
    else
    {
      switch ( v21 )
      {
        case 0:
          v2 = sub_630F40("SID_ROYALMATCH_ROLLOVER1");
          (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v2);
          break;
        case 1:
          v3 = sub_630F40("SID_ROYALMATCH_ROLLOVER2");
          (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v3);
          break;
        case 2:
          v4 = sub_630F40("SID_ROYALMATCH_ROLLOVER3");
          (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v4);
          break;
        case 3:
          v5 = sub_630F40("SID_ROYALMATCH_ROLLOVER4");
          (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v5);
          break;
        case 4:
          v6 = sub_630F40("SID_ROYALMATCH_ROLLOVER5");
          (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v6);
          break;
        case 5:
          v7 = sub_630F40("SID_ROYALMATCH_ROLLOVER6");
          (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v7);
          break;
        case 6:
          v8 = sub_630F40("SID_ROYALMATCH_ROLLOVER7");
          (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v8);
          break;
        case 7:
          v9 = sub_630F40("SID_ROYALMATCH_ROLLOVER8");
          (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v9);
          break;
        case 8:
          v10 = sub_630F40("SID_ROYALMATCH_ROLLOVER9");
          (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v10);
          break;
        case 9:
          v11 = sub_630F40("SID_ROYALMATCH_ROLLOVER10");
          (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v11);
          break;
        case 10:
          v12 = sub_630F40("SID_ROYALMATCH_ROLLOVER11");
          (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v12);
          break;
        case 11:
          v13 = sub_630F40("SID_ROYALMATCH_ROLLOVER12");
          (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v13);
          break;
        case 12:
          v14 = sub_630F40("SID_ROYALMATCH_ROLLOVER13");
          (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v14);
          break;
        case 13:
          v15 = sub_630F40("SID_ROYALMATCH_ROLLOVER14");
          (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v15);
          break;
        default:
          sub_5E9F20((char)"false", "..\\Casino\\royalmatchroom.cpp", 847);
          break;
      }
    }
  }
}


//======================================================================
// sub_5B2400
// entry 005b2400  size 40  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_5B2400(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RoomInterface::`vftable';
  *(_DWORD *)this = &RoyalMatchRoomInterface::`vftable';
  return this;
}


//======================================================================
// sub_5B2450
// entry 005b2450  size 190  status ok
//======================================================================

void *__stdcall sub_5B2450(int a1)
{
  int v1; // eax

  if ( (dword_793608 & 1) == 0 )
  {
    dword_793608 |= 1u;
    dword_7589B4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    dword_7589B8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 580))(dword_7947E0, v1);
  }
  if ( a1 == 3233001 )
    return &unk_7589B0;
  else
    return 0;
}


//======================================================================
// sub_5B2510
// entry 005b2510  size 16  status ok
//======================================================================

void *sub_5B2510()
{
  return &unk_757AF8;
}


//======================================================================
// sub_5B2520
// entry 005b2520  size 16  status ok
//======================================================================

void *sub_5B2520()
{
  return &unk_757CE8;
}


//======================================================================
// sub_5B2550
// entry 005b2550  size 51  status ok
//======================================================================

char __stdcall sub_5B2550(char *Destination)
{
  const char *v2; // eax

  if ( !Destination )
    return 0;
  v2 = (const char *)sub_630F40("SID_ROYALMATCH");
  strcpy(Destination, v2);
  return 1;
}


//======================================================================
// sub_5B2590
// entry 005b2590  size 117  status ok
//======================================================================

char __stdcall sub_5B2590(_DWORD *a1, int a2)
{
  if ( !a1 )
    return 0;
  *a1 = 4;
  a1[1] = 1;
  a1[2] = 4;
  a1[3] = 1;
  if ( byte_795F95 )
    a1[4] = 1;
  else
    a1[4] = 4;
  a1[5] = 0;
  a1[6] = 3;
  return 1;
}


//======================================================================
// sub_5B2610
// entry 005b2610  size 16  status ok
//======================================================================

int sub_5B2610()
{
  return 3233000;
}


//======================================================================
// sub_5B2620
// entry 005b2620  size 16  status ok
//======================================================================

void *sub_5B2620()
{
  return &unk_7589BC;
}


//======================================================================
// sub_5B2660
// entry 005b2660  size 16  status ok
//======================================================================

int sub_5B2660()
{
  return 11;
}


//======================================================================
// sub_5B2670
// entry 005b2670  size 16  status ok
//======================================================================

const char *sub_5B2670()
{
  return "royalmatch";
}


//======================================================================
// sub_5B2680
// entry 005b2680  size 16  status ok
//======================================================================

int sub_5B2680()
{
  return 56;
}


//======================================================================
// sub_5B2690
// entry 005b2690  size 16  status ok
//======================================================================

int sub_5B2690()
{
  return 12;
}


//======================================================================
// sub_5B26A0
// entry 005b26a0  size 293  status ok
//======================================================================

struct Concurrency::details::_TaskCollectionBase *__stdcall sub_5B26A0(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  struct Concurrency::details::_TaskCollectionBase *result; // eax
  int v5; // [esp+4h] [ebp-14h] BYREF
  int v6; // [esp+8h] [ebp-10h]
  _DWORD v7[2]; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v8; // [esp+14h] [ebp-4h]

  v8 = (_DWORD *)sub_63AAE0(13);
  *a2 += v8[6] + v8[4];
  a2[1] += v8[5];
  *a3 += v8[4];
  a3[1] += v8[5];
  *a4 += v8[6];
  a4[1] += v8[7];
  result = (struct Concurrency::details::_TaskCollectionBase *)(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 828))(
                                                                 dword_7947E0,
                                                                 -1);
  if ( (_BYTE)result )
  {
    result = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
    if ( result == (struct Concurrency::details::_TaskCollectionBase *)13 )
    {
      sub_5E0C40(a1, &v5, v7);
      *a2 += v7[0] + v5;
      a2[1] += v6;
      *a3 += v5;
      a3[1] += v6;
      *a4 += v7[0];
      a4[1] += v7[1];
      return (struct Concurrency::details::_TaskCollectionBase *)a4;
    }
  }
  return result;
}


//======================================================================
// sub_5B27D0
// entry 005b27d0  size 16  status ok
//======================================================================

int sub_5B27D0()
{
  return 25;
}


//======================================================================
// sub_5B27E0
// entry 005b27e0  size 289  status ok
//======================================================================

char __stdcall sub_5B27E0(int a1, int a2)
{
  if ( a2 == 3233000 )
  {
    if ( a1 == 5015 )
    {
      sub_5DBD00(13, -1);
      return 1;
    }
    else
    {
      sub_5E2F90(dword_7947E0);
      switch ( a1 )
      {
        case 5010:
          *(_DWORD *)(dword_7947E0 + 20236) = 5;
          break;
        case 5011:
          *(_DWORD *)(dword_7947E0 + 20236) = 10;
          break;
        case 5012:
          *(_DWORD *)(dword_7947E0 + 20236) = 25;
          break;
        case 5013:
          *(_DWORD *)(dword_7947E0 + 20236) = 100;
          break;
        default:
          sub_5E9F20((char)"false", "..\\Casino\\royalmatchroominterface.cpp", 313);
          break;
      }
      if ( !(*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 13, -1) )
        sub_5E3130(dword_7947E0);
      return 1;
    }
  }
  else if ( a1 == 3233000 )
  {
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 13, -1);
    return 1;
  }
  else
  {
    return 0;
  }
}


//======================================================================
// sub_5B2920
// entry 005b2920  size 41  status ok
//======================================================================

char __stdcall sub_5B2920(int a1)
{
  if ( a1 != 3233000 )
    return 0;
  sub_653BD0(13);
  return 1;
}


//======================================================================
// sub_5B2950
// entry 005b2950  size 15  status ok
//======================================================================

char __stdcall sub_5B2950(int a1)
{
  return 0;
}


//======================================================================
// sub_5B2960
// entry 005b2960  size 15  status ok
//======================================================================

char __stdcall sub_5B2960(int a1)
{
  return 0;
}


//======================================================================
// sub_5B2970
// entry 005b2970  size 105  status ok
//======================================================================

char __stdcall sub_5B2970(int a1)
{
  sub_5FB5A0(2, "$0.00");
  sub_5FB5A0(4, "$0.00");
  sub_5FB5A0(6, "$0.00");
  sub_5FB5A0(8, "$0.00");
  sub_5FB5A0(10, "$0.00");
  sub_5FB5A0(12, "$0.00");
  return 1;
}


//======================================================================
// sub_5B29E0
// entry 005b29e0  size 130  status ok
//======================================================================

char __stdcall sub_5B29E0(_BYTE *a1)
{
  if ( !a1 )
    return 0;
  a1[13] = 0;
  a1[9] = 2;
  a1[12] = 80;
  a1[2] = 1;
  a1[11] = 0;
  a1[3] = 0;
  a1[10] = 1;
  *a1 = 1;
  a1[1] = 0;
  a1[8] = 4;
  a1[4] = 1;
  a1[5] = 1;
  a1[6] = 0;
  a1[7] = 1;
  return 1;
}


//======================================================================
// sub_5B2A70
// entry 005b2a70  size 133  status ok
//======================================================================

char __stdcall sub_5B2A70(_DWORD *a1)
{
  if ( !a1 )
    return 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[12] = 0;
  a1[13] = 0;
  a1[10] = 0;
  a1[11] = 0;
  return 1;
}


//======================================================================
// sub_5B2B10
// entry 005b2b10  size 120  status ok
//======================================================================

int sub_5B2B10()
{
  if ( operator new(0x80u) )
    return ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>>>::operator+=();
  else
    return 0;
}


//======================================================================
// sub_5B2B90
// entry 005b2b90  size 231  status ok
//======================================================================

char __stdcall sub_5B2B90(_BYTE *a1)
{
  _BYTE *v2; // [esp+8h] [ebp-4h]

  sub_5DE600(dword_7947E0);
  v2 = (_BYTE *)sub_63AAE0(-1);
  if ( !a1 || !v2 )
    return 0;
  v2[13] = a1[13];
  v2[9] = a1[9];
  v2[12] = a1[12];
  v2[2] = a1[2];
  v2[11] = a1[11];
  v2[3] = a1[3];
  v2[10] = a1[10];
  *v2 = *a1;
  v2[1] = a1[1];
  v2[8] = a1[8];
  v2[4] = a1[4];
  v2[5] = a1[5];
  v2[6] = a1[6];
  v2[7] = a1[7];
  return 1;
}


//======================================================================
// sub_5B2C90
// entry 005b2c90  size 55  status ok
//======================================================================

char __thiscall sub_5B2C90(void *this, int a2)
{
  int v2; // eax

  v2 = sub_5FB3A0(1);
  *(_DWORD *)(dword_7947E0 + 20212) = (sub_606570(v2, this) != 7) + 1;
  return 1;
}


//======================================================================
// sub_5B2CD0
// entry 005b2cd0  size 617  status ok
//======================================================================

char __stdcall sub_5B2CD0(int a1, int a2)
{
  int *v2; // eax
  int v3; // eax
  int *v4; // eax
  int v5; // eax
  int *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v12; // [esp-24h] [ebp-ACh]
  __int64 v13; // [esp-18h] [ebp-A0h]
  char v14[8]; // [esp+4h] [ebp-84h] BYREF
  char v15[8]; // [esp+Ch] [ebp-7Ch] BYREF
  char v16[8]; // [esp+14h] [ebp-74h] BYREF
  char v17[8]; // [esp+1Ch] [ebp-6Ch] BYREF
  char v18[8]; // [esp+24h] [ebp-64h] BYREF
  __int64 v19; // [esp+2Ch] [ebp-5Ch]
  __int64 v20; // [esp+34h] [ebp-54h]
  __int64 v21; // [esp+3Ch] [ebp-4Ch] BYREF
  __int64 v22; // [esp+44h] [ebp-44h] BYREF
  _DWORD *v23; // [esp+4Ch] [ebp-3Ch]
  char Destination[52]; // [esp+50h] [ebp-38h] BYREF

  v23 = (_DWORD *)sub_63AAE0(13);
  v20 = sub_64C8A0(0, 0);
  v21 = v20;
  v19 = sub_64C8A0(0, 0);
  v22 = v19;
  sub_5E0690(a1, a2);
  if ( Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) == (struct Concurrency::details::_TaskCollectionBase *)13 )
    sub_5E0C40(a2, &v21, &v22);
  v13 = v22;
  v12 = v21;
  sub_64C5C0(v18, v23[6], v23[7]);
  sub_64C5C0(v17, v12, HIDWORD(v12));
  v2 = (int *)sub_64C5C0(v16, v13, HIDWORD(v13));
  sub_64C8D0(*v2, v2[1], Destination, 1, 1, 1);
  v3 = sub_630F40("SID_CASINOSTATS_TOTALNET_COLON");
  sub_654390(0, v3, Destination);
  v4 = (int *)sub_64C5C0(v15, v21, HIDWORD(v21));
  sub_64C8D0(*v4, v4[1], Destination, 1, 1, 1);
  v5 = sub_630F40("SID_CASINOSTATS_GAMEPLAYNET_COLON");
  sub_654390(1, v5, Destination);
  v6 = (int *)sub_64C5C0(v14, v22, HIDWORD(v22));
  sub_64C8D0(*v6, v6[1], Destination, 1, 1, 1);
  v7 = sub_630F40("SID_CASINOSTATS_TOURNAMENTNET_COLON");
  sub_654390(2, v7, Destination);
  sub_64C8D0(v23[8], v23[9], Destination, 1, 1, 1);
  v8 = sub_630F40("SID_ROYALMATCHSTATS_NETTRUECOUNT_NEG_COLON");
  sub_654390(3, v8, Destination);
  sub_64C8D0(v23[12], v23[13], Destination, 1, 1, 1);
  v9 = sub_630F40("SID_ROYALMATCHSTATS_NETTRUECOUNT_ZERO_COLON");
  sub_654390(4, v9, Destination);
  sub_64C8D0(v23[10], v23[11], Destination, 1, 1, 1);
  v10 = sub_630F40("SID_ROYALMATCHSTATS_NETTRUECOUNT_POS_COLON");
  sub_654390(5, v10, Destination);
  return 1;
}


//======================================================================
// sub_5B2F40
// entry 005b2f40  size 161  status ok
//======================================================================

char __stdcall sub_5B2F40(int a1)
{
  int v2; // [esp+0h] [ebp-Ch]
  int v3; // [esp+0h] [ebp-Ch]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      v2 = sub_630F40("SID_CASINO_2DECKS");
      sub_5F9FF0(0, 0, i + 7, 1, 3200202, 80, 25 * i + 167, 1, v2, 31, 69, 66, -1, 20, 0);
    }
    else
    {
      v3 = sub_630F40("SID_CASINO_1DECK");
      sub_5F9FF0(0, 0, 7, 1, 3200202, 80, 167, 1, v3, 31, 69, 66, -1, 20, 0);
    }
  }
  sub_5FB3A0(1);
  sub_6065D0(8);
  return 1;
}


//======================================================================
// sub_5B2FF0
// entry 005b2ff0  size 174  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_5B2FF0(ATL::CCRTHeap *this)
{
  int i; // [esp+8h] [ebp-10h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RoyalMatchState::`vftable';
  *((_DWORD *)this + 351) = 0;
  for ( i = 0; i < 4; ++i )
  {
    *((_DWORD *)this + i + 352) = 0;
    *((_DWORD *)this + i + 397) = 0;
  }
  sub_5B7310(-1, -1);
  return this;
}


//======================================================================
// sub_5B30A0
// entry 005b30a0  size 270  status ok
//======================================================================

void __thiscall sub_5B30A0(CNoTrackObject *this)
{
  int i; // [esp+2Ch] [ebp-10h]

  *(_DWORD *)this = &RoyalMatchState::`vftable';
  if ( *((_DWORD *)this + 351) )
    (***((void (__thiscall ****)(_DWORD, int))this + 351))(*((_DWORD *)this + 351), 1);
  for ( i = 0; i < 4; ++i )
  {
    if ( *((_DWORD *)this + i + 352) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 352))(*((_DWORD *)this + i + 352), 1);
    if ( *((_DWORD *)this + i + 397) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 397))(*((_DWORD *)this + i + 397), 1);
  }
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_5B31B0
// entry 005b31b0  size 137  status ok
//======================================================================

_DWORD *__thiscall sub_5B31B0(_DWORD *this, int a2, __int16 a3, int a4)
{
  int i; // [esp+4h] [ebp-4h]

  if ( a4 == -1 )
    a4 = sub_5B4E50(a2);
  for ( i = 0; i < 22 && (unsigned __int16)sub_5B5C60(a2, a4, i); ++i )
    ;
  sub_5B7340(a2, a4, i, a3);
  ++*(this + 364);
  return this;
}


//======================================================================
// sub_5B3240
// entry 005b3240  size 186  status ok
//======================================================================

int __thiscall sub_5B3240(_DWORD *this, int a2, int a3, int a4)
{
  int v6; // [esp+4h] [ebp-4h]

  v6 = sub_5B5F60(a2, a3, a4);
  if ( v6 == 1 )
  {
    v6 = 11;
    ++*(this + 372);
  }
  if ( v6 < 7 )
    ++*(this + 371);
  if ( v6 > 9 )
    --*(this + 371);
  ++*(this + 369);
  *(this + 370) = sub_5B3340(this);
  return sub_5B70B0(a2, a3, a4, 1);
}


//======================================================================
// sub_5B3300
// entry 005b3300  size 60  status ok
//======================================================================

bool __stdcall sub_5B3300(int a1, int a2)
{
  if ( a2 == -1 )
    a2 = sub_5B4E50(a1);
  return sub_5B4F50(a1, a2) > 21;
}


//======================================================================
// sub_5B3340
// entry 005b3340  size 159  status ok
//======================================================================

int __thiscall sub_5B3340(_DWORD *this)
{
  double v3; // [esp+8h] [ebp-10h]
  double v4; // [esp+10h] [ebp-8h]

  if ( *(this + 369) >= 52 * sub_5B58A0(this) )
    return 0;
  v4 = (double)(2 * sub_5B58A0(this)) - (double)(int)*(this + 369) / 26.0;
  if ( v4 < 0.25 )
    v4 = 0.25;
  v3 = (double)(int)*(this + 371) / v4;
  if ( v3 >= 0.0 )
    return (int)(v3 + 0.5);
  else
    return (int)(v3 - 0.5);
}


//======================================================================
// sub_5B33E0
// entry 005b33e0  size 68  status ok
//======================================================================

int __stdcall sub_5B33E0(int a1)
{
  int *v1; // eax
  int v3; // [esp-8h] [ebp-1Ch]
  int v4; // [esp-4h] [ebp-18h]
  _BYTE v5[8]; // [esp+4h] [ebp-10h] BYREF
  _BYTE v6[8]; // [esp+Ch] [ebp-8h] BYREF

  v1 = (int *)sub_5B51A0(v5, a1);
  v4 = v1[1];
  v3 = *v1;
  sub_5DCB00(a1);
  sub_5D5A90(v6);
  return sub_64C7A0(v3, v4);
}


//======================================================================
// sub_5B3430
// entry 005b3430  size 622  status ok
//======================================================================

char __thiscall sub_5B3430(void *this, int a2)
{
  int v2; // eax
  char result; // al
  int v4; // eax
  int v5; // eax
  int v6; // eax
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
  bool v17; // [esp+0h] [ebp-14h]
  bool v18; // [esp+4h] [ebp-10h]
  bool v19; // [esp+8h] [ebp-Ch]

  if ( (int)sub_5B58F0(a2) > 1 && (!(unsigned __int8)sub_5B8540(this) || (unsigned __int8)sub_5B6170(a2)) )
    return 0;
  if ( !(unsigned __int8)sub_5B36B0(a2) )
    return 0;
  v2 = sub_5B4E50(a2);
  if ( (int)sub_5B5830(a2, v2) > 2 )
    return 0;
  switch ( (unsigned __int8)sub_5B4F20(this) )
  {
    case 0u:
      v4 = sub_5B4E50(a2);
      v19 = 1;
      if ( sub_5B5260(a2, v4) != 11 )
      {
        v5 = sub_5B4E50(a2);
        if ( sub_5B5040(a2, v5) != 11 )
          v19 = 0;
      }
      result = v19;
      break;
    case 1u:
      v6 = sub_5B4E50(a2);
      v18 = 1;
      if ( sub_5B5260(a2, v6) != 10 )
      {
        v7 = sub_5B4E50(a2);
        if ( sub_5B5040(a2, v7) != 10 )
        {
          v8 = sub_5B4E50(a2);
          if ( sub_5B5260(a2, v8) != 11 )
          {
            v9 = sub_5B4E50(a2);
            if ( sub_5B5040(a2, v9) != 11 )
              v18 = 0;
          }
        }
      }
      result = v18;
      break;
    case 2u:
      v10 = sub_5B4E50(a2);
      v17 = 1;
      if ( sub_5B5260(a2, v10) != 9 )
      {
        v11 = sub_5B4E50(a2);
        if ( sub_5B5040(a2, v11) != 9 )
        {
          v12 = sub_5B4E50(a2);
          if ( sub_5B5260(a2, v12) != 10 )
          {
            v13 = sub_5B4E50(a2);
            if ( sub_5B5040(a2, v13) != 10 )
            {
              v14 = sub_5B4E50(a2);
              if ( sub_5B5260(a2, v14) != 11 )
              {
                v15 = sub_5B4E50(a2);
                if ( sub_5B5040(a2, v15) != 11 )
                  v17 = 0;
              }
            }
          }
        }
      }
      result = v17;
      break;
    case 3u:
      v16 = sub_5B4E50(a2);
      result = sub_5B6480(a2, v16);
      break;
    default:
      result = 1;
      break;
  }
  return result;
}


//======================================================================
// sub_5B36B0
// entry 005b36b0  size 91  status ok
//======================================================================

bool __thiscall sub_5B36B0(_DWORD *this, int a2)
{
  int v2; // eax
  int v4; // [esp+8h] [ebp-8h]

  v4 = *(_DWORD *)(*(this + a2 + 352) + 32 * a2 + 72);
  v2 = sub_5DCB00(a2);
  return sub_5D5A50(v2) >= v4;
}


//======================================================================
// sub_5B3710
// entry 005b3710  size 216  status ok
//======================================================================

bool __thiscall sub_5B3710(_DWORD *this, int a2, int a3)
{
  if ( !sub_5B36B0(this, a2) )
    return 0;
  if ( !(unsigned __int8)sub_5B5950(this) || !(unsigned __int8)sub_5B82F0(a2, a3) )
    return 0;
  if ( !(unsigned __int8)sub_5B8570(this) && sub_5B5F60(a2, a3, 0) == 1 && (int)sub_5B58F0(a2) > 1 )
    return 0;
  return (char)sub_5B5950(this) == 1 && sub_5B58F0(a2) == 1 || (char)sub_5B5950(this) == 3 && (int)sub_5B58F0(a2) < 4;
}


//======================================================================
// sub_5B37F0
// entry 005b37f0  size 85  status ok
//======================================================================

bool __thiscall sub_5B37F0(void *this, int a2)
{
  return (unsigned __int8)sub_5B6680(this) && sub_5B58F0(a2) == 1 && sub_5B5830(a2, 0) == 2;
}


//======================================================================
// sub_5B3870
// entry 005b3870  size 747  status ok
//======================================================================

int __thiscall sub_5B3870(_DWORD **this, int a2)
{
  __int16 v2; // ax
  int v3; // esi
  __int16 v4; // ax
  __int16 v5; // ax
  __int16 v6; // ax
  __int16 v7; // ax
  __int16 v8; // ax
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // eax
  int result; // eax
  int v13; // eax
  __int64 v14; // [esp-8h] [ebp-34h]
  _BYTE v16[8]; // [esp+14h] [ebp-18h] BYREF
  __int64 v17; // [esp+1Ch] [ebp-10h]
  int i; // [esp+24h] [ebp-8h]
  int v19; // [esp+28h] [ebp-4h]

  if ( *(this + a2 + 409) == (_DWORD *)1
    && (v2 = sub_5B5C60(4, 0, 0), v3 = sub_641290(v2), v4 = sub_5B5C60(4, 0, 1), v3 == sub_641290(v4))
    && (v5 = sub_5B5C60(4, 0, 0), sub_641280(v5) == 12)
    && (v6 = sub_5B5C60(4, 0, 1), sub_641280(v6) == 13)
    || (v7 = sub_5B5C60(4, 0, 0), sub_641280(v7) == 13) && (v8 = sub_5B5C60(4, 0, 1), sub_641280(v8) == 12) )
  {
    v9 = (_DWORD *)sub_5CB880(v16, a2);
    v17 = sub_64C8A0(*v9 + 1000, 0);
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, _DWORD))(**(this + a2 + 397) + 184))(
      *(this + a2 + 397),
      v17,
      HIDWORD(v17),
      a2,
      0);
    v14 = sub_64C8A0(1000, 0);
    sub_5DCB00(a2);
    sub_5D5CF0(v14, HIDWORD(v14));
  }
  v19 = sub_5B4F50(4, 0);
  for ( i = 0; ; ++i )
  {
    v10 = sub_5B58F0(a2);
    if ( i >= v10 )
    {
      result = sub_5DCB00(a2);
      *(_BYTE *)(result + 1186) = 1;
      return result;
    }
    if ( (int)sub_5B5830(a2, i) <= 1 )
      sub_5E9F20((char)"GetNumCardsPlayerHasInHand(p, i) > 1", "..\\Casino\\royalmatchstate.cpp", 186);
    if ( sub_5B5010(a2, i) == -1 )
      break;
  }
  if ( v19 <= 21 && (v11 = sub_5B4F50(a2, i), v19 >= v11) )
  {
    v13 = sub_5B4F50(a2, i);
    if ( v19 == v13 )
    {
      sub_5B67D0(a2, i, 2, 1, 1);
      sub_5B71A0(a2, i, 2);
      result = sub_5DCB00(a2);
      *(_BYTE *)(result + 1200) = 0;
    }
    else
    {
      sub_5B67D0(a2, i, 0, 1, 1);
      sub_5B71A0(a2, i, 0);
      result = sub_5DCB00(a2);
      *(_BYTE *)(result + 1200) = 1;
    }
  }
  else
  {
    sub_5B67D0(a2, i, 1, 1, 1);
    sub_5B71A0(a2, i, 1);
    result = sub_5DCB00(a2);
    *(_BYTE *)(result + 1200) = 0;
  }
  return result;
}


//======================================================================
// sub_5B3B60
// entry 005b3b60  size 373  status ok
//======================================================================

int *__thiscall sub_5B3B60(_DWORD *this, int *a2)
{
  int *result; // eax
  __int16 v3; // ax
  int v4; // esi
  __int16 v5; // ax
  __int16 v6; // ax
  __int16 v7; // ax
  __int16 v8; // ax
  __int16 v9; // ax
  _BYTE v11[8]; // [esp+8h] [ebp-8h] BYREF

  result = (int *)sub_5CB880(v11, a2);
  if ( *result > 0 )
  {
    v3 = sub_5B5C60(a2, 0, 0);
    v4 = sub_641290(v3);
    v5 = sub_5B5C60(a2, 0, 1);
    if ( v4 == sub_641290(v5) )
    {
      v6 = sub_5B5C60(a2, 0, 0);
      if ( sub_641280(v6) == 12 && (v7 = sub_5B5C60(a2, 0, 1), sub_641280(v7) == 13)
        || (v8 = sub_5B5C60(a2, 0, 0), sub_641280(v8) == 13) && (v9 = sub_5B5C60(a2, 0, 1), sub_641280(v9) == 12) )
      {
        result = (int *)sub_5B8AB0(a2, 0, 1, 25, 1);
      }
      else
      {
        result = (int *)sub_5B8AB0(a2, 0, 1, 5, 2);
      }
      *(this + (_DWORD)a2 + 409) = 1;
    }
    else
    {
      sub_5B8AB0(a2, 0, 0, 0, 1);
      result = a2;
      *(this + (_DWORD)a2 + 409) = 0;
    }
  }
  *((_BYTE *)this + (_DWORD)a2 + 1652) = 1;
  return result;
}


//======================================================================
// sub_5B3CE0
// entry 005b3ce0  size 210  status ok
//======================================================================

int __stdcall sub_5B3CE0(int a1)
{
  int result; // eax

  *(_BYTE *)(sub_5DCB00(a1) + 1186) = 1;
  if ( (unsigned __int8)sub_5B6660(a1) )
    sub_5B67D0(a1, 1, 1, 2, 1);
  if ( (unsigned __int8)sub_5B6040(a1) )
  {
    sub_5B67D0(a1, 0, 2, 1, 1);
    sub_5B71A0(a1, 0, 2);
    result = sub_5DCB00(a1);
    *(_BYTE *)(result + 1200) = 0;
  }
  else
  {
    sub_5B67D0(a1, 0, 0, 1, 1);
    sub_5B71A0(a1, 0, 0);
    result = sub_5DCB00(a1);
    *(_BYTE *)(result + 1200) = 1;
  }
  return result;
}


//======================================================================
// sub_5B3DC0
// entry 005b3dc0  size 48  status ok
//======================================================================

char sub_5B3DC0()
{
  if ( (unsigned __int8)sub_5DA830(dword_793600) )
    return 0;
  else
    return *(_BYTE *)(sub_5B5FB0(-1) + 3);
}


//======================================================================
// sub_5B3DF0
// entry 005b3df0  size 107  status ok
//======================================================================

int __thiscall sub_5B3DF0(_DWORD **this, int a2)
{
  sub_5B67D0(a2, 1, 0, 1, 1);
  (*(void (__thiscall **)(_DWORD, int, int))(**(this + a2 + 352) + 188))(*(this + a2 + 352), a2, 1);
  sub_5B7380(a2, 0);
  return sub_5B71A0(a2, 1, -1);
}


//======================================================================
// sub_5B3E60
// entry 005b3e60  size 118  status ok
//======================================================================

int __stdcall sub_5B3E60(int a1)
{
  int v1; // eax

  v1 = sub_5B4E50(a1);
  sub_5B67D0(a1, v1, 1, 3, 2);
  *(_BYTE *)(sub_5DCB00(a1) + 1186) = 1;
  sub_5B71A0(a1, 0, 7);
  *(_BYTE *)(sub_5DCB00(a1) + 1200) = 0;
  return sub_5B3F80(a1);
}


//======================================================================
// sub_5B3EE0
// entry 005b3ee0  size 149  status ok
//======================================================================

int __thiscall sub_5B3EE0(_DWORD *this, int a2, int a3)
{
  int v3; // edx
  int v6; // [esp+4h] [ebp-Ch]
  _DWORD v7[2]; // [esp+8h] [ebp-8h] BYREF

  if ( a3 == -1 )
    a3 = sub_5B4E50(a2);
  sub_5B7140(a2, a3, 1);
  v6 = *(this + a2 + 352);
  v3 = *(_DWORD *)(v6 + 32 * a2 + 76);
  v7[0] = *(_DWORD *)(v6 + 32 * a2 + 72);
  v7[1] = v3;
  return (*(int (__thiscall **)(_DWORD, _DWORD *, int, _DWORD))(*(_DWORD *)*(this + a2 + 352) + 196))(
           *(this + a2 + 352),
           v7,
           a3,
           0);
}


//======================================================================
// sub_5B3F80
// entry 005b3f80  size 120  status ok
//======================================================================

int __stdcall sub_5B3F80(int a1)
{
  int v2; // [esp+4h] [ebp-4h]

  v2 = sub_5B4E50(a1);
  sub_5B7170(a1, v2, 1);
  while ( v2 > -1 )
  {
    if ( !(unsigned __int8)sub_5B6610(a1, --v2) )
      return sub_5B7090(a1, v2);
  }
  return sub_5B7090(a1, -1);
}


//======================================================================
// sub_5B4000
// entry 005b4000  size 145  status ok
//======================================================================

int __thiscall sub_5B4000(_DWORD *this)
{
  double v3; // [esp+8h] [ebp-10h]
  int v4; // [esp+14h] [ebp-4h]

  if ( !*(this + 369) )
    return 0;
  v4 = 4 * sub_5B58A0(this) - *(this + 372);
  if ( v4 <= 0 )
    return -1;
  v3 = (double)(52 * sub_5B58A0(this) - *(this + 369)) / (double)v4;
  if ( v3 < 19.5 )
    return v3 <= 8.67;
  else
    return -1;
}


//======================================================================
// sub_5B40A0
// entry 005b40a0  size 3430  status ok
//======================================================================

char *__thiscall sub_5B40A0(_DWORD *this, char *Destination, int a3, int a4, char a5)
{
  const char *v5; // eax
  const char *v6; // eax
  char *result; // eax
  const char *v8; // eax
  const char *v9; // eax
  const char *v10; // eax
  const char *v11; // eax
  const char *v12; // eax
  const char *v13; // eax
  const char *v14; // eax
  const char *v15; // eax
  const char *v16; // eax
  const char *v17; // eax
  const char *v18; // eax
  const char *v19; // eax
  const char *v20; // eax
  const char *v21; // eax
  const char *v22; // eax
  const char *v23; // eax
  const char *v24; // eax
  const char *v25; // eax
  const char *v26; // eax
  const char *v27; // eax
  const char *v28; // eax
  const char *v29; // eax
  const char *v30; // eax
  const char *v31; // eax
  const char *v32; // eax
  const char *v33; // eax
  const char *v34; // eax
  const char *v35; // eax
  const char *v36; // eax
  const char *v37; // eax
  const char *v38; // eax
  const char *v39; // eax
  const char *v40; // eax
  const char *v41; // eax
  const char *v42; // eax
  const char *v43; // eax
  const char *v44; // eax
  const char *v45; // eax
  const char *v46; // eax
  const char *v47; // eax
  const char *v48; // eax
  const char *v49; // eax
  const char *v50; // eax
  int v52; // [esp+8h] [ebp-10h]
  bool v53; // [esp+Eh] [ebp-Ah]
  bool v54; // [esp+Fh] [ebp-9h]
  int v55; // [esp+10h] [ebp-8h]
  char v56; // [esp+17h] [ebp-1h]

  v55 = sub_5B4F00(this);
  v52 = sub_5B4E50(v55);
  v53 = sub_5B3710(this, v55, v52);
  v56 = sub_5B3430(this, v55);
  v54 = sub_5B37F0(this, v55);
  switch ( a3 )
  {
    case 4:
      if ( !v53 )
        goto LABEL_104;
      if ( a4 >= 8 )
        v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION4_DEALERSTRONG");
      else
        v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION4_DEALERWEAK");
      goto LABEL_165;
    case 5:
    case 7:
      goto LABEL_104;
    case 6:
      if ( !v53 )
        goto LABEL_104;
      if ( a4 >= 8 )
        v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION6_DEALERSTRONG");
      else
        v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION6_DEALERWEAK");
      goto LABEL_165;
    case 8:
      if ( !v53 )
        goto LABEL_104;
      if ( a4 <= 4 )
      {
        v6 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION8_DEALERWEAK");
        return strcpy(Destination, v6);
      }
      if ( a4 > 6 )
        v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION8_DEALERSTRONG");
      else
        v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION8_DEALERVERYWEAK");
      goto LABEL_165;
    case 9:
      if ( !v56 || a4 < 3 || a4 > 6 )
        goto LABEL_104;
      v8 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION9_DEALERWEAK");
      return strcpy(Destination, v8);
    case 10:
      if ( v53 )
      {
        if ( a4 > 9 )
          v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION10_DEALERSTRONG");
        else
          v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION10_DOUBLE");
      }
      else
      {
        if ( !v56 )
          goto LABEL_104;
        if ( a4 > 9 )
          v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION10_DEALERVERYSTRONG");
        else
          v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION10_STRONGHAND");
      }
      goto LABEL_165;
    case 11:
      if ( !v56 )
        goto LABEL_104;
      if ( a4 > 10 )
        v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION11_DEALERSTRONG");
      else
        v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION11_STRONGHAND");
      goto LABEL_165;
    case 12:
      if ( !a5 )
      {
        if ( v53 )
        {
          if ( a4 > 6 )
          {
            if ( a4 > 10 )
            {
              v11 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION12_DEALERVERYSTRONG_DONTSPLIT");
              return strcpy(Destination, v11);
            }
            else
            {
              v10 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION12_DEALERSTRONG_DONTSPLIT_FORMAT");
              return (char *)sprintf(Destination, v10, a4 + 10);
            }
          }
          else
          {
            v9 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION12_DEALERWEAK");
            return strcpy(Destination, v9);
          }
        }
        else if ( a4 > 3 )
        {
          if ( a4 > 6 )
          {
            if ( a4 > 10 )
            {
              v15 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION12_DEALERVERYSTRONG");
              return strcpy(Destination, v15);
            }
            else
            {
              v14 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION12_DEALERSTRONG_FORMAT");
              return (char *)sprintf(Destination, v14, a4 + 10);
            }
          }
          else
          {
            v13 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION12_DEALERWEAK_FORMAT");
            return (char *)sprintf(Destination, v13, a4 + 10);
          }
        }
        else
        {
          v12 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION12_DEALERSTRONG_TAKEHIT_TRUECOUNTHIGH");
          return strcpy(Destination, v12);
        }
      }
      if ( !v53 )
        goto LABEL_110;
      v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION12_SPLITACES");
      goto LABEL_165;
    case 13:
      if ( !a5 )
      {
        if ( a4 > 3 )
        {
          if ( a4 > 6 )
          {
            if ( a4 > 10 )
            {
              v20 = (const char *)sub_630F40("SID_ROYALMATCH_DEALERVERYSTRONG");
              return strcpy(Destination, v20);
            }
            else
            {
              v19 = (const char *)sub_630F40("SID_ROYALMATCH_DEALERSTRONG_FORMAT");
              return (char *)sprintf(Destination, v19, a4 + 10);
            }
          }
          else
          {
            v18 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION13_DEALERWEAK_FORMAT");
            return (char *)sprintf(Destination, v18, a4 + 10);
          }
        }
        else
        {
          v17 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION13_DEALERWEAK_TRUECOUNTLOW_FORMAT");
          return (char *)sprintf(Destination, v17, a4 + 10);
        }
      }
      if ( v56 && a4 == 5 || a4 == 6 )
      {
        v16 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION13_DEALERWEAK_DOUBLEORHIT");
        return strcpy(Destination, v16);
      }
      goto LABEL_104;
    case 14:
      if ( !a5 )
      {
        if ( v53 )
        {
          if ( a4 > 7 )
          {
            if ( a4 > 10 )
            {
              v24 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION14_DEALERVERYSTRONG_DONTSPLIT7");
              return strcpy(Destination, v24);
            }
            else
            {
              v23 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION14_DEALERSTRONG_DONTSPLIT7_FORMAT");
              return (char *)sprintf(Destination, v23, a4 + 10);
            }
          }
          else
          {
            v22 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION14_DEALERWEAK_SPLIT7");
            return strcpy(Destination, v22);
          }
        }
        else if ( a4 > 6 )
        {
          if ( a4 > 10 )
          {
            v27 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION14_DEALERVERYSTRONG_HIT");
            return strcpy(Destination, v27);
          }
          else
          {
            v26 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION14_DEALERSTRONG_HIT_FORMAT");
            return (char *)sprintf(Destination, v26, a4 + 10);
          }
        }
        else
        {
          v25 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION14_DEALERWEAK_DONTHIT_FORMAT");
          return (char *)sprintf(Destination, v25, a4 + 10);
        }
      }
      if ( v56 && a4 == 5 || a4 == 6 )
      {
        v21 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION14_DEALERWEAK_DOUBLEORHIT");
        return strcpy(Destination, v21);
      }
      goto LABEL_104;
    case 15:
      if ( !a5 )
      {
        if ( a4 > 6 )
        {
          if ( a4 == 10 && v54 )
          {
            v29 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION15_DEALERSTRONG_SURRENDERHALF");
            return strcpy(Destination, v29);
          }
          else if ( a4 > 10 )
          {
            v31 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION15_DEALERVERYSTRONG_HIT");
            return strcpy(Destination, v31);
          }
          else
          {
            v30 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION15_DEALERSTRONG_HIT_FORMAT");
            return (char *)sprintf(Destination, v30, a4 + 10);
          }
        }
        else
        {
          v28 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION15_DEALERWEAK_DONTHIT_FORMAT");
          return (char *)sprintf(Destination, v28, a4 + 10);
        }
      }
      if ( a4 <= 3 )
        goto LABEL_104;
      if ( a4 <= 6 )
      {
        if ( !v56 )
          goto LABEL_110;
        v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION15_DEALERVERYWEAK_DOUBLEORHIT");
        goto LABEL_165;
      }
      if ( !v56 )
        goto LABEL_110;
      goto LABEL_92;
    case 16:
      if ( !a5 )
      {
        if ( v53 )
        {
          v33 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION16_AVOIDHAND");
          return strcpy(Destination, v33);
        }
        else if ( a4 > 6 )
        {
          if ( a4 >= 9 && v54 )
          {
            v35 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION16_DEALERSTRONG_SURRENDERHALF");
            return strcpy(Destination, v35);
          }
          else if ( a4 >= 10 )
          {
            if ( a4 == 10 )
            {
              v37 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION16_DEALERVERYSTRONG_MORE");
              return (char *)sprintf(Destination, v37, 20);
            }
            else
            {
              v38 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION16_DEALERVERYSTRONG_HIT");
              return strcpy(Destination, v38);
            }
          }
          else
          {
            v36 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION16_DEALERSTRONG_HIT_FORMAT");
            return (char *)sprintf(Destination, v36, a4 + 10);
          }
        }
        else
        {
          v34 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION16_DEALERWEAK_DONTHIT_FORMAT");
          return (char *)sprintf(Destination, v34, a4 + 10);
        }
      }
      if ( a4 <= 3 )
      {
LABEL_104:
        v32 = (const char *)sub_630F40("SID_ROYALMATCH_NORISKOFBUSTING");
        return strcpy(Destination, v32);
      }
      if ( a4 > 6 )
      {
        if ( v56 )
        {
LABEL_92:
          v5 = (const char *)sub_630F40("SID_ROYALMATCH_NORISKOFBUSTING_DONTDOUBLE");
          goto LABEL_165;
        }
      }
      else if ( v56 )
      {
        v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION16_DEALERVERYWEAK_DOUBLEORHIT");
        goto LABEL_165;
      }
LABEL_110:
      v5 = (const char *)sub_630F40("SID_ROYALMATCH_NORISKOFBUSTING");
      goto LABEL_165;
    case 17:
      if ( !a5 )
        goto LABEL_131;
      if ( a4 == 2 )
      {
        v39 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION17_HIT");
        return strcpy(Destination, v39);
      }
      if ( a4 > 6 )
      {
        v40 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION17_DEALERSTRONG");
        return strcpy(Destination, v40);
      }
      if ( v56 )
        v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION17_DEALERWEAK_DOUBLEORHIT");
      else
        v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION17_HIT");
      goto LABEL_165;
    case 18:
      if ( !a5 )
      {
        if ( !v53 )
        {
LABEL_131:
          v41 = (const char *)sub_630F40("SID_ROYALMATCH_GOODHAND_STAND");
          return strcpy(Destination, v41);
        }
        if ( a4 <= 6 )
        {
          v46 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION18_DEALERWEAK_SPLIT");
          return strcpy(Destination, v46);
        }
        switch ( a4 )
        {
          case 7:
            v47 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION18_DEALERWEAK_DONTSPLIT");
            return strcpy(Destination, v47);
          case 8:
            v48 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION18_SPLIT9SFOR10S_ELSEPUSH");
            return strcpy(Destination, v48);
          case 9:
            v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION18_SPLIT9SFOR10S_ELSELOSS");
            break;
          default:
            v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION18_DEALERVERYSTONG_STAND");
            break;
        }
        goto LABEL_165;
      }
      if ( a4 == 2 )
      {
        v42 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION18_DONTHIT");
        return strcpy(Destination, v42);
      }
      if ( a4 <= 6 )
      {
        if ( v56 )
          v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION18_DEALERWEAK_DOUBLEORSTAND");
        else
          v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION18_DEALERWEAK_DONTHIT");
        goto LABEL_165;
      }
      if ( a4 > 8 )
      {
        if ( a4 > 10 )
        {
          v45 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION18_ONEHIT");
          result = strcpy(Destination, v45);
        }
        else
        {
          v44 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION18_ONEHIT_FORMAT");
          result = (char *)sprintf(Destination, v44, a4 + 10);
        }
      }
      else
      {
        if ( v56 )
          v43 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION18_SOFT_DONTDOUBLE_FORMAT");
        else
          v43 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION18_SOFT_FORMAT");
        result = (char *)sprintf(Destination, v43, a4 + 10);
      }
      break;
    case 19:
      if ( !a5 )
        goto LABEL_166;
      v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION19_DONTHIT");
      goto LABEL_165;
    case 20:
      if ( a5 )
      {
        v49 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION20_DONTHIT");
        result = strcpy(Destination, v49);
      }
      else
      {
        if ( v53 )
          v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION20_DONTSPLIT");
        else
LABEL_166:
          v5 = (const char *)sub_630F40("SID_ROYALMATCH_GOODHAND_STAND");
LABEL_165:
        result = strcpy(Destination, v5);
      }
      break;
    case 21:
      v50 = (const char *)sub_630F40("SID_ROYALMATCH_ACTION21");
      return strcpy(Destination, v50);
    default:
      return (char *)sub_5E9F20((char)"false", "..\\Casino\\royalmatchstate.cpp", 834);
  }
  return result;
}


//======================================================================
// sub_5B4E50
// entry 005b4e50  size 66  status ok
//======================================================================

int __thiscall sub_5B4E50(char *this, int a2)
{
  if ( a2 == -1 )
    return -1;
  if ( a2 == 4 )
    return 0;
  else
    return *(this + 280 * a2 + 103);
}


//======================================================================
// sub_5B4EA0
// entry 005b4ea0  size 48  status ok
//======================================================================

char sub_5B4EA0()
{
  if ( (unsigned __int8)sub_5DA830(dword_793600) )
    return 4;
  else
    return *(_BYTE *)(sub_5B5FB0(-1) + 13);
}


//======================================================================
// sub_5B4ED0
// entry 005b4ed0  size 47  status ok
//======================================================================

int __thiscall sub_5B4ED0(_DWORD *this)
{
  if ( *(this + 366) == -1 )
    return 0;
  else
    return sub_5DCB00(*(this + 366));
}


//======================================================================
// sub_5B4F00
// entry 005b4f00  size 20  status ok
//======================================================================

int __thiscall sub_5B4F00(_DWORD *this)
{
  return *(this + 366);
}


//======================================================================
// sub_5B4F20
// entry 005b4f20  size 48  status ok
//======================================================================

char sub_5B4F20()
{
  if ( (unsigned __int8)sub_5DA830(dword_793600) )
    return 4;
  else
    return *(_BYTE *)(sub_5B5FB0(-1) + 8);
}


//======================================================================
// sub_5B4F50
// entry 005b4f50  size 186  status ok
//======================================================================

int __thiscall sub_5B4F50(char *this, int a2, int a3)
{
  int v4; // [esp+4h] [ebp-14h]
  int i; // [esp+8h] [ebp-10h]
  int v6; // [esp+Ch] [ebp-Ch]
  int v7; // [esp+10h] [ebp-8h]
  int v8; // [esp+14h] [ebp-4h]

  if ( a3 == -1 )
    a3 = sub_5B4E50(this, a2);
  v6 = 0;
  v7 = 0;
  v8 = sub_5B5830(a2, a3);
  for ( i = 0; i < v8; ++i )
  {
    v4 = sub_5B5F60(a2, a3, i);
    if ( v4 == 1 )
    {
      v4 = 11;
      ++v6;
    }
    v7 += v4;
  }
  while ( v7 > 21 && v6 > 0 )
  {
    v7 -= 10;
    --v6;
  }
  return v7;
}


//======================================================================
// sub_5B5010
// entry 005b5010  size 33  status ok
//======================================================================

int __thiscall sub_5B5010(char *this, int a2, int a3)
{
  return *(this + 280 * a2 + a3 + 104);
}


//======================================================================
// sub_5B5040
// entry 005b5040  size 138  status ok
//======================================================================

int __thiscall sub_5B5040(char *this, int a2, int a3)
{
  int v4; // [esp+4h] [ebp-10h]
  int i; // [esp+8h] [ebp-Ch]
  int v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]

  if ( a3 == -1 )
    a3 = sub_5B4E50(this, a2);
  v6 = 0;
  v7 = sub_5B5830(a2, a3);
  for ( i = 0; i < v7; ++i )
  {
    v4 = sub_5B5F60(a2, a3, i);
    if ( v4 == 1 )
      v4 = 11;
    v6 += v4;
  }
  return v6;
}


//======================================================================
// sub_5B5130
// entry 005b5130  size 111  status ok
//======================================================================

_DWORD *__thiscall sub_5B5130(_DWORD *this, _DWORD *a2, int a3)
{
  int v4; // [esp+4h] [ebp-Ch]
  int v5; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v4 = *(this + a3 + 352);
  v5 = *(_DWORD *)(v4 + 32 * a3 + 72);
  v6 = *(_DWORD *)(v4 + 32 * a3 + 76);
  if ( (unsigned __int8)sub_5B60A0(a3, 0) )
    v5 /= 2;
  *a2 = v5;
  a2[1] = v6;
  return a2;
}


//======================================================================
// sub_5B51A0
// entry 005b51a0  size 148  status ok
//======================================================================

int *__thiscall sub_5B51A0(_DWORD *this, int *a2, int a3)
{
  int v4; // [esp+14h] [ebp-Ch]
  int v5; // [esp+18h] [ebp-8h]

  v5 = *(_DWORD *)(*(this + a3 + 352) + 32 * a3 + 72);
  v4 = (unsigned __int64)sub_64C8A0(0, 0) >> 32;
  if ( v5 % 2 == 1 )
    v4 = 50;
  *a2 = v5 / 2;
  a2[1] = v4;
  return a2;
}


//======================================================================
// sub_5B5240
// entry 005b5240  size 20  status ok
//======================================================================

int __thiscall sub_5B5240(_DWORD *this)
{
  return *(this + 373);
}


//======================================================================
// sub_5B5260
// entry 005b5260  size 119  status ok
//======================================================================

int __thiscall sub_5B5260(char *this, int a2, int a3)
{
  int i; // [esp+4h] [ebp-Ch]
  int v5; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  if ( a3 == -1 )
    a3 = sub_5B4E50(this, a2);
  v5 = 0;
  v6 = sub_5B5830(a2, a3);
  for ( i = 0; i < v6; ++i )
    v5 += sub_5B5F60(a2, a3, i);
  return v5;
}


//======================================================================
// sub_5B52E0
// entry 005b52e0  size 160  status ok
//======================================================================

int sub_5B52E0()
{
  int i; // [esp+Ch] [ebp-1Ch]
  int v2; // [esp+10h] [ebp-18h]
  int v3; // [esp+14h] [ebp-14h]
  _DWORD v4[4]; // [esp+18h] [ebp-10h]

  v4[0] = 3;
  v4[1] = 1;
  v4[2] = 0;
  v4[3] = 2;
  v3 = 4;
  v2 = sub_5B5FF0(4);
  for ( i = 0; i < 4; ++i )
  {
    if ( v2 == sub_5B5FF0(v4[i]) )
    {
      if ( *(_BYTE *)(sub_5DCB00(v4[i]) + 1184) )
        v3 = v4[i];
    }
  }
  return v3;
}


//======================================================================
// sub_5B5380
// entry 005b5380  size 212  status ok
//======================================================================

int sub_5B5380()
{
  CImageDisplay *v1; // [esp+14h] [ebp-1Ch]
  int i; // [esp+1Ch] [ebp-14h]
  _DWORD v3[4]; // [esp+20h] [ebp-10h]

  v3[0] = 2;
  v3[1] = 0;
  v3[2] = 1;
  v3[3] = 3;
  for ( i = 0; i < 4; ++i )
  {
    v1 = (CImageDisplay *)sub_5DCB00(v3[i]);
    if ( CImageDisplay::GetDisplayFormat(v1)->rcSource.left
      && !*(_BYTE *)(sub_5DCB00(v3[i]) + 1184)
      && !*(_BYTE *)(sub_5DCB00(v3[i]) + 1185) )
    {
      return v3[i];
    }
  }
  return -1;
}


//======================================================================
// sub_5B5460
// entry 005b5460  size 289  status ok
//======================================================================

int __thiscall sub_5B5460(void *this)
{
  int i; // [esp+14h] [ebp-14h]
  _DWORD v3[4]; // [esp+18h] [ebp-10h]

  if ( !(unsigned __int8)sub_5B6630(this) || sub_5B5F60(4, 0, 1) != 1 || sub_5B5830(4, -1) != 2 )
    return -1;
  v3[0] = 2;
  v3[1] = 0;
  v3[2] = 1;
  v3[3] = 3;
  for ( i = 0; i < 4; ++i )
  {
    if ( *(_BYTE *)(sub_5DCB00(v3[i]) + 1184)
      && (unsigned __int8)sub_5B33E0(v3[i])
      && !(unsigned __int8)sub_5B8520(v3[i])
      && !*(_BYTE *)(sub_5DCB00(v3[i]) + 1186) )
    {
      return v3[i];
    }
    sub_5B73C0(v3[i], 1);
  }
  return -1;
}


//======================================================================
// sub_5B5590
// entry 005b5590  size 141  status ok
//======================================================================

int sub_5B5590()
{
  int i; // [esp+Ch] [ebp-14h]
  _DWORD v2[4]; // [esp+10h] [ebp-10h]

  v2[0] = 2;
  v2[1] = 0;
  v2[2] = 1;
  v2[3] = 3;
  for ( i = 0; i < 4; ++i )
  {
    if ( (unsigned __int8)sub_5B60C0(v2[i]) && !*(_BYTE *)(sub_5DCB00(v2[i]) + 1186) )
      return v2[i];
  }
  return -1;
}


//======================================================================
// sub_5B5620
// entry 005b5620  size 145  status ok
//======================================================================

int __thiscall sub_5B5620(char *this)
{
  int j; // [esp+4h] [ebp-18h]
  int i; // [esp+8h] [ebp-14h]
  _DWORD v5[4]; // [esp+Ch] [ebp-10h]

  v5[0] = 2;
  v5[1] = 0;
  v5[2] = 1;
  v5[3] = 3;
  for ( i = 0; i < 4; ++i )
  {
    for ( j = 0; j < sub_5B58F0(v5[i]); ++j )
    {
      if ( sub_5B5010(this, v5[i], j) == -1 )
        return v5[i];
    }
  }
  return -1;
}


//======================================================================
// sub_5B56C0
// entry 005b56c0  size 101  status ok
//======================================================================

int __thiscall sub_5B56C0(_BYTE *this)
{
  int i; // [esp+4h] [ebp-14h]
  _DWORD v3[4]; // [esp+8h] [ebp-10h]

  v3[0] = 2;
  v3[1] = 0;
  v3[2] = 1;
  v3[3] = 3;
  for ( i = 0; i < 4; ++i )
  {
    if ( !*(this + v3[i] + 1652) )
      return v3[i];
  }
  return -1;
}


//======================================================================
// sub_5B5730
// entry 005b5730  size 139  status ok
//======================================================================

int __thiscall sub_5B5730(char *this)
{
  int i; // [esp+Ch] [ebp-14h]
  _DWORD v4[4]; // [esp+10h] [ebp-10h]

  v4[0] = 2;
  v4[1] = 0;
  v4[2] = 1;
  v4[3] = 3;
  for ( i = 0; i < 4; ++i )
  {
    if ( *(_BYTE *)(sub_5DCB00(v4[i]) + 1184) && sub_5B4E50(this, v4[i]) != -1 )
      return v4[i];
  }
  return -1;
}


//======================================================================
// sub_5B57C0
// entry 005b57c0  size 102  status ok
//======================================================================

int sub_5B57C0()
{
  int i; // [esp+4h] [ebp-14h]
  _DWORD v2[4]; // [esp+8h] [ebp-10h]

  v2[0] = 2;
  v2[1] = 0;
  v2[2] = 1;
  v2[3] = 3;
  for ( i = 0; i < 4; ++i )
  {
    if ( (unsigned __int8)sub_5B6660(v2[i]) )
      return v2[i];
  }
  return -1;
}


//======================================================================
// sub_5B5830
// entry 005b5830  size 108  status ok
//======================================================================

int __thiscall sub_5B5830(char *this, int a2, int a3)
{
  int i; // [esp+4h] [ebp-8h]
  int v5; // [esp+8h] [ebp-4h]

  if ( a3 == -1 )
    a3 = sub_5B4E50(this, a2);
  v5 = 0;
  for ( i = 0; i < 22; ++i )
  {
    if ( (unsigned __int16)sub_5B5C60(a2, a3, i) )
      ++v5;
  }
  return v5;
}


//======================================================================
// sub_5B58A0
// entry 005b58a0  size 76  status ok
//======================================================================

int __thiscall sub_5B58A0(_DWORD *this)
{
  if ( (unsigned __int8)sub_5DA830(dword_793600) )
    return *(_DWORD *)(dword_7947E0 + 20212);
  else
    return *(_DWORD *)(*(this + 351) + 2060) / 52;
}


//======================================================================
// sub_5B58F0
// entry 005b58f0  size 85  status ok
//======================================================================

int __stdcall sub_5B58F0(int a1)
{
  int i; // [esp+4h] [ebp-8h]
  int v3; // [esp+8h] [ebp-4h]

  v3 = 0;
  for ( i = 0; i < 4; ++i )
  {
    if ( (unsigned __int16)sub_5B5C60(a1, i, 0) )
      ++v3;
  }
  return v3;
}


//======================================================================
// sub_5B5950
// entry 005b5950  size 76  status ok
//======================================================================

char sub_5B5950()
{
  _DWORD v1[3]; // [esp+4h] [ebp-Ch]

  if ( (unsigned __int8)sub_5DA830(dword_793600) )
    return 3;
  v1[0] = 1;
  v1[1] = 3;
  v1[2] = 0;
  return v1[*(char *)(sub_5B5FB0(-1) + 10)];
}


//======================================================================
// sub_5B59A0
// entry 005b59a0  size 626  status ok
//======================================================================

_DWORD *__stdcall sub_5B59A0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // [esp+Ch] [ebp-Ch]

  v5 = 0;
  switch ( a2 )
  {
    case 5043:
      if ( a3 < 19 )
      {
        if ( a3 < 17 )
        {
          if ( a3 < 15 )
          {
            if ( a3 < 13 )
              sub_5E9F20((char)"false", "..\\Casino\\royalmatchstate.cpp", 1232);
            else
              v5 = 3;
          }
          else
          {
            v5 = 2;
          }
        }
        else
        {
          v5 = 1;
        }
      }
      else
      {
        v5 = 0;
      }
      break;
    case 5044:
      if ( a3 < 17 )
      {
        if ( a3 < 13 )
        {
          if ( a3 == 12 )
          {
            v5 = 2;
          }
          else if ( a3 < 4 )
          {
            sub_5E9F20((char)"false", "..\\Casino\\royalmatchstate.cpp", 1308);
          }
          else
          {
            v5 = 3;
          }
        }
        else
        {
          v5 = 1;
        }
      }
      else
      {
        v5 = 0;
      }
      break;
    case 5045:
      if ( a3 < 19 )
      {
        if ( a3 == 18 )
        {
          v5 = 1;
        }
        else if ( a3 < 12 )
        {
          sub_5E9F20((char)"false", "..\\Casino\\royalmatchstate.cpp", 1286);
        }
        else
        {
          v5 = 2;
        }
      }
      else
      {
        v5 = 0;
      }
      break;
    case 5046:
      if ( a3 == 12 )
        v5 = 0;
      else
        v5 = 10 - a3 / 2 + 1;
      break;
    case 5047:
      if ( a3 < 17 )
      {
        switch ( a3 )
        {
          case 16:
            v5 = 1;
            break;
          case 15:
            v5 = 2;
            break;
          case 14:
            v5 = 3;
            break;
          default:
            sub_5E9F20((char)"false", "..\\Casino\\royalmatchstate.cpp", 1210);
            break;
        }
      }
      else
      {
        v5 = 0;
      }
      break;
    case 5048:
      switch ( a3 )
      {
        case 12:
          v5 = 0;
          break;
        case 11:
          v5 = 1;
          break;
        case 10:
          v5 = 2;
          break;
        case 9:
          v5 = 3;
          break;
        case 8:
          v5 = 4;
          break;
        default:
          sub_5E9F20((char)"false", "..\\Casino\\royalmatchstate.cpp", 1258);
          break;
      }
      break;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\royalmatchstate.cpp", 1312);
      break;
  }
  *a1 = 14 * (a4 - 2);
  a1[1] = 18 * v5;
  return a1;
}


//======================================================================
// sub_5B5C30
// entry 005b5c30  size 48  status ok
//======================================================================

char sub_5B5C30()
{
  if ( (unsigned __int8)sub_5DA830(dword_793600) )
    return 80;
  else
    return *(_BYTE *)(sub_5B5FB0(-1) + 12);
}


//======================================================================
// sub_5B5C60
// entry 005b5c60  size 46  status ok
//======================================================================

__int16 __thiscall sub_5B5C60(_WORD *this, int a2, int a3, int a4)
{
  return *(this + 140 * a2 + 22 * a3 + a4 + 54);
}


//======================================================================
// sub_5B5C90
// entry 005b5c90  size 26  status ok
//======================================================================

int __thiscall sub_5B5C90(_DWORD *this, int a2)
{
  return *(this + a2 + 375);
}


//======================================================================
// sub_5B5CB0
// entry 005b5cb0  size 20  status ok
//======================================================================

int __thiscall sub_5B5CB0(_DWORD *this)
{
  return *(this + 374);
}


//======================================================================
// sub_5B5CD0
// entry 005b5cd0  size 213  status ok
//======================================================================

int __thiscall sub_5B5CD0(_DWORD *this, int a2)
{
  int v3; // [esp+0h] [ebp-24h]
  bool v5; // [esp+Bh] [ebp-19h]
  int i; // [esp+Ch] [ebp-18h]
  int v7; // [esp+10h] [ebp-14h]
  _DWORD v8[4]; // [esp+14h] [ebp-10h]

  v7 = 0;
  for ( i = 0; i < 4; ++i )
  {
    if ( (unsigned __int8)sub_638FF0(i) )
    {
      v3 = sub_5B5C90(this, i);
      if ( v3 == 1 )
        v5 = a2 == 1 || a2 == 0;
      else
        v5 = v3 != 2 || a2 != 2;
      if ( v5 )
        v8[v7++] = i;
    }
  }
  if ( v7 )
    return v8[sub_62FC30(0, v7 - 1)];
  else
    return -1;
}


//======================================================================
// sub_5B5DB0
// entry 005b5db0  size 405  status ok
//======================================================================

char *__thiscall sub_5B5DB0(char *this, char *Destination, char *a3)
{
  int v3; // esi
  int v4; // eax
  const char *v5; // eax
  char *result; // eax
  const char *v7; // eax
  const char *v8; // eax
  const char *v9; // eax
  const char *v10; // eax
  int v12; // [esp+Ch] [ebp-Ch]
  bool v13; // [esp+13h] [ebp-5h]
  int v14; // [esp+14h] [ebp-4h]

  v14 = sub_5B4F00(this);
  v12 = sub_5B4E50(this, v14);
  v3 = sub_5B5260(this, v14, v12);
  v13 = v3 != sub_5B5040(this, v14, v12);
  v4 = sub_5B4F00(this);
  switch ( sub_5A4B20((void *)dword_7935F4, v4) )
  {
    case 0:
      v5 = (const char *)sub_630F40("SID_ROYALMATCH_STAND");
      result = strcpy(Destination, v5);
      if ( v13 )
      {
        *(_DWORD *)a3 = 5045;
        result = a3;
      }
      else
      {
        *(_DWORD *)a3 = 5044;
      }
      break;
    case 1:
      v7 = (const char *)sub_630F40("SID_ROYALMATCH_HIT");
      strcpy(Destination, v7);
      result = (char *)v13;
      if ( v13 )
        *(_DWORD *)a3 = 5045;
      else
        *(_DWORD *)a3 = 5044;
      break;
    case 2:
      v8 = (const char *)sub_630F40("SID_ROYALMATCH_DOUBLEDOWN");
      result = strcpy(Destination, v8);
      if ( v13 )
      {
        *(_DWORD *)a3 = 5043;
      }
      else
      {
        *(_DWORD *)a3 = 5048;
        result = a3;
      }
      break;
    case 3:
      v9 = (const char *)sub_630F40("SID_ROYALMATCH_SPLIT");
      result = strcpy(Destination, v9);
      *(_DWORD *)a3 = 5046;
      break;
    case 4:
      v10 = (const char *)sub_630F40("SID_ROYALMATCH_SURRENDER");
      result = strcpy(Destination, v10);
      *(_DWORD *)a3 = 5047;
      break;
    default:
      result = (char *)sub_5E9F20((char)"false", "..\\Casino\\royalmatchstate.cpp", 1451);
      break;
  }
  return result;
}


//======================================================================
// sub_5B5F60
// entry 005b5f60  size 71  status ok
//======================================================================

int __thiscall sub_5B5F60(_WORD *this, int a2, int a3, int a4)
{
  __int16 v4; // ax
  int v7; // [esp+8h] [ebp-4h]

  v4 = sub_5B5C60(this, a2, a3, a4);
  v7 = sub_641280(v4);
  if ( v7 <= 10 )
    return v7;
  else
    return 10;
}


//======================================================================
// sub_5B5FB0
// entry 005b5fb0  size 64  status ok
//======================================================================

int __stdcall sub_5B5FB0(int a1)
{
  if ( a1 == -1 )
    sub_6375B0(dword_162EE84);
  return sub_63AAE0(-1);
}


//======================================================================
// sub_5B5FF0
// entry 005b5ff0  size 73  status ok
//======================================================================

int __thiscall sub_5B5FF0(char *this, int a2)
{
  int i; // [esp+4h] [ebp-8h]
  int v5; // [esp+8h] [ebp-4h]

  v5 = 0;
  for ( i = 0; i < 4; ++i )
    v5 += sub_5B5830(this, a2, i);
  return v5;
}


//======================================================================
// sub_5B6040
// entry 005b6040  size 89  status ok
//======================================================================

bool __thiscall sub_5B6040(char *this, int a2)
{
  return sub_5B58F0(a2) == 1 && sub_5B5830(this, a2, 0) == 2 && sub_5B4F50(this, a2, 0) == 21;
}


//======================================================================
// sub_5B60A0
// entry 005b60a0  size 32  status ok
//======================================================================

char __thiscall sub_5B60A0(_BYTE *this, int a2, int a3)
{
  return *(this + 280 * a2 + a3 + 92);
}


//======================================================================
// sub_5B60C0
// entry 005b60c0  size 166  status ok
//======================================================================

bool __stdcall sub_5B60C0(int a1)
{
  __int64 v2; // [esp-8h] [ebp-30h]
  bool v3; // [esp+0h] [ebp-28h]
  _BYTE v4[8]; // [esp+10h] [ebp-18h] BYREF
  __int64 v5; // [esp+18h] [ebp-10h]
  _BYTE v6[8]; // [esp+20h] [ebp-8h] BYREF

  v5 = sub_64C8A0(0, 0);
  sub_5CB880(v6, a1);
  v3 = 1;
  if ( !(unsigned __int8)sub_64C6E0(v5, HIDWORD(v5)) )
  {
    v2 = sub_64C8A0(0, 0);
    sub_5CB880(v4, a1);
    if ( !(unsigned __int8)sub_64C6E0(v2, HIDWORD(v2)) )
      return 0;
  }
  return v3;
}


//======================================================================
// sub_5B6170
// entry 005b6170  size 29  status ok
//======================================================================

char __thiscall sub_5B6170(_BYTE *this, int a2)
{
  return *(this + 280 * a2 + 101);
}


//======================================================================
// sub_5B6190
// entry 005b6190  size 751  status ok
//======================================================================

int __thiscall sub_5B6190(int this)
{
  _AFX_OLE_STATE *v2; // [esp+4h] [ebp-7Ch]
  _AFX_OLE_STATE *v3; // [esp+8h] [ebp-78h]
  int v4; // [esp+Ch] [ebp-74h]
  int v5; // [esp+10h] [ebp-70h]
  _AFX_OLE_STATE *v7; // [esp+28h] [ebp-58h]
  _AFX_OLE_STATE *v8; // [esp+30h] [ebp-50h]
  void *v9; // [esp+38h] [ebp-48h]
  int i; // [esp+40h] [ebp-40h]
  _DWORD v11[7]; // [esp+48h] [ebp-38h]
  _DWORD v12[4]; // [esp+64h] [ebp-1Ch]
  int v13; // [esp+7Ch] [ebp-4h]

  v11[0] = 5;
  v11[1] = 5;
  v11[2] = 6;
  v11[3] = 5;
  v11[4] = 2;
  v11[5] = 5;
  v11[6] = 3;
  v12[0] = 1;
  v12[1] = 2;
  v12[2] = 4;
  v12[3] = 6;
  if ( (unsigned __int8)sub_5DA830(dword_793600) )
    v5 = *(_DWORD *)(dword_7947E0 + 20212);
  else
    v5 = v12[*(char *)(sub_5B5FB0(-1) + 9)];
  if ( !*(_DWORD *)(this + 1404) )
  {
    v9 = operator new(0x810u);
    v13 = 0;
    if ( v9 )
      v4 = sub_642E10(v9);
    else
      v4 = 0;
    v13 = -1;
    *(_DWORD *)(this + 1404) = v4;
  }
  sub_642E70(v11[v5]);
  sub_5B7EF0(this);
  for ( i = 0; i < 4; ++i )
  {
    v8 = (_AFX_OLE_STATE *)operator new(0xF0u);
    v13 = 1;
    if ( v8 )
      v3 = _AFX_OLE_STATE::_AFX_OLE_STATE(v8);
    else
      v3 = 0;
    v13 = -1;
    *(_DWORD *)(this + 4 * i + 1408) = v3;
    CPaneContainer::SetPaneDivider(*(CPaneContainer **)(this + 4 * i + 1408), (struct CPaneDivider *)i);
    v7 = (_AFX_OLE_STATE *)operator new(0xF0u);
    v13 = 2;
    if ( v7 )
      v2 = _AFX_OLE_STATE::_AFX_OLE_STATE(v7);
    else
      v2 = 0;
    v13 = -1;
    *(_DWORD *)(this + 4 * i + 1588) = v2;
    CPaneContainer::SetPaneDivider(*(CPaneContainer **)(this + 4 * i + 1588), (struct CPaneDivider *)i);
    *(_QWORD *)(this + 8 * i + 1424) = sub_64C8A0(0, 0);
    *(_QWORD *)(this + 8 * i + 1604) = sub_64C8A0(0, 0);
  }
  *(_BYTE *)(this + 1472) = 0;
  *(_BYTE *)(this + 1460) = 0;
  *(_DWORD *)(this + 1456) = 0;
  *(_DWORD *)(this + 1476) = 0;
  *(_DWORD *)(this + 1484) = 0;
  *(_DWORD *)(this + 1480) = 0;
  *(_DWORD *)(this + 1488) = 0;
  *(_BYTE *)(this + 1656) = (unsigned __int8)sub_5B7D30(this) == 0;
  return sub_5B6A60(this);
}


//======================================================================
// sub_5B6480
// entry 005b6480  size 58  status ok
//======================================================================

bool __thiscall sub_5B6480(char *this, int a2, int a3)
{
  int v3; // esi

  v3 = sub_5B5040(this, a2, a3);
  return v3 == sub_5B5260(this, a2, a3);
}


//======================================================================
// sub_5B64C0
// entry 005b64c0  size 99  status ok
//======================================================================

char sub_5B64C0()
{
  int i; // [esp+Ch] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    if ( sub_5B60C0(i) || *(_BYTE *)(sub_5DCB00(i) + 1184) )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_5B6530
// entry 005b6530  size 180  status ok
//======================================================================

char __thiscall sub_5B6530(char *this)
{
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  if ( sub_5B4F50(this, 4, 0) > 17 )
    return 1;
  if ( sub_5B4F50(this, 4, 0) == 17 && (sub_5B5260(this, 4, 0) == 17 || !sub_5B3DC0()) )
    return 1;
  for ( i = 0; i < 4; ++i )
  {
    for ( j = 0; j < sub_5B58F0(i); ++j )
    {
      if ( sub_5B5010(this, i, j) == -1 )
        return 0;
    }
  }
  return 1;
}


//======================================================================
// sub_5B65F0
// entry 005b65f0  size 24  status ok
//======================================================================

char sub_5B65F0()
{
  return *(_BYTE *)(sub_5B5FB0(-1) + 4);
}


//======================================================================
// sub_5B6610
// entry 005b6610  size 32  status ok
//======================================================================

char __thiscall sub_5B6610(_BYTE *this, int a2, int a3)
{
  return *(this + 280 * a2 + a3 + 96);
}


//======================================================================
// sub_5B6630
// entry 005b6630  size 48  status ok
//======================================================================

char sub_5B6630()
{
  if ( (unsigned __int8)sub_5DA830(dword_793600) )
    return 1;
  else
    return *(_BYTE *)(sub_5B5FB0(-1) + 2);
}


//======================================================================
// sub_5B6660
// entry 005b6660  size 29  status ok
//======================================================================

char __thiscall sub_5B6660(_BYTE *this, int a2)
{
  return *(this + 280 * a2 + 100);
}


//======================================================================
// sub_5B6680
// entry 005b6680  size 56  status ok
//======================================================================

bool sub_5B6680()
{
  return !(unsigned __int8)sub_5DA830(dword_793600) && *(_BYTE *)(sub_5B5FB0(-1) + 11) == 0;
}


//======================================================================
// sub_5B66C0
// entry 005b66c0  size 61  status ok
//======================================================================

char __thiscall sub_5B66C0(char *this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    if ( sub_5B5FF0(this, i) > 0 )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_5B6700
// entry 005b6700  size 51  status ok
//======================================================================

bool __thiscall sub_5B6700(int *this, int a2)
{
  return *(this + 2 * a2 + 356) > 0 || *(this + 2 * a2 + 401) > 0;
}


//======================================================================
// sub_5B6740
// entry 005b6740  size 65  status ok
//======================================================================

bool __thiscall sub_5B6740(int this)
{
  return *(_BYTE *)(this + 1460) || *(_DWORD *)(this + 1456) >= sub_5B6790(this);
}


//======================================================================
// sub_5B6790
// entry 005b6790  size 59  status ok
//======================================================================

int __thiscall sub_5B6790(_DWORD *this)
{
  int v1; // esi

  v1 = *(this + 351);
  return (int)((double)(*(_DWORD *)(v1 + 2060) * sub_5B5C30()) / 100.0);
}


//======================================================================
// sub_5B67D0
// entry 005b67d0  size 176  status ok
//======================================================================

int __stdcall sub_5B67D0(int a1, int a2, int a3, int a4, int a5)
{
  int i; // [esp+8h] [ebp-8h]
  char v7; // [esp+Fh] [ebp-1h]

  sub_5B8AB0(a1, a2, a3, a4, a5);
  v7 = 0;
  for ( i = 0; i < sub_5B58F0(a1); ++i )
  {
    if ( sub_5B3300(a1, i) )
    {
      v7 = 1;
      break;
    }
  }
  if ( v7 )
    *(_BYTE *)(sub_5DCB00(a1) + 1186) = 1;
  return sub_5B71A0(a1, a2, a3);
}


//======================================================================
// sub_5B6880
// entry 005b6880  size 303  status ok
//======================================================================

char __thiscall sub_5B6880(int *this, int a2)
{
  int v2; // eax

  LOBYTE(v2) = sub_5B6700(this, a2);
  if ( (_BYTE)v2 )
  {
    v2 = sub_5DCB00(a2);
    if ( v2 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_793600 + 656))(dword_793600, a2);
      if ( *(this + 2 * a2 + 356) > 0 )
        (*(void (__thiscall **)(_DWORD, int *, _DWORD, int))(*(_DWORD *)*(this + a2 + 352) + 196))(
          *(this + a2 + 352),
          this + 2 * a2 + 356,
          0,
          1);
      if ( *(this + 2 * a2 + 401) > 0 )
        (*(void (__thiscall **)(_DWORD, int *, _DWORD, int))(*(_DWORD *)*(this + a2 + 397) + 196))(
          *(this + a2 + 397),
          this + 2 * a2 + 401,
          0,
          1);
      *(_BYTE *)(sub_5DCB00(a2) + 1184) = 1;
      sub_5A7EA0((_DWORD **)dword_7935F8);
      sub_5DB890(dword_793600);
      LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793600 + 4) + 8))(
                     *(_DWORD *)(dword_793600 + 4),
                     1,
                     0);
    }
  }
  return v2;
}


//======================================================================
// sub_5B69B0
// entry 005b69b0  size 162  status ok
//======================================================================

char sub_5B69B0()
{
  CImageDisplay *v1; // [esp+14h] [ebp-Ch]
  int i; // [esp+1Ch] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    v1 = (CImageDisplay *)sub_5DCB00(i);
    if ( CImageDisplay::GetDisplayFormat(v1)->rcSource.left
      && !*(_BYTE *)(sub_5DCB00(i) + 1185)
      && !*(_BYTE *)(sub_5DCB00(i) + 1184) )
    {
      return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_5B6A60
// entry 005b6a60  size 560  status ok
//======================================================================

_DWORD *__thiscall sub_5B6A60(_DWORD *this)
{
  _DWORD *result; // eax
  int jj; // [esp+10h] [ebp-1Ch]
  int ii; // [esp+14h] [ebp-18h]
  int n; // [esp+18h] [ebp-14h]
  int m; // [esp+1Ch] [ebp-10h]
  int k; // [esp+20h] [ebp-Ch]
  int j; // [esp+24h] [ebp-8h]
  int i; // [esp+28h] [ebp-4h]

  sub_5B70E0(-1, 0);
  result = (_DWORD *)sub_5B8430(this);
  for ( i = 0; i < 4; ++i )
  {
    sub_5CB9B0(*(this + i + 352));
    sub_5CB9B0(*(this + i + 397));
    result = (_DWORD *)(i + 1);
  }
  for ( j = 0; j < 5; ++j )
  {
    for ( k = 0; k < 4; ++k )
    {
      for ( m = 0; m < 22; ++m )
      {
        sub_5B7340(j, k, m, 0);
        sub_5B70B0(j, k, m, 0);
      }
      result = (_DWORD *)(k + 1);
    }
  }
  for ( n = 0; n < 4; ++n )
  {
    *(_BYTE *)(sub_5DCB00(n) + 1186) = 0;
    *(_BYTE *)(sub_5DCB00(n) + 1184) = 0;
    *(_BYTE *)(sub_5DCB00(n) + 1185) = 0;
    for ( ii = 0; ii < 4; ++ii )
    {
      *((_BYTE *)this + 280 * n + ii + 92) = 0;
      sub_5B71A0(n, ii, -1);
      *((_BYTE *)this + 280 * n + ii + 96) = 0;
    }
    *((_BYTE *)this + 280 * n + 103) = 0;
    *((_BYTE *)this + 280 * n + 101) = 0;
    result = this;
    *((_BYTE *)this + 280 * n + 102) = 0;
    *((_BYTE *)this + 280 * n + 100) = 0;
  }
  for ( jj = 0; jj < 4; ++jj )
  {
    sub_5B73A0(jj, 0);
    *(this + jj + 409) = -1;
    *((_BYTE *)this + jj + 1652) = 0;
    result = (_DWORD *)(jj + 1);
  }
  *(this + 367) = -1;
  return result;
}


//======================================================================
// sub_5B6C90
// entry 005b6c90  size 388  status ok
//======================================================================

int __thiscall sub_5B6C90(int this, int a2)
{
  int result; // eax
  int v4; // [esp+8h] [ebp-4h]

  v4 = sub_5B4E50((char *)this, a2);
  switch ( *(_DWORD *)(this + 1468) )
  {
    case 0:
      goto LABEL_12;
    case 1:
      if ( sub_5B3300(a2, -1) )
      {
        sub_5B67D0(a2, v4, 0, 1, 1);
        sub_5B71A0(a2, v4, 6);
        sub_5B3F80(a2);
        result = sub_5DCB00(a2);
        *(_BYTE *)(result + 1200) = 1;
      }
      else if ( sub_5B4F50((char *)this, a2, v4) == 21 )
      {
LABEL_12:
        result = sub_5B3F80(a2);
      }
      else
      {
        result = (unsigned __int8)sub_5B6170((_BYTE *)this, a2);
        if ( (_BYTE)result )
        {
          result = sub_5B3710((_DWORD *)this, a2, v4);
          if ( !(_BYTE)result )
            result = sub_5B3F80(a2);
        }
      }
LABEL_13:
      *(_DWORD *)(this + 1468) = -1;
      return result;
    case 2:
      if ( sub_5B3300(a2, -1) )
      {
        sub_5B67D0(a2, v4, 0, 1, 1);
        sub_5B71A0(a2, v4, 6);
        *(_BYTE *)(sub_5DCB00(a2) + 1200) = 1;
      }
      goto LABEL_12;
    case 4:
      *(_BYTE *)(sub_5DCB00(a2) + 1200) = 1;
      goto LABEL_12;
    default:
      result = v4;
      goto LABEL_13;
  }
}


//======================================================================
// sub_5B6F40
// entry 005b6f40  size 323  status ok
//======================================================================

void __thiscall sub_5B6F40(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v4; // [esp+8h] [ebp-34h]
  int v5; // [esp+Ch] [ebp-30h]
  int i; // [esp+38h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    if ( *(_BYTE *)(sub_5DCB00(i) + 1184) )
    {
      v5 = *(this + i + 352);
      v1 = *(_DWORD *)(v5 + 32 * i + 76);
      *(this + 2 * i + 356) = *(_DWORD *)(v5 + 32 * i + 72);
      *(this + 2 * i + 357) = v1;
      v4 = *(this + i + 397);
      v2 = *(_DWORD *)(v4 + 32 * i + 76);
      *(this + 2 * i + 401) = *(_DWORD *)(v4 + 32 * i + 72);
      *(this + 2 * i + 402) = v2;
    }
    else
    {
      *((_QWORD *)this + i + 178) = sub_64C8A0(0, 0);
      *(_QWORD *)(this + 2 * i + 401) = sub_64C8A0(0, 0);
    }
  }
}


//======================================================================
// sub_5B7090
// entry 005b7090  size 32  status ok
//======================================================================

int __thiscall sub_5B7090(_BYTE *this, int a2, char a3)
{
  *(this + 280 * a2 + 103) = a3;
  return 280 * a2;
}


//======================================================================
// sub_5B70B0
// entry 005b70b0  size 44  status ok
//======================================================================

int __thiscall sub_5B70B0(_BYTE *this, int a2, int a3, int a4, char a5)
{
  *(this + 280 * a2 + 22 * a3 + a4 + 4) = a5;
  return 22 * a3;
}


//======================================================================
// sub_5B70E0
// entry 005b70e0  size 83  status ok
//======================================================================

int __thiscall sub_5B70E0(_DWORD *this, int a2, char a3)
{
  _DWORD *v3; // eax

  v3 = this;
  *(this + 366) = a2;
  if ( *(this + 366) == -1 )
    return sub_5D8A20(0, -1, 0);
  LOBYTE(v3) = a3;
  return sub_5D8A20(1, *(this + 366), v3);
}


//======================================================================
// sub_5B7140
// entry 005b7140  size 35  status ok
//======================================================================

int __thiscall sub_5B7140(_BYTE *this, int a2, int a3, char a4)
{
  int result; // eax

  result = a3 + 280 * a2;
  *(this + result + 92) = a4;
  return result;
}


//======================================================================
// sub_5B7170
// entry 005b7170  size 35  status ok
//======================================================================

int __thiscall sub_5B7170(_BYTE *this, int a2, int a3, char a4)
{
  int result; // eax

  result = a3 + 280 * a2;
  *(this + result + 96) = a4;
  return result;
}


//======================================================================
// sub_5B71A0
// entry 005b71a0  size 107  status ok
//======================================================================

int __thiscall sub_5B71A0(_BYTE *this, int a2, int a3, int a4)
{
  int result; // eax

  *(this + 280 * a2 + a3 + 104) = a4;
  switch ( a4 )
  {
    case 0:
    case 5:
    case 6:
      result = sub_5B73A0(a2, 2);
      break;
    case 1:
    case 2:
      result = sub_5B73A0(a2, 1);
      break;
    default:
      result = sub_5B73A0(a2, 0);
      break;
  }
  return result;
}


//======================================================================
// sub_5B7220
// entry 005b7220  size 232  status ok
//======================================================================

void sub_5B7220()
{
  CImageDisplay *v1; // [esp+Ch] [ebp-28h]
  CImageDisplay *v2; // [esp+18h] [ebp-1Ch]
  int i; // [esp+20h] [ebp-14h]
  _DWORD v4[4]; // [esp+24h] [ebp-10h]

  v4[0] = 2;
  v4[1] = 0;
  v4[2] = 1;
  v4[3] = 3;
  for ( i = 0; i < 4; ++i )
  {
    v2 = (CImageDisplay *)sub_5DCB00(v4[i]);
    if ( CImageDisplay::GetDisplayFormat(v2)->rcSource.left )
    {
      v1 = (CImageDisplay *)sub_5DCB00(v4[i]);
      if ( CImageDisplay::GetDisplayFormat(v1)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v1)->rcSource.left == 3 )
      {
        *(_BYTE *)(sub_5DCB00(v4[i]) + 1185) = 1;
      }
    }
  }
}


//======================================================================
// sub_5B7310
// entry 005b7310  size 37  status ok
//======================================================================

int __thiscall sub_5B7310(_DWORD *this, int a2, int a3)
{
  *(this + 373) = a2;
  *(this + 374) = a3;
  return a3;
}


//======================================================================
// sub_5B7340
// entry 005b7340  size 50  status ok
//======================================================================

__int16 __thiscall sub_5B7340(_WORD *this, int a2, int a3, int a4, __int16 a5)
{
  *(this + 140 * a2 + 22 * a3 + a4 + 54) = a5;
  return a5;
}


//======================================================================
// sub_5B7380
// entry 005b7380  size 32  status ok
//======================================================================

int __thiscall sub_5B7380(_BYTE *this, int a2, char a3)
{
  *(this + 280 * a2 + 100) = a3;
  return 280 * a2;
}


//======================================================================
// sub_5B73A0
// entry 005b73a0  size 29  status ok
//======================================================================

int __thiscall sub_5B73A0(_DWORD *this, int a2, int a3)
{
  *(this + a2 + 375) = a3;
  return a2;
}


//======================================================================
// sub_5B73C0
// entry 005b73c0  size 32  status ok
//======================================================================

int __thiscall sub_5B73C0(_BYTE *this, int a2, char a3)
{
  *(this + 280 * a2 + 102) = a3;
  return 280 * a2;
}


//======================================================================
// sub_5B73E0
// entry 005b73e0  size 126  status ok
//======================================================================

char __thiscall sub_5B73E0(_BYTE *this, int a2, char a3)
{
  char result; // al
  int v5[2]; // [esp+4h] [ebp-8h] BYREF

  sub_5B73C0(this, a2, 1);
  sub_5B7380(this, a2, a3);
  result = sub_5B6660(this, a2);
  if ( result )
  {
    sub_5B51A0(this, v5, a2);
    return (*(int (__thiscall **)(_DWORD, int *, int, _DWORD))(**((_DWORD **)this + a2 + 352) + 196))(
             *((_DWORD *)this + a2 + 352),
             v5,
             1,
             0);
  }
  return result;
}


//======================================================================
// sub_5B7460
// entry 005b7460  size 29  status ok
//======================================================================

int __stdcall sub_5B7460(char a1)
{
  int result; // eax

  result = sub_5B5FB0(-1);
  *(_BYTE *)(result + 7) = a1;
  return result;
}


//======================================================================
// sub_5B7480
// entry 005b7480  size 32  status ok
//======================================================================

int __thiscall sub_5B7480(_BYTE *this, int a2, char a3)
{
  *(this + 280 * a2 + 101) = a3;
  return 280 * a2;
}


//======================================================================
// sub_5B74A0
// entry 005b74a0  size 349  status ok
//======================================================================

_DWORD *__thiscall sub_5B74A0(char *this)
{
  const char *v1; // eax
  const char *v2; // eax
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  char *v7; // eax
  char Destination[1028]; // [esp+4h] [ebp-410h] BYREF
  int v11; // [esp+40Ch] [ebp-8h]
  int v12; // [esp+410h] [ebp-4h]

  v12 = sub_5B4F00(this);
  v11 = sub_5B4E50(this, v12);
  v1 = (const char *)sub_630F40("SID_ROYALMATCH_CHOOSEACTION");
  strcpy(Destination, v1);
  v2 = (const char *)sub_630F40("SID_ROYALMATCH_INSTRUCTIONS_HIT");
  strcat(Destination, v2);
  v3 = (const char *)sub_630F40("SID_ROYALMATCH_INSTRUCTIONS_STAND");
  strcat(Destination, v3);
  if ( sub_5B3430(this, v12) )
  {
    v4 = (const char *)sub_630F40("SID_ROYALMATCH_INSTRUCTIONS_DOUBLEDOWN");
    strcat(Destination, v4);
  }
  if ( sub_5B3710(this, v12, v11) )
  {
    v5 = (const char *)sub_630F40("SID_ROYALMATCH_iNSTRUCTIONS_SPLIT");
    strcat(Destination, v5);
  }
  if ( sub_5B37F0(this, v12) )
  {
    v6 = (const char *)sub_630F40("SID_ROYALMATCH_INSTRUCTIONS_SURRENDER");
    strcat(Destination, v6);
  }
  v7 = (char *)sub_630F40("SID_SHELL_PLAY");
  return sub_57BE80((_DWORD *)dword_793578, 0, v7, Destination);
}


//======================================================================
// sub_5B7600
// entry 005b7600  size 1134  status ok
//======================================================================

int __thiscall sub_5B7600(char *this)
{
  int v1; // esi
  const char *v2; // eax
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  const char *v9; // eax
  const char *v10; // eax
  const char *v11; // eax
  int *v12; // eax
  int v13; // edx
  const char *v14; // eax
  const char *v15; // eax
  char *v16; // eax
  int v18; // [esp-18h] [ebp-68Ch]
  int v19; // [esp+4h] [ebp-670h]
  int v21; // [esp+Ch] [ebp-668h] BYREF
  char Destination[16]; // [esp+14h] [ebp-660h] BYREF
  char v23[512]; // [esp+24h] [ebp-650h] BYREF
  int v24; // [esp+224h] [ebp-450h]
  int v25; // [esp+228h] [ebp-44Ch]
  char Source[1028]; // [esp+22Ch] [ebp-448h] BYREF
  char Buffer[8]; // [esp+630h] [ebp-44h] BYREF
  int v28; // [esp+638h] [ebp-3Ch]
  __int16 v29; // [esp+63Ch] [ebp-38h]
  char v30; // [esp+643h] [ebp-31h]
  int v31; // [esp+644h] [ebp-30h] BYREF
  char v32[16]; // [esp+648h] [ebp-2Ch] BYREF
  char v33[16]; // [esp+658h] [ebp-1Ch] BYREF
  int v34; // [esp+66Ch] [ebp-8h]
  __int16 v35; // [esp+670h] [ebp-4h]

  v34 = sub_5B4F00(this);
  v28 = sub_5B4E50(this, v34);
  v35 = sub_5B4F50(this, v34, v28);
  v29 = sub_5B5F60(this, 4, 0, 1);
  v1 = sub_5B5260(this, v34, v28);
  v30 = v1 != sub_5B5040(this, v34, v28);
  if ( v29 == 1 )
    v29 = 11;
  if ( v35 >= 20 || v35 == 10 || v35 == 11 )
  {
    v2 = (const char *)sub_630F40("SID_ROYALMATCH_VERYSTRONG");
    strcpy(Destination, v2);
  }
  else if ( v35 >= 18 || v35 == 8 || v35 == 9 || v35 >= 12 && v35 <= 19 && v30 )
  {
    v3 = (const char *)sub_630F40("SID_ROYALMATCH_STRONG");
    strcpy(Destination, v3);
  }
  else if ( v35 == 17 || v35 == 12 || v35 == 7 )
  {
    v4 = (const char *)sub_630F40("SID_ROYALMATCH_NEUTRAL");
    strcpy(Destination, v4);
  }
  else if ( v35 > 6 )
  {
    if ( v35 < 13 || v35 > 16 )
    {
      sub_5E9F20((char)"false", "..\\Casino\\royalmatchstate.cpp", 2035);
    }
    else
    {
      v6 = (const char *)sub_630F40("SID_ROYALMATCH_VERYWEAK");
      strcpy(Destination, v6);
    }
  }
  else
  {
    v5 = (const char *)sub_630F40("SID_ROYALMATCH_WEAK");
    strcpy(Destination, v5);
  }
  if ( v29 < 10 )
  {
    switch ( v29 )
    {
      case 8:
      case 9:
        v8 = (const char *)sub_630F40("SID_ROYALMATCH_STRONG");
        strcpy(v33, v8);
        break;
      case 7:
      case 2:
        v9 = (const char *)sub_630F40("SID_ROYALMATCH_NEUTRAL");
        strcpy(v33, v9);
        break;
      case 4:
      case 3:
        v10 = (const char *)sub_630F40("SID_ROYALMATCH_WEAK");
        strcpy(v33, v10);
        break;
      case 5:
      case 6:
        v11 = (const char *)sub_630F40("SID_ROYALMATCH_VERYWEAK");
        strcpy(v33, v11);
        break;
      default:
        sub_5E9F20((char)"false", "..\\Casino\\royalmatchstate.cpp", 2060);
        break;
    }
  }
  else
  {
    v7 = (const char *)sub_630F40("SID_ROYALMATCH_VERYSTRONG");
    strcpy(v33, v7);
  }
  sub_5B5DB0(this, v32, (char *)&v31);
  sub_5B40A0(this, v23, v35, v29, v30);
  v12 = sub_5B59A0(&v21, v31, v35, v29);
  v13 = v12[1];
  v24 = *v12;
  v24 += 39;
  v25 = v13 + 60;
  if ( v29 == 11 )
  {
    v14 = (const char *)sub_630F40("SID_ROYALMATCH_A");
    strcpy(Buffer, v14);
  }
  else
  {
    sprintf(Buffer, off_6B4E68, v29);
  }
  if ( v30 )
    v19 = sub_630F40("SID_ROYALMATCH_SOFT");
  else
    v19 = sub_630F40("SID_ROYALMATCH_HARD");
  v18 = v35;
  v15 = (const char *)sub_630F40("SID_ROYALMATCH_HANDSUMMARY_FORMAT");
  sprintf(Source, v15, v19, v18, Destination, Buffer, v33, v32, v23);
  v16 = (char *)sub_630F40("SID_ROYALMATCH_STRATEGY");
  sub_57BE80((_DWORD *)dword_793578, 1, v16, Source);
  return sub_57C0B0((_DWORD *)dword_793578, 1, v31, 5019, v24, v25);
}


//======================================================================
// sub_5B7A70
// entry 005b7a70  size 657  status ok
//======================================================================

_DWORD *__stdcall sub_5B7A70(int a1)
{
  const char *v1; // eax
  const char *v2; // eax
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  char *v7; // eax
  char *v9; // [esp+0h] [ebp-5CCh]
  char *v10; // [esp+4h] [ebp-5C8h]
  char *v11; // [esp+8h] [ebp-5C4h]
  char *Source; // [esp+Ch] [ebp-5C0h]
  char Destination[256]; // [esp+14h] [ebp-5B8h] BYREF
  char v14[1024]; // [esp+114h] [ebp-4B8h] BYREF
  char v15[32]; // [esp+514h] [ebp-B8h] BYREF
  char v16[16]; // [esp+534h] [ebp-98h] BYREF
  char Buffer[132]; // [esp+544h] [ebp-88h] BYREF

  v1 = (const char *)sub_630F40("SID_ROYALMATCH_10RICH10POOR");
  strcpy(Destination, v1);
  if ( a1 <= 1 )
  {
    if ( a1 >= -1 )
    {
      v2 = (const char *)sub_630F40("SID_ROYALMATCH_10NEUTRAL");
      strcpy(v16, v2);
      v3 = (const char *)sub_630F40("SID_ROYALMATCH_NORMAL");
      strcpy(v15, v3);
    }
    else
    {
      v10 = (char *)sub_630F40("SID_ROYALMATCH_10POOR");
      strcpy(v16, v10);
      v9 = (char *)sub_630F40("SID_ROYALMATCH_CONSERVATIVE");
      strcpy(v15, v9);
    }
  }
  else
  {
    if ( a1 <= 4 )
      Source = (char *)sub_630F40("SID_ROYALMATCH_10RICH");
    else
      Source = (char *)sub_630F40("SID_ROYALMATCH_VERY10RICH");
    strcpy(v16, Source);
    if ( a1 <= 4 )
      v11 = (char *)sub_630F40("SID_ROYALMATCH_AGGRESSIVE");
    else
      v11 = (char *)sub_630F40("SID_ROYALMATCH_VERYAGGRESSIVE");
    strcpy(v15, v11);
  }
  v4 = (const char *)sub_630F40("SID_ROYALMATCH_CURRENTDECK_FORMAT");
  sprintf(Buffer, v4, v16, v15, a1);
  if ( a1 <= 1 )
  {
    if ( a1 >= -1 )
      v6 = (const char *)sub_630F40("SID_ROYALMATCH_ABOUT10NEUTRAL");
    else
      v6 = (const char *)sub_630F40("SID_ROYALMATCH_ABOUT10POOR");
    sprintf(v14, v6, Destination, Buffer);
  }
  else
  {
    v5 = (const char *)sub_630F40("SID_ROYALMATCH_ABOUT10RICH");
    sprintf(v14, v5, Destination, Buffer);
  }
  v7 = (char *)sub_630F40("SID_ROYALMATCH_STRATEGY");
  return sub_57BE80((_DWORD *)dword_793578, 1, v7, v14);
}


//======================================================================
// sub_5B7D10
// entry 005b7d10  size 24  status ok
//======================================================================

char sub_5B7D10()
{
  return *(_BYTE *)(sub_5B5FB0(-1) + 6);
}


//======================================================================
// sub_5B7D30
// entry 005b7d30  size 24  status ok
//======================================================================

char sub_5B7D30()
{
  return *(_BYTE *)(sub_5B5FB0(-1) + 7);
}


//======================================================================
// sub_5B7D50
// entry 005b7d50  size 24  status ok
//======================================================================

char sub_5B7D50()
{
  return *(_BYTE *)(sub_5B5FB0(-1) + 5);
}


//======================================================================
// sub_5B7D70
// entry 005b7d70  size 372  status ok
//======================================================================

char __stdcall sub_5B7D70(int a1)
{
  int v1; // eax
  char *Str1; // [esp+Ch] [ebp-30h]
  CImageDisplay *v5; // [esp+10h] [ebp-2Ch]
  char *Str2; // [esp+14h] [ebp-28h]
  CImageDisplay *v7; // [esp+18h] [ebp-24h]
  CImageDisplay *v8; // [esp+1Ch] [ebp-20h]
  int i; // [esp+28h] [ebp-14h]
  _DWORD v10[4]; // [esp+2Ch] [ebp-10h]

  if ( (unsigned __int8)sub_5DA830(dword_793600) )
    return 0;
  v1 = sub_5DCB00(a1);
  if ( (unsigned __int8)sub_5D5840(v1) )
    return 0;
  v10[0] = 2;
  v10[1] = 0;
  v10[2] = 1;
  v10[3] = 3;
  for ( i = 0; i < 4 && v10[i] != a1; ++i )
  {
    v8 = (CImageDisplay *)sub_5DCB00(v10[i]);
    if ( CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 3 )
    {
      v7 = (CImageDisplay *)sub_5DCB00(a1);
      Str2 = (char *)&CImageDisplay::GetDisplayFormat(v7)->rcSource.top;
      v5 = (CImageDisplay *)sub_5DCB00(v10[i]);
      Str1 = (char *)&CImageDisplay::GetDisplayFormat(v5)->rcSource.top;
      if ( !strcmp(Str1, Str2) )
      {
        *(_BYTE *)(sub_5DCB00(a1) + 1185) = 1;
        (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
          *(_DWORD *)(dword_162EE80 + 4),
          1,
          0);
        return 0;
      }
    }
  }
  return 1;
}


//======================================================================
// sub_5B7EF0
// entry 005b7ef0  size 119  status ok
//======================================================================

int __thiscall sub_5B7EF0(_DWORD *this)
{
  sub_6437D0(1, 0);
  *(this + 364) = 0;
  *(this + 369) = 0;
  *(this + 371) = 0;
  *(this + 372) = 0;
  *(this + 370) = 0;
  return sub_643930(5, 2, "RoyalMatch", 1);
}


//======================================================================
// sub_5B7F70
// entry 005b7f70  size 287  status ok
//======================================================================

int __thiscall sub_5B7F70(int this)
{
  int v3; // [esp+8h] [ebp-1Ch]
  __int16 v4; // [esp+Ch] [ebp-18h]
  int k; // [esp+10h] [ebp-14h]
  int j; // [esp+14h] [ebp-10h]
  int i; // [esp+18h] [ebp-Ch]
  int v8; // [esp+1Ch] [ebp-8h]
  int v9; // [esp+20h] [ebp-4h]

  v8 = 0;
  for ( i = 0; i < 5; ++i )
    v8 += sub_5B5FF0((char *)this, i);
  v9 = *(_DWORD *)(*(_DWORD *)(this + 1404) + 2060) - v8;
  for ( j = 0; j < 5; ++j )
  {
    for ( k = *(_DWORD *)(*(_DWORD *)(this + 1404) + 2060) - 1; k > 0; --k )
    {
      v3 = v8 + sub_62FBF0(v9);
      v4 = *(_WORD *)(*(_DWORD *)(this + 1404) + 2 * v3 + 4);
      *(_WORD *)(*(_DWORD *)(this + 1404) + 2 * v3 + 4) = *(_WORD *)(*(_DWORD *)(this + 1404) + 2 * k + 4);
      *(_WORD *)(*(_DWORD *)(this + 1404) + 2 * k + 4) = v4;
    }
  }
  return sub_6436A0(*(_DWORD *)(*(_DWORD *)(this + 1404) + 2060) - 1);
}


//======================================================================
// sub_5B8090
// entry 005b8090  size 350  status ok
//======================================================================

int __thiscall sub_5B8090(char *this, int a2, int a3)
{
  __int16 v3; // ax
  int result; // eax
  int v5; // [esp-8h] [ebp-28h]
  int v6; // [esp-4h] [ebp-24h]
  int v8; // [esp+8h] [ebp-18h]
  int v9; // [esp+1Ch] [ebp-4h]

  if ( a3 == -1 )
    a3 = sub_5B4E50(this, a2);
  v9 = sub_5B58F0(a2);
  v3 = sub_5B5C60(this, a2, a3, 1);
  sub_5B7340(this, a2, v9, 0, v3);
  sub_5B7340(this, a2, a3, 1, 0);
  sub_5B7090(this, a2, v9);
  v8 = *((_DWORD *)this + a2 + 352);
  v6 = -*(_DWORD *)(v8 + 32 * a2 + 76);
  v5 = -*(_DWORD *)(v8 + 32 * a2 + 72);
  sub_5DCB00(a2);
  sub_5D5CF0(v5, v6);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, int))(**((_DWORD **)this + a2 + 352) + 184))(
    *((_DWORD *)this + a2 + 352),
    *(_DWORD *)(*((_DWORD *)this + a2 + 352) + 32 * a2 + 72),
    *(_DWORD *)(*((_DWORD *)this + a2 + 352) + 32 * a2 + 76),
    a2,
    v9);
  result = sub_5B5F60(this, a2, v9, 0);
  if ( result == 1 )
    return sub_5B7480(this, a2, 1);
  return result;
}


//======================================================================
// sub_5B81F0
// entry 005b81f0  size 243  status ok
//======================================================================

int __thiscall sub_5B81F0(_BYTE *this, int a2)
{
  int result; // eax
  int v4; // [esp+10h] [ebp-Ch]
  int v5; // [esp+14h] [ebp-8h]
  int v6; // [esp+18h] [ebp-4h]

  v4 = *((_DWORD *)this + a2 + 352);
  v5 = *(_DWORD *)(v4 + 32 * a2 + 72);
  v6 = *(_DWORD *)(v4 + 32 * a2 + 76);
  sub_64C560(0.5);
  sub_5DCB00(a2);
  sub_5D5CF0(v5, v6);
  (*(void (__thiscall **)(_DWORD, int, int, int, _DWORD))(**((_DWORD **)this + a2 + 352) + 184))(
    *((_DWORD *)this + a2 + 352),
    v5,
    v6,
    a2,
    0);
  sub_5DCB00(a2);
  sub_5D5FB0(-v5, -v6);
  sub_5B71A0(this, a2, 0, 5);
  result = sub_5DCB00(a2);
  *(_BYTE *)(result + 1186) = 1;
  return result;
}


//======================================================================
// sub_5B82F0
// entry 005b82f0  size 120  status ok
//======================================================================

bool __thiscall sub_5B82F0(char *this, int a2, int a3)
{
  int v3; // esi
  char v5; // [esp+4h] [ebp-8h]

  if ( a3 == -1 )
    a3 = sub_5B4E50(this, a2);
  v5 = 0;
  if ( sub_5B5830(this, a2, a3) == 2 )
  {
    v3 = sub_5B5F60(this, a2, a3, 0);
    if ( v3 == sub_5B5F60(this, a2, a3, 1) )
      return 1;
  }
  return v5;
}


//======================================================================
// sub_5B8430
// entry 005b8430  size 185  status ok
//======================================================================

int __thiscall sub_5B8430(_DWORD *this)
{
  int result; // eax
  int v2; // esi
  int v3; // eax
  _DWORD v5[7]; // [esp+8h] [ebp-2Ch]
  _DWORD v6[4]; // [esp+24h] [ebp-10h]

  v5[0] = 5;
  v5[1] = 5;
  v5[2] = 6;
  v5[3] = 5;
  v5[4] = 2;
  v5[5] = 5;
  v5[6] = 3;
  v6[0] = 1;
  v6[1] = 2;
  v6[2] = 4;
  v6[3] = 6;
  result = (unsigned __int8)sub_5DA830(dword_793600);
  if ( !(_BYTE)result )
  {
    v2 = sub_5B58A0(this);
    result = sub_5B5FB0(-1);
    if ( v2 != v6[*(char *)(result + 9)] )
    {
      v3 = sub_5B5FB0(-1);
      sub_642E70(v5[v6[*(char *)(v3 + 9)]]);
      return sub_5B7EF0(this);
    }
  }
  return result;
}


//======================================================================
// sub_5B84F0
// entry 005b84f0  size 41  status ok
//======================================================================

char __thiscall sub_5B84F0(_BYTE *this, int a2, int a3, int a4)
{
  return *(this + 280 * a2 + 22 * a3 + a4 + 4);
}


//======================================================================
// sub_5B8520
// entry 005b8520  size 29  status ok
//======================================================================

char __thiscall sub_5B8520(_BYTE *this, int a2)
{
  return *(this + 280 * a2 + 102);
}


//======================================================================
// sub_5B8540
// entry 005b8540  size 47  status ok
//======================================================================

char sub_5B8540()
{
  if ( (unsigned __int8)sub_5DA830(dword_793600) )
    return 1;
  else
    return *(_BYTE *)sub_5B5FB0(-1);
}


//======================================================================
// sub_5B8570
// entry 005b8570  size 48  status ok
//======================================================================

char sub_5B8570()
{
  if ( (unsigned __int8)sub_5DA830(dword_793600) )
    return 1;
  else
    return *(_BYTE *)(sub_5B5FB0(-1) + 1);
}


//======================================================================
// sub_5B85E0
// entry 005b85e0  size 818  status ok
//======================================================================

int __thiscall sub_5B85E0(void *this, int *a2, int a3, int a4)
{
  int result; // eax
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // [esp-8h] [ebp-2Ch]
  int v15; // [esp-8h] [ebp-2Ch]
  int v16; // [esp-4h] [ebp-28h]
  int v17; // [esp-4h] [ebp-28h]
  int v19; // [esp+8h] [ebp-1Ch] BYREF
  _DWORD v20[2]; // [esp+10h] [ebp-14h] BYREF
  int v21; // [esp+18h] [ebp-Ch] BYREF
  int v22; // [esp+20h] [ebp-4h]

  v22 = sub_5B4F00((_DWORD *)dword_793604);
  result = sub_5DCB00(v22);
  if ( !result )
    return result;
  sub_5CB880(&v21, v22);
  sub_5CB880(v20, v22);
  sub_5CB880(&v19, v22);
  if ( !*a2 )
  {
    sub_5DCB00(v22);
    sub_5D5DE0(a2);
  }
  if ( !*a2 )
  {
    *a2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793600 + 688))(dword_793600);
    v16 = a2[1];
    v14 = *a2;
    sub_5DCB00(v22);
    sub_5D5E10(v14, v16);
  }
  if ( *a2 <= 0 )
  {
    if ( *a2 < 0 )
    {
      if ( this == *(void **)(dword_793604 + 4 * v22 + 1588) && *a2 + v19 < 1
        || this == *(void **)(dword_793604 + 4 * v22 + 1408)
        && (v12 = *a2 + v19, v12 < (*(int (__thiscall **)(int))(*(_DWORD *)dword_793600 + 688))(dword_793600)) )
      {
        *a2 = -v19;
      }
      if ( this == *(void **)(dword_793604 + 4 * v22 + 1408) )
      {
        v13 = *a2 + v21;
        if ( v13 < (*(int (__thiscall **)(int))(*(_DWORD *)dword_793600 + 688))(dword_793600) && v20[0] > 0 )
        {
          v17 = v20[1];
          v15 = v20[0];
          sub_5DCB00(v22);
          sub_5D5CF0(v15, v17);
          (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793604 + 4 * v22 + 1588) + 188))(
            *(_DWORD *)(dword_793604 + 4 * v22 + 1588),
            v22,
            0);
        }
      }
    }
    goto LABEL_31;
  }
  if ( this == *(void **)(dword_793604 + 4 * v22 + 1588) )
  {
    *a2 = 1 - v19;
  }
  else
  {
    v5 = *a2 + v19;
    if ( v5 < (*(int (__thiscall **)(int))(*(_DWORD *)dword_793600 + 688))(dword_793600) )
    {
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793600 + 688))(dword_793600);
      *a2 = v6 - v19;
    }
  }
  v7 = sub_5DCB00(v22);
  if ( *a2 > sub_5D5A50(v7) )
  {
    v8 = sub_5DCB00(v22);
    *a2 = sub_5D5A50(v8);
  }
  v9 = *a2 + v19;
  if ( v9 > (*(int (__thiscall **)(int))(*(_DWORD *)dword_793600 + 692))(dword_793600) )
  {
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793600 + 692))(dword_793600);
    *a2 = v10 - v19;
  }
  if ( this != *(void **)(dword_793604 + 4 * v22 + 1588) || (result = *a2 + v19, result >= 1) )
  {
    if ( this != *(void **)(dword_793604 + 4 * v22 + 1408)
      || (v11 = *a2 + v19,
          result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793600 + 688))(dword_793600),
          v11 >= result) )
    {
LABEL_31:
      result = (int)a2;
      if ( *a2 )
        return sub_5CBA10(a2, a3, 0);
    }
  }
  return result;
}


//======================================================================
// sub_5B8920
// entry 005b8920  size 264  status ok
//======================================================================

bool __thiscall sub_5B8920(pairNode *this)
{
  bool v3; // [esp+4h] [ebp-28h]
  CImageDisplay *v5; // [esp+14h] [ebp-18h]
  _BYTE v6[8]; // [esp+20h] [ebp-Ch] BYREF
  int v7; // [esp+28h] [ebp-4h]

  if ( sub_5B4F00((_DWORD *)dword_793604) == -1 )
    return 0;
  v5 = (CImageDisplay *)sub_5B4ED0((_DWORD *)dword_793604);
  v3 = CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 3;
  if ( !v3 || *(_BYTE *)(sub_5B4ED0((_DWORD *)dword_793604) + 1184) )
    return 0;
  v7 = sub_5B4F00((_DWORD *)dword_793604);
  return pairNode::raw_length(this) == v7
      && (this == *(pairNode **)(dword_793604 + 4 * v7 + 1408)
       || this == *(pairNode **)(dword_793604 + 4 * v7 + 1588) && *(int *)sub_5CB880(v6, v7) > 0);
}


//======================================================================
// sub_5B8A30
// entry 005b8a30  size 125  status ok
//======================================================================

void __thiscall sub_5B8A30(void *this, unsigned int a2, int a3)
{
  if ( dword_7935F8 && (!sub_5B6660((_BYTE *)dword_793604, a2) || sub_5B5010((char *)dword_793604, a2, 1) != -1) )
  {
    if ( this == *(void **)(dword_793604 + 4 * a2 + 1588) )
      sub_5A8210((_DWORD **)dword_7935F8, a2, 101);
    else
      sub_5A8210((_DWORD **)dword_7935F8, a2, a3);
  }
}


//======================================================================
// sub_5B8AB0
// entry 005b8ab0  size 1288  status ok
//======================================================================

int __thiscall sub_5B8AB0(_QWORD *this, __int64 a2, int a3, int a4, int a5)
{
  int v5; // eax
  int result; // eax
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // edx
  _DWORD *v10; // eax
  int v11; // edx
  __int64 v12; // [esp+0h] [ebp-78h]
  __int64 v13; // [esp+0h] [ebp-78h]
  __int64 v14; // [esp+0h] [ebp-78h]
  __int64 v15; // [esp+0h] [ebp-78h]
  _DWORD *v16; // [esp+Ch] [ebp-6Ch]
  _BYTE v18[8]; // [esp+20h] [ebp-58h] BYREF
  __int64 v19; // [esp+28h] [ebp-50h]
  __int64 v20; // [esp+30h] [ebp-48h]
  _BYTE v21[8]; // [esp+38h] [ebp-40h] BYREF
  __int64 v22; // [esp+40h] [ebp-38h]
  __int64 v23; // [esp+48h] [ebp-30h]
  __int64 v24; // [esp+50h] [ebp-28h]
  __int64 v25; // [esp+58h] [ebp-20h]
  double v26; // [esp+60h] [ebp-18h]
  __int64 v27; // [esp+68h] [ebp-10h]
  __int64 v28; // [esp+70h] [ebp-8h]

  v5 = sub_5DCB00(a2);
  result = sub_5D5A50(v5);
  if ( result < 1000000000 )
  {
    v24 = sub_64C8A0(0, 0);
    v25 = v24;
    v23 = sub_64C8A0(0, 0);
    v27 = v23;
    v26 = (double)a4 / (double)a5;
    if ( this == *(_QWORD **)(dword_793604 + 4 * a2 + 1408) )
    {
      v28 = *(this + 4 * (_DWORD)a2 + HIDWORD(a2) + 9);
      if ( a3 )
      {
        if ( a3 == 1 )
        {
          if ( *(int *)(sub_5DCB00(a2) + 1192) < 0 )
            *(_DWORD *)(sub_5DCB00(a2) + 1192) = 0;
          v7 = sub_5DCB00(a2);
          sub_5D7540(v7);
          v25 = v28;
          sub_64C560(v26);
          if ( (int)v28 > 1000000000 )
            v25 = 1000000000;
          v8 = (_DWORD *)sub_64C5C0(
                           v21,
                           *((_DWORD *)this + 8 * a2 + 2 * HIDWORD(a2) + 18),
                           *((_DWORD *)this + 8 * a2 + 2 * HIDWORD(a2) + 19));
          v9 = v8[1];
          LODWORD(v27) = *v8;
          HIDWORD(v27) = v9;
          if ( (int)v27 >= 1000000000 )
          {
            v20 = sub_64C8A0(1000000000, 0);
            v27 = v20;
          }
          v12 = v27;
          sub_5DCB00(a2);
          sub_5D5CF0(v12, HIDWORD(v12));
          v13 = v25;
          sub_5DCB00(a2);
          sub_5D5FB0(v13, HIDWORD(v13));
          return (*(int (__thiscall **)(_QWORD *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 184))(
                   this,
                   v27,
                   HIDWORD(v27),
                   a2,
                   HIDWORD(a2));
        }
        else if ( a3 == 2 )
        {
          sub_5DCB00(a2);
          return sub_5D5CF0(v28, HIDWORD(v28));
        }
        else
        {
          return sub_5E9F20((char)"false", "..\\Casino\\royalmatchstate.cpp", 2490);
        }
      }
      else
      {
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(dword_7935F8 + 4 * a2 + 24) + 192))(
          *(_DWORD *)(dword_7935F8 + 4 * a2 + 24),
          a2,
          HIDWORD(a2));
        if ( *(int *)(sub_5DCB00(a2) + 1192) > 0 )
          *(_DWORD *)(sub_5DCB00(a2) + 1192) = 0;
        v16 = (_DWORD *)(sub_5DCB00(a2) + 1192);
        --*v16;
        LODWORD(v25) = -(int)v28;
        HIDWORD(v25) = -HIDWORD(v28);
        sub_5DCB00(a2);
        sub_5D5FB0(-(int)v28, -HIDWORD(v28));
        v22 = sub_64C8A0(0, 0);
        return (*(int (__thiscall **)(_QWORD *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 184))(
                 this,
                 v22,
                 HIDWORD(v22),
                 a2,
                 HIDWORD(a2));
      }
    }
    else if ( this == *(_QWORD **)(dword_793604 + 4 * a2 + 1588) )
    {
      v28 = *(this + 4 * (_DWORD)a2 + HIDWORD(a2) + 9);
      if ( a3 )
      {
        if ( a3 == 1 )
        {
          v25 = v28;
          sub_64C560(v26);
          if ( (int)v28 > 1000000000 )
            v25 = 1000000000;
          v10 = (_DWORD *)sub_64C5C0(
                            v18,
                            *((_DWORD *)this + 8 * a2 + 2 * HIDWORD(a2) + 18),
                            *((_DWORD *)this + 8 * a2 + 2 * HIDWORD(a2) + 19));
          v11 = v10[1];
          LODWORD(v27) = *v10;
          HIDWORD(v27) = v11;
          if ( (int)v27 >= 1000000000 )
            v27 = sub_64C8A0(1000000000, 0);
          v14 = v27;
          sub_5DCB00(a2);
          sub_5D5CF0(v14, HIDWORD(v14));
          v15 = v25;
          sub_5DCB00(a2);
          sub_5D5FB0(v15, HIDWORD(v15));
          return (*(int (__thiscall **)(_QWORD *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 184))(
                   this,
                   v27,
                   HIDWORD(v27),
                   a2,
                   HIDWORD(a2));
        }
        else
        {
          return sub_5E9F20((char)"false", "..\\Casino\\royalmatchstate.cpp", 2524);
        }
      }
      else
      {
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(dword_7935F8 + 4 * a2 + 72) + 192))(
          *(_DWORD *)(dword_7935F8 + 4 * a2 + 72),
          a2,
          HIDWORD(a2));
        LODWORD(v25) = -(int)v28;
        HIDWORD(v25) = -HIDWORD(v28);
        sub_5DCB00(a2);
        sub_5D5FB0(-(int)v28, -HIDWORD(v28));
        v19 = sub_64C8A0(0, 0);
        return (*(int (__thiscall **)(_QWORD *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 184))(
                 this,
                 v19,
                 HIDWORD(v19),
                 a2,
                 HIDWORD(a2));
      }
    }
    else
    {
      return sub_5E9F20((char)"false", "..\\Casino\\royalmatchstate.cpp", 2530);
    }
  }
  return result;
}


//======================================================================
// sub_5B9020
// entry 005b9020  size 164  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_5B9020(ATL::CCRTHeap *this)
{
  char v3; // [esp+67h] [ebp-15h] BYREF
  char *v4; // [esp+68h] [ebp-14h]
  int v5; // [esp+78h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  v5 = 0;
  *(_DWORD *)this = &InfoScreenController::`vftable';
  v4 = &v3;
  sub_5BBCE0(0);
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  return this;
}


//======================================================================
// sub_5B90D0
// entry 005b90d0  size 588  status ok
//======================================================================

void __thiscall sub_5B90D0(CNoTrackObject *this)
{
  unsigned int v1; // [esp+4h] [ebp-88h]
  unsigned int v2; // [esp+8h] [ebp-84h]
  int v3; // [esp+Ch] [ebp-80h]
  unsigned int v4; // [esp+10h] [ebp-7Ch]
  int v5; // [esp+14h] [ebp-78h]
  int v7; // [esp+5Ch] [ebp-30h]
  int v8; // [esp+64h] [ebp-28h]
  int v9; // [esp+70h] [ebp-1Ch]
  unsigned int j; // [esp+74h] [ebp-18h]
  unsigned int i; // [esp+7Ch] [ebp-10h]

  *(_DWORD *)this = &InfoScreenController::`vftable';
  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)this + 2) ? (*((_DWORD *)this + 3) - *((_DWORD *)this + 2)) >> 4 : 0;
    if ( (int)i >= v5 )
      break;
    v9 = sub_5B9320(i);
    if ( v9 )
    {
      if ( *((_DWORD *)this + 2) )
        v4 = (*((_DWORD *)this + 3) - *((_DWORD *)this + 2)) >> 4;
      else
        v4 = 0;
      if ( i >= v4 )
        invalid_parameter_noinfo();
      v8 = *((_DWORD *)this + 2) + 16 * i;
      if ( *(_DWORD *)(v8 + 4) )
        v3 = (*(_DWORD *)(v8 + 8) - *(_DWORD *)(v8 + 4)) >> 2;
      else
        v3 = 0;
      for ( j = 0; (int)j < v3; ++j )
      {
        if ( *((_DWORD *)this + 2) )
          v2 = (*((_DWORD *)this + 3) - *((_DWORD *)this + 2)) >> 4;
        else
          v2 = 0;
        if ( i >= v2 )
          invalid_parameter_noinfo();
        v7 = *((_DWORD *)this + 2) + 16 * i;
        if ( *(_DWORD *)(v7 + 4) )
          v1 = (*(_DWORD *)(v7 + 8) - *(_DWORD *)(v7 + 4)) >> 2;
        else
          v1 = 0;
        if ( j >= v1 )
          invalid_parameter_noinfo();
        sub_6104C0(*(_DWORD *)(*(_DWORD *)(v7 + 4) + 4 * j), v9);
      }
    }
  }
  sub_6104C0(3234087, *((_DWORD *)this + 5));
  sub_6104C0(3234089, *((_DWORD *)this + 5));
  sub_6104C0(3234088, *((_DWORD *)this + 5));
  sub_5B9F10((char *)this + 4);
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_5B9320
// entry 005b9320  size 43  status ok
//======================================================================

int __thiscall sub_5B9320(_DWORD *this, int a2)
{
  if ( !*(this + 5) )
    *(this + 5) = *((_DWORD *)dword_162EE84 + 5);
  return *(this + 5);
}


//======================================================================
// sub_5B9350
// entry 005b9350  size 240  status ok
//======================================================================

Concurrency::details::ContextBase *__thiscall sub_5B9350(_DWORD *this, _DWORD *a2)
{
  Concurrency::details::ContextBase *result; // eax
  int v3; // eax
  char v5; // [esp+7h] [ebp-9h]
  int v6; // [esp+Ch] [ebp-4h]

  result = dword_162EE84;
  v5 = 0;
  v6 = 0;
  while ( !v5 )
  {
    v3 = sub_5B9320(this, v6);
    sub_610450(a2, v3);
    while ( a2[1] )
    {
      if ( !a2[2] || !"all info views must have an ID to be tracked!" )
        sub_5E9F20(
          (char)"inSetupList->mID && \"all info views must have an ID to be tracked!\"",
          "..\\Casino\\InfoScreenController.cpp",
          83);
      sub_5B9440(a2[2], v6);
      if ( a2[6] >= *(this + 9) )
        *(this + 9) = a2[6] + 1;
      a2 = (_DWORD *)((char *)a2 + *a2);
    }
    if ( v6 )
      sub_5B9900(v6, 0);
    a2 = (_DWORD *)((char *)a2 + *a2);
    if ( !a2[1] )
      v5 = 1;
    result = (Concurrency::details::ContextBase *)++v6;
  }
  return result;
}


//======================================================================
// sub_5B9440
// entry 005b9440  size 140  status ok
//======================================================================

int __thiscall sub_5B9440(_DWORD *this, char a2, unsigned int a3)
{
  unsigned int v4; // [esp+0h] [ebp-CCh]

  sub_5B9EC0(a3 + 1);
  if ( *(this + 2) )
    v4 = (*(this + 3) - *(this + 2)) >> 4;
  else
    v4 = 0;
  if ( a3 >= v4 )
    invalid_parameter_noinfo();
  return sub_5BA090(&a2);
}


//======================================================================
// sub_5B94D0
// entry 005b94d0  size 31  status ok
//======================================================================

int __thiscall sub_5B94D0(_DWORD *this, int a2, int a3)
{
  *(this + 6) = a2;
  *(this + 7) = a3;
  return a3;
}


//======================================================================
// sub_5B94F0
// entry 005b94f0  size 662  status ok
//======================================================================

int __thiscall sub_5B94F0(_DWORD *this)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-54h]
  int v3; // [esp+4h] [ebp-50h]
  int v4; // [esp+8h] [ebp-4Ch]
  int v5; // [esp+Ch] [ebp-48h]
  int v6; // [esp+10h] [ebp-44h]
  int v7; // [esp+14h] [ebp-40h]
  int v8; // [esp+18h] [ebp-3Ch]
  int i; // [esp+44h] [ebp-10h]

  if ( !sub_5FB300(3234087) )
  {
    if ( operator new(0x1DCu) )
      v8 = Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v2);
    else
      v8 = 0;
    sub_5F9DE0(v8, 3234087, 3234087, 0, 0, *(this + 9), &Source, -1, -1, -1, -1, 0);
  }
  if ( !sub_5FB300(3234089) )
  {
    v7 = *(this + 2) ? (*(this + 3) - *(this + 2)) >> 4 : 0;
    if ( v7 > 1 )
    {
      if ( operator new(0x1DCu) )
        v6 = Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v2);
      else
        v6 = 0;
      sub_5F9DE0(v6, 3234089, 3234089, 0, 0, *(this + 9), &Source, -1, -1, -1, -1, 0);
    }
  }
  if ( !sub_5FB300(3234088) )
  {
    v5 = *(this + 2) ? (*(this + 3) - *(this + 2)) >> 4 : 0;
    if ( v5 > 1 )
    {
      if ( operator new(0x1DCu) )
        v4 = Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v2);
      else
        v4 = 0;
      sub_5F9DE0(v4, 3234088, 3234088, 0, 0, *(this + 9), &Source, -1, -1, -1, -1, 0);
    }
  }
  for ( i = 0; ; ++i )
  {
    result = (int)(this + 1);
    if ( *(this + 2) )
    {
      result = (*(this + 3) - *(this + 2)) >> 4;
      v3 = result;
    }
    else
    {
      v3 = 0;
    }
    if ( i >= v3 )
      break;
    sub_5B9900(i, i == *(this + 8));
  }
  return result;
}


//======================================================================
// sub_5B97A0
// entry 005b97a0  size 340  status ok
//======================================================================

char __thiscall sub_5B97A0(_DWORD *this, int a2)
{
  int v3; // [esp+0h] [ebp-28h]
  int v4; // [esp+4h] [ebp-24h]
  int v6; // [esp+24h] [ebp-4h]

  v6 = *(this + 8);
  if ( a2 == 3234087 )
  {
    if ( *(this + 6) )
      ((void (__cdecl *)(_DWORD))*(this + 6))(*(this + 7));
    if ( this )
      (*(void (__thiscall **)(_DWORD *, int))*this)(this, 1);
    return 1;
  }
  else
  {
    if ( a2 == 3234088 )
    {
      if ( --v6 < 0 )
        v6 = 0;
    }
    else if ( a2 == 3234089 )
    {
      ++v6;
      v4 = *(this + 2) ? (*(this + 3) - *(this + 2)) >> 4 : 0;
      if ( v6 >= v4 )
      {
        if ( *(this + 2) )
          v3 = (*(this + 3) - *(this + 2)) >> 4;
        else
          v3 = 0;
        v6 = v3 - 1;
      }
    }
    if ( v6 == *(this + 8) )
    {
      return 0;
    }
    else
    {
      sub_5B9900(*(this + 8), 0);
      *(this + 8) = v6;
      sub_5B9900(*(this + 8), 1);
      return 1;
    }
  }
}


//======================================================================
// sub_5B9900
// entry 005b9900  size 417  status ok
//======================================================================

_DWORD *__fastcall sub_5B9900(_DWORD *a1, int a2, int a3, char a4)
{
  _DWORD *result; // eax
  unsigned int v5; // [esp+0h] [ebp-54h]
  int v6; // [esp+4h] [ebp-50h]
  _DWORD *v8; // [esp+24h] [ebp-30h]
  int v9; // [esp+40h] [ebp-14h] BYREF
  _DWORD *v10; // [esp+44h] [ebp-10h]
  int v11; // [esp+48h] [ebp-Ch]
  int v12; // [esp+4Ch] [ebp-8h] BYREF
  _DWORD *v13; // [esp+50h] [ebp-4h]

  result = a1 + 1;
  if ( a1[2] )
  {
    result = a1 + 1;
    v6 = (a1[3] - a1[2]) >> 4;
  }
  else
  {
    v6 = 0;
  }
  if ( a3 < v6 )
  {
    v8 = a1 + 1;
    if ( a1[2] )
      v5 = (a1[3] - a1[2]) >> 4;
    else
      v5 = 0;
    if ( a3 >= v5 )
      invalid_parameter_noinfo();
    v11 = v8[1] + 16 * a3;
    sub_5B9320(a1, a3);
    sub_5B9FD0(&v12);
    sub_5BA030(&v9);
    while ( 1 )
    {
      if ( !v12 || v12 != v9 )
        invalid_parameter_noinfo();
      result = (_DWORD *)(v13 != v10);
      if ( v13 == v10 )
        break;
      if ( !v12 )
        invalid_parameter_noinfo();
      if ( (unsigned int)v13 >= *(_DWORD *)(v12 + 8) )
        invalid_parameter_noinfo();
      if ( sub_5FB2B0(*v13) )
        sub_5F5460(a4);
      if ( !v12 )
        invalid_parameter_noinfo();
      if ( (unsigned int)v13 >= *(_DWORD *)(v12 + 8) )
        invalid_parameter_noinfo();
      if ( sub_5FB550(*v13) )
        sub_5F5460(a4);
      sub_5BA190(&v12);
    }
  }
  return result;
}


//======================================================================
// sub_5B9EA0
// entry 005b9ea0  size 21  status ok
//======================================================================

int __thiscall sub_5B9EA0(void *this)
{
  return sub_5B9F10(this);
}


//======================================================================
// sub_5B9EC0
// entry 005b9ec0  size 72  status ok
//======================================================================

int __thiscall sub_5B9EC0(void *this, int a2)
{
  char v3; // [esp-10h] [ebp-118h] BYREF
  int v4; // [esp-Ch] [ebp-114h]
  int v5; // [esp-8h] [ebp-110h]
  int v6; // [esp-4h] [ebp-10Ch]
  char *v7; // [esp+0h] [ebp-108h]
  void *v8; // [esp+4h] [ebp-104h]
  char *v9; // [esp+9Ch] [ebp-6Ch]
  char v10; // [esp+FBh] [ebp-Dh] BYREF
  char *v11; // [esp+FCh] [ebp-Ch]
  char *v12; // [esp+104h] [ebp-4h]

  v8 = this;
  v12 = &v3;
  v9 = &v3;
  v11 = &v10;
  sub_5BBD80(0);
  v7 = v9;
  return sub_5BA1E0(a2, v3, v4, v5, v6);
}


//======================================================================
// sub_5B9F10
// entry 005b9f10  size 191  status ok
//======================================================================

int __thiscall sub_5B9F10(int this)
{
  char *v3; // [esp+1Ch] [ebp-24h]
  char *i; // [esp+20h] [ebp-20h]

  if ( *(_DWORD *)(this + 4) )
  {
    v3 = *(char **)(this + 8);
    for ( i = *(char **)(this + 4); i != v3; i += 16 )
      sub_5BE450(i);
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  return this;
}


//======================================================================
// sub_5B9FD0
// entry 005b9fd0  size 87  status ok
//======================================================================

unsigned int **__thiscall sub_5B9FD0(unsigned int *this, unsigned int **a2)
{
  unsigned int v4; // [esp+4h] [ebp-4h]

  v4 = *(this + 1);
  *a2 = 0;
  if ( !this || *(this + 1) > v4 || v4 > *(this + 2) )
    invalid_parameter_noinfo();
  *a2 = this;
  a2[1] = (unsigned int *)v4;
  return a2;
}


//======================================================================
// sub_5BA030
// entry 005ba030  size 87  status ok
//======================================================================

unsigned int **__thiscall sub_5BA030(unsigned int *this, unsigned int **a2)
{
  unsigned int v4; // [esp+4h] [ebp-4h]

  v4 = *(this + 2);
  *a2 = 0;
  if ( !this || *(this + 1) > v4 || v4 > *(this + 2) )
    invalid_parameter_noinfo();
  *a2 = this;
  a2[1] = (unsigned int *)v4;
  return a2;
}


//======================================================================
// sub_5BA090
// entry 005ba090  size 256  status ok
//======================================================================

int __thiscall sub_5BA090(_DWORD *this, int a2)
{
  unsigned int v3; // [esp+0h] [ebp-78h]
  unsigned int v4; // [esp+4h] [ebp-74h]
  unsigned int v6; // [esp+30h] [ebp-48h]
  int v7; // [esp+34h] [ebp-44h]
  _BYTE v8[8]; // [esp+68h] [ebp-10h] BYREF
  _DWORD *v9; // [esp+70h] [ebp-8h]
  unsigned int v10; // [esp+74h] [ebp-4h]

  if ( *(this + 1) )
    v4 = (*(this + 2) - *(this + 1)) >> 2;
  else
    v4 = 0;
  if ( *(this + 1) )
    v3 = (*(this + 3) - *(this + 1)) >> 2;
  else
    v3 = 0;
  if ( v4 >= v3 )
  {
    v6 = *(this + 2);
    v9 = 0;
    if ( !this || *(this + 1) > v6 || v6 > *(this + 2) )
      invalid_parameter_noinfo();
    v9 = this;
    v10 = v6;
    return sub_5BA440(v8, this, v6, a2);
  }
  else
  {
    v7 = *(this + 2);
    sub_5C0910(v7, 1, a2);
    *(this + 2) = v7 + 4;
    return v7 + 4;
  }
}


//======================================================================
// sub_5BA190
// entry 005ba190  size 65  status ok
//======================================================================

_DWORD *__thiscall sub_5BA190(_DWORD *this)
{
  if ( !*this )
    invalid_parameter_noinfo();
  if ( *(this + 1) >= *(_DWORD *)(*this + 8) )
    invalid_parameter_noinfo();
  *(this + 1) += 4;
  return this;
}


//======================================================================
// sub_5BA1E0
// entry 005ba1e0  size 604  status ok
//======================================================================

int __thiscall sub_5BA1E0(_DWORD *this, unsigned int a2, char a3, int a4, int a5, int a6)
{
  unsigned int v7; // [esp+4h] [ebp-C8h]
  int v8; // [esp+8h] [ebp-C4h]
  unsigned int v9; // [esp+Ch] [ebp-C0h]
  unsigned int v11; // [esp+8Ch] [ebp-40h]
  unsigned int v12; // [esp+90h] [ebp-3Ch]
  unsigned int v13; // [esp+94h] [ebp-38h]
  _BYTE v14[8]; // [esp+98h] [ebp-34h] BYREF
  _DWORD *v15; // [esp+A0h] [ebp-2Ch]
  unsigned int v16; // [esp+A4h] [ebp-28h]
  _DWORD *v17; // [esp+A8h] [ebp-24h]
  unsigned int v18; // [esp+ACh] [ebp-20h]
  _DWORD *v19; // [esp+B0h] [ebp-1Ch]
  unsigned int v20; // [esp+B4h] [ebp-18h]
  _DWORD *v21; // [esp+B8h] [ebp-14h]
  unsigned int v22; // [esp+BCh] [ebp-10h]
  int v23; // [esp+C8h] [ebp-4h]

  v23 = 0;
  if ( *(this + 1) )
    v9 = (*(this + 2) - *(this + 1)) >> 4;
  else
    v9 = 0;
  if ( v9 >= a2 )
  {
    if ( *(this + 1) )
      v7 = (*(this + 2) - *(this + 1)) >> 4;
    else
      v7 = 0;
    if ( a2 < v7 )
    {
      v12 = *(this + 2);
      v19 = 0;
      if ( !this || *(this + 1) > v12 || v12 > *(this + 2) )
        invalid_parameter_noinfo();
      v19 = this;
      v20 = v12;
      v11 = *(this + 1);
      v17 = 0;
      if ( !this || *(this + 1) > v11 || v11 > *(this + 2) )
        invalid_parameter_noinfo();
      v17 = this;
      v18 = v11;
      sub_5BBA90(a2);
      v15 = this;
      v16 = v11;
      sub_5BA570(v14, this, v11, v19, v20);
    }
  }
  else
  {
    if ( *(this + 1) )
      v8 = (*(this + 2) - *(this + 1)) >> 4;
    else
      v8 = 0;
    v13 = *(this + 2);
    v21 = 0;
    if ( !this || *(this + 1) > v13 || v13 > *(this + 2) )
      invalid_parameter_noinfo();
    v21 = this;
    v22 = v13;
    sub_5BA640(this, v13, a2 - v8, &a3);
  }
  v23 = -1;
  return sub_5BE450(&a3);
}


//======================================================================
// sub_5BA440
// entry 005ba440  size 291  status ok
//======================================================================

unsigned int **__thiscall sub_5BA440(unsigned int *this, unsigned int **a2, unsigned int *a3, int a4, int a5)
{
  int v6; // [esp+0h] [ebp-30h]
  int v7; // [esp+4h] [ebp-2Ch]
  unsigned int v9; // [esp+14h] [ebp-1Ch]
  unsigned int v10; // [esp+18h] [ebp-18h]

  if ( *(this + 1) )
    v7 = (int)(*(this + 2) - *(this + 1)) >> 2;
  else
    v7 = 0;
  if ( v7 )
  {
    v10 = *(this + 1);
    if ( !this || v10 > *(this + 2) )
      invalid_parameter_noinfo();
    if ( !a3 || a3 != this )
      invalid_parameter_noinfo();
    v6 = (int)(a4 - v10) >> 2;
  }
  else
  {
    v6 = 0;
  }
  sub_5BAFC0(a3, a4, 1, a5);
  v9 = *(this + 1);
  if ( !this || v9 > *(this + 2) )
    invalid_parameter_noinfo();
  sub_5BEEB0(v6);
  *a2 = this;
  a2[1] = (unsigned int *)v9;
  return a2;
}


//======================================================================
// sub_5BA570
// entry 005ba570  size 202  status ok
//======================================================================

_DWORD *__thiscall sub_5BA570(char **this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  char *v8; // [esp+10h] [ebp-58h]
  char *i; // [esp+14h] [ebp-54h]
  char *v10; // [esp+64h] [ebp-4h]

  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v10 = (char *)sub_5BBB00(a6, *(this + 2), a4);
    v8 = *(this + 2);
    for ( i = v10; i != v8; i += 16 )
      sub_5BE450(i);
    *(this + 2) = v10;
  }
  *a2 = a3;
  a2[1] = a4;
  return a2;
}


//======================================================================
// sub_5BA640
// entry 005ba640  size 2432  status ok
//======================================================================

int __thiscall sub_5BA640(void *this, int a2, int a3, unsigned int a4, int a5)
{
  int v5; // eax
  _DWORD v7[4]; // [esp+0h] [ebp-284h] BYREF
  int v8; // [esp+10h] [ebp-274h]
  char *v9; // [esp+14h] [ebp-270h]
  int v10; // [esp+18h] [ebp-26Ch]
  int v11; // [esp+1Ch] [ebp-268h]
  unsigned int v12; // [esp+20h] [ebp-264h]
  int v13; // [esp+24h] [ebp-260h]
  int v14; // [esp+28h] [ebp-25Ch]
  int v15; // [esp+2Ch] [ebp-258h]
  int v16; // [esp+30h] [ebp-254h]
  int v17; // [esp+34h] [ebp-250h]
  void *v18; // [esp+38h] [ebp-24Ch]
  int v19; // [esp+58h] [ebp-22Ch]
  int v20; // [esp+5Ch] [ebp-228h]
  int i; // [esp+60h] [ebp-224h]
  int v22; // [esp+68h] [ebp-21Ch]
  int v23; // [esp+70h] [ebp-214h]
  int v24; // [esp+74h] [ebp-210h]
  int v25; // [esp+78h] [ebp-20Ch]
  int v26; // [esp+94h] [ebp-1F0h]
  int v27; // [esp+9Ch] [ebp-1E8h]
  char v28; // [esp+A4h] [ebp-1E0h]
  char v29; // [esp+A6h] [ebp-1DEh]
  char v30; // [esp+A7h] [ebp-1DDh]
  int v31; // [esp+A8h] [ebp-1DCh]
  int v32; // [esp+E0h] [ebp-1A4h]
  int v33; // [esp+E4h] [ebp-1A0h]
  int j; // [esp+E8h] [ebp-19Ch]
  int v35; // [esp+F0h] [ebp-194h]
  unsigned int v36; // [esp+128h] [ebp-15Ch]
  int v37; // [esp+12Ch] [ebp-158h]
  int v38; // [esp+130h] [ebp-154h]
  char v39; // [esp+135h] [ebp-14Fh]
  char v40; // [esp+136h] [ebp-14Eh]
  char v41; // [esp+137h] [ebp-14Dh]
  int v42; // [esp+138h] [ebp-14Ch]
  int v43; // [esp+13Ch] [ebp-148h]
  int v44; // [esp+140h] [ebp-144h]
  int v45; // [esp+144h] [ebp-140h]
  char v46; // [esp+14Bh] [ebp-139h]
  int v47; // [esp+14Ch] [ebp-138h]
  int v48; // [esp+150h] [ebp-134h]
  int v49; // [esp+158h] [ebp-12Ch]
  char v50; // [esp+15Dh] [ebp-127h]
  char v51; // [esp+15Eh] [ebp-126h]
  char v52; // [esp+15Fh] [ebp-125h]
  int v53; // [esp+160h] [ebp-124h]
  void *v54; // [esp+164h] [ebp-120h]
  void *v55; // [esp+168h] [ebp-11Ch]
  void *v56; // [esp+16Ch] [ebp-118h]
  void *v57; // [esp+170h] [ebp-114h]
  void *v58; // [esp+174h] [ebp-110h]
  void *v59; // [esp+178h] [ebp-10Ch]
  void *k; // [esp+17Ch] [ebp-108h]
  char v61; // [esp+19Ah] [ebp-EAh]
  char v62; // [esp+19Bh] [ebp-E9h]
  int v63; // [esp+1B0h] [ebp-D4h]
  char *v64; // [esp+1B4h] [ebp-D0h]
  int v65; // [esp+1B8h] [ebp-CCh]
  int v66; // [esp+1BCh] [ebp-C8h]
  char v67; // [esp+1C3h] [ebp-C1h]
  char *v68; // [esp+1C4h] [ebp-C0h]
  int v69; // [esp+1C8h] [ebp-BCh]
  int v70; // [esp+1D0h] [ebp-B4h]
  char v71; // [esp+1D5h] [ebp-AFh]
  char v72; // [esp+1D6h] [ebp-AEh]
  char v73; // [esp+1D7h] [ebp-ADh]
  char *v74; // [esp+1D8h] [ebp-ACh]
  char v75; // [esp+1DDh] [ebp-A7h]
  char v76; // [esp+1DEh] [ebp-A6h]
  char v77; // [esp+1DFh] [ebp-A5h]
  int v78; // [esp+1E0h] [ebp-A4h]
  void *v79; // [esp+1E4h] [ebp-A0h]
  int v80; // [esp+1E8h] [ebp-9Ch]
  int v81; // [esp+1ECh] [ebp-98h]
  char v82; // [esp+1F3h] [ebp-91h]
  void *v83; // [esp+1F4h] [ebp-90h]
  int v84; // [esp+1F8h] [ebp-8Ch]
  int v85; // [esp+200h] [ebp-84h]
  char v86; // [esp+205h] [ebp-7Fh]
  char v87; // [esp+206h] [ebp-7Eh]
  char v88; // [esp+207h] [ebp-7Dh]
  int v89; // [esp+208h] [ebp-7Ch]
  int v90; // [esp+250h] [ebp-34h]
  int v91; // [esp+254h] [ebp-30h]
  void *v92; // [esp+258h] [ebp-2Ch]
  char *v93; // [esp+25Ch] [ebp-28h]
  unsigned int v94; // [esp+260h] [ebp-24h]
  _BYTE v95[16]; // [esp+264h] [ebp-20h] BYREF
  _DWORD *v96; // [esp+274h] [ebp-10h]
  int v97; // [esp+280h] [ebp-4h]
  unsigned int v98; // [esp+294h] [ebp+10h]

  v96 = v7;
  v18 = this;
  sub_5BBCC0(v95);
  v97 = 0;
  sub_5BC040(a5);
  v97 = 1;
  if ( *((_DWORD *)v18 + 1) )
    v17 = (*((_DWORD *)v18 + 3) - *((_DWORD *)v18 + 1)) >> 4;
  else
    v17 = 0;
  v94 = v17;
  if ( a4 )
  {
    v90 = 0xFFFFFFF;
    v16 = 0xFFFFFFF;
    if ( *((_DWORD *)v18 + 1) )
      v15 = (*((_DWORD *)v18 + 2) - *((_DWORD *)v18 + 1)) >> 4;
    else
      v15 = 0;
    if ( v16 - v15 >= a4 )
    {
      if ( *((_DWORD *)v18 + 1) )
        v14 = (*((_DWORD *)v18 + 2) - *((_DWORD *)v18 + 1)) >> 4;
      else
        v14 = 0;
      if ( v94 >= a4 + v14 )
      {
        if ( (*((_DWORD *)v18 + 2) - a3) >> 4 >= a4 )
        {
          v91 = *((_DWORD *)v18 + 2);
          v31 = *((_DWORD *)v18 + 2);
          v5 = sub_5BBE20(v91 - 16 * a4, v91, v31, v18);
          *((_DWORD *)v18 + 2) = v5;
          v23 = v91;
          v24 = v91 - 16 * a4;
          v25 = a3;
          v30 = 0;
          v29 = v28;
          v27 = v24;
          v26 = a3;
          sub_5BBEA0(a3, v24, v91);
          v19 = a3 + 16 * a4;
          v20 = a3;
          v22 = v19;
          for ( i = a3; i != v22; i += 16 )
            sub_5BC040(v95);
        }
        else
        {
          v42 = *((_DWORD *)v18 + 2);
          v43 = a3 + 16 * a4;
          v44 = v42;
          v45 = a3;
          v52 = 0;
          v51 = v50;
          v49 = v42;
          v48 = a3;
          v46 = 0;
          v47 = v43;
          sub_5BC5D0(a3, v42, v43, v18);
          LOBYTE(v97) = 4;
          v36 = a4 - ((*((_DWORD *)v18 + 2) - a3) >> 4);
          v37 = *((_DWORD *)v18 + 2);
          v38 = v37;
          v41 = 0;
          v40 = v39;
          sub_5BBF70(v37, v36, v95);
          v97 = 1;
          *((_DWORD *)v18 + 2) += 16 * a4;
          v32 = *((_DWORD *)v18 + 2) - 16 * a4;
          v33 = a3;
          v35 = v32;
          for ( j = a3; j != v35; j += 16 )
            sub_5BC040(v95);
        }
      }
      else
      {
        v89 = 0xFFFFFFF;
        v13 = 0xFFFFFFF;
        if ( 0xFFFFFFF - (v94 >> 1) >= v94 )
          v12 = v94 + (v94 >> 1);
        else
          v12 = 0;
        v94 = v12;
        if ( *((_DWORD *)v18 + 1) )
          v11 = (*((_DWORD *)v18 + 2) - *((_DWORD *)v18 + 1)) >> 4;
        else
          v11 = 0;
        if ( v94 < a4 + v11 )
        {
          if ( *((_DWORD *)v18 + 1) )
            v10 = (*((_DWORD *)v18 + 2) - *((_DWORD *)v18 + 1)) >> 4;
          else
            v10 = 0;
          v94 = a4 + v10;
        }
        v92 = (void *)sub_5BBBD0(v94);
        v93 = (char *)v92;
        LOBYTE(v97) = 2;
        v78 = *((_DWORD *)v18 + 1);
        v79 = v92;
        v80 = a3;
        v81 = v78;
        v88 = 0;
        v87 = v86;
        v85 = a3;
        v84 = v78;
        v82 = 0;
        v83 = v92;
        v9 = (char *)sub_5BC5D0(v78, a3, v92, v18);
        v93 = v9;
        v74 = v9;
        v77 = 0;
        v76 = v75;
        sub_5BBF70(v9, a4, v95);
        v93 += 16 * a4;
        v63 = *((_DWORD *)v18 + 2);
        v64 = v93;
        v65 = v63;
        v66 = a3;
        v73 = 0;
        v72 = v71;
        v70 = v63;
        v69 = a3;
        v67 = 0;
        v68 = v93;
        sub_5BC5D0(a3, v63, v93, v18);
        v97 = 1;
        if ( *((_DWORD *)v18 + 1) )
          v8 = (*((_DWORD *)v18 + 2) - *((_DWORD *)v18 + 1)) >> 4;
        else
          v8 = 0;
        v98 = v8 + a4;
        if ( *((_DWORD *)v18 + 1) )
        {
          v55 = (void *)*((_DWORD *)v18 + 2);
          v56 = (void *)*((_DWORD *)v18 + 1);
          v57 = v55;
          v58 = v56;
          v62 = v61;
          v59 = v55;
          for ( k = v56; k != v59; k = (char *)k + 16 )
            sub_5BE450(k);
          v53 = (*((_DWORD *)v18 + 3) - *((_DWORD *)v18 + 1)) >> 4;
          v54 = (void *)*((_DWORD *)v18 + 1);
          operator delete(v54);
        }
        *((_DWORD *)v18 + 3) = (char *)v92 + 16 * v94;
        *((_DWORD *)v18 + 2) = (char *)v92 + 16 * v98;
        *((_DWORD *)v18 + 1) = v92;
      }
    }
    else
    {
      sub_5BB750(v7[0], v7[1]);
    }
  }
  v97 = -1;
  return sub_5BE450(v95);
}


//======================================================================
// sub_5BAFC0
// entry 005bafc0  size 1925  status ok
//======================================================================

_DWORD *__thiscall sub_5BAFC0(_DWORD *this, int a2, _DWORD *a3, unsigned int a4, _DWORD *a5)
{
  _DWORD *result; // eax
  int v6; // eax
  _DWORD v7[4]; // [esp+0h] [ebp-240h] BYREF
  int v8; // [esp+10h] [ebp-230h]
  char *v9; // [esp+14h] [ebp-22Ch]
  int v10; // [esp+18h] [ebp-228h]
  int v11; // [esp+1Ch] [ebp-224h]
  unsigned int v12; // [esp+20h] [ebp-220h]
  int v13; // [esp+24h] [ebp-21Ch]
  int v14; // [esp+28h] [ebp-218h]
  int v15; // [esp+2Ch] [ebp-214h]
  int v16; // [esp+30h] [ebp-210h]
  int v17; // [esp+34h] [ebp-20Ch]
  _DWORD *v18; // [esp+38h] [ebp-208h]
  _DWORD *v19; // [esp+3Ch] [ebp-204h]
  _DWORD *v20; // [esp+40h] [ebp-200h]
  _DWORD *i; // [esp+44h] [ebp-1FCh]
  _DWORD *v22; // [esp+4Ch] [ebp-1F4h]
  int v23; // [esp+88h] [ebp-1B8h]
  int v24; // [esp+8Ch] [ebp-1B4h]
  int v25; // [esp+90h] [ebp-1B0h]
  int v26; // [esp+94h] [ebp-1ACh]
  char v27; // [esp+9Bh] [ebp-1A5h]
  int v28; // [esp+9Ch] [ebp-1A4h]
  int v29; // [esp+C0h] [ebp-180h]
  int v30; // [esp+C8h] [ebp-178h]
  char v31; // [esp+CDh] [ebp-173h]
  char v32; // [esp+CEh] [ebp-172h]
  char v33; // [esp+CFh] [ebp-171h]
  int v34; // [esp+D0h] [ebp-170h]
  _DWORD *v35; // [esp+D4h] [ebp-16Ch]
  _DWORD *j; // [esp+D8h] [ebp-168h]
  _DWORD *v37; // [esp+E0h] [ebp-160h]
  int v38; // [esp+110h] [ebp-130h]
  int v39; // [esp+148h] [ebp-F8h]
  void *v40; // [esp+14Ch] [ebp-F4h]
  int v41; // [esp+150h] [ebp-F0h]
  int v42; // [esp+154h] [ebp-ECh]
  int v43; // [esp+158h] [ebp-E8h]
  int v44; // [esp+15Ch] [ebp-E4h]
  char v45; // [esp+162h] [ebp-DEh]
  char v46; // [esp+163h] [ebp-DDh]
  int v47; // [esp+170h] [ebp-D0h]
  char *v48; // [esp+174h] [ebp-CCh]
  int v49; // [esp+178h] [ebp-C8h]
  _DWORD *v50; // [esp+17Ch] [ebp-C4h]
  char v51; // [esp+183h] [ebp-BDh]
  char *v52; // [esp+184h] [ebp-BCh]
  _DWORD *v53; // [esp+188h] [ebp-B8h]
  int v54; // [esp+190h] [ebp-B0h]
  char v55; // [esp+195h] [ebp-ABh]
  char v56; // [esp+196h] [ebp-AAh]
  char v57; // [esp+197h] [ebp-A9h]
  char *v58; // [esp+198h] [ebp-A8h]
  char v59; // [esp+19Fh] [ebp-A1h]
  char *v60; // [esp+1A0h] [ebp-A0h]
  char v61; // [esp+1A5h] [ebp-9Bh]
  char v62; // [esp+1A6h] [ebp-9Ah]
  char v63; // [esp+1A7h] [ebp-99h]
  int v64; // [esp+1A8h] [ebp-98h]
  void *v65; // [esp+1ACh] [ebp-94h]
  _DWORD *v66; // [esp+1B0h] [ebp-90h]
  int v67; // [esp+1B4h] [ebp-8Ch]
  char v68; // [esp+1BBh] [ebp-85h]
  void *v69; // [esp+1BCh] [ebp-84h]
  int v70; // [esp+1C0h] [ebp-80h]
  _DWORD *v71; // [esp+1C8h] [ebp-78h]
  char v72; // [esp+1CDh] [ebp-73h]
  char v73; // [esp+1CEh] [ebp-72h]
  char v74; // [esp+1CFh] [ebp-71h]
  int v75; // [esp+1D0h] [ebp-70h]
  int v76; // [esp+218h] [ebp-28h]
  int v77; // [esp+21Ch] [ebp-24h]
  void *v78; // [esp+220h] [ebp-20h]
  char *v79; // [esp+224h] [ebp-1Ch]
  unsigned int v80; // [esp+228h] [ebp-18h]
  _DWORD v81[2]; // [esp+22Ch] [ebp-14h] BYREF
  int v82; // [esp+23Ch] [ebp-4h]
  unsigned int v83; // [esp+250h] [ebp+10h]

  v81[1] = v7;
  v18 = this;
  v81[0] = *a5;
  if ( *(this + 1) )
    v17 = (v18[3] - v18[1]) >> 2;
  else
    v17 = 0;
  result = (_DWORD *)v17;
  v80 = v17;
  if ( a4 )
  {
    v76 = 0x3FFFFFFF;
    v16 = 0x3FFFFFFF;
    if ( v18[1] )
      v15 = (v18[2] - v18[1]) >> 2;
    else
      v15 = 0;
    if ( v16 - v15 >= a4 )
    {
      if ( v18[1] )
        v14 = (v18[2] - v18[1]) >> 2;
      else
        v14 = 0;
      if ( v80 >= a4 + v14 )
      {
        if ( (v18[2] - (int)a3) >> 2 >= a4 )
        {
          v77 = v18[2];
          v23 = v18[2];
          v24 = v23;
          v25 = v77;
          v26 = v77 - 4 * a4;
          v33 = 0;
          v32 = v31;
          v30 = v77;
          v29 = v26;
          v27 = 0;
          v28 = v23;
          v6 = sub_5BF010(v26, v77, v23);
          v18[2] = v6;
          sub_5C61D0(a3, v77 - 4 * a4, v77);
          v19 = &a3[a4];
          result = a3;
          v20 = a3;
          v22 = v19;
          for ( i = a3; i != v22; ++i )
          {
            *i = v81[0];
            result = i + 1;
          }
        }
        else
        {
          v38 = v18[2];
          sub_5BEFC0(a3, v38, &a3[a4], v18);
          v82 = 2;
          sub_5C5FD0(v18[2], a4 - ((v18[2] - (int)a3) >> 2), v81);
          v82 = -1;
          v18[2] += 4 * a4;
          v34 = v18[2] - 4 * a4;
          v35 = a3;
          v37 = (_DWORD *)v34;
          for ( j = a3; ; ++j )
          {
            result = j;
            if ( j == v37 )
              break;
            *j = v81[0];
          }
        }
      }
      else
      {
        v75 = 0x3FFFFFFF;
        v13 = 0x3FFFFFFF;
        if ( 0x3FFFFFFF - (v80 >> 1) >= v80 )
          v12 = v80 + (v80 >> 1);
        else
          v12 = 0;
        v80 = v12;
        if ( v18[1] )
          v11 = (v18[2] - v18[1]) >> 2;
        else
          v11 = 0;
        if ( v80 < a4 + v11 )
        {
          if ( v18[1] )
            v10 = (v18[2] - v18[1]) >> 2;
          else
            v10 = 0;
          v80 = a4 + v10;
        }
        v78 = (void *)sub_5C6310(v80);
        v79 = (char *)v78;
        v82 = 0;
        v64 = v18[1];
        v65 = v78;
        v66 = a3;
        v67 = v64;
        v74 = 0;
        v73 = v72;
        v71 = a3;
        v70 = v64;
        v68 = 0;
        v69 = v78;
        v9 = (char *)sub_5BF010(v64, a3, v78);
        v79 = v9;
        v58 = v9;
        v63 = 0;
        v62 = v61;
        v59 = 0;
        v60 = v9;
        sub_5C0910(v9, a4, v81);
        v79 += 4 * a4;
        v47 = v18[2];
        v48 = v79;
        v49 = v47;
        v50 = a3;
        v57 = 0;
        v56 = v55;
        v54 = v47;
        v53 = a3;
        v51 = 0;
        v52 = v79;
        sub_5BF010(a3, v47, v79);
        v82 = -1;
        if ( v18[1] )
          v8 = (v18[2] - v18[1]) >> 2;
        else
          v8 = 0;
        v83 = v8 + a4;
        if ( v18[1] )
        {
          v41 = v18[2];
          v42 = v18[1];
          v43 = v41;
          v44 = v42;
          v46 = v45;
          v39 = (v18[3] - v18[1]) >> 2;
          v40 = (void *)v18[1];
          operator delete(v40);
        }
        v18[3] = (char *)v78 + 4 * v80;
        v18[2] = (char *)v78 + 4 * v83;
        result = v18;
        v18[1] = v78;
      }
    }
    else
    {
      return (_DWORD *)sub_5BB8F0(v7[0], v7[1]);
    }
  }
  return result;
}


//======================================================================
// sub_5BB750
// entry 005bb750  size 116  status ok
//======================================================================

void __noreturn sub_5BB750()
{
  _BYTE v0[28]; // [esp+4h] [ebp-50h] BYREF
  _DWORD pExceptionObject[3]; // [esp+20h] [ebp-34h] BYREF
  _BYTE v2[28]; // [esp+2Ch] [ebp-28h] BYREF
  int v3; // [esp+50h] [ebp-4h]

  std::string::string(v0, "vector<T> too long");
  v3 = 0;
  std::exception::exception((std::exception *)pExceptionObject);
  LOBYTE(v3) = 1;
  pExceptionObject[0] = &std::logic_error::`vftable';
  std::string::string(v2, v0);
  LOBYTE(v3) = 0;
  pExceptionObject[0] = &std::length_error::`vftable';
  CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}


//======================================================================
// sub_5BB7F0
// entry 005bb7f0  size 23  status ok
//======================================================================

int __thiscall sub_5BB7F0(char *this)
{
  return std::string::c_str(this + 12, this);
}


//======================================================================
// sub_5BB810
// entry 005bb810  size 66  status ok
//======================================================================

std::exception *__thiscall sub_5BB810(std::exception *this, char a2)
{
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::~string((char *)this + 12);
  std::exception::~exception(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}


//======================================================================
// sub_5BB860
// entry 005bb860  size 50  status ok
//======================================================================

void __thiscall sub_5BB860(std::exception *this)
{
  *(_DWORD *)this = &std::length_error::`vftable';
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::~string((char *)this + 12);
  std::exception::~exception(this);
}


//======================================================================
// sub_5BB8A0
// entry 005bb8a0  size 75  status ok
//======================================================================

std::exception *__thiscall sub_5BB8A0(std::exception *this, char a2)
{
  *(_DWORD *)this = &std::length_error::`vftable';
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::~string((char *)this + 12);
  std::exception::~exception(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}


//======================================================================
// sub_5BB8F0
// entry 005bb8f0  size 116  status ok
//======================================================================

void __noreturn sub_5BB8F0()
{
  _BYTE v0[28]; // [esp+4h] [ebp-50h] BYREF
  _DWORD pExceptionObject[3]; // [esp+20h] [ebp-34h] BYREF
  _BYTE v2[28]; // [esp+2Ch] [ebp-28h] BYREF
  int v3; // [esp+50h] [ebp-4h]

  std::string::string(v0, "vector<T> too long");
  v3 = 0;
  std::exception::exception((std::exception *)pExceptionObject);
  LOBYTE(v3) = 1;
  pExceptionObject[0] = &std::logic_error::`vftable';
  std::string::string(v2, v0);
  LOBYTE(v3) = 0;
  pExceptionObject[0] = &std::length_error::`vftable';
  CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}


//======================================================================
// sub_5BB990
// entry 005bb990  size 122  status ok
//======================================================================

std::exception *__thiscall sub_5BB990(std::exception *this, const struct exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::string((char *)this + 12, (char *)a2 + 12);
  *(_DWORD *)this = &std::length_error::`vftable';
  return this;
}


//======================================================================
// sub_5BBA10
// entry 005bba10  size 113  status ok
//======================================================================

std::exception *__thiscall sub_5BBA10(std::exception *this, const struct exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::string((char *)this + 12, (char *)a2 + 12);
  return this;
}


//======================================================================
// sub_5BBA90
// entry 005bba90  size 98  status ok
//======================================================================

_DWORD *__thiscall sub_5BBA90(_DWORD *this, int a2)
{
  if ( !*this )
    invalid_parameter_noinfo();
  if ( (unsigned int)(*(this + 1) + 16 * a2) > *(_DWORD *)(*this + 8)
    || (unsigned int)(*(this + 1) + 16 * a2) < *(_DWORD *)(*this + 4) )
  {
    invalid_parameter_noinfo();
  }
  *(this + 1) += 16 * a2;
  return this;
}


//======================================================================
// sub_5BBB00
// entry 005bbb00  size 199  status ok
//======================================================================

int __cdecl sub_5BBB00(int a1, int a2, int a3)
{
  int v4; // [esp+Ch] [ebp-140h]
  int i; // [esp+10h] [ebp-13Ch]

  v4 = a3;
  for ( i = a1; i != a2; i += 16 )
  {
    sub_5BC040(i);
    v4 += 16;
  }
  return a3 + 16 * ((a2 - a1) >> 4);
}


//======================================================================
// sub_5BBBD0
// entry 005bbbd0  size 94  status ok
//======================================================================

void *__cdecl sub_5BBBD0(unsigned int a1)
{
  const char *v2; // [esp+0h] [ebp-10h] BYREF
  _DWORD pExceptionObject[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 0x10 )
    {
      v2 = 0;
      std::exception::exception((std::exception *)pExceptionObject, &v2);
      pExceptionObject[0] = &std::bad_alloc::`vftable';
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    a1 = 0;
  }
  return operator new(16 * a1);
}


//======================================================================
// sub_5BBC50
// entry 005bbc50  size 54  status ok
//======================================================================

std::exception *__thiscall sub_5BBC50(std::exception *this, char a2)
{
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  std::exception::~exception(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}


//======================================================================
// sub_5BBCC0
// entry 005bbcc0  size 32  status ok
//======================================================================

void *__thiscall sub_5BBCC0(void *this)
{
  char v3; // [esp+5Fh] [ebp-9h] BYREF
  char *v4; // [esp+60h] [ebp-8h]

  v4 = &v3;
  sub_5BBD80(0);
  return this;
}


//======================================================================
// sub_5BBCE0
// entry 005bbce0  size 152  status ok
//======================================================================

char __thiscall sub_5BBCE0(_DWORD *this, unsigned int a2)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0xFFFFFFF )
    sub_5BB750();
  *(this + 1) = sub_5BBBD0(a2);
  *(this + 2) = *(this + 1);
  *(this + 3) = *(this + 1) + 16 * a2;
  return 1;
}


//======================================================================
// sub_5BBD80
// entry 005bbd80  size 152  status ok
//======================================================================

char __thiscall sub_5BBD80(_DWORD *this, unsigned int a2)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x3FFFFFFF )
    sub_5BB8F0();
  *(this + 1) = sub_5C6310(a2);
  *(this + 2) = *(this + 1);
  *(this + 3) = *(this + 1) + 4 * a2;
  return 1;
}


//======================================================================
// sub_5BBE20
// entry 005bbe20  size 118  status ok
//======================================================================

int __cdecl sub_5BBE20(int a1, int a2, int a3)
{
  return sub_5BC620(a1, a2, a3);
}


//======================================================================
// sub_5BBEA0
// entry 005bbea0  size 193  status ok
//======================================================================

int __cdecl sub_5BBEA0(int a1, int a2, int a3)
{
  int v4; // [esp+10h] [ebp-130h]
  int i; // [esp+14h] [ebp-12Ch]

  v4 = a3;
  for ( i = a2; a1 != i; sub_5BC040(i) )
  {
    i -= 16;
    v4 -= 16;
  }
  return a3 - 16 * ((a2 - a1) >> 4);
}


//======================================================================
// sub_5BBF70
// entry 005bbf70  size 201  status ok
//======================================================================

char *__cdecl sub_5BBF70(char *a1, int a2, int a3)
{
  char *result; // eax
  int v4; // [esp+0h] [ebp-A0h] BYREF
  void *v5; // [esp+8Ch] [ebp-14h]
  int *v6; // [esp+90h] [ebp-10h]
  int v7; // [esp+9Ch] [ebp-4h]

  v6 = &v4;
  result = a1;
  v5 = a1;
  v7 = 0;
  while ( a2 )
  {
    result = (char *)sub_5BC520(a1, a3);
    --a2;
    a1 += 16;
  }
  return result;
}


//======================================================================
// sub_5BC040
// entry 005bc040  size 928  status ok
//======================================================================

int __thiscall sub_5BC040(int this, int a2)
{
  char v2; // al
  int v4; // [esp+4h] [ebp-164h]
  unsigned int v5; // [esp+8h] [ebp-160h]
  unsigned int v6; // [esp+Ch] [ebp-15Ch]
  int v7; // [esp+10h] [ebp-158h]
  unsigned int v8; // [esp+14h] [ebp-154h]
  unsigned int v9; // [esp+18h] [ebp-150h]
  int v10; // [esp+1Ch] [ebp-14Ch]
  int v12; // [esp+160h] [ebp-8h]

  if ( this != a2 )
  {
    if ( *(_DWORD *)(a2 + 4) )
      v10 = (*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 4)) >> 2;
    else
      v10 = 0;
    if ( v10 )
    {
      if ( *(_DWORD *)(a2 + 4) )
        v9 = (*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 4)) >> 2;
      else
        v9 = 0;
      if ( *(_DWORD *)(this + 4) )
        v8 = (*(_DWORD *)(this + 8) - *(_DWORD *)(this + 4)) >> 2;
      else
        v8 = 0;
      if ( v9 > v8 )
      {
        if ( *(_DWORD *)(a2 + 4) )
          v6 = (*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 4)) >> 2;
        else
          v6 = 0;
        if ( *(_DWORD *)(this + 4) )
          v5 = (*(_DWORD *)(this + 12) - *(_DWORD *)(this + 4)) >> 2;
        else
          v5 = 0;
        if ( v6 > v5 )
        {
          if ( *(_DWORD *)(this + 4) )
            operator delete(*(void **)(this + 4));
          if ( *(_DWORD *)(a2 + 4) )
            v2 = sub_5BBD80((_DWORD *)this, (*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 4)) >> 2);
          else
            v2 = sub_5BBD80((_DWORD *)this, 0);
          if ( v2 )
            *(_DWORD *)(this + 8) = sub_5BF010(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), *(_DWORD *)(this + 4));
        }
        else
        {
          if ( *(_DWORD *)(this + 4) )
            v4 = (*(_DWORD *)(this + 8) - *(_DWORD *)(this + 4)) >> 2;
          else
            v4 = 0;
          v12 = *(_DWORD *)(a2 + 4) + 4 * v4;
          sub_5C0980(*(_DWORD *)(a2 + 4), v12, *(_DWORD *)(this + 4));
          *(_DWORD *)(this + 8) = sub_5BF010(v12, *(_DWORD *)(a2 + 8), *(_DWORD *)(this + 8));
        }
      }
      else
      {
        sub_5C0980(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), *(_DWORD *)(this + 4));
        if ( *(_DWORD *)(a2 + 4) )
          v7 = (*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 4)) >> 2;
        else
          v7 = 0;
        *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + 4 * v7;
      }
    }
    else
    {
      sub_5BC3E0(this);
    }
  }
  return this;
}


//======================================================================
// sub_5BC3E0
// entry 005bc3e0  size 165  status ok
//======================================================================

int __thiscall sub_5BC3E0(_DWORD *this)
{
  unsigned int v3; // [esp+38h] [ebp-20h]
  unsigned int v4; // [esp+3Ch] [ebp-1Ch]
  _BYTE v5[8]; // [esp+40h] [ebp-18h] BYREF
  _DWORD *v6; // [esp+48h] [ebp-10h]
  unsigned int v7; // [esp+4Ch] [ebp-Ch]
  _DWORD *v8; // [esp+50h] [ebp-8h]
  unsigned int v9; // [esp+54h] [ebp-4h]

  v4 = *(this + 2);
  v8 = 0;
  if ( !this || *(this + 1) > v4 || v4 > *(this + 2) )
    invalid_parameter_noinfo();
  v8 = this;
  v9 = v4;
  v3 = *(this + 1);
  v6 = 0;
  if ( !this || *(this + 1) > v3 || v3 > *(this + 2) )
    invalid_parameter_noinfo();
  v6 = this;
  v7 = v3;
  return sub_5BC490(v5, this, v3, v8, v9);
}


//======================================================================
// sub_5BC490
// entry 005bc490  size 142  status ok
//======================================================================

_DWORD *__thiscall sub_5BC490(_DWORD *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( a4 != a6 )
    *(this + 2) = sub_5C0980(a6, *(this + 2), a4);
  *a2 = a3;
  a2[1] = a4;
  return a2;
}


//======================================================================
// sub_5BC520
// entry 005bc520  size 153  status ok
//======================================================================

int __cdecl sub_5BC520(_DWORD *a1, int a2)
{
  int result; // eax
  char v3; // [esp+173h] [ebp-21h] BYREF
  char *v4; // [esp+174h] [ebp-20h]
  _DWORD *v5; // [esp+17Ch] [ebp-18h]
  _DWORD *v6; // [esp+184h] [ebp-10h]
  int v7; // [esp+190h] [ebp-4h]

  result = (int)a1;
  v6 = a1;
  v5 = a1;
  v7 = 0;
  if ( a1 )
  {
    v4 = &v3;
    sub_5BBD80(v5, 0);
    LOBYTE(v7) = 1;
    return sub_5BC040((int)v5, a2);
  }
  return result;
}


//======================================================================
// sub_5BC5C0
// entry 005bc5c0  size 5  status ok
//======================================================================

void sub_5BC5C0()
{
  ;
}


