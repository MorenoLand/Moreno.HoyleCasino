// FUN_00522560  00522560

void __fastcall FUN_00522560(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int local_8;
  
  FUN_00522650(param_1);
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    cVar1 = FUN_00528090(local_8);
    if (cVar1 != '\0') {
      cVar1 = FUN_005da7b0();
      if (cVar1 != '\0') {
        cVar1 = FUN_005f54c0();
        if (cVar1 != '\0') {
          cVar1 = (**(code **)(*DAT_00793370 + 0x2c4))(local_8);
          if (cVar1 == '\0') {
            cVar1 = FUN_00528100(local_8);
            if (cVar1 != '\0') {
              iVar2 = FUN_00528a60();
              if (iVar2 != -1) {
                FUN_005226b0();
              }
            }
          }
        }
      }
    }
  }
  cVar1 = FUN_005da7b0();
  if ((cVar1 != '\0') && (DAT_0163068c == 0)) {
    (**(code **)(*DAT_00793370 + 0x2f0))();
  }
  return;
}

