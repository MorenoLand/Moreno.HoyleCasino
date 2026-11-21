// FUN_005f8720  005f8720

void __fastcall FUN_005f8720(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar2 = FUN_0060c9a0();
    if (iVar2 <= local_8) break;
    piVar3 = (int *)FUN_0060ca40(local_8);
    iVar2 = FUN_00602810();
    if (iVar2 == 3) {
      (**(code **)(*piVar3 + 0xd8))(0);
    }
    iVar2 = FUN_00602810();
    if (iVar2 == 7) {
      (**(code **)(*piVar3 + 0xd8))(4);
    }
    local_8 = local_8 + 1;
  }
  if (param_1[0x69] != 0) {
    cVar1 = (**(code **)(*param_1 + 0xc))();
    if (cVar1 != '\0') {
      FUN_005f8720();
    }
  }
  return;
}

