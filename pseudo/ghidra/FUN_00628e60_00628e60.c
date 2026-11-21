// FUN_00628e60  00628e60

void __thiscall FUN_00628e60(int *param_1,int param_2,undefined1 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int local_8;
  
  if ((-1 < param_2) && (cVar1 = FUN_00629080(param_2), cVar1 == '\0')) {
    uVar2 = FUN_00629200(0);
    uVar2 = FUN_006291e0(uVar2);
    FUN_0062ff10(uVar2);
    return;
  }
  for (local_8 = 0; iVar3 = (**(code **)(*param_1 + 0xb8))(), local_8 < iVar3; local_8 = local_8 + 1
      ) {
    piVar4 = (int *)FUN_0060ca40(local_8);
    (**(code **)(*piVar4 + 8))(0);
  }
  if ((-1 < param_2) && (iVar3 = (**(code **)(*param_1 + 0xb8))(), param_2 < iVar3)) {
    piVar4 = (int *)FUN_0060ca40(param_2);
    (**(code **)(*piVar4 + 8))(1);
  }
  FUN_00615180(param_2,param_3);
  return;
}

