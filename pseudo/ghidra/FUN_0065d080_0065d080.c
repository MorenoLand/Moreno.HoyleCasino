// FUN_0065d080  0065d080

void __fastcall FUN_0065d080(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar2 = FUN_00663c50();
    if (iVar2 <= local_8) break;
    uVar3 = FUN_006639a0(local_8);
    cVar1 = FUN_00663bb0(uVar3);
    if (cVar1 == '\0') {
      uVar3 = FUN_006639a0(local_8);
      FUN_0065c230(uVar3);
      local_8 = local_8 + -1;
    }
    local_8 = local_8 + 1;
  }
  iVar2 = (**(code **)(*param_1 + 0xb8))();
  if (iVar2 == 0) {
    FUN_0065c820(2,0,&PTR_006b27f8,1);
  }
  return;
}

