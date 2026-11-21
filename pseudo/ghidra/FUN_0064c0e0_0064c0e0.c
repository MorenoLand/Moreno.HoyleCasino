// FUN_0064c0e0  0064c0e0

void FUN_0064c0e0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int *extraout_var;
  int *piVar3;
  
  FUN_005f5cc0();
  piVar3 = extraout_var;
  piVar1 = (int *)FUN_0063aac0(extraout_var,*(undefined4 *)(extraout_var[0x77] + 4));
  if (*piVar1 == 1) {
    uVar2 = (**(code **)(*DAT_0162ee84 + 0x234))((char)piVar3[0x78]);
    (**(code **)(*piVar3 + 200))(uVar2);
  }
  else {
    uVar2 = (**(code **)(*DAT_0162ee84 + 0x238))((char)piVar3[0x78]);
    (**(code **)(*piVar3 + 200))(uVar2);
  }
  FUN_006023d0(0,1,2,3);
  return;
}

