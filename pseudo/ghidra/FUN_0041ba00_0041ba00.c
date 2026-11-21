// FUN_0041ba00  0041ba00

void __thiscall FUN_0041ba00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_c;
  
  iVar1 = FUN_00419980(4,0);
  local_c = 0;
  while( true ) {
    iVar2 = FUN_004194c0(param_2);
    if (iVar2 <= local_c) {
      iVar1 = FUN_005dcb00(param_2);
      *(undefined1 *)(iVar1 + 0x4a2) = 1;
      return;
    }
    iVar2 = FUN_00419530(param_2,local_c);
    if (iVar2 < 2) {
      FUN_005e9f20("GetNumCardsPlayerHasInHand(p, i) > 1","..\\Casino\\blackjackstate.cpp",0x547);
    }
    if (*(char *)(param_1 + 0x110 + param_2 * 0x118 + local_c) == -1) break;
    local_c = local_c + 1;
  }
  if ((iVar1 < 0x16) && (iVar2 = FUN_00419980(param_2,local_c), iVar2 <= iVar1)) {
    iVar2 = FUN_00419980(param_2,local_c);
    if (iVar1 == iVar2) {
      FUN_0041bba0(param_2,local_c,2,1,1);
      FUN_004191f0(param_2,local_c,2);
      iVar1 = FUN_005dcb00(param_2);
      *(undefined1 *)(iVar1 + 0x4b0) = 0;
      return;
    }
    FUN_0041bba0(param_2,local_c,0,1,1);
    FUN_004191f0(param_2,local_c,0);
    iVar1 = FUN_005dcb00(param_2);
    *(undefined1 *)(iVar1 + 0x4b0) = 1;
    return;
  }
  FUN_0041bba0(param_2,local_c,1,1,1);
  FUN_004191f0(param_2,local_c,1);
  iVar1 = FUN_005dcb00(param_2);
  *(undefined1 *)(iVar1 + 0x4b0) = 0;
  return;
}

