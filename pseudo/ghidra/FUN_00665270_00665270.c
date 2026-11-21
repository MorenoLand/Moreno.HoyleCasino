// FUN_00665270  00665270

void __thiscall FUN_00665270(int param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  int local_8;
  
  iVar2 = FUN_00664830(2);
  iVar3 = FUN_006651e0(2);
  switch(param_2) {
  case 1:
    local_18 = 1;
    break;
  case 2:
    local_18 = 0;
    break;
  case 3:
    local_18 = 1;
    break;
  case 4:
    local_18 = 1;
    break;
  case 5:
    local_18 = 2;
    break;
  case 6:
    local_18 = 3;
    break;
  case 7:
    local_18 = 1;
    break;
  case 8:
    local_18 = 2;
    break;
  case 9:
    local_18 = 1;
    break;
  case 10:
    local_18 = 1;
    break;
  case 0xb:
    local_18 = 1;
    break;
  case 0xc:
    local_18 = 1;
    break;
  case 0xd:
    local_18 = 2;
    break;
  case 0xe:
    local_18 = 2;
    break;
  default:
    local_18 = 0;
  }
  FUN_005eaf00(iVar3 + local_18);
  cVar1 = FUN_00664cb0();
  (**(code **)(**(int **)(param_1 + 0x5c + iVar2 * 4) + 0xb0))((int)cVar1);
  FUN_005eaf00(iVar3);
  (**(code **)(**(int **)(param_1 + 0x60 + iVar2 * 4) + 0xb0))(4);
  iVar2 = FUN_00664830(7);
  iVar3 = FUN_006647c0(7);
  for (local_8 = 0; local_8 < iVar3; local_8 = local_8 + 1) {
    if ((*(int *)(param_1 + 0x5c + (iVar2 + local_8) * 4) != 0) &&
       (iVar4 = FUN_005eb240(), local_8 <= iVar4)) {
      (**(code **)(**(int **)(param_1 + 0x5c + (iVar2 + local_8) * 4) + 0xb0))
                ((0xe < (int)param_2) - 1 & param_2);
    }
  }
  iVar2 = FUN_00664830(10);
  iVar3 = FUN_006647c0(10);
  for (local_8 = 0; local_8 < iVar3; local_8 = local_8 + 1) {
    if ((*(int *)(param_1 + 0x5c + (iVar2 + local_8) * 4) != 0) &&
       (iVar4 = FUN_005eb240(), local_8 <= iVar4)) {
      (**(code **)(**(int **)(param_1 + 0x5c + (iVar2 + local_8) * 4) + 0xb0))
                ((0xe < (int)param_2) - 1 & param_2);
    }
  }
  switch(param_2) {
  case 0xf:
    local_18 = 1;
    break;
  case 0x10:
    local_18 = 2;
    break;
  case 0x11:
    local_18 = 3;
    break;
  case 0x12:
    local_18 = 3;
    break;
  case 0x13:
    local_18 = 4;
    break;
  case 0x14:
    local_18 = 4;
    break;
  default:
    local_18 = 0;
  }
  iVar2 = FUN_00664830(3);
  iVar3 = FUN_006647c0(3);
  for (local_8 = 0; local_8 < iVar3; local_8 = local_8 + 1) {
    if ((*(int *)(param_1 + 0x5c + (iVar2 + local_8) * 4) != 0) &&
       (iVar4 = FUN_005eb240(), local_8 <= iVar4)) {
      (**(code **)(**(int **)(param_1 + 0x5c + (iVar2 + local_8) * 4) + 0xb0))(local_18);
    }
  }
  iVar2 = FUN_00664830(4);
  iVar3 = FUN_006647c0(4);
  for (local_8 = 0; local_8 < iVar3; local_8 = local_8 + 1) {
    if ((*(int *)(param_1 + 0x5c + (iVar2 + local_8) * 4) != 0) &&
       (iVar4 = FUN_005eb240(), local_8 <= iVar4)) {
      (**(code **)(**(int **)(param_1 + 0x5c + (iVar2 + local_8) * 4) + 0xb0))(local_18);
    }
  }
  if (param_3 == 0) {
    local_18 = 0;
  }
  else if (param_3 == 1) {
    local_18 = 1;
  }
  else if (param_3 == 2) {
    local_18 = 2;
  }
  else {
    FUN_005e9f20("false","..\\casinoShell\\face.cpp",0x347);
    local_18 = 0;
  }
  iVar2 = FUN_00664830(8);
  iVar3 = FUN_006647c0(8);
  for (local_8 = 0; local_8 < iVar3; local_8 = local_8 + 1) {
    if ((*(int *)(param_1 + 0x5c + (iVar2 + local_8) * 4) != 0) &&
       (iVar4 = FUN_005eb240(), local_8 <= iVar4)) {
      (**(code **)(**(int **)(param_1 + 0x5c + (iVar2 + local_8) * 4) + 0xb0))(local_18);
    }
  }
  iVar2 = FUN_00664830(9);
  iVar3 = FUN_006647c0(9);
  for (local_8 = 0; local_8 < iVar3; local_8 = local_8 + 1) {
    if ((*(int *)(param_1 + 0x5c + (iVar2 + local_8) * 4) != 0) &&
       (iVar4 = FUN_005eb240(), local_8 <= iVar4)) {
      (**(code **)(**(int **)(param_1 + 0x5c + (iVar2 + local_8) * 4) + 0xb0))(local_18);
    }
  }
  return;
}

