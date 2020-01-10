<?php

error_reporting(E_ALL);

/**
 * untitledModel - class.livre.php
 *
 * $Id$
 *
 * This file is part of untitledModel.
 *
 * Automatically generated on 21.12.2019, 00:12:01 with ArgoUML PHP module 
 * (last revised $Date: 2010-01-12 20:14:42 +0100 (Tue, 12 Jan 2010) $)
 *
 * @author firstname and lastname of author, <author@example.org>
 */

if (0 > version_compare(PHP_VERSION, '5')) {
    die('This file was generated for PHP 5');
}

/**
 * include Adherent
 *
 * @author firstname and lastname of author, <author@example.org>
 */
require_once('class.Adherent.php');

/**
 * include Emprunt
 *
 * @author firstname and lastname of author, <author@example.org>
 */
require_once('class.Emprunt.php');

/**
 * include volume
 *
 * @author firstname and lastname of author, <author@example.org>
 */
require_once('class.volume.php');

/* user defined includes */
// section 127-0-0-1--63c2fdde:16e1d69e291:-8000:00000000000009C3-includes begin
// section 127-0-0-1--63c2fdde:16e1d69e291:-8000:00000000000009C3-includes end

/* user defined constants */
// section 127-0-0-1--63c2fdde:16e1d69e291:-8000:00000000000009C3-constants begin
// section 127-0-0-1--63c2fdde:16e1d69e291:-8000:00000000000009C3-constants end

/**
 * Short description of class livre
 *
 * @access public
 * @author firstname and lastname of author, <author@example.org>
 */
class livre
    extends volume
{
    // --- ASSOCIATIONS ---
    // generateAssociationEnd :     // generateAssociationEnd : 

    // --- ATTRIBUTES ---

    /**
     * Short description of attribute diponible
     *
     * @access public
     * @var Boolean
     */
    public $diponible = null;

    // --- OPERATIONS ---

    /**
     * Short description of method empruntable
     *
     * @access public
     * @author firstname and lastname of author, <author@example.org>
     * @return mixed
     */
    public function empruntable()
    {
        // section 127-0-0-1--63c2fdde:16e1d69e291:-8000:00000000000009C7 begin
        // section 127-0-0-1--63c2fdde:16e1d69e291:-8000:00000000000009C7 end
    }

} /* end of class livre */

?>