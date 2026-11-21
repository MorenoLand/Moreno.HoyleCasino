// FUN_00541790  00541790

undefined4 __fastcall FUN_00541790(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00462ba0(param_1 + 0xe0,3,0);
  if ((iVar1 == 1) && (iVar1 = FUN_004630c0(param_1 + 0xe0,0,3), iVar1 < 0xc)) {
    return 0;
  }
  return 1;
}

