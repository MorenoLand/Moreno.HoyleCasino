// FUN_00624930  00624930

void __thiscall
FUN_00624930(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = abs(param_4 - param_3);
  iVar2 = abs(param_6 - param_5);
  iVar5 = param_4 - param_3;
  bVar6 = param_4 != param_3;
  iVar4 = param_6 - param_5;
  bVar7 = param_6 != param_5;
  local_20 = iVar2 * 2 - iVar1;
  for (local_1c = 0; local_1c <= iVar1; local_1c = local_1c + 1) {
    iVar3 = FUN_006238d0(param_7);
    *(undefined4 *)
     (param_8 * *(int *)(param_2 + 0x414) + *(int *)(param_2 + 0x408) +
     param_3 * *(int *)(param_2 + 0x418)) =
         *(undefined4 *)(iVar3 + param_5 * *(int *)(param_1 + 0x18));
    for (; -1 < local_20; local_20 = local_20 + iVar1 * -2) {
      param_5 = (short)((ushort)(bVar7 && -1 < iVar4) * 2 + -1) + param_5;
    }
    param_3 = (short)((ushort)(bVar6 && -1 < iVar5) * 2 + -1) + param_3;
    local_20 = local_20 + iVar2 * 2;
  }
  return;
}

