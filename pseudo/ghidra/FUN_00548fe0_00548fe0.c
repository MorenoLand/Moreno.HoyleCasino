// FUN_00548fe0  00548fe0

void __thiscall
FUN_00548fe0(int param_1,int param_2,undefined2 param_3,undefined1 param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00548f80(param_2);
  if ((iVar2 < 0) || (5 < iVar2)) {
    FUN_005e9f20("(0<=i) && (i<VB_MAX_CARDS_PER_HAND )","..\\Casino\\videoblackjackstate.cpp",0x142)
    ;
  }
  if ((-1 < iVar2) && (iVar2 < 6)) {
    iVar1 = param_1 + 0x28 + param_2 * 0xc;
    *(undefined2 *)(iVar1 + iVar2 * 2) = param_3;
    FUN_00544050(param_3,param_2,iVar2,param_4,CONCAT31((int3)((uint)iVar1 >> 8),param_5));
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  return;
}

