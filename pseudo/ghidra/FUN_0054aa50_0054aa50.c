// FUN_0054aa50  0054aa50

uint __thiscall FUN_0054aa50(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar10;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  
  uVar7 = FUN_00548f80(param_2);
  if (uVar7 != 3) {
    return uVar7 & 0xffffff00;
  }
  uVar1 = *(undefined2 *)(param_1 + 0x28 + param_2 * 0xc);
  uVar2 = *(undefined2 *)(param_1 + 0x2a + param_2 * 0xc);
  uVar3 = *(undefined2 *)(param_1 + 0x2c + param_2 * 0xc);
  iVar8 = FUN_00641290(CONCAT22((short)((uint)(param_2 * 0xc) >> 0x10),uVar1));
  iVar9 = FUN_00641290(CONCAT22(extraout_var_04,uVar2));
  uVar10 = extraout_var;
  if (iVar8 == iVar9) {
    iVar8 = FUN_00641290(uVar2);
    iVar9 = FUN_00641290(CONCAT22(extraout_var_00,uVar3));
    uVar10 = extraout_var_01;
    if (iVar8 == iVar9) {
      bVar4 = true;
      goto LAB_0054aaf8;
    }
  }
  bVar4 = false;
LAB_0054aaf8:
  if (bVar4) {
    iVar8 = FUN_00641280(CONCAT22(uVar10,uVar1));
    uVar10 = extraout_var_05;
    if (((iVar8 == 6) ||
        (iVar8 = FUN_00641280(CONCAT22(extraout_var_05,uVar2)), uVar10 = extraout_var_06, iVar8 == 6
        )) || (iVar8 = FUN_00641280(uVar3), uVar10 = extraout_var_07, iVar8 == 6)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    iVar8 = FUN_00641280(CONCAT22(uVar10,uVar1));
    if (((iVar8 == 7) || (iVar8 = FUN_00641280(uVar2), iVar8 == 7)) ||
       (iVar8 = FUN_00641280(CONCAT22(extraout_var_02,uVar3)), iVar8 == 7)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    uVar7 = FUN_00641280(uVar1);
    if (((uVar7 == 8) || (uVar7 = FUN_00641280(CONCAT22(extraout_var_03,uVar2)), uVar7 == 8)) ||
       (uVar7 = FUN_00641280(CONCAT22(extraout_var_08,uVar3)), uVar7 == 8)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    uVar7 = uVar7 & 0xffffff00;
    if (((bVar4) && (bVar5)) && (uVar7 = 0, bVar6)) {
      uVar7 = 1;
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

