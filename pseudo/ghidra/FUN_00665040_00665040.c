// FUN_00665040  00665040

void __thiscall FUN_00665040(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (((param_2 != 0) && (param_2 != 1)) && (iVar3 = FUN_006651e0(param_2), iVar3 != 0)) {
    cVar1 = FUN_00664d20(param_2);
    iVar3 = FUN_00664d40(param_2);
    if (cVar1 < iVar3) {
      uVar2 = FUN_00664d40(param_2);
      *(undefined1 *)(param_1 + param_2 + 0x4d) = uVar2;
    }
    cVar1 = FUN_00664d20(param_2);
    iVar3 = FUN_00664dd0(param_2);
    if (iVar3 < cVar1) {
      uVar2 = FUN_00664dd0(param_2);
      *(undefined1 *)(param_1 + param_2 + 0x4d) = uVar2;
    }
    cVar1 = FUN_00664d00(param_2);
    iVar3 = FUN_00664ec0(param_2);
    if (cVar1 < iVar3) {
      uVar2 = FUN_00664ec0(param_2);
      *(undefined1 *)(param_1 + param_2 + 0x41) = uVar2;
    }
    cVar1 = FUN_00664d00(param_2);
    iVar3 = FUN_00664f50(param_2);
    if (iVar3 < cVar1) {
      uVar2 = FUN_00664f50(param_2);
      *(undefined1 *)(param_1 + param_2 + 0x41) = uVar2;
    }
  }
  return;
}

