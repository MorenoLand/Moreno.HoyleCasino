// FUN_00440200  00440200

void FUN_00440200(void)

{
  int iVar1;
  int local_8;
  
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    iVar1 = FUN_005fb810(local_8 + 0x14);
    if (iVar1 != 0) {
      FUN_005fb8f0(local_8 + 0x14,&PTR_006b27f8);
    }
  }
  return;
}

