// FUN_00563c20  00563c20

void __fastcall FUN_00563c20(int param_1)

{
  bool bVar1;
  char cVar2;
  int local_c;
  
  bVar1 = false;
  cVar2 = FUN_00568790();
  if ((cVar2 == '\0') || (*(char *)(param_1 + 0x90c) == '\0')) {
    FUN_00563ad0();
  }
  else {
    for (local_c = 0; local_c < 0x31; local_c = local_c + 1) {
      if (*(int *)(param_1 + 0x848 + local_c * 4) != 0) {
        *(int *)(param_1 + 0x844) = local_c;
        bVar1 = true;
      }
    }
    if (!bVar1) {
      *(undefined4 *)(param_1 + 0x844) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x844) == -1) {
      FUN_00563900(*(undefined4 *)(param_1 + 0x844));
    }
    else {
      cVar2 = FUN_0056b950(*(undefined4 *)(param_1 + 0x844),1);
      if (cVar2 == '\0') {
        FUN_00563ad0();
      }
      else {
        FUN_00563900(*(undefined4 *)(param_1 + 0x844));
      }
    }
  }
  return;
}

