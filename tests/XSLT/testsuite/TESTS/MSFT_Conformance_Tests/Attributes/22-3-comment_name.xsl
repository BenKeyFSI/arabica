<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
<xsl:output method="xml" omit-xml-declaration="yes"/>
<xsl:template match="/">
BEFORE<xsl:comment>invalid comment</xsl:comment>AFTER
</xsl:template>

</xsl:stylesheet>