// FUN_00426e80  00426e80

undefined4 __fastcall FUN_00426e80(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00462ba0(param_1 + 0x94,5,0);
  if ((iVar1 == 1) && (iVar1 = FUN_004630c0(param_1 + 0x94,1,5), iVar1 < 0xd)) {
    return 0;
  }
  return 1;
}

