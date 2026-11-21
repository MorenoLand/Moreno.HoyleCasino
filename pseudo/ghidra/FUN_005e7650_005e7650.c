// FUN_005e7650  005e7650

/* WARNING: Switch with 1 destination removed at 0x005e7725 */

void FUN_005e7650(int param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  char *local_1c;
  uint local_10;
  
  iVar1 = *(int *)(&DAT_00794994 + param_1 * 0xb8);
  if (iVar1 < 0) {
    strcpy(param_2,"---");
  }
  else if (iVar1 == 0xe) {
    if (param_1 == 4) {
      local_10 = (uint)(*(uint *)(&DAT_00794998 + param_1 * 0xb8) < 0x1e);
      sprintf(param_2,"Slots: %s",(&PTR_s_Slots_0075ec18)[local_10]);
    }
    else {
      strcpy(param_2,"Slots");
    }
  }
  else {
    piVar2 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(iVar1);
    if (piVar2 == (int *)0x0) {
      local_1c = "---";
    }
    else {
      local_1c = (char *)(**(code **)(*piVar2 + 8))();
    }
    strcpy(param_2,local_1c);
  }
  return;
}

