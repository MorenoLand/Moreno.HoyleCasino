// FUN_00642c20  00642c20

undefined4 FUN_00642c20(short param_1,short param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  
  iVar1 = FUN_00641280(param_1);
  iVar2 = FUN_00641290(CONCAT22(extraout_var,param_1));
  iVar3 = FUN_00641280(CONCAT22(extraout_var_00,param_2));
  iVar4 = FUN_00641290(param_2);
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else if (param_1 == 0) {
    uVar5 = 1;
  }
  else if (iVar3 < iVar1) {
    uVar5 = 1;
  }
  else if (iVar1 < iVar3) {
    uVar5 = 0;
  }
  else if (iVar4 < iVar2) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

