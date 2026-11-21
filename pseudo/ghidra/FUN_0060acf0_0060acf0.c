// FUN_0060acf0  0060acf0

void __fastcall FUN_0060acf0(int param_1)

{
  void *pvVar1;
  char cVar2;
  int local_c;
  int local_8;
  
  if ((*(char *)(param_1 + 9) != '\0') && (*(char *)(param_1 + 8) != '\0')) {
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      if (*(int *)(&DAT_00796d28 + local_8 * 0x74) == 0) {
LAB_0060ad78:
        if ((&DAT_00796d3c)[local_8 * 0x74] != '\0') {
          if (*(int *)(&DAT_00796d28 + local_8 * 0x74) != 0) {
            FUN_0062d120();
            pvVar1 = *(void **)(&DAT_00796d28 + local_8 * 0x74);
            if (pvVar1 != (void *)0x0) {
              FUN_0062d120();
              operator_delete(pvVar1);
            }
            *(undefined4 *)(&DAT_00796d28 + local_8 * 0x74) = 0;
          }
          local_c = 0;
          while (*(int *)(&DAT_00796d44 + local_c * 4 + local_8 * 0x74) != -1) {
            local_c = local_c + 1;
          }
          if (local_c == 0) {
            FUN_005e9f20("false");
          }
          else {
            if ((*(int *)(&DAT_00796d40 + local_8 * 0x74) == -1) ||
               (local_c <= *(int *)(&DAT_00796d40 + local_8 * 0x74))) {
              FUN_0060ab30(local_8,1);
              *(undefined4 *)(&DAT_00796d40 + local_8 * 0x74) = 0xffffffff;
            }
            *(int *)(&DAT_00796d40 + local_8 * 0x74) = *(int *)(&DAT_00796d40 + local_8 * 0x74) + 1;
            if (local_c <= *(int *)(&DAT_00796d40 + local_8 * 0x74)) {
              return;
            }
            FUN_0062fde0(">>> playing medley %d segment (%d) %d (volume = %f)\n",
                         *(undefined4 *)(&DAT_00796d38 + local_8 * 0x74),
                         *(undefined4 *)(&DAT_00796d40 + local_8 * 0x74),
                         *(undefined4 *)
                          (&DAT_00796d44 +
                          *(int *)(&DAT_00796d40 + local_8 * 0x74) * 4 + local_8 * 0x74),
                         (double)*(float *)(&DAT_00796d94 + local_8 * 0x74));
            FUN_0060b0b0(local_8,1,*(undefined4 *)(&DAT_00796d94 + local_8 * 0x74),
                         *(undefined4 *)(&DAT_00796d98 + local_8 * 0x74));
          }
        }
      }
      else {
        FUN_0062d470();
        cVar2 = FUN_0060a870();
        if ((cVar2 == '\0') && (cVar2 = FUN_0060a540(), cVar2 == '\0')) goto LAB_0060ad78;
      }
    }
  }
  return;
}

