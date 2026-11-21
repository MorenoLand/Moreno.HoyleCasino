// FUN_0044f840  0044f840

void __thiscall
FUN_0044f840(int param_1,int param_2,int param_3,undefined2 *param_4,undefined2 *param_5)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  undefined2 uVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  
  if ((param_2 < 0) || (iVar1 = param_1, 6 < param_2)) {
    FUN_005e9f20("index1 > -1 && index1 < 7","..\\Casino\\paigowai.cpp",0x172);
    iVar1 = extraout_ECX;
  }
  uVar3 = (undefined2)((uint)iVar1 >> 0x10);
  if ((param_3 < 0) || (6 < param_3)) {
    FUN_005e9f20("index2 > -1 && index2 < 7","..\\Casino\\paigowai.cpp",0x173);
    uVar3 = extraout_var;
  }
  iVar1 = FUN_0044f680(CONCAT22(uVar3,*(undefined2 *)(param_1 + 4 + param_2 * 2)));
  iVar2 = FUN_0044f680(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 4 + param_3 * 2)));
  if (iVar1 < iVar2) {
    *param_4 = *(undefined2 *)(param_1 + 4 + param_3 * 2);
    *param_5 = *(undefined2 *)(param_1 + 4 + param_2 * 2);
  }
  else {
    *param_4 = *(undefined2 *)(param_1 + 4 + param_2 * 2);
    *param_5 = *(undefined2 *)(param_1 + 4 + param_3 * 2);
  }
  return;
}

