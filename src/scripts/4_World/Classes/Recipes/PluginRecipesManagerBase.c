modded class PluginRecipesManagerBase
{
    override void RegisterRecipies()
    {
        super.RegisterRecipies();
        RegisterRecipe(new CraftSyringeFill);
        RegisterRecipe(new CraftSyringeClear);
    }
};