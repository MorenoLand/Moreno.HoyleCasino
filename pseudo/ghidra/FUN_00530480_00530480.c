// FUN_00530480  00530480

void FUN_00530480(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *extraout_var;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = 0;
  uVar6 = 0xffffffe7;
  uVar2 = FUN_005fc360();
  switch(uVar2) {
  case 0:
    piVar4 = extraout_var;
    cVar1 = FUN_00637630();
    if ((cVar1 == '\0') || (iVar3 = FUN_00637810(0), iVar3 == 0)) {
      if (*(char *)(piVar4[8] + 0x19e) == '\0') {
        (**(code **)(**(int **)(piVar4[8] + 0x194) + 0x74))();
      }
      iVar3 = (**(code **)(**(int **)(piVar4[8] + 0x184) + 0x54))();
      uVar2 = (**(code **)(**(int **)(piVar4[8] + 0x184) + 0x4c))(iVar3 + -0x19);
      (**(code **)(**(int **)(piVar4[8] + 0x184) + 0x44))(uVar2);
      iVar3 = (**(code **)(**(int **)(piVar4[8] + 0x188) + 0x54))();
      uVar2 = (**(code **)(**(int **)(piVar4[8] + 0x188) + 0x4c))(iVar3 + -0x19);
      (**(code **)(**(int **)(piVar4[8] + 0x188) + 0x44))(uVar2);
      iVar3 = (**(code **)(**(int **)(piVar4[8] + 0x18c) + 0x54))();
      uVar2 = (**(code **)(**(int **)(piVar4[8] + 0x18c) + 0x4c))(iVar3 + -0x19);
      (**(code **)(**(int **)(piVar4[8] + 0x18c) + 0x44))(uVar2);
      iVar3 = (**(code **)(**(int **)(piVar4[8] + 400) + 0x54))();
      uVar2 = (**(code **)(**(int **)(piVar4[8] + 400) + 0x4c))(iVar3 + -0x19);
      (**(code **)(**(int **)(piVar4[8] + 400) + 0x44))(uVar2);
      iVar3 = (**(code **)(**(int **)(piVar4[8] + 0x194) + 0x54))();
      uVar2 = (**(code **)(**(int **)(piVar4[8] + 0x194) + 0x4c))(iVar3 + -0x19);
      (**(code **)(**(int **)(piVar4[8] + 0x194) + 0x44))(uVar2);
      (**(code **)(*piVar4 + 8))(5,0);
    }
    else {
      if (*(char *)(piVar4[8] + 0x19e) == '\0') {
        (**(code **)(**(int **)(piVar4[8] + 0x194) + 0x74))();
      }
      (**(code **)(*piVar4 + 8))(1,0);
    }
    break;
  case 1:
    piVar4 = extraout_var;
    iVar3 = (**(code **)(**(int **)(extraout_var[8] + 0x184) + 0x54))();
    uVar2 = (**(code **)(**(int **)(piVar4[8] + 0x184) + 0x4c))(iVar3 + -0x19);
    (**(code **)(**(int **)(piVar4[8] + 0x184) + 0x44))(uVar2);
    iVar3 = (**(code **)(**(int **)(piVar4[8] + 0x188) + 0x54))();
    uVar2 = (**(code **)(**(int **)(piVar4[8] + 0x188) + 0x4c))(iVar3 + -0x19);
    (**(code **)(**(int **)(piVar4[8] + 0x188) + 0x44))(uVar2);
    iVar3 = (**(code **)(**(int **)(piVar4[8] + 0x18c) + 0x54))();
    uVar2 = (**(code **)(**(int **)(piVar4[8] + 0x18c) + 0x4c))(iVar3 + -0x19);
    (**(code **)(**(int **)(piVar4[8] + 0x18c) + 0x44))(uVar2);
    iVar3 = (**(code **)(**(int **)(piVar4[8] + 400) + 0x54))();
    uVar2 = (**(code **)(**(int **)(piVar4[8] + 400) + 0x4c))(iVar3 + -0x19);
    (**(code **)(**(int **)(piVar4[8] + 400) + 0x44))(uVar2);
    iVar3 = (**(code **)(**(int **)(piVar4[8] + 0x194) + 0x54))();
    uVar2 = (**(code **)(**(int **)(piVar4[8] + 0x194) + 0x4c))(iVar3 + -0x19);
    (**(code **)(**(int **)(piVar4[8] + 0x194) + 0x44))(uVar2);
    (**(code **)(*piVar4 + 8))(2,0);
    break;
  case 2:
    (**(code **)(*extraout_var + 8))(3,0);
    break;
  case 3:
    (**(code **)(*extraout_var + 8))(4,0);
    break;
  case 4:
    (**(code **)(*extraout_var + 8))(5,0,uVar2,extraout_var,uVar5,uVar6);
    break;
  case 5:
    FUN_005f5df0(0);
  }
  return;
}

