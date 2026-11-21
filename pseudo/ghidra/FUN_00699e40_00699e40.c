// FUN_00699e40  00699e40

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_00699e40(int param_1,int *param_2,int param_3,int param_4,code *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int aiStack_48 [3];
  undefined1 *local_2c;
  int local_28;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;
  int local_8;
  
  piVar1 = (int *)*param_2;
  iVar2 = *(int *)param_2[4];
  iVar3 = piVar1[2];
  iVar5 = (piVar1[1] - *piVar1) / iVar3;
  aiStack_48[2] = 0x699e8a;
  iVar4 = param_4 * -4;
  puVar8 = &stack0xffffffc4 + iVar4;
  iVar9 = 0;
  if (0 < param_4) {
    do {
      aiStack_48[2 - param_4] = ((iVar5 + -1 + iVar2) / iVar2) * 4;
      aiStack_48[1 - param_4] = param_1;
      aiStack_48[-param_4] = 0x699eaf;
      uVar6 = FUN_00690e40();
      *(undefined4 *)(&stack0xffffffc4 + iVar9 * 4 + iVar4) = uVar6;
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_4);
  }
  local_8 = 0;
  if (0 < param_2[2]) {
    do {
      local_2c = &stack0xffffffc4 + iVar4;
      iVar9 = 0;
      local_10 = 0;
      if (0 < iVar5) {
        local_1c = 0;
        do {
          if ((local_8 == 0) && (iVar10 = 0, 0 < param_4)) {
            do {
              *(int *)(puVar8 + -4) = param_1 + 4;
              *(int *)(puVar8 + -8) = param_2[4];
              *(undefined4 *)(puVar8 + -0xc) = 0x699f0d;
              iVar9 = FUN_00695220();
              if (iVar9 == -1) {
                return 0;
              }
              *(undefined4 *)
               (local_1c + *(int *)(&stack0xffffffc4 + iVar10 * 4 + iVar4 + -0x3c + 0x3c)) =
                   *(undefined4 *)(param_2[7] + iVar9 * 4);
              if (*(int *)(local_1c + *(int *)(&stack0xffffffc4 + iVar10 * 4 + iVar4 + -0x3c + 0x3c)
                          ) == 0) {
                return 0;
              }
              iVar10 = iVar10 + 1;
              iVar9 = local_10;
            } while (iVar10 < param_4);
          }
          local_c = 0;
          if (0 < iVar2) {
            local_18 = iVar9 * iVar3;
            do {
              piVar11 = (int *)(&stack0xffffffc4 + iVar4);
              if (iVar5 <= iVar9) break;
              local_28 = 0;
              if (0 < param_4) {
                do {
                  iVar9 = *piVar1;
                  iVar10 = *(int *)(*(int *)(local_1c + *piVar11) + local_c * 4);
                  if (((piVar1[iVar10 + 5] & 1 << ((byte)local_8 & 0x1f)) != 0) &&
                     (iVar10 = *(int *)(*(int *)(param_2[5] + iVar10 * 4) + local_8 * 4),
                     iVar10 != 0)) {
                    *(int *)(puVar8 + -4) = iVar3;
                    *(int *)(puVar8 + -8) = param_1 + 4;
                    *(int *)(puVar8 + -0xc) =
                         *(int *)((param_3 - (int)local_2c) + (int)piVar11) + (iVar9 + local_18) * 4
                    ;
                    *(int *)(puVar8 + -0x10) = iVar10;
                    puVar7 = puVar8 + -0x14;
                    *(undefined4 *)(puVar8 + -0x14) = 0x699fd4;
                    iVar9 = (*param_5)();
                    puVar8 = puVar7 + 0x10;
                    if (iVar9 == -1) {
                      return 0;
                    }
                  }
                  local_28 = local_28 + 1;
                  piVar11 = piVar11 + 1;
                  iVar9 = local_10;
                } while (local_28 < param_4);
              }
              local_18 = local_18 + iVar3;
              local_c = local_c + 1;
              iVar9 = iVar9 + 1;
              local_10 = iVar9;
            } while (local_c < iVar2);
          }
          local_1c = local_1c + 4;
        } while (iVar9 < iVar5);
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_2[2]);
  }
  return 0;
}

