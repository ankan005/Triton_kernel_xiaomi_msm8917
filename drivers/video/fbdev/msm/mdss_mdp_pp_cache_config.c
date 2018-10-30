#ifdef CONFIG_FB_MSM_MDSS_KCAL_CTRL
			memcpy(&v17_usr_config, config->cfg_payload, sizeof(v17_usr_config));
                        ret = 0;
#else
#endif

#ifdef CONFIG_FB_MSM_MDSS_KCAL_CTRL
		pr_err("%s Failed to copy v1_7 PA - copying in kernel \n",__func__);
                memcpy(&pa_usr_config, config->cfg_payload, sizeof(pa_usr_config));
                ret = 0;
#else
#endif
