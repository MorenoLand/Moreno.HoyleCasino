// FUN_0065c230  0065c230

void __thiscall FUN_0065c230(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_006639d0(param_2);
  FUN_00663d10(param_2);
  iVar2 = (**(code **)(**(int **)(param_1 + 0x1bc) + 0xb8))();
  if (iVar2 == 0) {
    FUN_0065c820(2,0,&PTR_006b27f8,1);
  }
  else if (iVar1 <= *(char *)(param_1 + 0x1c2)) {
    if (*(char *)(param_1 + 0x1c2) != '\0') {
      *(char *)(param_1 + 0x1c2) = *(char *)(param_1 + 0x1c2) + -1;
    }
    uVar4 = 1;
    uVar3 = FUN_006639a0((int)*(char *)(param_1 + 0x1c2));
    FUN_0065c820(3,0,uVar3,uVar4);
  }
  return;
}

